/********************************************************************************
** Form generated from reading UI file 'statistique_etat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIQUE_ETAT_H
#define UI_STATISTIQUE_ETAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statistique_etat
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *statistique_etat)
    {
        if (statistique_etat->objectName().isEmpty())
            statistique_etat->setObjectName(QStringLiteral("statistique_etat"));
        statistique_etat->resize(800, 600);
        menubar = new QMenuBar(statistique_etat);
        menubar->setObjectName(QStringLiteral("menubar"));
        statistique_etat->setMenuBar(menubar);
        centralwidget = new QWidget(statistique_etat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        statistique_etat->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(statistique_etat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statistique_etat->setStatusBar(statusbar);

        retranslateUi(statistique_etat);

        QMetaObject::connectSlotsByName(statistique_etat);
    } // setupUi

    void retranslateUi(QMainWindow *statistique_etat)
    {
        statistique_etat->setWindowTitle(QApplication::translate("statistique_etat", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class statistique_etat: public Ui_statistique_etat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIQUE_ETAT_H
