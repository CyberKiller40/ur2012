#include "widget.h"
#include "ui_widget.h"

#include <cstdlib>
#include <QDateTime>

Widget::Widget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Widget)
{
	ui->setupUi(this);
	srand(time(0));
}

Widget::~Widget()
{
	delete ui;
}

void Widget::on_pushButton_clicked()
{
	if((rand() % 20 + 1) == 1)
	{
		ui->lineEdit->setText("The cake is a lie!");
	}
	else if(QDateTime::currentDateTime()>QDateTime(QDate(2012,9,12),QTime(10,15)))
	{
		ui->lineEdit->setText("TAK! Ciasto jest w kuchni od 10:15! :-)");
	}
	else
	{
		ui->lineEdit->setText("Nie :-P.");
	}
}
