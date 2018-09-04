#include "handler.h"
#include "ui_handler.h"

#include <QMessageBox>

Handler::Handler(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Handler)
{
    ui->setupUi(this);

    connect(ui->actiontbCell,SIGNAL(triggered()),this,SLOT(insertData()));
}

Handler::~Handler()
{
    delete ui;
}

void Handler::insertData()
{

    QMessageBox::warning(0,"！！！","！！！！！",QMessageBox::Ok);

}
