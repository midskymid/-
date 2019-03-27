#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_myopencvsolution.h"

class myopencvsolution : public QMainWindow
{
	Q_OBJECT

public:
	myopencvsolution(QWidget *parent = Q_NULLPTR);

private:
	Ui::myopencvsolutionClass ui;
};
