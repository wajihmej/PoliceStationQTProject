/********************************************************************************
** Form generated from reading UI file 'gestion_selmen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_SELMEN_H
#define UI_GESTION_SELMEN_H

#include <QtCore/QLocale>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_selmen
{
public:
    QAction *actionadd_crime;
    QAction *actiondelete_crime;
    QAction *actionadd_criminel;
    QAction *actiondelete_criminel;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QComboBox *crime_sel_col;
    QLabel *label;
    QTableView *table_crime;
    QPushButton *stat_crime;
    QLineEdit *rech_crime;
    QPushButton *btnsuppcrime;
    QWidget *tab_4;
    QLineEdit *nb_criminel;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *type;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *id;
    QLabel *label_7;
    QDateEdit *date;
    QPushButton *btn_ajout_crim;
    QWidget *tab_5;
    QComboBox *type_modif;
    QLabel *label_8;
    QDateEdit *date_modif;
    QLabel *label_9;
    QPushButton *btn_modif_crim;
    QLineEdit *nb_criminel_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *id_crime_modif;
    QWidget *tab_9;
    QLabel *label_stat;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QComboBox *criminel_sel_col;
    QLineEdit *rech_criminel;
    QTableView *table_criminel;
    QLabel *label_4;
    QPushButton *btnsuppcriminel;
    QWidget *tab_7;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *prenom;
    QComboBox *crime;
    QLineEdit *id_criminel;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *nom;
    QPushButton *btnajoutcriminel;
    QWidget *tab_8;
    QLabel *label_18;
    QPushButton *btnamodifcriminel;
    QLineEdit *prenom_modif;
    QLabel *label_19;
    QComboBox *crime_modif;
    QLabel *label_20;
    QLineEdit *nom_modif;
    QLabel *label_21;
    QLabel *label_22;
    QComboBox *id_criminel_modif;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_selmen)
    {
        if (gestion_selmen->objectName().isEmpty())
            gestion_selmen->setObjectName(QStringLiteral("gestion_selmen"));
        gestion_selmen->resize(780, 563);
        actionadd_crime = new QAction(gestion_selmen);
        actionadd_crime->setObjectName(QStringLiteral("actionadd_crime"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_crime->setIcon(icon);
        actiondelete_crime = new QAction(gestion_selmen);
        actiondelete_crime->setObjectName(QStringLiteral("actiondelete_crime"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_crime->setIcon(icon1);
        actionadd_criminel = new QAction(gestion_selmen);
        actionadd_criminel->setObjectName(QStringLiteral("actionadd_criminel"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/img/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_criminel->setIcon(icon2);
        actiondelete_criminel = new QAction(gestion_selmen);
        actiondelete_criminel->setObjectName(QStringLiteral("actiondelete_criminel"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_criminel->setIcon(icon3);
        centralwidget = new QWidget(gestion_selmen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 711, 461));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 0, 671, 431));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        crime_sel_col = new QComboBox(tab_3);
        crime_sel_col->setObjectName(QStringLiteral("crime_sel_col"));
        crime_sel_col->setGeometry(QRect(580, 10, 81, 22));
        crime_sel_col->setLayoutDirection(Qt::LeftToRight);
        crime_sel_col->setAutoFillBackground(true);
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 0, 221, 31));
        table_crime = new QTableView(tab_3);
        table_crime->setObjectName(QStringLiteral("table_crime"));
        table_crime->setGeometry(QRect(9, 51, 651, 331));
        table_crime->setStyleSheet(QStringLiteral(""));
        table_crime->setSortingEnabled(true);
        table_crime->horizontalHeader()->setCascadingSectionResizes(true);
        table_crime->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_crime->horizontalHeader()->setStretchLastSection(false);
        stat_crime = new QPushButton(tab_3);
        stat_crime->setObjectName(QStringLiteral("stat_crime"));
        stat_crime->setGeometry(QRect(379, 10, 24, 24));
        stat_crime->setStyleSheet(QStringLiteral("background-image: url(:/res/img/unnamed.png);"));
        rech_crime = new QLineEdit(tab_3);
        rech_crime->setObjectName(QStringLiteral("rech_crime"));
        rech_crime->setGeometry(QRect(419, 10, 151, 24));
        rech_crime->setClearButtonEnabled(true);
        btnsuppcrime = new QPushButton(tab_3);
        btnsuppcrime->setObjectName(QStringLiteral("btnsuppcrime"));
        btnsuppcrime->setGeometry(QRect(260, 10, 75, 23));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        nb_criminel = new QLineEdit(tab_4);
        nb_criminel->setObjectName(QStringLiteral("nb_criminel"));
        nb_criminel->setGeometry(QRect(300, 204, 61, 20));
        nb_criminel->setReadOnly(true);
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 133, 47, 14));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 166, 71, 16));
        type = new QComboBox(tab_4);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(251, 164, 111, 22));
        type->setAutoFillBackground(true);
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 207, 91, 16));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 53, 161, 41));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 85, 0);"));
        id = new QLineEdit(tab_4);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(250, 100, 113, 20));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 104, 47, 14));
        date = new QDateEdit(tab_4);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(250, 130, 110, 22));
        date->setCalendarPopup(true);
        btn_ajout_crim = new QPushButton(tab_4);
        btn_ajout_crim->setObjectName(QStringLiteral("btn_ajout_crim"));
        btn_ajout_crim->setGeometry(QRect(250, 260, 75, 23));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        type_modif = new QComboBox(tab_5);
        type_modif->setObjectName(QStringLiteral("type_modif"));
        type_modif->setGeometry(QRect(271, 161, 111, 22));
        type_modif->setAutoFillBackground(true);
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(190, 101, 47, 14));
        date_modif = new QDateEdit(tab_5);
        date_modif->setObjectName(QStringLiteral("date_modif"));
        date_modif->setGeometry(QRect(270, 127, 110, 22));
        date_modif->setCalendarPopup(true);
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 163, 71, 16));
        btn_modif_crim = new QPushButton(tab_5);
        btn_modif_crim->setObjectName(QStringLiteral("btn_modif_crim"));
        btn_modif_crim->setGeometry(QRect(270, 257, 75, 23));
        nb_criminel_2 = new QLineEdit(tab_5);
        nb_criminel_2->setObjectName(QStringLiteral("nb_criminel_2"));
        nb_criminel_2->setGeometry(QRect(320, 201, 61, 20));
        nb_criminel_2->setReadOnly(true);
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(190, 204, 91, 16));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(190, 130, 47, 14));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 50, 161, 41));
        label_12->setStyleSheet(QStringLiteral("color: rgb(255, 85, 0);"));
        id_crime_modif = new QComboBox(tab_5);
        id_crime_modif->setObjectName(QStringLiteral("id_crime_modif"));
        id_crime_modif->setGeometry(QRect(270, 98, 111, 22));
        tabWidget_2->addTab(tab_5, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_stat = new QLabel(tab_9);
        label_stat->setObjectName(QStringLiteral("label_stat"));
        label_stat->setGeometry(QRect(110, 0, 400, 400));
        tabWidget_2->addTab(tab_9, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setAutoFillBackground(true);
        tab_2->setLocale(QLocale(QLocale::French, QLocale::France));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(16, 9, 671, 451));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        criminel_sel_col = new QComboBox(tab_6);
        criminel_sel_col->setObjectName(QStringLiteral("criminel_sel_col"));
        criminel_sel_col->setGeometry(QRect(580, 20, 81, 22));
        criminel_sel_col->setAutoFillBackground(false);
        criminel_sel_col->setStyleSheet(QStringLiteral("rgb(85, 170, 0)"));
        rech_criminel = new QLineEdit(tab_6);
        rech_criminel->setObjectName(QStringLiteral("rech_criminel"));
        rech_criminel->setGeometry(QRect(430, 20, 141, 24));
        rech_criminel->setClearButtonEnabled(true);
        table_criminel = new QTableView(tab_6);
        table_criminel->setObjectName(QStringLiteral("table_criminel"));
        table_criminel->setGeometry(QRect(10, 60, 651, 361));
        table_criminel->setStyleSheet(QStringLiteral(""));
        table_criminel->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_criminel->setSortingEnabled(true);
        table_criminel->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 10, 221, 31));
        btnsuppcriminel = new QPushButton(tab_6);
        btnsuppcriminel->setObjectName(QStringLiteral("btnsuppcriminel"));
        btnsuppcriminel->setGeometry(QRect(290, 20, 75, 23));
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_13 = new QLabel(tab_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(200, 124, 47, 14));
        label_14 = new QLabel(tab_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(200, 180, 47, 14));
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(200, 73, 201, 41));
        prenom = new QLineEdit(tab_7);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(280, 180, 113, 20));
        crime = new QComboBox(tab_7);
        crime->setObjectName(QStringLiteral("crime"));
        crime->setGeometry(QRect(281, 210, 111, 22));
        id_criminel = new QLineEdit(tab_7);
        id_criminel->setObjectName(QStringLiteral("id_criminel"));
        id_criminel->setGeometry(QRect(280, 120, 113, 20));
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(200, 212, 71, 16));
        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(200, 153, 47, 14));
        nom = new QLineEdit(tab_7);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(280, 150, 113, 20));
        btnajoutcriminel = new QPushButton(tab_7);
        btnajoutcriminel->setObjectName(QStringLiteral("btnajoutcriminel"));
        btnajoutcriminel->setGeometry(QRect(280, 260, 75, 23));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_18 = new QLabel(tab_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(210, 170, 47, 14));
        btnamodifcriminel = new QPushButton(tab_8);
        btnamodifcriminel->setObjectName(QStringLiteral("btnamodifcriminel"));
        btnamodifcriminel->setGeometry(QRect(290, 277, 75, 23));
        prenom_modif = new QLineEdit(tab_8);
        prenom_modif->setObjectName(QStringLiteral("prenom_modif"));
        prenom_modif->setGeometry(QRect(290, 197, 113, 20));
        label_19 = new QLabel(tab_8);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(210, 90, 201, 41));
        crime_modif = new QComboBox(tab_8);
        crime_modif->setObjectName(QStringLiteral("crime_modif"));
        crime_modif->setGeometry(QRect(291, 227, 111, 22));
        label_20 = new QLabel(tab_8);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(210, 141, 47, 14));
        nom_modif = new QLineEdit(tab_8);
        nom_modif->setObjectName(QStringLiteral("nom_modif"));
        nom_modif->setGeometry(QRect(290, 167, 113, 20));
        label_21 = new QLabel(tab_8);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(210, 229, 71, 16));
        label_22 = new QLabel(tab_8);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(210, 197, 47, 14));
        id_criminel_modif = new QComboBox(tab_8);
        id_criminel_modif->setObjectName(QStringLiteral("id_criminel_modif"));
        id_criminel_modif->setGeometry(QRect(290, 137, 111, 22));
        tabWidget_3->addTab(tab_8, QString());
        tabWidget->addTab(tab_2, QString());
        gestion_selmen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_selmen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 780, 22));
        gestion_selmen->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_selmen);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_selmen->setStatusBar(statusbar);

        retranslateUi(gestion_selmen);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_selmen);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_selmen)
    {
        gestion_selmen->setWindowTitle(QApplication::translate("gestion_selmen", "MainWindow", Q_NULLPTR));
        actionadd_crime->setText(QApplication::translate("gestion_selmen", "add_crime", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_crime->setShortcut(QApplication::translate("gestion_selmen", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_crime->setText(QApplication::translate("gestion_selmen", "delete_crime", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_crime->setShortcut(QApplication::translate("gestion_selmen", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionadd_criminel->setText(QApplication::translate("gestion_selmen", "add_criminel", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_criminel->setShortcut(QApplication::translate("gestion_selmen", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_criminel->setText(QApplication::translate("gestion_selmen", "delete_criminel", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_criminel->setShortcut(QApplication::translate("gestion_selmen", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        crime_sel_col->clear();
        crime_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_selmen", "All", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "Date", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "Type", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "Nb Criminels", Q_NULLPTR)
        );
        label->setText(QApplication::translate("gestion_selmen", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00aa00;\">Gestion Crime</span></p></body></html>", Q_NULLPTR));
        stat_crime->setText(QString());
        rech_crime->setText(QString());
        rech_crime->setPlaceholderText(QApplication::translate("gestion_selmen", "Recherche", Q_NULLPTR));
        btnsuppcrime->setText(QApplication::translate("gestion_selmen", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("gestion_selmen", "Afficher", Q_NULLPTR));
        nb_criminel->setText(QString());
        nb_criminel->setPlaceholderText(QApplication::translate("gestion_selmen", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_selmen", "Date", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_selmen", "Type", Q_NULLPTR));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("gestion_selmen", "type 1", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "type 2", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "type 3", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("gestion_selmen", "Nombre Criminels", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_selmen", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00aa00;\">Details Crime</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_selmen", "ID", Q_NULLPTR));
        btn_ajout_crim->setText(QApplication::translate("gestion_selmen", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("gestion_selmen", "Ajouter", Q_NULLPTR));
        type_modif->clear();
        type_modif->insertItems(0, QStringList()
         << QApplication::translate("gestion_selmen", "type 1", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "type 2", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "type 3", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("gestion_selmen", "ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_selmen", "Type", Q_NULLPTR));
        btn_modif_crim->setText(QApplication::translate("gestion_selmen", "Modifer", Q_NULLPTR));
        nb_criminel_2->setText(QString());
        nb_criminel_2->setPlaceholderText(QApplication::translate("gestion_selmen", "0", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_selmen", "Nombre Criminels", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_selmen", "Date", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_selmen", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00aa00;\">Details Crime</span></p></body></html>", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("gestion_selmen", "Modifier", Q_NULLPTR));
        label_stat->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("gestion_selmen", "Stat", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_selmen", "Crimes", Q_NULLPTR));
        criminel_sel_col->clear();
        criminel_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_selmen", "All", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "Prenom", Q_NULLPTR)
         << QApplication::translate("gestion_selmen", "Crime", Q_NULLPTR)
        );
        rech_criminel->setPlaceholderText(QApplication::translate("gestion_selmen", "Recherche", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_selmen", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00aa00;\">Gestion Criminels</span></p></body></html>", Q_NULLPTR));
        btnsuppcriminel->setText(QApplication::translate("gestion_selmen", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("gestion_selmen", "Afficher", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_selmen", "ID", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_selmen", "Prenom", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_selmen", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00aa00;\">Details Criminel</span></p></body></html>", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion_selmen", "Crime", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion_selmen", "Nom", Q_NULLPTR));
        btnajoutcriminel->setText(QApplication::translate("gestion_selmen", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("gestion_selmen", "Ajouter", Q_NULLPTR));
        label_18->setText(QApplication::translate("gestion_selmen", "Nom", Q_NULLPTR));
        btnamodifcriminel->setText(QApplication::translate("gestion_selmen", "Modifier", Q_NULLPTR));
        label_19->setText(QApplication::translate("gestion_selmen", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00aa00;\">Details Criminel</span></p></body></html>", Q_NULLPTR));
        label_20->setText(QApplication::translate("gestion_selmen", "ID", Q_NULLPTR));
        label_21->setText(QApplication::translate("gestion_selmen", "Crime", Q_NULLPTR));
        label_22->setText(QApplication::translate("gestion_selmen", "Prenom", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("gestion_selmen", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_selmen", "Criminels", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_selmen: public Ui_gestion_selmen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_SELMEN_H
