#pragma once
#include"ui_mainwindow.h"
#include"family.h"
#include<QDebug>
#include<QString>
#include<fstream>
#include<QFile>
#include<QDataStream>

using namespace std;

int total_xueli=0;
int total_age=0;

family::family()
{
    this->ancestor = NULL;
}

family::family(person* root)
{
    this->ancestor = root;
    this->ancestor->leftchild = NULL;
    this->ancestor->rightsibling = NULL;
}

void family::Insert(person* root,string nname,int relation,person* p)
{
    person* this_per = new person;
    this_per->leftchild = NULL;
    this_per->rightsibling = NULL;
    person* add_per = new person;
    add_per->leftchild = NULL;
    add_per->rightsibling = NULL;
    this_per = Search(root,nname);
    if(this_per)
    {
        add_per = p;
    }
    else
    {
        ui->edit10->setText("No Such Person!");
    }
    if (relation == 0)
    {
        this_per->leftchild = add_per;
        add_per->parent = this_per;
        add_per->leftchild = NULL;
        add_per->rightsibling = NULL;
    }
    else
    {
        this_per->rightsibling = add_per;
        add_per->parent = this_per;
        add_per->leftchild = NULL;
        add_per->rightsibling = NULL;
    }
}

void family::Input(person* p)
{
    p->name = ui->InputName->text().toStdString();
    p->birth_place = ui->InputBPlace->text().toStdString();
    p->born_date = ui->InputBDate->text().toInt();
    p->dead_date = ui->InputDDate->text().toInt();
    p->gender = ui->InputGender->text().toInt();
    p->height = ui->InputHeight->text().toInt();
    p->job = ui->InputJob->text().toStdString();
    p->xueli = ui->InputXueli->text().toInt();
    p->born_year = ancestor->born_date/1000;
    p->dead_year = ancestor->dead_date/1000;
    if (p->dead_date == 99999999)
        {
            p->age = 2020 - p->born_year;
        }
        else
        {
            p->age = p->dead_year - p->born_year;
        }
}

person* family::Search(person* root, string name)
{
    if (root != NULL)
        {
            person* temp;
            if (root->name == name)
            {
                return root;
            }
            else
            {
                temp = Search(root->leftchild, name);
                if (temp)
                {
                    return temp;
                }
                temp = Search(root->rightsibling, name);
                if (temp)
                {
                    return temp;
                }
                return NULL;
            }
        }
        ui->label10->setText("Search Fail!");
        return NULL;
}

bool family::Delete(person* root,string name)
{
    if (root)
        {
            person* target;
            person* pre;
            target = Search(root, name);
            if (target)
            {
                if (target->leftchild || target->rightsibling)
                {
                    qDebug() << "不能删除" << endl;
                }
                else
                {
                    pre = FindPre(target);
                    if (pre)
                    {
                        if (pre->leftchild == target)
                        {
                            pre->leftchild = NULL;
                        }
                        else
                        {
                            pre->rightsibling = NULL;
                        }
                        free(target);
                        return true;
                    }
                }
            }
            return true;
        }
        return false;
}

void family::Preorder(person* root)
{
    if (root != NULL)
    {
        qDebug()<<(QString::fromStdString(root->name));
        Preorder(root->leftchild);
        Preorder(root->rightsibling);
    }
}

void family::get_total(person* root)
{
    if (root != NULL)
    {
        peo_num++;
        get_total(root->rightsibling);
        get_total(root->leftchild);
    }
}

void family::sum_age(person* root)
{
    if (root != NULL)
    {
        total_age += root->age;
        sum_age(root->rightsibling);
        sum_age(root->leftchild);
    }
}

double family::ave_age(person* root)
{
    clear();
    sum_age(root);
    get_total(root);
    return double(total_age) / double(peo_num);
}

void family::sum_xueli(person* root)
{
    if (root != NULL)
    {
        total_xueli += root->xueli;
        sum_xueli(root->rightsibling);
        sum_xueli(root->leftchild);
    }
}

int family::ave_xueli(person* root)
{
    clear();
    sum_xueli(root);
    get_total(root);
    return total_xueli / peo_num;
}

void family::get_male(person* root)
{
    if (root != NULL)
    {
        if (root->gender == 0)
        {
            male_num++;
            get_male(root->leftchild);
            get_male(root->rightsibling);
        }
        if (root->gender == 1)
        {
            female_num++;
            get_male(root->leftchild);
            get_male(root->rightsibling);
        }
    }
}

void family::pri_this(person* root)
{
    if (root != NULL)
    {
        qDebug()<<"Name:"<<QString::fromStdString(root->name);
        qDebug()<<"Birth place:"<<(QString::fromStdString(root->birth_place));
        qDebug()<<"Born date:"<<(QString::number(root->born_date));
        qDebug()<<"Dead date:"<<(QString::number(root->dead_date));
        qDebug()<<"Age:"<<(QString::number(root->age));
        qDebug()<<"Height:"<<(QString::number(root->height));
        qDebug()<<"Job:"<<(QString::fromStdString(root->job));
        qDebug()<<"Xue Li:"<<(QString::number(root->xueli))<<endl;
    }
    else
    {
        qDebug()<<("No Such Person!");
    }
}

