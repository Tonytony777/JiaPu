#pragma once
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "family.h"
#include <QDebug>
#include<iostream>
#include<QString>
#include <QFile>
#include <QDataStream>

family* f = new family;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Create, SIGNAL(clicked()), this, SLOT(ClickCreate()));
    connect(ui->Insert, SIGNAL(clicked()), this, SLOT(ClickInsert()));
    connect(ui->Delete, SIGNAL(clicked()), this, SLOT(ClickDelete()));
    connect(ui->Preorder, SIGNAL(clicked()), this, SLOT(ClickPreorder()));
    connect(ui->ave_age, SIGNAL(clicked()), this, SLOT(Clickave_age()));
    connect(ui->ave_height, SIGNAL(clicked()), this, SLOT(Clickave_height()));
    connect(ui->ave_xueli, SIGNAL(clicked()), this, SLOT(Clickave_xueli()));
    connect(ui->Quit, SIGNAL(clicked()), this, SLOT(ClickStore()));
    connect(ui->Search, SIGNAL(clicked()), this, SLOT(ClickSearch()));
    connect(ui->Queren, SIGNAL(clicked()), this, SLOT(ClickQueren()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(ClickRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ClickCreate()
{   person* per = new person();
    per->name = ui->InputName->text().toStdString();
    per->birth_place = ui->InputBPlace->text().toStdString();
    per->born_date = ui->InputBDate->text().toInt();
    per->dead_date = ui->InputDDate->text().toInt();
    per->gender = ui->InputGender->text().toInt();
    per->height = ui->InputHeight->text().toInt();
    per->job = ui->InputJob->text().toStdString();
    per->xueli = ui->InputXueli->text().toInt();
    per->born_year = per->born_date/10000;
    per->dead_year = per->dead_date/10000;
    qDebug()<<per->born_year;
    qDebug()<<per->dead_year;
    if (per->dead_date == 99999999)
        {
            per->age = 2020 - per->born_year;
            qDebug()<<("age:")<<per->age;
        }
        else
        {
            per->age = per->dead_year - per->born_year;
        }
    f->ancestor = per;
}

void MainWindow::ClickInsert()
{
    person* per = new person();
    per->name = ui->edit3->text().toStdString();
    per->birth_place = ui->edit4->text().toStdString();
    per->born_date = ui->edit5->text().toInt();
    per->dead_date = ui->edit6->text().toInt();
    per->gender = ui->edit7->text().toInt();
    per->height = ui->edit8->text().toInt();
    per->job = ui->edit9->text().toStdString();
    per->xueli = ui->edit10->text().toInt();
    per->born_year = per->born_date/10000;
    per->dead_year = per->dead_date/10000;
    if (per->dead_date == 99999999)
        {
            per->age = 2020 - per->born_year;
        }
        else
        {
            per->age = per->dead_year - per->born_year;
        }
    string nname;
    nname = ui->edit1->text().toStdString();
    int relation;
    relation = ui->edit2->text().toInt();
    f->Insert(f->ancestor,nname,relation,per);
}

void MainWindow::ClickDelete()
{
    QString delete_name;
    delete_name = ui->InputDeleteName->text();
    f->Delete(f->ancestor,delete_name.toStdString());
}
void MainWindow::ClickPreorder()
{
    f->Preorder(f->ancestor);
}
void MainWindow::Clickave_age()
{
    total_age = 0;
    qDebug()<<f->ave_age(f->ancestor);
}
void MainWindow::Clickave_height()
{
    qDebug()<<f->ave_height(f->ancestor);
}
void MainWindow::Clickave_xueli()
{
    total_xueli = 0;
    qDebug()<<f->ave_xueli(f->ancestor);
}
void MainWindow::ClickStore()
{
    QFile file("./data.txt");
    bool bb = file.open(QIODevice::WriteOnly);
    if(bb)
    {
        QTextStream st( &file );
        f->store(f->ancestor,st);
    }
    else
    {
        qDebug() <<"Open fail!";
    }
    file.close();
}
void MainWindow::ClickSearch()
{
    person* per = new person;
    QString sea_name = ui->InputSearchName->text();
    per = f->Search(f->ancestor,sea_name.toStdString());
    f->pri_this(per);
}
void MainWindow::ClickQueren()
{
    ui->setupUi(this);
    ui->InputName->clear();
    ui->InputBPlace->clear();
    ui->InputBDate->clear();
    ui->InputDDate->clear();
    ui->InputGender->clear();
    ui->InputHeight->clear();
    ui->InputJob->clear();
    ui->InputXueli->clear();
}
void MainWindow::ClickRead()
{
    f->ancestor = f->readff();
}
