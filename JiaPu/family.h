#pragma once
#ifndef FAMILY_H
#define FAMILY_H

#include <QWidget>
#include"ui_mainwindow.h"

using namespace std;

struct person
{
    string name;//姓名
    string birth_place;//出生地
    int born_date;//出生日期
    int born_year;//出生年份
    int dead_date;//死亡日期
    int dead_year;//死亡年份
    int age;//年龄
    int gender; //性别
    int height;//身高
    string job;//职业
    int xueli;//学历:0-4表示小学到大学

    person* leftchild;
    person* rightsibling;
    person* parent;
};
class family
{
public:
        int peo_num=0;
        int male_num = 0;
        int female_num = 0;
        int total_height = 0;
        person* ancestor;//祖先
        family(); //初始化family
        family(person* root);//以他为祖先创建家谱
        person* get_root(person* root, ifstream& infile);
        void Insert(person* root,string name,int relation,person* p);//添加成员
        bool family::Delete(person* root,string name);//按名字删除家庭成员
        void Preorder(person* root);
        void Show(person* root);//把整个家族打印出来
        void pri_this(person* root);//把这个人信息输出来
        person* Search(person* root, string name);//按名字查询成员
        void sum_age(person* root);//总年龄
        double ave_age(person* root);//统计平均年龄
        double ave_height(person* root);//统计平均身高
        void ratio(person* root);//男女比例
        double home_ave(person* root);//家庭平均人口
        int ave_xueli(person* root);//平均学历
        void sum_xueli(person* root);//总学历
        void get_male(person* root);//男性人数
        void get_total(person* root);//获得总人数
        void get_height(person* root);//获得总身高
        void clear();//把人数清零
        bool store(person* root, QTextStream& outfile);//保存到txt中
        void readf(person* root, ifstream& infile);//从txt中读取
        void Input(person* p);
        person* readff();
        person* FindPre(person* root);
private:
    Ui::MainWindow *ui;
};

extern family *f;
extern int total_age;
extern int total_xueli;

#endif // FAMILY_H
