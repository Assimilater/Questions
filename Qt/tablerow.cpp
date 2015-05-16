#include "tablerow.hpp"
#include "ui_tablerow.h"
#include <stdlib.h>
#include <time.h>

void TableRow::setupUi(int lines, const int* words) {
	ui->setupUi(this);
	expand();

	// Setup slots
	connect(ui->toggle, SIGNAL(clicked()), this, SLOT(toggle()));

	// Generate text
	QString text;
	for (int i = 0; i < lines; ++i) {
		QString line;
		for (int j = 0; j < words[i]; ++j) {
			line += "Text ";
		}
		text += line.trimmed();
		text += "\n";
	}
	ui->lblNotes->setText(text.trimmed());
}

TableRow::~TableRow() { delete ui; }
TableRow::TableRow() : ui(new Ui::TableRow) {
	// Generate random length of text
	srand(time(NULL));
	int lines = rand() % 7;
	int* words = new int[lines];
	for (int i = 0; i < lines; ++i) {
		words[i] = rand() % 30 + 1;
	}

	setupUi(lines, words);
	delete[] words;
}

TableRow::TableRow(int lines, const int* words) : ui(new Ui::TableRow) {
	setupUi(lines, words);
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
