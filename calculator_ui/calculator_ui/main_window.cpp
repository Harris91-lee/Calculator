#include "main_window.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	cur_text.clear();
	value.clear();
}

MainWindow::~MainWindow()
{}

void MainWindow::on_pushButton_one_clicked()
{
	cur_text += '1';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_two_clicked()
{
	cur_text += '2';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_three_clicked()
{
	cur_text += '3';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_four_clicked()
{
	cur_text += '4';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_five_clicked() 
{
	cur_text += '5';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_six_clicked() 
{
	cur_text += '6';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_seven_clicked() 
{
	cur_text += '7';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_eight_clicked() 
{
	cur_text += '8';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_nine_clicked() 
{
	cur_text += '9';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_zero_clicked() 
{
	cur_text += '0';
	ui.lineEdit->setText(cur_text);
}

void MainWindow::on_pushButton_plus_clicked()
{
	oper.push_back(PLUS);

	double val = ui.lineEdit->text().toDouble();
	value.push_back(val);

	ui.lineEdit->clear();
	cur_text.clear();
}

void MainWindow::on_pushButton_minus_clicked()
{
	oper.push_back(MINUS);

	double val = ui.lineEdit->text().toDouble();
	value.push_back(val);

	ui.lineEdit->clear();
	cur_text.clear();
}

void MainWindow::on_pushButton_equal_clicked()
{
	double val = ui.lineEdit->text().toDouble();
	value.push_back(val);

	//calculat

	ui.lineEdit->clear();
}