void family::ratio(person* root)
{
    get_male(root);
    get_total(root);
    qDebug() << ("male num:female num = ");
    qDebug()<< male_num;
    qDebug()<< (" : ") ;
    qDebug()<< female_num;
    qDebug()<< endl;
}

double family::home_ave(person* root)
{
    get_total(root);
    get_male(root);
    return double(peo_num) / double(male_num);
}

void family::get_height(person* root)
{
    if (root != NULL)
    {
        total_height += (root->height);
        get_height(root->rightsibling);
        get_height(root->leftchild);
    }
}

double family::ave_height(person* root)
{
    clear();
    get_total(root);
    get_height(root);
    return double(total_height) / double(peo_num);
}

void family::clear()
{
    peo_num = 0;
    male_num = 0;
    female_num = 0;
    total_height = 0;
}

void family::Show(person* root)
{
    qDebug()<<("Hello");
}

person* family::readff()
{
    person* p1 = new person;
    p1->leftchild = NULL;
    p1->rightsibling = NULL;
    person* p2 = new person;
    p2->leftchild = NULL;
    p2->rightsibling = NULL;
    person* p3 = new person;
    p3->leftchild = NULL;
    p3->rightsibling = NULL;
    person* p4 = new person;
    p4->leftchild = NULL;
    p4->rightsibling = NULL;
    person* p5 = new person;
    p5->leftchild = NULL;
    p5->rightsibling = NULL;

    p1->name = "HZJ";
    p1->birth_place = "GuangZhou";
    p1->born_date = 20000804;
    p1->born_year = 2000;
    p1->dead_date = 99999999;
    p1->dead_year = 9999;
    p1->age = 20;
    p1->gender = 0;
    p1->height = 198;
    p1->job = "Student";
    p1->xueli = 1;

    p2->name = "ZZJ";
    p2->birth_place = "ShenZhen";
    p2->born_date = 20020906;
    p2->born_year = 2002;
    p2->dead_date = 99999999;
    p2->dead_year = 9999;
    p2->age = 18;
    p2->gender = 0;
    p2->height = 196;
    p2->job = "Worker";
    p2->xueli = 3;

    p3->name = "ZJ";
    p3->birth_place = "FoShan";
    p3->born_date = 20040906;
    p3->born_year = 2004;
    p3->dead_date = 99999999;
    p3->dead_year = 9999;
    p3->age = 16;
    p3->gender = 0;
    p3->height = 194;
    p3->job = "Teacher";
    p3->xueli = 2;

    p4->name = "YC";
    p4->birth_place = "ShenZhen";
    p4->born_date = 20060906;
    p4->born_year = 2006;
    p4->dead_date = 99999999;
    p4->dead_year = 9999;
    p4->age = 14;
    p4->gender = 0;
    p4->height = 192;
    p4->job = "Boss";
    p4->xueli = 4;

    p5->name = "OJ";
    p5->birth_place = "BeiJing";
    p5->born_date = 20080906;
    p5->born_year = 2008;
    p5->dead_date = 99999999;
    p5->dead_year = 9999;
    p5->age = 12;
    p5->gender = 0;
    p5->height = 190;
    p5->job = "HugeBoss";
    p5->xueli = 0;

    p4->leftchild = p5;
    p3->leftchild = p4;
    p2->leftchild = p3;
    p1->leftchild = p2;
    p2->parent = p1;
    p3->parent = p2;
    p4->parent = p3;
    p5->parent = p4;

    return p1;
}

bool family::store(person* root, QTextStream& stream)
{
    if(root!=NULL)
    {
        stream<<"HaveNode"<<endl;
        stream<<QString::fromStdString(root->name)<<endl;
        stream<<QString::fromStdString(root->birth_place)<<endl;
        stream<<QString::number(root->born_date)<<endl;
        stream<<QString::number(root->born_year)<<endl;
        stream<<QString::number(root->dead_date)<<endl;
        stream<<QString::number(root->dead_year)<<endl;
        stream<<QString::number(root->age)<<endl;
        stream<<QString::number(root->gender)<<endl;
        stream<<QString::number(root->height)<<endl;
        stream<<QString::fromStdString(root->job)<<endl;
        stream<<QString::number(root->xueli)<<endl;
        store(root->leftchild,stream);
        store(root->rightsibling,stream);
        return true;
    }
    else
    {
        stream<<"NoNode"<<endl;
        return true;
    }
}

person* family::FindPre(person* root)
{
    if (root)
        {
            person* temp=NULL;
            person* pre;
            person* current = 0;
            if (root->parent)
            {
                temp = root->parent;
                if (temp->leftchild != root) //判断p是否是第一个孩子
                {
                    pre = temp->leftchild;
                    while (current != root)
                    {
                        pre = current;
                        current = current->rightsibling;
                    }
                    return pre;//返回前一个兄弟
                }
                else	//是第一个孩子，直接返回父节点
                    return temp;
            }
            else
                return NULL;
        }
        return NULL;
}

