#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->close();
    this->centralWidget()->setStyleSheet(
                "border-image:url(\"/home/umut/Documents/codes/Qt_cpp_example/init/back_image.png\") 0 0 0 0 stretch stretch;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

