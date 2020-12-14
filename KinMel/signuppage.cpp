#include "signuppage.h"
#include "ui_signuppage.h"
#include<QMessageBox>
#include<QTextStream>
#include<QFile>
#include "homepage.h"
#include<QDialog>

signuppage::signuppage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signuppage)
{
    ui->setupUi(this);
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
    if(un==NULL || pw==NULL || email==NULL || number==NULL )
    {
        QMessageBox::warning(this,"title","Incomplete information!");
    //to check if username is already taken
    }
    else
    {

    QFile inFile("C:/Users/user/Documents/Kinmel/user_database/"+un+".txt");
    if(inFile.open(QFile::ReadOnly | QFile::Text)==1){
        QMessageBox::warning(this,"title","Username already taken");
    }
    else
    {

    QFile outFile("C:/Users/user/Documents/KinMel/user_database/"+un+".txt");


    if(outFile.open(QFile::WriteOnly | QFile::Text)){
    QTextStream out(&outFile);


    out << un <<'\n'<< pw<<'\n'<<email<<'\n'<<number;

    QMessageBox::information(this,"title","Sign up successful.");

    hide();

     homepage home(un);
     home.setModal(true);  //opening this dialogue doesnt let use previous dialogue
     home.exec();

    outFile.flush();
    outFile.close();
    };
    };
    };
}

