#pragma once
#include <QWidget>

namespace Ui { class tablerow; }
class tablerow : public QWidget {
	Q_OBJECT
	Ui::tablerow *ui;
	bool isExpanded;

public:
	~tablerow();
	explicit tablerow(QWidget *parent = 0);

private slots:
	collapse();
	expand();
	toggle();
};
