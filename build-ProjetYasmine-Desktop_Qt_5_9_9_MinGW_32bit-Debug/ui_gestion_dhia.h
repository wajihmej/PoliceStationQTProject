/********************************************************************************
** Form generated from reading UI file 'gestion_dhia.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_DHIA_H
#define UI_GESTION_DHIA_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_dhia
{
public:
    QAction *actionadd_zone;
    QAction *actiondelete_zone;
    QAction *actionadd_infraction;
    QAction *actiondelete_infraction;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QComboBox *infraction_sel_col;
    QTableView *table_infraction;
    QLineEdit *rech_infraction;
    QLabel *label;
    QPushButton *deleteinfraction;
    QWidget *tab_4;
    QComboBox *zone;
    QLabel *label_8;
    QTimeEdit *heure;
    QDateEdit *date;
    QLabel *label_9;
    QLineEdit *id_inf;
    QComboBox *type;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *btnajout;
    QWidget *tab_7;
    QTimeEdit *heure_modif;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *type_modif;
    QLabel *label_17;
    QDateEdit *date_modif;
    QComboBox *zone_m;
    QLabel *label_18;
    QLabel *label_19;
    QComboBox *id_inf_modif;
    QPushButton *btnmodif;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QComboBox *zone_sel_col;
    QLineEdit *rech_zone;
    QLabel *label_4;
    QTableView *table_zone;
    QPushButton *pushButton_2;
    QPushButton *deletezone;
    QWidget *tab_6;
    QLabel *label_7;
    QLineEdit *id;
    QLabel *label_3;
    QPushButton *btnajoutzone;
    QLineEdit *rue;
    QLabel *label_6;
    QLineEdit *nb_infraction;
    QLineEdit *ville;
    QLabel *label_5;
    QLabel *label_2;
    QWidget *tab_11;
    QLabel *label_37;
    QLineEdit *rue_modif;
    QLabel *label_35;
    QLineEdit *nb_infraction_modif;
    QPushButton *btnmodifzone;
    QLineEdit *ville_modif;
    QLabel *label_34;
    QLabel *label_36;
    QLabel *label_33;
    QComboBox *id_modif_zone;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_dhia)
    {
        if (gestion_dhia->objectName().isEmpty())
            gestion_dhia->setObjectName(QStringLiteral("gestion_dhia"));
        gestion_dhia->resize(812, 612);
        actionadd_zone = new QAction(gestion_dhia);
        actionadd_zone->setObjectName(QStringLiteral("actionadd_zone"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_zone->setIcon(icon);
        actiondelete_zone = new QAction(gestion_dhia);
        actiondelete_zone->setObjectName(QStringLiteral("actiondelete_zone"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_zone->setIcon(icon1);
        actionadd_infraction = new QAction(gestion_dhia);
        actionadd_infraction->setObjectName(QStringLiteral("actionadd_infraction"));
        actiondelete_infraction = new QAction(gestion_dhia);
        actiondelete_infraction->setObjectName(QStringLiteral("actiondelete_infraction"));
        centralwidget = new QWidget(gestion_dhia);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 731, 511));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(16, 9, 691, 481));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        infraction_sel_col = new QComboBox(tab_3);
        infraction_sel_col->setObjectName(QStringLiteral("infraction_sel_col"));
        infraction_sel_col->setGeometry(QRect(580, 20, 81, 22));
        table_infraction = new QTableView(tab_3);
        table_infraction->setObjectName(QStringLiteral("table_infraction"));
        table_infraction->setGeometry(QRect(9, 61, 651, 331));
        table_infraction->setStyleSheet(QStringLiteral(""));
        table_infraction->setSortingEnabled(true);
        table_infraction->horizontalHeader()->setCascadingSectionResizes(true);
        table_infraction->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_infraction->horizontalHeader()->setStretchLastSection(false);
        rech_infraction = new QLineEdit(tab_3);
        rech_infraction->setObjectName(QStringLiteral("rech_infraction"));
        rech_infraction->setGeometry(QRect(419, 20, 151, 24));
        rech_infraction->setClearButtonEnabled(true);
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 10, 251, 31));
        deleteinfraction = new QPushButton(tab_3);
        deleteinfraction->setObjectName(QStringLiteral("deleteinfraction"));
        deleteinfraction->setGeometry(QRect(280, 14, 91, 31));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        zone = new QComboBox(tab_4);
        zone->setObjectName(QStringLiteral("zone"));
        zone->setGeometry(QRect(300, 208, 111, 22));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 93, 47, 14));
        heure = new QTimeEdit(tab_4);
        heure->setObjectName(QStringLiteral("heure"));
        heure->setGeometry(QRect(300, 144, 111, 22));
        date = new QDateEdit(tab_4);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(300, 114, 110, 22));
        date->setCalendarPopup(true);
        date->setDate(QDate(2000, 2, 5));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 212, 71, 16));
        id_inf = new QLineEdit(tab_4);
        id_inf->setObjectName(QStringLiteral("id_inf"));
        id_inf->setGeometry(QRect(300, 89, 113, 20));
        type = new QComboBox(tab_4);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(300, 176, 111, 22));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(210, 42, 211, 41));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(220, 120, 47, 14));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(220, 179, 71, 16));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(220, 150, 47, 14));
        btnajout = new QPushButton(tab_4);
        btnajout->setObjectName(QStringLiteral("btnajout"));
        btnajout->setGeometry(QRect(290, 260, 75, 23));
        tabWidget_2->addTab(tab_4, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        heure_modif = new QTimeEdit(tab_7);
        heure_modif->setObjectName(QStringLiteral("heure_modif"));
        heure_modif->setGeometry(QRect(330, 190, 111, 22));
        label_14 = new QLabel(tab_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(250, 196, 47, 14));
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(250, 258, 71, 16));
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(240, 50, 211, 41));
        type_modif = new QComboBox(tab_7);
        type_modif->setObjectName(QStringLiteral("type_modif"));
        type_modif->setGeometry(QRect(330, 222, 111, 22));
        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(250, 166, 47, 14));
        date_modif = new QDateEdit(tab_7);
        date_modif->setObjectName(QStringLiteral("date_modif"));
        date_modif->setGeometry(QRect(330, 160, 110, 22));
        date_modif->setCalendarPopup(true);
        date_modif->setDate(QDate(2000, 2, 5));
        zone_m = new QComboBox(tab_7);
        zone_m->setObjectName(QStringLiteral("zone_m"));
        zone_m->setGeometry(QRect(330, 254, 111, 22));
        label_18 = new QLabel(tab_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(250, 139, 47, 14));
        label_19 = new QLabel(tab_7);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(250, 225, 71, 16));
        id_inf_modif = new QComboBox(tab_7);
        id_inf_modif->setObjectName(QStringLiteral("id_inf_modif"));
        id_inf_modif->setGeometry(QRect(330, 130, 111, 22));
        btnmodif = new QPushButton(tab_7);
        btnmodif->setObjectName(QStringLiteral("btnmodif"));
        btnmodif->setGeometry(QRect(330, 310, 75, 23));
        tabWidget_2->addTab(tab_7, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 10, 661, 471));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        zone_sel_col = new QComboBox(tab_5);
        zone_sel_col->setObjectName(QStringLiteral("zone_sel_col"));
        zone_sel_col->setGeometry(QRect(570, 20, 81, 22));
        rech_zone = new QLineEdit(tab_5);
        rech_zone->setObjectName(QStringLiteral("rech_zone"));
        rech_zone->setGeometry(QRect(420, 20, 141, 24));
        rech_zone->setClearButtonEnabled(true);
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 211, 31));
        table_zone = new QTableView(tab_5);
        table_zone->setObjectName(QStringLiteral("table_zone"));
        table_zone->setGeometry(QRect(0, 60, 651, 351));
        table_zone->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_zone->setSortingEnabled(true);
        table_zone->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 420, 281, 23));
        deletezone = new QPushButton(tab_5);
        deletezone->setObjectName(QStringLiteral("deletezone"));
        deletezone->setGeometry(QRect(280, 16, 91, 31));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 147, 47, 14));
        id = new QLineEdit(tab_6);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(330, 116, 113, 20));
        id->setInputMethodHints(Qt::ImhNone);
        label_3 = new QLabel(tab_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 69, 161, 41));
        btnajoutzone = new QPushButton(tab_6);
        btnajoutzone->setObjectName(QStringLiteral("btnajoutzone"));
        btnajoutzone->setGeometry(QRect(320, 253, 75, 23));
        rue = new QLineEdit(tab_6);
        rue->setObjectName(QStringLiteral("rue"));
        rue->setGeometry(QRect(330, 173, 113, 20));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 206, 111, 16));
        nb_infraction = new QLineEdit(tab_6);
        nb_infraction->setObjectName(QStringLiteral("nb_infraction"));
        nb_infraction->setGeometry(QRect(380, 203, 61, 20));
        nb_infraction->setReadOnly(true);
        ville = new QLineEdit(tab_6);
        ville->setObjectName(QStringLiteral("ville"));
        ville->setGeometry(QRect(330, 143, 113, 20));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 177, 47, 14));
        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 120, 47, 14));
        tabWidget_3->addTab(tab_6, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_37 = new QLabel(tab_11);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(200, 130, 47, 14));
        rue_modif = new QLineEdit(tab_11);
        rue_modif->setObjectName(QStringLiteral("rue_modif"));
        rue_modif->setGeometry(QRect(280, 183, 113, 20));
        label_35 = new QLabel(tab_11);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(200, 157, 47, 14));
        nb_infraction_modif = new QLineEdit(tab_11);
        nb_infraction_modif->setObjectName(QStringLiteral("nb_infraction_modif"));
        nb_infraction_modif->setGeometry(QRect(330, 213, 61, 20));
        nb_infraction_modif->setReadOnly(true);
        btnmodifzone = new QPushButton(tab_11);
        btnmodifzone->setObjectName(QStringLiteral("btnmodifzone"));
        btnmodifzone->setGeometry(QRect(270, 263, 75, 23));
        ville_modif = new QLineEdit(tab_11);
        ville_modif->setObjectName(QStringLiteral("ville_modif"));
        ville_modif->setGeometry(QRect(280, 153, 113, 20));
        label_34 = new QLabel(tab_11);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(200, 187, 47, 14));
        label_36 = new QLabel(tab_11);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(210, 79, 161, 41));
        label_33 = new QLabel(tab_11);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(200, 216, 111, 16));
        id_modif_zone = new QComboBox(tab_11);
        id_modif_zone->setObjectName(QStringLiteral("id_modif_zone"));
        id_modif_zone->setGeometry(QRect(280, 120, 111, 22));
        tabWidget_3->addTab(tab_11, QString());
        tabWidget->addTab(tab_2, QString());
        gestion_dhia->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_dhia);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 812, 22));
        gestion_dhia->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_dhia);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_dhia->setStatusBar(statusbar);

        retranslateUi(gestion_dhia);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_dhia);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_dhia)
    {
        gestion_dhia->setWindowTitle(QApplication::translate("gestion_dhia", "MainWindow", Q_NULLPTR));
        actionadd_zone->setText(QApplication::translate("gestion_dhia", "add_zone", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_zone->setShortcut(QApplication::translate("gestion_dhia", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_zone->setText(QApplication::translate("gestion_dhia", "delete_zone", Q_NULLPTR));
        actionadd_infraction->setText(QApplication::translate("gestion_dhia", "add_infraction", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_infraction->setShortcut(QApplication::translate("gestion_dhia", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_infraction->setText(QApplication::translate("gestion_dhia", "delete_infraction", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_infraction->setShortcut(QApplication::translate("gestion_dhia", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        infraction_sel_col->clear();
        infraction_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_dhia", "All", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "Date", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "Heure", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "Type", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "Zone", Q_NULLPTR)
        );
        rech_infraction->setPlaceholderText(QApplication::translate("gestion_dhia", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_dhia", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Infractions</span></p></body></html>", Q_NULLPTR));
        deleteinfraction->setText(QApplication::translate("gestion_dhia", "Delete infraction", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("gestion_dhia", "Afficher", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_dhia", "ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_dhia", "Zone", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_dhia", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Infraction</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_dhia", "Date", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_dhia", "Type", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_dhia", "Heure", Q_NULLPTR));
        btnajout->setText(QApplication::translate("gestion_dhia", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("gestion_dhia", "Ajouter", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_dhia", "Heure", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_dhia", "Zone", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion_dhia", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Infraction</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion_dhia", "Date", Q_NULLPTR));
        label_18->setText(QApplication::translate("gestion_dhia", "ID", Q_NULLPTR));
        label_19->setText(QApplication::translate("gestion_dhia", "Type", Q_NULLPTR));
        btnmodif->setText(QApplication::translate("gestion_dhia", "Modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("gestion_dhia", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_dhia", "Infractions", Q_NULLPTR));
        zone_sel_col->clear();
        zone_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_dhia", "All", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "Ville", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "Rue", Q_NULLPTR)
         << QApplication::translate("gestion_dhia", "Nb Infractions", Q_NULLPTR)
        );
        rech_zone->setPlaceholderText(QApplication::translate("gestion_dhia", "Recherche", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_dhia", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Zones</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_dhia", "Imprimer", Q_NULLPTR));
        deletezone->setText(QApplication::translate("gestion_dhia", "Delete Zone", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("gestion_dhia", "Afficher", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_dhia", "Ville", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_dhia", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Zone</span></p></body></html>", Q_NULLPTR));
        btnajoutzone->setText(QApplication::translate("gestion_dhia", "Ajouter", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_dhia", "Nombre Infractions", Q_NULLPTR));
        nb_infraction->setText(QString());
        nb_infraction->setPlaceholderText(QApplication::translate("gestion_dhia", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_dhia", "Rue", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_dhia", "ID", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("gestion_dhia", "Ajouter", Q_NULLPTR));
        label_37->setText(QApplication::translate("gestion_dhia", "ID", Q_NULLPTR));
        label_35->setText(QApplication::translate("gestion_dhia", "Ville", Q_NULLPTR));
        nb_infraction_modif->setText(QString());
        nb_infraction_modif->setPlaceholderText(QApplication::translate("gestion_dhia", "0", Q_NULLPTR));
        btnmodifzone->setText(QApplication::translate("gestion_dhia", "Modifer", Q_NULLPTR));
        label_34->setText(QApplication::translate("gestion_dhia", "Rue", Q_NULLPTR));
        label_36->setText(QApplication::translate("gestion_dhia", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Zone</span></p></body></html>", Q_NULLPTR));
        label_33->setText(QApplication::translate("gestion_dhia", "Nombre Infractions", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("gestion_dhia", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_dhia", "Zones", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_dhia: public Ui_gestion_dhia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_DHIA_H
