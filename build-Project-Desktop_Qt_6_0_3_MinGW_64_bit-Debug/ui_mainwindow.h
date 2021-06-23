/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QLabel *result_window;
    QPushButton *btn_ac;
    QPushButton *btn_plus_minus;
    QPushButton *btn_divide;
    QPushButton *btn_percent;
    QPushButton *btn_8;
    QPushButton *btn_multiply;
    QPushButton *btn_9;
    QPushButton *btn_7;
    QPushButton *btn_5;
    QPushButton *btn_4;
    QPushButton *btn_6;
    QPushButton *btn_minus;
    QPushButton *btn_1;
    QPushButton *btn_3;
    QPushButton *btn_plus;
    QPushButton *btn_2;
    QPushButton *btn_equal;
    QPushButton *btn_0;
    QPushButton *btn_dot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(238, 380);
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
" background-color: rgb(27, 25, 25);\n"
"}"));
        result_window = new QLabel(widget);
        result_window->setObjectName(QString::fromUtf8("result_window"));
        result_window->setGeometry(QRect(11, 0, 221, 81));
        QFont font;
        font.setPointSize(23);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        result_window->setFont(font);
        result_window->setStyleSheet(QString::fromUtf8("QLabel {\n"
" qproperty-alignment: 'AlignVCenter | AlignRight';\n"
" border-bottom: 1px solid gray;\n"
"color: white;\n"
"}\n"
""));
        btn_ac = new QPushButton(widget);
        btn_ac->setObjectName(QString::fromUtf8("btn_ac"));
        btn_ac->setGeometry(QRect(-1, 80, 61, 61));
        QFont font1;
        font1.setPointSize(10);
        btn_ac->setFont(font1);
        btn_ac->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(215, 215, 215);\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(192, 192, 192);\n"
"}"));
        btn_plus_minus = new QPushButton(widget);
        btn_plus_minus->setObjectName(QString::fromUtf8("btn_plus_minus"));
        btn_plus_minus->setGeometry(QRect(59, 80, 61, 61));
        btn_plus_minus->setFont(font1);
        btn_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(215, 215, 215);\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(192, 192, 192);\n"
"}"));
        btn_divide = new QPushButton(widget);
        btn_divide->setObjectName(QString::fromUtf8("btn_divide"));
        btn_divide->setGeometry(QRect(179, 80, 61, 61));
        btn_divide->setFont(font1);
        btn_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(0, 195, 34);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
" background-color:rgb(0, 127, 22);\n"
"}"));
        btn_percent = new QPushButton(widget);
        btn_percent->setObjectName(QString::fromUtf8("btn_percent"));
        btn_percent->setGeometry(QRect(119, 80, 61, 61));
        btn_percent->setFont(font1);
        btn_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(215, 215, 215);\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(192, 192, 192);\n"
"}"));
        btn_8 = new QPushButton(widget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setGeometry(QRect(59, 140, 61, 61));
        btn_8->setFont(font1);
        btn_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_multiply = new QPushButton(widget);
        btn_multiply->setObjectName(QString::fromUtf8("btn_multiply"));
        btn_multiply->setGeometry(QRect(179, 140, 61, 61));
        btn_multiply->setFont(font1);
        btn_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(0, 195, 34);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
" background-color:rgb(0, 127, 22);\n"
"}"));
        btn_9 = new QPushButton(widget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setGeometry(QRect(119, 140, 61, 61));
        btn_9->setFont(font1);
        btn_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_7 = new QPushButton(widget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setGeometry(QRect(-1, 140, 61, 61));
        btn_7->setFont(font1);
        btn_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_5 = new QPushButton(widget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(59, 200, 61, 61));
        btn_5->setFont(font1);
        btn_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_4 = new QPushButton(widget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(-1, 200, 61, 61));
        btn_4->setFont(font1);
        btn_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_6 = new QPushButton(widget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(119, 200, 61, 61));
        btn_6->setFont(font1);
        btn_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_minus = new QPushButton(widget);
        btn_minus->setObjectName(QString::fromUtf8("btn_minus"));
        btn_minus->setGeometry(QRect(179, 200, 61, 61));
        btn_minus->setFont(font1);
        btn_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(0, 195, 34);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
" background-color:rgb(0, 127, 22);\n"
"}"));
        btn_1 = new QPushButton(widget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(-1, 260, 61, 61));
        btn_1->setFont(font1);
        btn_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_3 = new QPushButton(widget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(119, 260, 61, 61));
        btn_3->setFont(font1);
        btn_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_plus = new QPushButton(widget);
        btn_plus->setObjectName(QString::fromUtf8("btn_plus"));
        btn_plus->setGeometry(QRect(179, 260, 61, 61));
        btn_plus->setFont(font1);
        btn_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(0, 195, 34);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
" background-color:rgb(0, 127, 22);\n"
"}"));
        btn_2 = new QPushButton(widget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(59, 260, 61, 61));
        btn_2->setFont(font1);
        btn_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_equal = new QPushButton(widget);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        btn_equal->setGeometry(QRect(179, 320, 61, 61));
        btn_equal->setFont(font1);
        btn_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(0, 195, 34);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
" background-color:rgb(0, 127, 22);\n"
"}"));
        btn_0 = new QPushButton(widget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setGeometry(QRect(-1, 320, 121, 61));
        btn_0->setFont(font1);
        btn_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(75, 70, 70);\n"
"color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(59, 59, 59);\n"
"}"));
        btn_dot = new QPushButton(widget);
        btn_dot->setObjectName(QString::fromUtf8("btn_dot"));
        btn_dot->setGeometry(QRect(119, 320, 61, 61));
        btn_dot->setFont(font1);
        btn_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(215, 215, 215);\n"
" border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
" background-color: rgb(192, 192, 192);\n"
"}"));
        MainWindow->setCentralWidget(widget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result_window->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        btn_plus_minus->setText(QCoreApplication::translate("MainWindow", "SIGN", nullptr));
        btn_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_multiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
