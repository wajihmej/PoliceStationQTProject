/********************************************************************************
** Form generated from reading UI file 'gestion_adam.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_ADAM_H
#define UI_GESTION_ADAM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
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

class Ui_gestion_adam
{
public:
    QAction *actionadd_employe;
    QAction *actiondelete_employe;
    QAction *actionadd_grade;
    QAction *actiondelete_grade;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QComboBox *employe_sel_col;
    QLabel *label;
    QTableView *table_employe;
    QPushButton *export_2;
    QLineEdit *rech_employe;
    QWidget *tab_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDateEdit *naissance;
    QDoubleSpinBox *salaire;
    QLineEdit *tel;
    QLabel *label_12;
    QLineEdit *nom;
    QLineEdit *mail;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *grade;
    QLabel *label_15;
    QLineEdit *id_emp;
    QLabel *label_16;
    QPushButton *btn_ajouter_emp;
    QWidget *tab_5;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *btn_modif_emp;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *tel_modif;
    QLabel *label_22;
    QLineEdit *mail_modif;
    QLabel *label_23;
    QComboBox *grade_modif;
    QLineEdit *nom_modif;
    QDateEdit *naissance_modif;
    QDoubleSpinBox *salaire_modif;
    QLabel *label_24;
    QComboBox *id_modif_emp;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QComboBox *grade_sel_col;
    QLineEdit *rech_grade;
    QTableView *table_grade;
    QLabel *label_4;
    QPushButton *btn_supp_grade;
    QWidget *tab_7;
    QLineEdit *description;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *id;
    QLabel *label_2;
    QPushButton *btn_ajouter_Grade;
    QWidget *tab_8;
    QPushButton *btn_modifier_Grade;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;
    QComboBox *id_modif;
    QLineEdit *description_modif;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_adam)
    {
        if (gestion_adam->objectName().isEmpty())
            gestion_adam->setObjectName(QStringLiteral("gestion_adam"));
        gestion_adam->resize(832, 595);
        actionadd_employe = new QAction(gestion_adam);
        actionadd_employe->setObjectName(QStringLiteral("actionadd_employe"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/user-add-icon---shine-set-add-new-user-add-user-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_employe->setIcon(icon);
        actiondelete_employe = new QAction(gestion_adam);
        actiondelete_employe->setObjectName(QStringLiteral("actiondelete_employe"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_employe->setIcon(icon1);
        actionadd_grade = new QAction(gestion_adam);
        actionadd_grade->setObjectName(QStringLiteral("actionadd_grade"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_grade->setIcon(icon2);
        actiondelete_grade = new QAction(gestion_adam);
        actiondelete_grade->setObjectName(QStringLiteral("actiondelete_grade"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_grade->setIcon(icon3);
        centralwidget = new QWidget(gestion_adam);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 791, 491));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(6, -1, 761, 481));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        employe_sel_col = new QComboBox(tab_3);
        employe_sel_col->setObjectName(QStringLiteral("employe_sel_col"));
        employe_sel_col->setGeometry(QRect(580, 10, 81, 22));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 0, 221, 31));
        table_employe = new QTableView(tab_3);
        table_employe->setObjectName(QStringLiteral("table_employe"));
        table_employe->setGeometry(QRect(9, 51, 651, 331));
        table_employe->setStyleSheet(QStringLiteral(""));
        table_employe->setSortingEnabled(true);
        table_employe->horizontalHeader()->setCascadingSectionResizes(true);
        table_employe->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_employe->horizontalHeader()->setStretchLastSection(false);
        export_2 = new QPushButton(tab_3);
        export_2->setObjectName(QStringLiteral("export_2"));
        export_2->setGeometry(QRect(9, 390, 651, 23));
        rech_employe = new QLineEdit(tab_3);
        rech_employe->setObjectName(QStringLiteral("rech_employe"));
        rech_employe->setGeometry(QRect(419, 10, 151, 24));
        rech_employe->setClearButtonEnabled(true);
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 110, 121, 21));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(190, 310, 121, 21));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(210, 20, 201, 31));
        naissance = new QDateEdit(tab_4);
        naissance->setObjectName(QStringLiteral("naissance"));
        naissance->setGeometry(QRect(330, 230, 131, 22));
        naissance->setCalendarPopup(true);
        naissance->setDate(QDate(2000, 1, 1));
        salaire = new QDoubleSpinBox(tab_4);
        salaire->setObjectName(QStringLiteral("salaire"));
        salaire->setGeometry(QRect(330, 310, 131, 22));
        tel = new QLineEdit(tab_4);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(330, 190, 131, 20));
        tel->setMaxLength(10);
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(190, 70, 121, 21));
        nom = new QLineEdit(tab_4);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(330, 110, 131, 20));
        mail = new QLineEdit(tab_4);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(330, 150, 131, 20));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(190, 190, 121, 21));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(190, 150, 121, 21));
        grade = new QComboBox(tab_4);
        grade->setObjectName(QStringLiteral("grade"));
        grade->setGeometry(QRect(330, 270, 131, 22));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(190, 270, 121, 21));
        id_emp = new QLineEdit(tab_4);
        id_emp->setObjectName(QStringLiteral("id_emp"));
        id_emp->setGeometry(QRect(330, 70, 131, 20));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(190, 230, 121, 21));
        btn_ajouter_emp = new QPushButton(tab_4);
        btn_ajouter_emp->setObjectName(QStringLiteral("btn_ajouter_emp"));
        btn_ajouter_emp->setGeometry(QRect(330, 350, 75, 23));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(250, 210, 121, 21));
        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(250, 330, 121, 21));
        label_19 = new QLabel(tab_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(250, 170, 121, 21));
        btn_modif_emp = new QPushButton(tab_5);
        btn_modif_emp->setObjectName(QStringLiteral("btn_modif_emp"));
        btn_modif_emp->setGeometry(QRect(390, 370, 75, 23));
        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(250, 130, 121, 21));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(250, 90, 121, 21));
        tel_modif = new QLineEdit(tab_5);
        tel_modif->setObjectName(QStringLiteral("tel_modif"));
        tel_modif->setGeometry(QRect(390, 210, 131, 20));
        tel_modif->setMaxLength(10);
        label_22 = new QLabel(tab_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(250, 250, 121, 21));
        mail_modif = new QLineEdit(tab_5);
        mail_modif->setObjectName(QStringLiteral("mail_modif"));
        mail_modif->setGeometry(QRect(390, 170, 131, 20));
        label_23 = new QLabel(tab_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(270, 40, 201, 31));
        grade_modif = new QComboBox(tab_5);
        grade_modif->setObjectName(QStringLiteral("grade_modif"));
        grade_modif->setGeometry(QRect(390, 290, 131, 22));
        nom_modif = new QLineEdit(tab_5);
        nom_modif->setObjectName(QStringLiteral("nom_modif"));
        nom_modif->setGeometry(QRect(390, 130, 131, 20));
        naissance_modif = new QDateEdit(tab_5);
        naissance_modif->setObjectName(QStringLiteral("naissance_modif"));
        naissance_modif->setGeometry(QRect(390, 250, 131, 22));
        naissance_modif->setCalendarPopup(true);
        naissance_modif->setDate(QDate(2000, 1, 1));
        salaire_modif = new QDoubleSpinBox(tab_5);
        salaire_modif->setObjectName(QStringLiteral("salaire_modif"));
        salaire_modif->setGeometry(QRect(390, 330, 131, 22));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(250, 290, 121, 21));
        id_modif_emp = new QComboBox(tab_5);
        id_modif_emp->setObjectName(QStringLiteral("id_modif_emp"));
        id_modif_emp->setGeometry(QRect(390, 90, 131, 22));
        tabWidget_2->addTab(tab_5, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 711, 481));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        grade_sel_col = new QComboBox(tab_6);
        grade_sel_col->setObjectName(QStringLiteral("grade_sel_col"));
        grade_sel_col->setGeometry(QRect(580, 10, 81, 22));
        rech_grade = new QLineEdit(tab_6);
        rech_grade->setObjectName(QStringLiteral("rech_grade"));
        rech_grade->setGeometry(QRect(430, 10, 141, 24));
        rech_grade->setClearButtonEnabled(true);
        table_grade = new QTableView(tab_6);
        table_grade->setObjectName(QStringLiteral("table_grade"));
        table_grade->setGeometry(QRect(10, 50, 651, 361));
        table_grade->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_grade->setSortingEnabled(true);
        table_grade->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 0, 211, 31));
        btn_supp_grade = new QPushButton(tab_6);
        btn_supp_grade->setObjectName(QStringLiteral("btn_supp_grade"));
        btn_supp_grade->setGeometry(QRect(280, 10, 75, 23));
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        description = new QLineEdit(tab_7);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(220, 204, 113, 20));
        label_5 = new QLabel(tab_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 208, 61, 16));
        label_3 = new QLabel(tab_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 120, 171, 41));
        id = new QLineEdit(tab_7);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(220, 177, 113, 20));
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 181, 47, 14));
        btn_ajouter_Grade = new QPushButton(tab_7);
        btn_ajouter_Grade->setObjectName(QStringLiteral("btn_ajouter_Grade"));
        btn_ajouter_Grade->setGeometry(QRect(220, 260, 75, 23));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        btn_modifier_Grade = new QPushButton(tab_8);
        btn_modifier_Grade->setObjectName(QStringLiteral("btn_modifier_Grade"));
        btn_modifier_Grade->setGeometry(QRect(310, 230, 75, 23));
        label_6 = new QLabel(tab_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(230, 178, 61, 16));
        label_8 = new QLabel(tab_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 151, 47, 14));
        label_7 = new QLabel(tab_8);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(290, 60, 171, 41));
        id_modif = new QComboBox(tab_8);
        id_modif->setObjectName(QStringLiteral("id_modif"));
        id_modif->setGeometry(QRect(310, 140, 101, 22));
        description_modif = new QLineEdit(tab_8);
        description_modif->setObjectName(QStringLiteral("description_modif"));
        description_modif->setGeometry(QRect(310, 174, 113, 20));
        tabWidget_3->addTab(tab_8, QString());
        tabWidget->addTab(tab_2, QString());
        gestion_adam->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_adam);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 832, 22));
        gestion_adam->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_adam);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_adam->setStatusBar(statusbar);

        retranslateUi(gestion_adam);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_adam);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_adam)
    {
        gestion_adam->setWindowTitle(QApplication::translate("gestion_adam", "MainWindow", Q_NULLPTR));
        actionadd_employe->setText(QApplication::translate("gestion_adam", "add_employe", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_employe->setShortcut(QApplication::translate("gestion_adam", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_employe->setText(QApplication::translate("gestion_adam", "delete_employe", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_employe->setShortcut(QApplication::translate("gestion_adam", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionadd_grade->setText(QApplication::translate("gestion_adam", "add_grade", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_grade->setShortcut(QApplication::translate("gestion_adam", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_grade->setText(QApplication::translate("gestion_adam", "delete_grade", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_grade->setShortcut(QApplication::translate("gestion_adam", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        employe_sel_col->clear();
        employe_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_adam", "All", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "Mail", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "Tel", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "Naissance", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "Grade", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "Salaire", Q_NULLPTR)
        );
        label->setText(QApplication::translate("gestion_adam", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Employes</span></p></body></html>", Q_NULLPTR));
        export_2->setText(QApplication::translate("gestion_adam", "Export Excel", Q_NULLPTR));
        rech_employe->setPlaceholderText(QApplication::translate("gestion_adam", "Recherche", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("gestion_adam", "Afficher", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_adam", "Nom et Prenom", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_adam", "Salaire", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_adam", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Employe</span></p></body></html>", Q_NULLPTR));
        tel->setInputMask(QApplication::translate("gestion_adam", "99 999 999", Q_NULLPTR));
        tel->setText(QString());
        label_12->setText(QApplication::translate("gestion_adam", "ID", Q_NULLPTR));
        mail->setInputMask(QApplication::translate("gestion_adam", "AAAAxxxxxxxxxx@AAAAxxx.AAa", Q_NULLPTR));
        mail->setText(QApplication::translate("gestion_adam", "@.", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_adam", "Tel", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_adam", "E-mail", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_adam", "Grade", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion_adam", "Date Naissance", Q_NULLPTR));
        btn_ajouter_emp->setText(QApplication::translate("gestion_adam", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("gestion_adam", "Ajouter", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion_adam", "Tel", Q_NULLPTR));
        label_18->setText(QApplication::translate("gestion_adam", "Salaire", Q_NULLPTR));
        label_19->setText(QApplication::translate("gestion_adam", "E-mail", Q_NULLPTR));
        btn_modif_emp->setText(QApplication::translate("gestion_adam", "Modifier", Q_NULLPTR));
        label_20->setText(QApplication::translate("gestion_adam", "Nom et Prenom", Q_NULLPTR));
        label_21->setText(QApplication::translate("gestion_adam", "ID", Q_NULLPTR));
        tel_modif->setInputMask(QApplication::translate("gestion_adam", "99 999 999", Q_NULLPTR));
        tel_modif->setText(QString());
        label_22->setText(QApplication::translate("gestion_adam", "Date Naissance", Q_NULLPTR));
        mail_modif->setInputMask(QApplication::translate("gestion_adam", "AAAAxxxxxxxxxx@AAAAxxx.AAa", Q_NULLPTR));
        mail_modif->setText(QApplication::translate("gestion_adam", "@.", Q_NULLPTR));
        label_23->setText(QApplication::translate("gestion_adam", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Employe</span></p></body></html>", Q_NULLPTR));
        label_24->setText(QApplication::translate("gestion_adam", "Grade", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("gestion_adam", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_adam", "Employ\303\251s", Q_NULLPTR));
        grade_sel_col->clear();
        grade_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_adam", "All", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_adam", "Description", Q_NULLPTR)
        );
        rech_grade->setPlaceholderText(QApplication::translate("gestion_adam", "Recherche", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_adam", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Grades</span></p></body></html>", Q_NULLPTR));
        btn_supp_grade->setText(QApplication::translate("gestion_adam", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("gestion_adam", "Afficher", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_adam", "Description", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_adam", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Grade</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_adam", "ID", Q_NULLPTR));
        btn_ajouter_Grade->setText(QApplication::translate("gestion_adam", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("gestion_adam", "Ajouter", Q_NULLPTR));
        btn_modifier_Grade->setText(QApplication::translate("gestion_adam", "Modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_adam", "Description", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_adam", "ID", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_adam", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Grade</span></p></body></html>", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("gestion_adam", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_adam", "Grades", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_adam: public Ui_gestion_adam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ADAM_H
