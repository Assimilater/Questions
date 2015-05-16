#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "tablerow.hpp"

MainWindow::~MainWindow() { delete ui; }
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
	ui->setupUi(this);
	ui->scrollContents->layout()->setAlignment(Qt::AlignTop);

	// Setup slots
	connect(ui->addWidget, SIGNAL(clicked()), this, SLOT(addWidget()));
	connect(ui->removeWidget, SIGNAL(clicked()), this, SLOT(removeWidget()));
}


void MainWindow::addWidget() {
	ui->scrollContents->layout()->addWidget(new TableRow());
}

void MainWindow::removeWidget() {
	if (!ui->scrollContents->layout()->isEmpty()) {
		QLayoutItem* item = ui->scrollContents->layout()->takeAt(0);
		delete item->widget();
		delete item;
	}
}
