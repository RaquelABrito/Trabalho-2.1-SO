/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho2;
    QLabel *label_trilho3;
    QLabel *label_trilho4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_trilho4_2;
    QLabel *label_trilho1_2;
    QLabel *label_trilho2_2;
    QLabel *label_trem2;
    QPushButton *pushButton_3;
    QLabel *label_trilho3_2;
    QLabel *label_trilho4_5;
    QLabel *label_trilho2_4;
    QLabel *label_trilho1_3;
    QLabel *label_trilho4_3;
    QLabel *label_trilho2_3;
    QLabel *label_trilho1_4;
    QLabel *label_trem2_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1056, 409);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QStringLiteral("label_trem1"));
        label_trem1->setGeometry(QRect(60, 30, 21, 20));
        label_trem1->setStyleSheet(QStringLiteral("QLabel { background: red}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName(QStringLiteral("label_trilho1"));
        label_trilho1->setGeometry(QRect(80, 30, 250, 17));
        label_trilho1->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho2 = new QLabel(centralWidget);
        label_trilho2->setObjectName(QStringLiteral("label_trilho2"));
        label_trilho2->setGeometry(QRect(80, 150, 250, 17));
        label_trilho2->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho3 = new QLabel(centralWidget);
        label_trilho3->setObjectName(QStringLiteral("label_trilho3"));
        label_trilho3->setGeometry(QRect(330, 30, 21, 137));
        label_trilho3->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QStringLiteral("label_trilho4"));
        label_trilho4->setGeometry(QRect(60, 30, 21, 137));
        label_trilho4->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 320, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 320, 98, 27));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName(QStringLiteral("label_trilho4_2"));
        label_trilho4_2->setGeometry(QRect(600, 30, 21, 137));
        label_trilho4_2->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName(QStringLiteral("label_trilho1_2"));
        label_trilho1_2->setGeometry(QRect(350, 30, 250, 17));
        label_trilho1_2->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho2_2 = new QLabel(centralWidget);
        label_trilho2_2->setObjectName(QStringLiteral("label_trilho2_2"));
        label_trilho2_2->setGeometry(QRect(350, 150, 250, 17));
        label_trilho2_2->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QStringLiteral("label_trem2"));
        label_trem2->setGeometry(QRect(310, 30, 21, 17));
        label_trem2->setStyleSheet(QStringLiteral("QLabel { background: red}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(490, 320, 171, 27));
        label_trilho3_2 = new QLabel(centralWidget);
        label_trilho3_2->setObjectName(QStringLiteral("label_trilho3_2"));
        label_trilho3_2->setGeometry(QRect(320, 170, 21, 137));
        label_trilho3_2->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho4_5 = new QLabel(centralWidget);
        label_trilho4_5->setObjectName(QStringLiteral("label_trilho4_5"));
        label_trilho4_5->setGeometry(QRect(590, 170, 21, 137));
        label_trilho4_5->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho2_4 = new QLabel(centralWidget);
        label_trilho2_4->setObjectName(QStringLiteral("label_trilho2_4"));
        label_trilho2_4->setGeometry(QRect(340, 290, 250, 17));
        label_trilho2_4->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho1_3 = new QLabel(centralWidget);
        label_trilho1_3->setObjectName(QStringLiteral("label_trilho1_3"));
        label_trilho1_3->setGeometry(QRect(340, 170, 250, 17));
        label_trilho1_3->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho4_3 = new QLabel(centralWidget);
        label_trilho4_3->setObjectName(QStringLiteral("label_trilho4_3"));
        label_trilho4_3->setGeometry(QRect(870, 30, 21, 137));
        label_trilho4_3->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho2_3 = new QLabel(centralWidget);
        label_trilho2_3->setObjectName(QStringLiteral("label_trilho2_3"));
        label_trilho2_3->setGeometry(QRect(620, 150, 250, 17));
        label_trilho2_3->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trilho1_4 = new QLabel(centralWidget);
        label_trilho1_4->setObjectName(QStringLiteral("label_trilho1_4"));
        label_trilho1_4->setGeometry(QRect(620, 30, 250, 17));
        label_trilho1_4->setStyleSheet(QStringLiteral("QLabel { background: yellow}"));
        label_trem2_2 = new QLabel(centralWidget);
        label_trem2_2->setObjectName(QStringLiteral("label_trem2_2"));
        label_trem2_2->setGeometry(QRect(670, 20, 21, 17));
        label_trem2_2->setStyleSheet(QStringLiteral("QLabel { background: red}"));
        MainWindow->setCentralWidget(centralWidget);
        label_trilho1->raise();
        label_trilho2->raise();
        label_trilho3->raise();
        label_trilho4->raise();
        label_trem1->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_trilho4_2->raise();
        label_trilho1_2->raise();
        label_trilho2_2->raise();
        label_trem2->raise();
        pushButton_3->raise();
        label_trilho3_2->raise();
        label_trilho4_5->raise();
        label_trilho2_4->raise();
        label_trilho1_3->raise();
        label_trilho4_3->raise();
        label_trilho2_3->raise();
        label_trilho1_4->raise();
        label_trem2_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1056, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_trem1->setText(QApplication::translate("MainWindow", "T1", Q_NULLPTR));
        label_trilho1->setText(QString());
        label_trilho2->setText(QString());
        label_trilho3->setText(QString());
        label_trilho4->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ligar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Parar", Q_NULLPTR));
        label_trilho4_2->setText(QString());
        label_trilho1_2->setText(QString());
        label_trilho2_2->setText(QString());
        label_trem2->setText(QApplication::translate("MainWindow", "T2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Aumentar velocidade", Q_NULLPTR));
        label_trilho3_2->setText(QString());
        label_trilho4_5->setText(QString());
        label_trilho2_4->setText(QString());
        label_trilho1_3->setText(QString());
        label_trilho4_3->setText(QString());
        label_trilho2_3->setText(QString());
        label_trilho1_4->setText(QString());
        label_trem2_2->setText(QApplication::translate("MainWindow", "T2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
