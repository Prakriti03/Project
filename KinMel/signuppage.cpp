#include "signuppage.h"
#include "ui_signuppage.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include "homepage.h"

signuppage::signuppage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signuppage)
{
    ui->setupUi(this);
    setWindowTitle("Sign up");
}

signuppage::~signuppage()
{
    delete ui;
}
void signuppage::on_pushButton_clicked()
{

    QString un=ui->lineEdit->text();
    QString pw=ui->lineEdit_2->text();
    QString email=ui->lineEdit_3->text();
    QString number=ui->lineEdit_4->text();
    //to check if any info is missing
    if(un==NULL || pw==NULL || email==NULL)
        QMessageBox::warning(this,"Message","Incomplete information!");
    //to check if username is already taken
    else
    {
        QFile inFile("C:/Users/user/Documents/Kinmel/user_database/"+un+".txt");
        if(inFile.open(QFile::ReadOnly | QFile::Text)==1)
        {
            QMessageBox::warning(this,"Message","Username already taken");
            inFile.close();
        }
        else
        {
            QFile outFile("C:/Users/user/Documents/KinMel/user_database/"+un+".txt");
            if(outFile.open(QFile::WriteOnly | QFile::Text))
            {
                QTextStream out(&outFile);
                out << un <<'\n'<< pw<<'\n'<<email<<'\n'<<number;
                QMessageBox::information(this,"Message","Sign up successful.");
                hide();
                homepage home(un);
                home.exec();
                outFile.flush();
                outFile.close();
            }
        }
    }
}

