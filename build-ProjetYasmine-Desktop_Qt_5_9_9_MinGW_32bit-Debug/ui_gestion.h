/********************************************************************************
** Form generated from reading UI file 'gestion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_H
#define UI_GESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion
{
public:
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_cin;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_email;
    QPushButton *pushButton_ajoutC;
    QPushButton *pushButton_pdf;
    QLineEdit *cinrecherche;
    QPushButton *pushButton_actualiser_citoyen;
    QPushButton *pb_supprimer;
    QPushButton *pushButton_modifier_citoyen;
    QLabel *label_12;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_historiqueC;
    QLabel *label_9;
    QLabel *label_15;
    QLineEdit *lineEdit_evoyer;
    QPushButton *pushButton_mailingC;
    QTableView *tabcitoyen;
    QRadioButton *radioButton_tri_cin;
    QRadioButton *radioButton_trinom;
    QLabel *label_16;
    QLabel *label_13;
    QWidget *tab_6;
    QLineEdit *numD;
    QLineEdit *typeD;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QPushButton *pushButton_ajoutavis;
    QPushButton *pushButton_modifieravis;
    QPushButton *pushButton_suppavis;
    QLineEdit *lineEdit_rechercheD;
    QPushButton *pushButton_pdfavis;
    QPushButton *pushButton_actualiser;
    QTextBrowser *textBrowser_2;
    QLabel *label_11;
    QPushButton *pushButton_historiqueavis;
    QLabel *label_14;
    QComboBox *idcitoyen;
    QTableView *tabledemande;
    QRadioButton *radioButton_triparnum;
    QRadioButton *radioButton_tridesc;
    QLabel *label_17;
    QDateEdit *dateD;
    QLabel *label_5;
    QLineEdit *lineEdit;

    void setupUi(QDialog *gestion)
    {
        if (gestion->objectName().isEmpty())
            gestion->setObjectName(QStringLiteral("gestion"));
        gestion->resize(1281, 710);
        tabWidget_2 = new QTabWidget(gestion);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 20, 1400, 1761));
        QFont font;
        font.setFamily(QStringLiteral("Perpetua"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        tabWidget_2->setFont(font);
        tabWidget_2->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget_2->setStyleSheet(QStringLiteral(""));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label = new QLabel(tab_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 111, 41));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 65, 121, 31));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 141, 41));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 150, 111, 31));
        lineEdit_cin = new QLineEdit(tab_4);
        lineEdit_cin->setObjectName(QStringLiteral("lineEdit_cin"));
        lineEdit_cin->setGeometry(QRect(150, 30, 121, 31));
        lineEdit_nom = new QLineEdit(tab_4);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(150, 70, 121, 31));
        lineEdit_prenom = new QLineEdit(tab_4);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(150, 110, 121, 31));
        lineEdit_email = new QLineEdit(tab_4);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(150, 150, 121, 31));
        pushButton_ajoutC = new QPushButton(tab_4);
        pushButton_ajoutC->setObjectName(QStringLiteral("pushButton_ajoutC"));
        pushButton_ajoutC->setGeometry(QRect(20, 260, 201, 31));
        pushButton_pdf = new QPushButton(tab_4);
        pushButton_pdf->setObjectName(QStringLiteral("pushButton_pdf"));
        pushButton_pdf->setGeometry(QRect(310, 380, 111, 31));
        cinrecherche = new QLineEdit(tab_4);
        cinrecherche->setObjectName(QStringLiteral("cinrecherche"));
        cinrecherche->setGeometry(QRect(110, 340, 111, 31));
        pushButton_actualiser_citoyen = new QPushButton(tab_4);
        pushButton_actualiser_citoyen->setObjectName(QStringLiteral("pushButton_actualiser_citoyen"));
        pushButton_actualiser_citoyen->setGeometry(QRect(470, 380, 111, 31));
        pb_supprimer = new QPushButton(tab_4);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(20, 300, 201, 31));
        pushButton_modifier_citoyen = new QPushButton(tab_4);
        pushButton_modifier_citoyen->setObjectName(QStringLiteral("pushButton_modifier_citoyen"));
        pushButton_modifier_citoyen->setGeometry(QRect(20, 380, 201, 31));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(870, -10, 141, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Perpetua"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_12->setFont(font1);
        textBrowser = new QTextBrowser(tab_4);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(840, 30, 301, 311));
        pushButton_historiqueC = new QPushButton(tab_4);
        pushButton_historiqueC->setObjectName(QStringLiteral("pushButton_historiqueC"));
        pushButton_historiqueC->setGeometry(QRect(994, 360, 91, 31));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 430, 181, 20));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_9->setFont(font2);
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(130, 480, 71, 16));
        lineEdit_evoyer = new QLineEdit(tab_4);
        lineEdit_evoyer->setObjectName(QStringLiteral("lineEdit_evoyer"));
        lineEdit_evoyer->setGeometry(QRect(230, 450, 281, 91));
        pushButton_mailingC = new QPushButton(tab_4);
        pushButton_mailingC->setObjectName(QStringLiteral("pushButton_mailingC"));
        pushButton_mailingC->setGeometry(QRect(480, 560, 91, 31));
        tabcitoyen = new QTableView(tab_4);
        tabcitoyen->setObjectName(QStringLiteral("tabcitoyen"));
        tabcitoyen->setGeometry(QRect(275, 20, 521, 321));
        radioButton_tri_cin = new QRadioButton(tab_4);
        radioButton_tri_cin->setObjectName(QStringLiteral("radioButton_tri_cin"));
        radioButton_tri_cin->setGeometry(QRect(670, 360, 121, 21));
        radioButton_trinom = new QRadioButton(tab_4);
        radioButton_trinom->setObjectName(QStringLiteral("radioButton_trinom"));
        radioButton_trinom->setGeometry(QRect(670, 390, 121, 31));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 350, 61, 16));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(-10, -51, 1291, 761));
        tabWidget_2->addTab(tab_4, QString());
        label_13->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        cinrecherche->raise();
        label_12->raise();
        label_9->raise();
        label_15->raise();
        label_16->raise();
        lineEdit_cin->raise();
        lineEdit_email->raise();
        lineEdit_evoyer->raise();
        lineEdit_prenom->raise();
        lineEdit_nom->raise();
        pushButton_actualiser_citoyen->raise();
        pushButton_ajoutC->raise();
        pushButton_historiqueC->raise();
        pushButton_mailingC->raise();
        pushButton_modifier_citoyen->raise();
        pushButton_pdf->raise();
        radioButton_tri_cin->raise();
        radioButton_trinom->raise();
        tabcitoyen->raise();
        textBrowser->raise();
        pb_supprimer->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        numD = new QLineEdit(tab_6);
        numD->setObjectName(QStringLiteral("numD"));
        numD->setGeometry(QRect(160, 40, 121, 31));
        typeD = new QLineEdit(tab_6);
        typeD->setObjectName(QStringLiteral("typeD"));
        typeD->setGeometry(QRect(100, 160, 121, 31));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 151, 21));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 80, 121, 21));
        label_8 = new QLabel(tab_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 120, 141, 21));
        label_10 = new QLabel(tab_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(16, 160, 81, 21));
        pushButton_ajoutavis = new QPushButton(tab_6);
        pushButton_ajoutavis->setObjectName(QStringLiteral("pushButton_ajoutavis"));
        pushButton_ajoutavis->setGeometry(QRect(40, 210, 181, 31));
        pushButton_modifieravis = new QPushButton(tab_6);
        pushButton_modifieravis->setObjectName(QStringLiteral("pushButton_modifieravis"));
        pushButton_modifieravis->setGeometry(QRect(40, 290, 181, 31));
        pushButton_suppavis = new QPushButton(tab_6);
        pushButton_suppavis->setObjectName(QStringLiteral("pushButton_suppavis"));
        pushButton_suppavis->setGeometry(QRect(40, 250, 181, 31));
        lineEdit_rechercheD = new QLineEdit(tab_6);
        lineEdit_rechercheD->setObjectName(QStringLiteral("lineEdit_rechercheD"));
        lineEdit_rechercheD->setGeometry(QRect(200, 330, 91, 31));
        pushButton_pdfavis = new QPushButton(tab_6);
        pushButton_pdfavis->setObjectName(QStringLiteral("pushButton_pdfavis"));
        pushButton_pdfavis->setGeometry(QRect(450, 330, 101, 31));
        pushButton_actualiser = new QPushButton(tab_6);
        pushButton_actualiser->setObjectName(QStringLiteral("pushButton_actualiser"));
        pushButton_actualiser->setGeometry(QRect(590, 330, 101, 31));
        textBrowser_2 = new QTextBrowser(tab_6);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(750, 40, 331, 271));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(760, 10, 191, 16));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        label_11->setFont(font3);
        pushButton_historiqueavis = new QPushButton(tab_6);
        pushButton_historiqueavis->setObjectName(QStringLiteral("pushButton_historiqueavis"));
        pushButton_historiqueavis->setGeometry(QRect(860, 330, 91, 31));
        label_14 = new QLabel(tab_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(-4, -47, 1111, 711));
        idcitoyen = new QComboBox(tab_6);
        idcitoyen->setObjectName(QStringLiteral("idcitoyen"));
        idcitoyen->setGeometry(QRect(160, 80, 121, 31));
        tabledemande = new QTableView(tab_6);
        tabledemande->setObjectName(QStringLiteral("tabledemande"));
        tabledemande->setGeometry(QRect(290, 41, 451, 261));
        radioButton_triparnum = new QRadioButton(tab_6);
        radioButton_triparnum->setObjectName(QStringLiteral("radioButton_triparnum"));
        radioButton_triparnum->setGeometry(QRect(310, 310, 121, 31));
        radioButton_tridesc = new QRadioButton(tab_6);
        radioButton_tridesc->setObjectName(QStringLiteral("radioButton_tridesc"));
        radioButton_tridesc->setGeometry(QRect(310, 340, 121, 18));
        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 330, 121, 20));
        dateD = new QDateEdit(tab_6);
        dateD->setObjectName(QStringLiteral("dateD"));
        dateD->setGeometry(QRect(160, 120, 121, 31));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 380, 111, 16));
        lineEdit = new QLineEdit(tab_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 380, 741, 111));
        tabWidget_2->addTab(tab_6, QString());
        label_14->raise();
        numD->raise();
        typeD->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_10->raise();
        pushButton_ajoutavis->raise();
        pushButton_modifieravis->raise();
        pushButton_pdfavis->raise();
        textBrowser_2->raise();
        label_11->raise();
        pushButton_historiqueavis->raise();
        idcitoyen->raise();
        tabledemande->raise();
        radioButton_triparnum->raise();
        radioButton_tridesc->raise();
        label_17->raise();
        dateD->raise();
        label_5->raise();
        lineEdit->raise();
        pushButton_actualiser->raise();
        pushButton_suppavis->raise();
        lineEdit_rechercheD->raise();

        retranslateUi(gestion);

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion);
    } // setupUi

    void retranslateUi(QDialog *gestion)
    {
        gestion->setWindowTitle(QApplication::translate("gestion", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("gestion", "Cin", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion", "Nom citoyen :", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion", "Prenom citoyen", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion", "Email :", Q_NULLPTR));
        pushButton_ajoutC->setText(QApplication::translate("gestion", "Ajouter", Q_NULLPTR));
        pushButton_pdf->setText(QApplication::translate("gestion", "Imprimer", Q_NULLPTR));
        pushButton_actualiser_citoyen->setText(QApplication::translate("gestion", "Actualiser", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("gestion", "Supprimer", Q_NULLPTR));
        pushButton_modifier_citoyen->setText(QApplication::translate("gestion", "Modifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion", "Historique:", Q_NULLPTR));
        pushButton_historiqueC->setText(QApplication::translate("gestion", "Historique", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion", "Contacter citoyen :", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion", "texte:", Q_NULLPTR));
        pushButton_mailingC->setText(QApplication::translate("gestion", "Envoyer", Q_NULLPTR));
        radioButton_tri_cin->setText(QApplication::translate("gestion", "tri par CIN ", Q_NULLPTR));
        radioButton_trinom->setText(QApplication::translate("gestion", "tri par nom", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion", "recherche:", Q_NULLPTR));
        label_13->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("gestion", "Gestion des citoyens:", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion", "Num demande :", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion", "Id citoyen:", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion", "Date demande: ", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion", "Type:", Q_NULLPTR));
        pushButton_ajoutavis->setText(QApplication::translate("gestion", "Ajouter", Q_NULLPTR));
        pushButton_modifieravis->setText(QApplication::translate("gestion", "Modifier", Q_NULLPTR));
        pushButton_suppavis->setText(QApplication::translate("gestion", "Supprimer", Q_NULLPTR));
        pushButton_pdfavis->setText(QApplication::translate("gestion", "Imprimer", Q_NULLPTR));
        pushButton_actualiser->setText(QApplication::translate("gestion", "Actualiser", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion", "Historique:", Q_NULLPTR));
        pushButton_historiqueavis->setText(QApplication::translate("gestion", "Historique", Q_NULLPTR));
        label_14->setText(QString());
        radioButton_triparnum->setText(QApplication::translate("gestion", "tri par num ", Q_NULLPTR));
        radioButton_tridesc->setText(QApplication::translate("gestion", "tri descendant", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion", "recherche:", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion", "Description :", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("gestion", "Gestion des demandes :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion: public Ui_gestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_H
