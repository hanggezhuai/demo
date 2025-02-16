#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inputhandler.h"
#include "outputhandler.h"
#include "calculation.h"

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

void MainWindow::on_calculateButton_clicked()
{
    QString vehicleInfo = ui->vehicleInfoTextEdit->toPlainText();
    QString cargoInfo = ui->cargoInfoTextEdit->toPlainText();

    InputHandler inputHandler;
    inputHandler.loadFromUserInput(vehicleInfo, cargoInfo);

    Calculation calculation;
    QString result = calculation.calculateLoad(vehicleInfo, cargoInfo);

    OutputHandler outputHandler;
    outputHandler.saveToFile("output.txt", result);

    ui->resultTextEdit->setPlainText(result);
}