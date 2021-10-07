/********************************************************************************
** Form generated from reading UI file 'missioninterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSIONINTERFACE_H
#define UI_MISSIONINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MissionInterface
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_ajouter;
    QLineEdit *type;
    QDateEdit *datemission;
    QLineEdit *nom;
    QWidget *tab_4;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *type_modif;
    QLabel *label_5;
    QLineEdit *nom_modif;
    QLabel *label_6;
    QDateEdit *datemission_modif;
    QPushButton *btn_modif;
    QLabel *label_12;
    QComboBox *comboBox_mission_modif;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *btn_supp;
    QLabel *label_13;
    QComboBox *comboBox_mission_supp;
    QTextBrowser *type_val;
    QTextBrowser *date_val;
    QTextBrowser *nom_val;
    QTableView *table_mission;
    QComboBox *comboBox_tri_mission;
    QLabel *label_30;
    QLabel *label_29;
    QLineEdit *recherche;
    QPushButton *btnpdf;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QLabel *label_10;
    QLabel *label_14;
    QPushButton *btn_ajouter_2;
    QLineEdit *matricule;
    QLineEdit *marque;
    QWidget *tab_6;
    QGroupBox *groupBox_3;
    QLineEdit *matricule_modif;
    QLineEdit *marque_modif;
    QPushButton *btn_modif_2;
    QLabel *label_18;
    QComboBox *comboBox_vehicule_modif;
    QLabel *label_11;
    QLabel *label_15;
    QGroupBox *groupBox_4;
    QPushButton *btn_supp_2;
    QLabel *label_22;
    QComboBox *comboBox_vehicule_supp;
    QTextBrowser *matricule_val;
    QTextBrowser *marque_val;
    QLabel *label_16;
    QLabel *label_17;
    QTableView *table_vehicule;
    QComboBox *comboBox_tri_vehicule;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *recherche_vehicule;
    QWidget *tab_7;
    QLabel *statistiques;

    void setupUi(QDialog *MissionInterface)
    {
        if (MissionInterface->objectName().isEmpty())
            MissionInterface->setObjectName(QStringLiteral("MissionInterface"));
        MissionInterface->resize(1144, 780);
        tabWidget = new QTabWidget(MissionInterface);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(80, 30, 981, 711));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 10, 901, 631));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 103, 61, 41));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 140, 61, 41));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 180, 61, 41));
        btn_ajouter = new QPushButton(tab_3);
        btn_ajouter->setObjectName(QStringLiteral("btn_ajouter"));
        btn_ajouter->setGeometry(QRect(260, 300, 75, 23));
        type = new QLineEdit(tab_3);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(200, 109, 151, 31));
        datemission = new QDateEdit(tab_3);
        datemission->setObjectName(QStringLiteral("datemission"));
        datemission->setGeometry(QRect(200, 147, 151, 31));
        nom = new QLineEdit(tab_3);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(200, 189, 151, 31));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 361, 251));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 76, 61, 41));
        type_modif = new QLineEdit(groupBox);
        type_modif->setObjectName(QStringLiteral("type_modif"));
        type_modif->setGeometry(QRect(110, 82, 151, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 113, 61, 41));
        nom_modif = new QLineEdit(groupBox);
        nom_modif->setObjectName(QStringLiteral("nom_modif"));
        nom_modif->setGeometry(QRect(110, 162, 151, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 153, 61, 41));
        datemission_modif = new QDateEdit(groupBox);
        datemission_modif->setObjectName(QStringLiteral("datemission_modif"));
        datemission_modif->setGeometry(QRect(110, 120, 151, 31));
        btn_modif = new QPushButton(groupBox);
        btn_modif->setObjectName(QStringLiteral("btn_modif"));
        btn_modif->setGeometry(QRect(140, 210, 75, 23));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 31, 61, 21));
        comboBox_mission_modif = new QComboBox(groupBox);
        comboBox_mission_modif->setObjectName(QStringLiteral("comboBox_mission_modif"));
        comboBox_mission_modif->setGeometry(QRect(110, 30, 141, 22));
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(440, 20, 331, 251));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 66, 61, 41));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 94, 61, 41));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 130, 61, 41));
        btn_supp = new QPushButton(groupBox_2);
        btn_supp->setObjectName(QStringLiteral("btn_supp"));
        btn_supp->setGeometry(QRect(110, 200, 75, 23));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 31, 61, 21));
        comboBox_mission_supp = new QComboBox(groupBox_2);
        comboBox_mission_supp->setObjectName(QStringLiteral("comboBox_mission_supp"));
        comboBox_mission_supp->setGeometry(QRect(80, 30, 141, 22));
        type_val = new QTextBrowser(groupBox_2);
        type_val->setObjectName(QStringLiteral("type_val"));
        type_val->setGeometry(QRect(90, 70, 131, 31));
        date_val = new QTextBrowser(groupBox_2);
        date_val->setObjectName(QStringLiteral("date_val"));
        date_val->setGeometry(QRect(90, 100, 131, 31));
        nom_val = new QTextBrowser(groupBox_2);
        nom_val->setObjectName(QStringLiteral("nom_val"));
        nom_val->setGeometry(QRect(90, 130, 131, 31));
        table_mission = new QTableView(tab_4);
        table_mission->setObjectName(QStringLiteral("table_mission"));
        table_mission->setGeometry(QRect(50, 350, 811, 231));
        comboBox_tri_mission = new QComboBox(tab_4);
        comboBox_tri_mission->setObjectName(QStringLiteral("comboBox_tri_mission"));
        comboBox_tri_mission->setGeometry(QRect(451, 296, 131, 22));
        label_30 = new QLabel(tab_4);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(410, 291, 91, 31));
        label_29 = new QLabel(tab_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(80, 291, 91, 31));
        recherche = new QLineEdit(tab_4);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(152, 290, 211, 31));
        btnpdf = new QPushButton(tab_4);
        btnpdf->setObjectName(QStringLiteral("btnpdf"));
        btnpdf->setGeometry(QRect(630, 292, 111, 31));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 10, 901, 631));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(130, 103, 61, 41));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(130, 141, 61, 41));
        btn_ajouter_2 = new QPushButton(tab_5);
        btn_ajouter_2->setObjectName(QStringLiteral("btn_ajouter_2"));
        btn_ajouter_2->setGeometry(QRect(230, 220, 75, 23));
        matricule = new QLineEdit(tab_5);
        matricule->setObjectName(QStringLiteral("matricule"));
        matricule->setGeometry(QRect(200, 109, 151, 31));
        marque = new QLineEdit(tab_5);
        marque->setObjectName(QStringLiteral("marque"));
        marque->setGeometry(QRect(200, 150, 151, 31));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox_3 = new QGroupBox(tab_6);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 20, 361, 251));
        matricule_modif = new QLineEdit(groupBox_3);
        matricule_modif->setObjectName(QStringLiteral("matricule_modif"));
        matricule_modif->setGeometry(QRect(110, 82, 151, 31));
        marque_modif = new QLineEdit(groupBox_3);
        marque_modif->setObjectName(QStringLiteral("marque_modif"));
        marque_modif->setGeometry(QRect(110, 120, 151, 31));
        btn_modif_2 = new QPushButton(groupBox_3);
        btn_modif_2->setObjectName(QStringLiteral("btn_modif_2"));
        btn_modif_2->setGeometry(QRect(140, 210, 75, 23));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 31, 61, 21));
        comboBox_vehicule_modif = new QComboBox(groupBox_3);
        comboBox_vehicule_modif->setObjectName(QStringLiteral("comboBox_vehicule_modif"));
        comboBox_vehicule_modif->setGeometry(QRect(110, 30, 141, 22));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 82, 61, 41));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 120, 61, 41));
        groupBox_4 = new QGroupBox(tab_6);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(440, 20, 331, 251));
        btn_supp_2 = new QPushButton(groupBox_4);
        btn_supp_2->setObjectName(QStringLiteral("btn_supp_2"));
        btn_supp_2->setGeometry(QRect(110, 200, 75, 23));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(20, 31, 61, 21));
        comboBox_vehicule_supp = new QComboBox(groupBox_4);
        comboBox_vehicule_supp->setObjectName(QStringLiteral("comboBox_vehicule_supp"));
        comboBox_vehicule_supp->setGeometry(QRect(80, 30, 141, 22));
        matricule_val = new QTextBrowser(groupBox_4);
        matricule_val->setObjectName(QStringLiteral("matricule_val"));
        matricule_val->setGeometry(QRect(90, 70, 131, 31));
        marque_val = new QTextBrowser(groupBox_4);
        marque_val->setObjectName(QStringLiteral("marque_val"));
        marque_val->setGeometry(QRect(90, 110, 131, 31));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 70, 61, 41));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 108, 61, 41));
        table_vehicule = new QTableView(tab_6);
        table_vehicule->setObjectName(QStringLiteral("table_vehicule"));
        table_vehicule->setGeometry(QRect(50, 350, 811, 231));
        comboBox_tri_vehicule = new QComboBox(tab_6);
        comboBox_tri_vehicule->setObjectName(QStringLiteral("comboBox_tri_vehicule"));
        comboBox_tri_vehicule->setGeometry(QRect(451, 296, 131, 22));
        label_31 = new QLabel(tab_6);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(410, 291, 91, 31));
        label_32 = new QLabel(tab_6);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(80, 291, 91, 31));
        recherche_vehicule = new QLineEdit(tab_6);
        recherche_vehicule->setObjectName(QStringLiteral("recherche_vehicule"));
        recherche_vehicule->setGeometry(QRect(152, 290, 211, 31));
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        statistiques = new QLabel(tab_7);
        statistiques->setObjectName(QStringLiteral("statistiques"));
        statistiques->setGeometry(QRect(80, 60, 671, 371));
        tabWidget_3->addTab(tab_7, QString());
        tabWidget->addTab(tab_2, QString());

        retranslateUi(MissionInterface);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MissionInterface);
    } // setupUi

    void retranslateUi(QDialog *MissionInterface)
    {
        MissionInterface->setWindowTitle(QApplication::translate("MissionInterface", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("MissionInterface", "Type :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MissionInterface", "Date :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MissionInterface", "Nom :", Q_NULLPTR));
        btn_ajouter->setText(QApplication::translate("MissionInterface", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MissionInterface", "Ajouter Mission", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MissionInterface", "Modifier", Q_NULLPTR));
        label_4->setText(QApplication::translate("MissionInterface", "Type :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MissionInterface", "Date :", Q_NULLPTR));
        label_6->setText(QApplication::translate("MissionInterface", "Nom :", Q_NULLPTR));
        btn_modif->setText(QApplication::translate("MissionInterface", "Modifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("MissionInterface", "ID", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MissionInterface", "Supprimer", Q_NULLPTR));
        label_7->setText(QApplication::translate("MissionInterface", "Type :", Q_NULLPTR));
        label_8->setText(QApplication::translate("MissionInterface", "Date :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MissionInterface", "Nom :", Q_NULLPTR));
        btn_supp->setText(QApplication::translate("MissionInterface", "Supprimer", Q_NULLPTR));
        label_13->setText(QApplication::translate("MissionInterface", "ID", Q_NULLPTR));
        label_30->setText(QApplication::translate("MissionInterface", "Tri :", Q_NULLPTR));
        label_29->setText(QApplication::translate("MissionInterface", "Recherche :", Q_NULLPTR));
        btnpdf->setText(QApplication::translate("MissionInterface", "Imprimer PDF", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MissionInterface", "Afficher Mission", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MissionInterface", "Mission", Q_NULLPTR));
        label_10->setText(QApplication::translate("MissionInterface", "Matricule :", Q_NULLPTR));
        label_14->setText(QApplication::translate("MissionInterface", "Marque :", Q_NULLPTR));
        btn_ajouter_2->setText(QApplication::translate("MissionInterface", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MissionInterface", "Ajouter Vehicule", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MissionInterface", "Modifier", Q_NULLPTR));
        btn_modif_2->setText(QApplication::translate("MissionInterface", "Modifier", Q_NULLPTR));
        label_18->setText(QApplication::translate("MissionInterface", "ID", Q_NULLPTR));
        label_11->setText(QApplication::translate("MissionInterface", "Matricule :", Q_NULLPTR));
        label_15->setText(QApplication::translate("MissionInterface", "Marque :", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MissionInterface", "Supprimer", Q_NULLPTR));
        btn_supp_2->setText(QApplication::translate("MissionInterface", "Supprimer", Q_NULLPTR));
        label_22->setText(QApplication::translate("MissionInterface", "ID", Q_NULLPTR));
        label_16->setText(QApplication::translate("MissionInterface", "Matricule :", Q_NULLPTR));
        label_17->setText(QApplication::translate("MissionInterface", "Marque :", Q_NULLPTR));
        label_31->setText(QApplication::translate("MissionInterface", "Tri :", Q_NULLPTR));
        label_32->setText(QApplication::translate("MissionInterface", "Recherche :", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MissionInterface", "Afficher Vehicule", Q_NULLPTR));
        statistiques->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MissionInterface", "statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MissionInterface", "Vehicule", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MissionInterface: public Ui_MissionInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSIONINTERFACE_H
