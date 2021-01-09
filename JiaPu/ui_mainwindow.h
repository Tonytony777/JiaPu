/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *choice;
    QPushButton *Create;
    QPushButton *Insert;
    QPushButton *Delete;
    QPushButton *Preorder;
    QPushButton *ave_age;
    QPushButton *ave_height;
    QPushButton *ave_xueli;
    QPushButton *Search;
    QPushButton *Quit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *VerInput;
    QLineEdit *InputName;
    QLineEdit *InputBPlace;
    QLineEdit *InputBDate;
    QLineEdit *InputDDate;
    QLineEdit *InputGender;
    QLineEdit *InputHeight;
    QLineEdit *InputJob;
    QLineEdit *InputXueli;
    QPushButton *Queren;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;
    QLabel *label8;
    QLabel *label10;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *edit1;
    QLineEdit *edit2;
    QLineEdit *edit3;
    QLineEdit *edit4;
    QLineEdit *edit5;
    QLineEdit *edit6;
    QLineEdit *edit7;
    QLineEdit *edit8;
    QLineEdit *edit9;
    QLineEdit *edit10;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *l1;
    QLabel *l2;
    QLabel *l3;
    QLabel *l4;
    QLabel *l5;
    QLabel *l6;
    QLabel *l7;
    QLabel *l8;
    QLabel *l9;
    QLabel *l10;
    QPushButton *pushButton;
    QLineEdit *InputSearchName;
    QLineEdit *InputDeleteName;
    QLabel *tip1;
    QLabel *tip2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(840, 659);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 0, 160, 302));
        choice = new QVBoxLayout(verticalLayoutWidget);
        choice->setObjectName(QString::fromUtf8("choice"));
        choice->setContentsMargins(0, 0, 0, 0);
        Create = new QPushButton(verticalLayoutWidget);
        Create->setObjectName(QString::fromUtf8("Create"));

        choice->addWidget(Create);

        Insert = new QPushButton(verticalLayoutWidget);
        Insert->setObjectName(QString::fromUtf8("Insert"));

        choice->addWidget(Insert);

        Delete = new QPushButton(verticalLayoutWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));

        choice->addWidget(Delete);

        Preorder = new QPushButton(verticalLayoutWidget);
        Preorder->setObjectName(QString::fromUtf8("Preorder"));

        choice->addWidget(Preorder);

        ave_age = new QPushButton(verticalLayoutWidget);
        ave_age->setObjectName(QString::fromUtf8("ave_age"));

        choice->addWidget(ave_age);

        ave_height = new QPushButton(verticalLayoutWidget);
        ave_height->setObjectName(QString::fromUtf8("ave_height"));

        choice->addWidget(ave_height);

        ave_xueli = new QPushButton(verticalLayoutWidget);
        ave_xueli->setObjectName(QString::fromUtf8("ave_xueli"));

        choice->addWidget(ave_xueli);

        Search = new QPushButton(verticalLayoutWidget);
        Search->setObjectName(QString::fromUtf8("Search"));

        choice->addWidget(Search);

        Quit = new QPushButton(verticalLayoutWidget);
        Quit->setObjectName(QString::fromUtf8("Quit"));

        choice->addWidget(Quit);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(230, 0, 160, 261));
        VerInput = new QVBoxLayout(verticalLayoutWidget_2);
        VerInput->setObjectName(QString::fromUtf8("VerInput"));
        VerInput->setContentsMargins(0, 0, 0, 0);
        InputName = new QLineEdit(verticalLayoutWidget_2);
        InputName->setObjectName(QString::fromUtf8("InputName"));

        VerInput->addWidget(InputName);

        InputBPlace = new QLineEdit(verticalLayoutWidget_2);
        InputBPlace->setObjectName(QString::fromUtf8("InputBPlace"));

        VerInput->addWidget(InputBPlace);

        InputBDate = new QLineEdit(verticalLayoutWidget_2);
        InputBDate->setObjectName(QString::fromUtf8("InputBDate"));

        VerInput->addWidget(InputBDate);

        InputDDate = new QLineEdit(verticalLayoutWidget_2);
        InputDDate->setObjectName(QString::fromUtf8("InputDDate"));

        VerInput->addWidget(InputDDate);

        InputGender = new QLineEdit(verticalLayoutWidget_2);
        InputGender->setObjectName(QString::fromUtf8("InputGender"));

        VerInput->addWidget(InputGender);

        InputHeight = new QLineEdit(verticalLayoutWidget_2);
        InputHeight->setObjectName(QString::fromUtf8("InputHeight"));

        VerInput->addWidget(InputHeight);

        InputJob = new QLineEdit(verticalLayoutWidget_2);
        InputJob->setObjectName(QString::fromUtf8("InputJob"));

        VerInput->addWidget(InputJob);

        InputXueli = new QLineEdit(verticalLayoutWidget_2);
        InputXueli->setObjectName(QString::fromUtf8("InputXueli"));

        VerInput->addWidget(InputXueli);

        Queren = new QPushButton(centralwidget);
        Queren->setObjectName(QString::fromUtf8("Queren"));
        Queren->setGeometry(QRect(690, 10, 93, 28));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(390, 0, 287, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(verticalLayoutWidget_3);
        label1->setObjectName(QString::fromUtf8("label1"));

        verticalLayout->addWidget(label1);

        label2 = new QLabel(verticalLayoutWidget_3);
        label2->setObjectName(QString::fromUtf8("label2"));

        verticalLayout->addWidget(label2);

        label3 = new QLabel(verticalLayoutWidget_3);
        label3->setObjectName(QString::fromUtf8("label3"));

        verticalLayout->addWidget(label3);

        label4 = new QLabel(verticalLayoutWidget_3);
        label4->setObjectName(QString::fromUtf8("label4"));

        verticalLayout->addWidget(label4);

        label5 = new QLabel(verticalLayoutWidget_3);
        label5->setObjectName(QString::fromUtf8("label5"));

        verticalLayout->addWidget(label5);

        label6 = new QLabel(verticalLayoutWidget_3);
        label6->setObjectName(QString::fromUtf8("label6"));

        verticalLayout->addWidget(label6);

        label7 = new QLabel(verticalLayoutWidget_3);
        label7->setObjectName(QString::fromUtf8("label7"));

        verticalLayout->addWidget(label7);

        label8 = new QLabel(verticalLayoutWidget_3);
        label8->setObjectName(QString::fromUtf8("label8"));

        verticalLayout->addWidget(label8);

        label10 = new QLabel(centralwidget);
        label10->setObjectName(QString::fromUtf8("label10"));
        label10->setGeometry(QRect(220, 570, 391, 20));
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(230, 280, 160, 271));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        edit1 = new QLineEdit(verticalLayoutWidget_4);
        edit1->setObjectName(QString::fromUtf8("edit1"));

        verticalLayout_2->addWidget(edit1);

        edit2 = new QLineEdit(verticalLayoutWidget_4);
        edit2->setObjectName(QString::fromUtf8("edit2"));

        verticalLayout_2->addWidget(edit2);

        edit3 = new QLineEdit(verticalLayoutWidget_4);
        edit3->setObjectName(QString::fromUtf8("edit3"));

        verticalLayout_2->addWidget(edit3);

        edit4 = new QLineEdit(verticalLayoutWidget_4);
        edit4->setObjectName(QString::fromUtf8("edit4"));

        verticalLayout_2->addWidget(edit4);

        edit5 = new QLineEdit(verticalLayoutWidget_4);
        edit5->setObjectName(QString::fromUtf8("edit5"));

        verticalLayout_2->addWidget(edit5);

        edit6 = new QLineEdit(verticalLayoutWidget_4);
        edit6->setObjectName(QString::fromUtf8("edit6"));

        verticalLayout_2->addWidget(edit6);

        edit7 = new QLineEdit(verticalLayoutWidget_4);
        edit7->setObjectName(QString::fromUtf8("edit7"));

        verticalLayout_2->addWidget(edit7);

        edit8 = new QLineEdit(verticalLayoutWidget_4);
        edit8->setObjectName(QString::fromUtf8("edit8"));

        verticalLayout_2->addWidget(edit8);

        edit9 = new QLineEdit(verticalLayoutWidget_4);
        edit9->setObjectName(QString::fromUtf8("edit9"));

        verticalLayout_2->addWidget(edit9);

        edit10 = new QLineEdit(verticalLayoutWidget_4);
        edit10->setObjectName(QString::fromUtf8("edit10"));

        verticalLayout_2->addWidget(edit10);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(390, 280, 287, 271));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        l1 = new QLabel(verticalLayoutWidget_5);
        l1->setObjectName(QString::fromUtf8("l1"));

        verticalLayout_3->addWidget(l1);

        l2 = new QLabel(verticalLayoutWidget_5);
        l2->setObjectName(QString::fromUtf8("l2"));

        verticalLayout_3->addWidget(l2);

        l3 = new QLabel(verticalLayoutWidget_5);
        l3->setObjectName(QString::fromUtf8("l3"));

        verticalLayout_3->addWidget(l3);

        l4 = new QLabel(verticalLayoutWidget_5);
        l4->setObjectName(QString::fromUtf8("l4"));

        verticalLayout_3->addWidget(l4);

        l5 = new QLabel(verticalLayoutWidget_5);
        l5->setObjectName(QString::fromUtf8("l5"));

        verticalLayout_3->addWidget(l5);

        l6 = new QLabel(verticalLayoutWidget_5);
        l6->setObjectName(QString::fromUtf8("l6"));

        verticalLayout_3->addWidget(l6);

        l7 = new QLabel(verticalLayoutWidget_5);
        l7->setObjectName(QString::fromUtf8("l7"));

        verticalLayout_3->addWidget(l7);

        l8 = new QLabel(verticalLayoutWidget_5);
        l8->setObjectName(QString::fromUtf8("l8"));

        verticalLayout_3->addWidget(l8);

        l9 = new QLabel(verticalLayoutWidget_5);
        l9->setObjectName(QString::fromUtf8("l9"));

        verticalLayout_3->addWidget(l9);

        l10 = new QLabel(verticalLayoutWidget_5);
        l10->setObjectName(QString::fromUtf8("l10"));

        verticalLayout_3->addWidget(l10);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 370, 93, 28));
        InputSearchName = new QLineEdit(centralwidget);
        InputSearchName->setObjectName(QString::fromUtf8("InputSearchName"));
        InputSearchName->setGeometry(QRect(700, 300, 113, 21));
        InputDeleteName = new QLineEdit(centralwidget);
        InputDeleteName->setObjectName(QString::fromUtf8("InputDeleteName"));
        InputDeleteName->setGeometry(QRect(700, 450, 113, 21));
        tip1 = new QLabel(centralwidget);
        tip1->setObjectName(QString::fromUtf8("tip1"));
        tip1->setGeometry(QRect(710, 330, 101, 16));
        tip2 = new QLabel(centralwidget);
        tip2->setObjectName(QString::fromUtf8("tip2"));
        tip2->setGeometry(QRect(710, 480, 101, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 840, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Create->setText(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272\345\256\266\350\260\261", nullptr));
        Insert->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        Delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        Preorder->setText(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206", nullptr));
        ave_age->setText(QCoreApplication::translate("MainWindow", "\345\271\263\345\235\207\345\271\264\351\276\204", nullptr));
        ave_height->setText(QCoreApplication::translate("MainWindow", "\345\271\263\345\235\207\350\272\253\351\253\230", nullptr));
        ave_xueli->setText(QCoreApplication::translate("MainWindow", "\345\271\263\345\235\207\345\255\246\345\216\206", nullptr));
        Search->setText(QCoreApplication::translate("MainWindow", "\346\214\211\345\220\215\345\255\227\346\237\245\346\211\276", nullptr));
        Quit->setText(QCoreApplication::translate("MainWindow", "\345\202\250\345\255\230", nullptr));
        Queren->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\345\234\260", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", "\346\255\273\344\272\241\346\227\245\346\234\237\357\274\210999999\345\201\245\345\234\250\357\274\211", nullptr));
        label5->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\2100\347\224\267\357\274\2141\345\245\263\357\274\211", nullptr));
        label6->setText(QCoreApplication::translate("MainWindow", "\350\272\253\351\253\230", nullptr));
        label7->setText(QCoreApplication::translate("MainWindow", "\350\201\214\344\270\232", nullptr));
        label8->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\216\206\357\274\2100-4\350\241\250\347\244\272\346\227\240\345\210\260\345\244\247\345\255\246\357\274\211", nullptr));
        label10->setText(QString());
        l1->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\344\270\200\344\270\252\344\272\272\347\232\204\345\247\223\345\220\215", nullptr));
        l2->setText(QCoreApplication::translate("MainWindow", "\344\275\240\345\222\214\350\277\231\344\270\252\344\272\272\347\232\204\345\205\263\347\263\273\357\274\2100\347\210\266\344\272\262\357\274\2141\345\205\204\345\274\237\357\274\211", nullptr));
        l3->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        l4->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\345\234\260", nullptr));
        l5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        l6->setText(QCoreApplication::translate("MainWindow", "\346\255\273\344\272\241\346\227\245\346\234\237\357\274\210999999\345\201\245\345\234\250\357\274\211", nullptr));
        l7->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\2100\347\224\267\357\274\2141\345\245\263\357\274\211", nullptr));
        l8->setText(QCoreApplication::translate("MainWindow", "\350\272\253\351\253\230", nullptr));
        l9->setText(QCoreApplication::translate("MainWindow", "\350\201\214\344\270\232", nullptr));
        l10->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\216\206\357\274\2100-4\350\241\250\347\244\272\346\227\240\345\210\260\345\244\247\345\255\246\357\274\211", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226", nullptr));
        tip1->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\220\234\347\264\242\345\220\215\345\255\227", nullptr));
        tip2->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\210\240\351\231\244\345\220\215\345\255\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
