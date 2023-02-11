#include "mainwindow.h"
#include <QStandardItemModel>
#include <QFile>
#include <QTableWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QCloseEvent>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

coursework::coursework(QWidget* parent) : QMainWindow(parent), select_row(-1)
{

    ui.setupUi(this);

    connect(ui.actionAdd, SIGNAL(triggered()), this, SLOT(add_db_line()));
    connect(ui.actionDelete, SIGNAL(triggered()), this, SLOT(delete_db_line()));
    connect(ui.actionMerge, SIGNAL(triggered()), this, SLOT(merge_db()));
    connect(ui.actionLoad, SIGNAL(triggered()), this, SLOT(load_db_in_file()));
    connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(write_db_in_file()));
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(db_find()));
    connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(appExit()));
    connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(new_db()));
    connect(ui.actionAbout, SIGNAL(triggered()), this, SLOT(about()));
    ui.statusBar->addPermanentWidget(ui.label,1);
    ui.statusBar->addPermanentWidget(ui.label_2,1);
}


//private
void coursework::clearTable()
{
    if (ui.tableView->model() == nullptr)
        return;
    delete ui.tableView->model();
}

void coursework::tableSlotInit()
{
    QItemSelectionModel* sm = ui.tableView->selectionModel();
    connect(sm, SIGNAL(currentRowChanged(QModelIndex, QModelIndex)),
        this, SLOT(slot_select(QModelIndex, QModelIndex)));
}

void coursework::updateTable()
{
    ui.label_2->setText(QString("Количество записей: %1").arg(db.getSize()));

    clearTable();
    ratio_table.clear();

    QStandardItemModel* model = new QStandardItemModel;
    QStandardItem* item;

    QStringList horizontalHeader;
    horizontalHeader.append(u8"Имя и Фамилия");
    horizontalHeader.append(u8"Пол");
    horizontalHeader.append(u8"Тип");
    horizontalHeader.append(u8"Код страны");
    horizontalHeader.append(u8"Номер");
    horizontalHeader.append(u8"Страна");
    horizontalHeader.append(u8"Дата рождения");
    horizontalHeader.append(u8"Дата выдачи");
    horizontalHeader.append(u8"Дата окончания");

    model->setHorizontalHeaderLabels(horizontalHeader);


    for (size_t i_db = 0, i_vt = 0; i_db < db.getSize(); i_db++)
    {
        if (find_str == "" || db[i_db].name.indexOf(find_str) != -1|| db[i_db].country.indexOf(find_str) != -1)
        {
            ratio_table.push_back(i_db);

            item = new QStandardItem(db[i_db].name);
            model->setItem(i_vt, 0, item);

            item = new QStandardItem(db[i_db].sex);
            model->setItem(i_vt, 1, item);

            item = new QStandardItem(db[i_db].type);
            model->setItem(i_vt, 2, item);

            item = new QStandardItem(db[i_db].codeofstate);
            model->setItem(i_vt, 3, item);

            item = new QStandardItem(db[i_db].nomer);
            model->setItem(i_vt, 4, item);

            item = new QStandardItem(db[i_db].country);
            model->setItem(i_vt, 5, item);

            item = new QStandardItem(db[i_db].dateofbirth);
            model->setItem(i_vt, 6, item);

            item = new QStandardItem(db[i_db].dateofissue);
            model->setItem(i_vt, 7, item);

            item = new QStandardItem(db[i_db].dateofexpiry);
            model->setItem(i_vt, 8, item);

            i_vt++;
        }
    }

    ui.tableView->setModel(model);

    ui.tableView->resizeRowsToContents();
    ui.tableView->resizeColumnsToContents();

    tableSlotInit();
}
void coursework::synchronize()
{
    for (size_t i = 0; i < ui.tableView->model()->rowCount(); i++)
    {

        auto index = ui.tableView->model()->index(i, 0);
        db[ratio_table[i]].name = ui.tableView->model()->data(index).toString();

        index = ui.tableView->model()->index(i, 1);
        db[ratio_table[i]].sex = ui.tableView->model()->data(index).toString();

        index = ui.tableView->model()->index(i, 2);
        db[ratio_table[i]].type = ui.tableView->model()->data(index).toString();

        index = ui.tableView->model()->index(i, 3);
        db[ratio_table[i]].codeofstate = ui.tableView->model()->data(index).toString();

        index = ui.tableView->model()->index(i, 4);
        db[ratio_table[i]].nomer = ui.tableView->model()->data(index).toString();

        index = ui.tableView->model()->index(i, 5);
        db[ratio_table[i]].country = ui.tableView->model()->data(index).toString();

        index = ui.tableView->model()->index(i, 6);
        db[ratio_table[i]].dateofbirth = ui.tableView->model()->data(index).toString();

        index = ui.tableView->model()->index(i, 7);
        db[ratio_table[i]].dateofissue = ui.tableView->model()->data(index).toString();

        index = ui.tableView->model()->index(i, 7);
        db[ratio_table[i]].dateofexpiry = ui.tableView->model()->data(index).toString();

        /*
        QString name;       // имя и фамилия
        QString sex;       // пол
        QString type;        // тип
        QString codeofstate;        // код страны
        QString nomer;        // номер
        QString country;       // страна
        QString dateofbirth;          // дата рождения
        QString dateofissue;     // дата выдачи
        QString dateofexpiry;     // дата окончания
        */
    }
}


