#pragma once

#include <QMainWindow>
#include "ui_main_window.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private:
	Ui::MainWindowClass ui;
	void on_pushButton_one_clicked();
	void on_pushButton_two_clicked();
	void on_pushButton_three_clicked();
	void on_pushButton_four_clicked();
	void on_pushButton_five_clicked();
	void on_pushButton_six_clicked();
	void on_pushButton_seven_clicked();
	void on_pushButton_eight_clicked();
	void on_pushButton_nine_clicked();
	void on_pushButton_zero_clicked();
};
