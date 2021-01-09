#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"family.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void ClickCreate();
    void ClickInsert();
    void ClickDelete();
    void ClickPreorder();
    void Clickave_age();
    void Clickave_height();
    void Clickave_xueli();
    void ClickSearch();
    void ClickStore();
    void ClickQueren();
    void ClickRead();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
