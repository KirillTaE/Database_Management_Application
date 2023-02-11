#pragma once
#include <vector>

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"

#include "DataBase.h"

class coursework : public QMainWindow
{
    Q_OBJECT

public:
    coursework(QWidget *parent = Q_NULLPTR);

private:
    void clearTable();
    void tableSlotInit();
    void updateTable();
    void synchronize();
    void closeEvent(QCloseEvent *bar);
    int closing();

    Ui::mainwindowClass ui;

    std::vector<int> ratio_table;
    DataBase db;
    QString find_str;
    int select_row;


private slots:
    void slot_select(QModelIndex, QModelIndex);

    void new_db();
    void load_db_in_file();
    void write_db_in_file();

    void add_db_line();
    void delete_db_line();
    void merge_db();

    void db_find();
    void appExit();

    void about();
};
