#include "tablerow.h"
#include "ui_tablerow.h"

tablerow::~tablerow() { delete ui; }
tablerow::tablerow(QWidget *parent) : QWidget(parent), ui(new Ui::tablerow) {
	ui->setupUi(this);
}

void tablerow::expand() {
	isExpanded = true;
	ui->details->show();
}
void tablerow::collapse() {
	isExpanded = false;
	ui->details->hide();
}
void tablerow::toggle() {
	if (isExpanded) {
		collapse();
	} else {
		expand();
	}
}
