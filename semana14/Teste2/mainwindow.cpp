#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "imc.h"
#include "arquivo.h"

Pessoa a_pessoa;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    double imc = calcula_imc(a_pessoa);

    ui->lineEdit->setText(QString::number(imc));

}

void MainWindow::on_pushButton_2_clicked()
{
    a_pessoa = le_arquivo("../Teste2/pessoa.txt");

    ui->edit_nome->setText(QString::fromStdString(a_pessoa.nome));
    ui->lineEdit_2->setText(QString::number(a_pessoa.peso));
    ui->lineEdit_3->setText(QString::number(a_pessoa.altura));

}
