#include "mainwindow.h"
#include "ui_mainwindow.h"

double first_number;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn_0,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_1,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_2,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_3,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_4,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_5,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_6,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_7,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_8,SIGNAL(clicked()),this,SLOT(digits()));
    connect(ui->btn_9,SIGNAL(clicked()),this,SLOT(digits()));

    connect(ui->btn_plus_minus,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->btn_percent,SIGNAL(clicked()),this,SLOT(operations()));

    connect(ui->btn_divide,SIGNAL(clicked()),this,SLOT(digit_operations()));
    connect(ui->btn_minus,SIGNAL(clicked()),this,SLOT(digit_operations()));
    connect(ui->btn_multiply,SIGNAL(clicked()),this,SLOT(digit_operations()));
    connect(ui->btn_plus,SIGNAL(clicked()),this,SLOT(digit_operations()));

    ui->btn_divide->setCheckable(true);
    ui->btn_plus->setCheckable(true);
    ui->btn_minus->setCheckable(true);
    ui->btn_plus->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits()
{
    QPushButton *btn = (QPushButton *)sender();

    QString string_digits;
    double all_digits;

    if(ui->result_window->text().contains(".") && btn->text() == "0")
    {
        string_digits = ui->result_window->text() + btn->text();
    }
    else
    {
        all_digits = (ui->result_window->text() + btn->text()).toDouble();
        string_digits = QString::number(all_digits, 'g', 10);
    }

    ui->result_window->setText(string_digits);
}

void MainWindow::on_btn_dot_clicked()
{
    if(!(ui->result_window->text().contains(".")))
    {
        ui->result_window->setText(ui->result_window->text() + ".");
    }
}

void MainWindow::operations()
{
    QPushButton *btn = (QPushButton *)sender();

    QString string_digits;
    double all_digits;

    if(btn->text() == "SIGN")
    {
        all_digits = (ui->result_window->text()).toDouble();
        all_digits = all_digits * -1;
        string_digits = QString::number(all_digits, 'g', 10);

        ui->result_window->setText(string_digits);
    }
    else if(btn->text() == "%")
    {
        all_digits = (ui->result_window->text()).toDouble();
        all_digits = all_digits * 0.01;
        string_digits = QString::number(all_digits, 'g', 10);

        ui->result_window->setText(string_digits);
    }
}

void MainWindow::on_btn_ac_clicked()
{
    ui->btn_divide->setChecked(false);
    ui->btn_plus->setChecked(false);
    ui->btn_minus->setChecked(false);
    ui->btn_multiply->setChecked(false);

    ui->result_window->setText("0");
}

void MainWindow::on_btn_equal_clicked()
{
    double result, second_number;
    QString string_digits;

    second_number = ui->result_window->text().toDouble();

    if(ui->btn_plus->isChecked())
    {
        result = first_number + second_number;
        string_digits = QString::number(result, 'g', 10);

        ui->result_window->setText(string_digits);
        ui->btn_plus->setChecked(false);
    }
    else if(ui->btn_minus->isChecked())
    {
        result = first_number - second_number;
        string_digits = QString::number(result, 'g', 10);

        ui->result_window->setText(string_digits);
        ui->btn_minus->setChecked(false);
    }
    else if(ui->btn_divide->isChecked())
    {
        if(second_number == 0)
        {
            ui->result_window->setText("0");
        }
        else
        {
            result = first_number / second_number;
            string_digits = QString::number(result, 'g', 10);

            ui->result_window->setText(string_digits);
        }

        ui->btn_divide->setChecked(false);
    }
    else if(ui->btn_multiply->isChecked())
    {
        result = first_number * second_number;
        string_digits = QString::number(result, 'g', 10);

        ui->result_window->setText(string_digits);
        ui->btn_multiply->setChecked(false);
    }
}

void MainWindow::digit_operations()
{
    QPushButton *btn = (QPushButton *)sender();

    first_number = ui->result_window->text().toDouble();
    ui->result_window->setText("");

    btn->setChecked(true);
}
