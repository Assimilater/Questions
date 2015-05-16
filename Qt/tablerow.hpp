#pragma once
#include <QWidget>

namespace Ui { class TableRow; }
class TableRow : public QWidget {
	Q_OBJECT
	Ui::TableRow *ui;
	bool isExpanded;
	void setupUi(int, const int*);

public:
	~TableRow();
	explicit TableRow();
	explicit TableRow(int, const int*);

private slots:
	void collapse();
	void expand();
	void toggle();
};
