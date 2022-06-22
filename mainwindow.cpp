#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonQuit, SIGNAL(clicked()),
            this,
            SLOT(morredanado()));
    connect(ui->pushButtoncopiar, SIGNAL(clicked()),
            this, SLOT (copiartexto()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::morredanado()
{
    exit(0);
}
void MainWindow::copiartexto()
{
    QString txt;
    txt= ui -> textEditesquerda -> toPlainText();
    txt= QString("<i>"+txt+"</i>");
    ui-> textEdit_diteita-> setText(txt);
}
