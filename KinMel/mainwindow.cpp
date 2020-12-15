#include "mainwindow.h"
#include "ui_log_in.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "signuppage.h"
#include "homepage.h"
#include <QPixmap>
#include <QDialog>

MainWindow::MainWindow(QWidget *parent):
     QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Log In");
    QPixmap pix("C:/Users/user/Documents/KinMel/716c0cdffdc9f2181daf707328c0555f.jpg");
    QPixmap pix2("C:/Users/user/Documents/KinMel/40a31b980395f5d7a17d9c49b56f039b.jpg");
    QPixmap pix3("C:/Users/user/Documents/KinMel/ladies-readymade-garments-500x500.jpg");
    ui->label_5->setPixmap(pix);
    ui->label_6->setPixmap(pix2);
    ui->label_7->setPixmap(pix3);
    ui->lineEdit->setPlaceholderText("Enter your username");
    ui->lineEdit_2->setPlaceholderText("Enter your password");
}

MainWindow::~MainWindow()
{
    delete ui;
}
//read and check
void MainWindow::on_pushButton_clicked()    //login
{
    QString Username=ui->lineEdit->text();
    QString Password=ui->lineEdit_2->text();
    if (Username==NULL || Password==NULL)
        QMessageBox::warning(this,"Message","Incomplete information!");
    else
    {
        QFile inFile("C:/Users/user/Documents/KinMel/user_database/"+Username+".txt");
        if(inFile.open(QFile::ReadOnly | QFile::Text))
        {
            QTextStream in(&inFile);
            QString un,pw ;
            in>>un>>pw;
            if (pw == Password) //opens homepage
            {
                hide();
                homepage home(un);
                //home.setModal(true); //opening this dialogue doesnt let use previous dialogue
                home.exec();
            }
            else
                QMessageBox::warning(this,"Message","Please check your password.");
            inFile.close();
        }
        else
            QMessageBox::warning(this,"Message","User unidentified. Please register first.");
    }
}
void MainWindow::on_pushButton_2_clicked()  //open signup page
{
    hide();
    signuppage sign_up;
    //sign_up.setModal(true);
    sign_up.exec();
}





