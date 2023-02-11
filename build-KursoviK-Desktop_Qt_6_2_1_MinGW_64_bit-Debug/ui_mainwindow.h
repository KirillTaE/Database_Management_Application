/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindowClass
{
public:
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionAdd;
    QAction *actionDelete;
    QAction *actionMerge;
    QAction *actionExit;
    QAction *actionNew;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTableView *tableView;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainwindowClass)
    {
        if (mainwindowClass->objectName().isEmpty())
            mainwindowClass->setObjectName(QString::fromUtf8("mainwindowClass"));
        mainwindowClass->resize(859, 607);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/rem.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        mainwindowClass->setWindowIcon(icon);
        actionSave = new QAction(mainwindowClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/sohranbaz.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionLoad = new QAction(mainwindowClass);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/zagruzkabaz.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon2);
        actionAdd = new QAction(mainwindowClass);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon3);
        actionDelete = new QAction(mainwindowClass);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon4);
        actionMerge = new QAction(mainwindowClass);
        actionMerge->setObjectName(QString::fromUtf8("actionMerge"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/slianie.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMerge->setIcon(icon5);
        actionExit = new QAction(mainwindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon6);
        actionNew = new QAction(mainwindowClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon7);
        actionAbout = new QAction(mainwindowClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon8);
        centralWidget = new QWidget(mainwindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 60, 801, 441));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 10, 161, 31));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon9);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 10, 631, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 520, 54, 14));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 520, 54, 14));
        mainwindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 859, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        mainwindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainwindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mainwindowClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionSave);
        menu->addAction(actionLoad);
        menu->addAction(actionExit);
        menu_2->addAction(actionAdd);
        menu_2->addAction(actionDelete);
        menu_2->addAction(actionMerge);
        menu_3->addAction(actionAbout);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLoad);
        mainToolBar->addAction(actionMerge);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAdd);
        mainToolBar->addAction(actionDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);
        mainToolBar->addAction(actionExit);

        retranslateUi(mainwindowClass);

        QMetaObject::connectSlotsByName(mainwindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowClass)
    {
        mainwindowClass->setWindowTitle(QCoreApplication::translate("mainwindowClass", "\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260", nullptr));
        actionSave->setText(QCoreApplication::translate("mainwindowClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("mainwindowClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\320\265 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205 \320\262 \321\204\320\260\320\271\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("mainwindowClass", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoad->setText(QCoreApplication::translate("mainwindowClass", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad->setToolTip(QCoreApplication::translate("mainwindowClass", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLoad->setShortcut(QCoreApplication::translate("mainwindowClass", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd->setText(QCoreApplication::translate("mainwindowClass", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        actionDelete->setText(QCoreApplication::translate("mainwindowClass", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        actionMerge->setText(QCoreApplication::translate("mainwindowClass", "\320\241\320\273\320\270\321\217\320\275\320\270\320\265", nullptr));
        actionExit->setText(QCoreApplication::translate("mainwindowClass", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        actionNew->setText(QCoreApplication::translate("mainwindowClass", "\320\235\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("mainwindowClass", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("mainwindowClass", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("mainwindowClass", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        menu->setTitle(QCoreApplication::translate("mainwindowClass", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("mainwindowClass", "\320\221\320\260\320\267\320\260 \320\224\320\260\320\275\320\275\321\213\321\205", nullptr));
        menu_3->setTitle(QCoreApplication::translate("mainwindowClass", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindowClass: public Ui_mainwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
