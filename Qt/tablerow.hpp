#pragma once
#include <QWidget>

namespace Ui { class TableRow; }
class TableRow : public QWidget {
	Q_OBJECT
	Ui::TableRow *ui;
	bool isExpanded;

public:
	~TableRow();
	explicit TableRow(QWidget *parent = 0);

private slots:
	void collapse();
	void expand();
	void toggle();
};
