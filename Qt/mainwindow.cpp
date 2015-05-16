#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::~MainWindow() { delete ui; }
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
	ui->setupUi(this);
}
