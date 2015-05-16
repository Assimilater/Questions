#include "tablerow.hpp"
#include "ui_tablerow.h"
#include <stdlib.h>
#include <time.h>

TableRow::~TableRow() { delete ui; }
TableRow::TableRow(QWidget *parent) : QWidget(parent), ui(new Ui::TableRow) {
	ui->setupUi(this);
	expand();

	// Setup slots
	connect(ui->toggle, SIGNAL(clicked()), this, SLOT(toggle()));

	// Fill notes with random length of text
	QString text;
	srand(time(NULL));
	int lines = rand() % 7;
	for (int i = 0; i < lines; ++i) {
		int words = rand() % 30 + 1;
		for (int j = 0; j < words; ++j) {
			text += "Text ";
		}
		text += "\n";
	}
	ui->lblNotes->setText(text);
}

void TableRow::expand() {
	isExpanded = true;
	ui->details->show();
}
void TableRow::collapse() {
	isExpanded = false;
	ui->details->hide();
}
void TableRow::toggle() {
	if (isExpanded) {
		collapse();
	} else {
		expand();
	}
}