void coursework::slot_select(QModelIndex r, QModelIndex)
{
    select_row = r.row();
    ui.label->setText(QString("Выбранная строка: %1").arg(select_row+1));
}

void coursework::load_db_in_file()
{
    if(closing()) return;
    QString file_name = QFileDialog::getOpenFileName(this, tr(u8"Open file"),
        "",
        tr("JSON (*.json)"));
    if (file_name == "")
        return;


    find_str = "";

    db.loadFromFile(file_name);
    updateTable();
}
void coursework::write_db_in_file()
{
    if (ui.tableView->model() == nullptr)
        return;

    QString file_name = QFileDialog::getSaveFileName(this, tr(u8"Save file"),
        "",
        tr("JSON (*.json)"));
    if (file_name == "")
        return;

    synchronize();
    db.saveToFile(file_name);
}

void coursework::add_db_line()
{
    if (ui.tableView->model() == nullptr)
        updateTable();

    synchronize();
    db.pushBack(pASSport());
    updateTable();

    ui.tableView->scrollTo(ui.tableView->model()->index(ui.tableView->model()->rowCount()-1, 0));
}

void coursework::delete_db_line()
{
    if (select_row == -1)
    {
        return;
    }

    synchronize();
    db.erase(ratio_table[select_row], size_t(ratio_table[select_row])+1);
    updateTable();
    select_row=-1;
}

void coursework::merge_db()
{
    if (ui.tableView->model() == nullptr)
        return;

    QString file_name = QFileDialog::getOpenFileName(this, tr("Open file"),
        "",
        tr("JSON (*.json)"));
    if (file_name == "")
        return;

    synchronize();
    find_str = "";
    db.mergeFromFile(file_name);
    updateTable();
}

void coursework::db_find()
{
    find_str = ui.lineEdit->text();
    synchronize();
    updateTable();
}

void coursework::appExit()
{
    qApp->closeAllWindows();
}


void coursework::new_db()
{
    if(closing()) return;
    db.clear();
    updateTable();
}


void coursework::about()
{
    QMessageBox::information(this,"О программе","Выполнил:\nСтудент 2 курса\nГруппы ИКПИ-05\nРоманенко Кирилл Андреевич",QMessageBox::Ok);
}

int coursework::closing()
{
    if (ui.tableView->model() != nullptr){

    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Курсовая работа",
                                                                tr("Сохранить файл перед выходом?\n"),
                                                                QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);

    if (resBtn == QMessageBox::Yes){
        write_db_in_file();
    }
    else if (resBtn == QMessageBox::Cancel) {
        return 1;
    }
    }

}


void coursework::closeEvent (QCloseEvent *event)
{
    if (ui.tableView->model() != nullptr){

    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Курсовая работа",
                                                                tr("Сохранить файл перед выходом?\n"),
                                                                QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn == QMessageBox::Cancel) {
            event->ignore();
        } else if (resBtn == QMessageBox::No){
            event->accept();
        }
    else if (resBtn == QMessageBox::Yes){
        write_db_in_file();
    }
    }

}

