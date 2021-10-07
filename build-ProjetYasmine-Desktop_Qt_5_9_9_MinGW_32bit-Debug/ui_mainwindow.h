/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QLabel *agentname;
    QLabel *department;
    QStackedWidget *stackedWidget;
    QWidget *principal;
    QGroupBox *groupBox;
    QTableView *listebus;
    QPushButton *refresh;
    QPlainTextEdit *espace_chercher;
    QComboBox *comboBox;
    QPushButton *search_button;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QTableView *tableView_2;
    QPushButton *ajouter_S;
    QPushButton *modifier_S;
    QPushButton *supprimer_S;
    QWidget *page_4;
    QLabel *label_53;
    QLineEdit *lineEdit_idAS;
    QLabel *label_54;
    QLabel *label_55;
    QDateEdit *dateEdit_dateAS;
    QLabel *label_56;
    QComboBox *comboBox_serviceAS;
    QPushButton *confirmerAS;
    QPushButton *annulerAS;
    QLineEdit *lineEdit_nomAS;
    QWidget *page_22;
    QPushButton *annuler_SS;
    QPushButton *confirmerSS;
    QLineEdit *lineEdit_idSE;
    QLabel *label_72;
    QWidget *page_2;
    QPushButton *confirmerMS;
    QPushButton *annnulerMS;
    QLineEdit *lineEdit_idMS;
    QLabel *label_57;
    QComboBox *comboBox_serviceMS;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *label_60;
    QLineEdit *lineEdit_nomMS;
    QDateEdit *dateEdit_dateMS;
    QPushButton *ajouter_rdv;
    QPushButton *supprimer_rdv;
    QPushButton *modifier_rdv;
    QPushButton *pushButton_16;
    QWidget *ajouter_page;
    QGroupBox *groupBox_7;
    QTableView *tableView_6;
    QPushButton *pushButton_36;
    QPlainTextEdit *plainTextEdit_4;
    QComboBox *comboBox_7;
    QPushButton *pushButton_37;
    QGroupBox *groupBox_8;
    QLineEdit *id_line;
    QLabel *label;
    QDateEdit *dateEdit_dateA;
    QPushButton *annulerA;
    QPushButton *confirmer_A_R;
    QLabel *label_2;
    QLineEdit *name_line;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *prenom_line;
    QLineEdit *adress_line;
    QComboBox *comboBox_2;
    QLabel *label_11;
    QWidget *modifier_page;
    QGroupBox *groupBox_9;
    QPushButton *annuler_M;
    QPushButton *confirmerM_R;
    QLabel *label_6;
    QLabel *label_7;
    QDateEdit *dateEdit_dateA_2;
    QLabel *label_8;
    QLineEdit *name_line_2;
    QLabel *label_12;
    QLineEdit *prenom_line_2;
    QLineEdit *id_line_2;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_idA_7;
    QGroupBox *groupBox_10;
    QTableView *tableView_7;
    QPushButton *pushButton_38;
    QPlainTextEdit *plainTextEdit_5;
    QComboBox *comboBox_10;
    QPushButton *pushButton_39;
    QWidget *page;
    QGroupBox *groupBox_11;
    QTableView *tableView_8;
    QPushButton *pushButton_40;
    QPlainTextEdit *plainTextEdit_6;
    QComboBox *comboBox_11;
    QPushButton *pushButton_41;
    QGroupBox *groupBox_12;
    QLineEdit *lineEdit_S;
    QLabel *label_52;
    QPushButton *annuler_S;
    QPushButton *confimerS_R;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1360, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 1370, 720));
        background->setPixmap(QPixmap(QString::fromUtf8(":/resouces/img/Untitled-1.png")));
        agentname = new QLabel(centralwidget);
        agentname->setObjectName(QStringLiteral("agentname"));
        agentname->setGeometry(QRect(60, 0, 171, 31));
        QFont font;
        font.setFamily(QStringLiteral("Sitka Small"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        agentname->setFont(font);
        department = new QLabel(centralwidget);
        department->setObjectName(QStringLiteral("department"));
        department->setGeometry(QRect(60, 20, 151, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Sitka Small"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        department->setFont(font1);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-20, 59, 1781, 741));
        principal = new QWidget();
        principal->setObjectName(QStringLiteral("principal"));
        groupBox = new QGroupBox(principal);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 10, 811, 641));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        groupBox->setFont(font2);
        listebus = new QTableView(groupBox);
        listebus->setObjectName(QStringLiteral("listebus"));
        listebus->setGeometry(QRect(10, 60, 851, 471));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        listebus->setFont(font3);
        listebus->setFrameShape(QFrame::StyledPanel);
        listebus->setFrameShadow(QFrame::Sunken);
        listebus->setLineWidth(1);
        listebus->setMidLineWidth(0);
        listebus->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listebus->setAlternatingRowColors(true);
        listebus->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listebus->setSelectionBehavior(QAbstractItemView::SelectRows);
        listebus->setTextElideMode(Qt::ElideRight);
        listebus->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        listebus->setShowGrid(true);
        listebus->setGridStyle(Qt::DashDotLine);
        listebus->setSortingEnabled(true);
        listebus->horizontalHeader()->setCascadingSectionResizes(false);
        listebus->horizontalHeader()->setDefaultSectionSize(152);
        listebus->horizontalHeader()->setMinimumSectionSize(100);
        listebus->verticalHeader()->setVisible(false);
        refresh = new QPushButton(groupBox);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(10, 550, 61, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resouces/Untitled-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon);
        refresh->setIconSize(QSize(40, 30));
        espace_chercher = new QPlainTextEdit(groupBox);
        espace_chercher->setObjectName(QStringLiteral("espace_chercher"));
        espace_chercher->setGeometry(QRect(90, 550, 401, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("MS UI Gothic"));
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setWeight(50);
        espace_chercher->setFont(font4);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(510, 550, 151, 41));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        comboBox->setFont(font5);
        search_button = new QPushButton(groupBox);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setGeometry(QRect(680, 550, 121, 41));
        QFont font6;
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setWeight(75);
        search_button->setFont(font6);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(0, 580, 321, 52));
        radioButton->setMinimumSize(QSize(321, 0));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(370, 600, 321, 41));
        groupBox_2 = new QGroupBox(principal);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(870, 310, 521, 321));
        groupBox_2->setFont(font5);
        stackedWidget_2 = new QStackedWidget(groupBox_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(100, 20, 451, 331));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tableView_2 = new QTableView(page_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(-10, 40, 351, 201));
        tableView_2->setAlternatingRowColors(true);
        tableView_2->horizontalHeader()->setDefaultSectionSize(83);
        tableView_2->horizontalHeader()->setHighlightSections(true);
        tableView_2->horizontalHeader()->setMinimumSectionSize(77);
        tableView_2->verticalHeader()->setDefaultSectionSize(40);
        ajouter_S = new QPushButton(page_3);
        ajouter_S->setObjectName(QStringLiteral("ajouter_S"));
        ajouter_S->setGeometry(QRect(30, 250, 91, 31));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        ajouter_S->setFont(font7);
        modifier_S = new QPushButton(page_3);
        modifier_S->setObjectName(QStringLiteral("modifier_S"));
        modifier_S->setGeometry(QRect(130, 250, 101, 31));
        modifier_S->setFont(font7);
        supprimer_S = new QPushButton(page_3);
        supprimer_S->setObjectName(QStringLiteral("supprimer_S"));
        supprimer_S->setGeometry(QRect(240, 250, 101, 31));
        supprimer_S->setFont(font7);
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_53 = new QLabel(page_4);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(80, 20, 81, 41));
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(false);
        font8.setItalic(true);
        font8.setWeight(50);
        label_53->setFont(font8);
        lineEdit_idAS = new QLineEdit(page_4);
        lineEdit_idAS->setObjectName(QStringLiteral("lineEdit_idAS"));
        lineEdit_idAS->setGeometry(QRect(180, 20, 181, 31));
        QFont font9;
        font9.setFamily(QStringLiteral("MS UI Gothic"));
        font9.setPointSize(12);
        font9.setBold(true);
        font9.setWeight(75);
        lineEdit_idAS->setFont(font9);
        label_54 = new QLabel(page_4);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(70, 80, 81, 41));
        label_54->setFont(font8);
        label_55 = new QLabel(page_4);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(70, 140, 81, 41));
        label_55->setFont(font8);
        dateEdit_dateAS = new QDateEdit(page_4);
        dateEdit_dateAS->setObjectName(QStringLiteral("dateEdit_dateAS"));
        dateEdit_dateAS->setGeometry(QRect(180, 140, 181, 31));
        dateEdit_dateAS->setFont(font9);
        label_56 = new QLabel(page_4);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(70, 210, 81, 41));
        label_56->setFont(font8);
        comboBox_serviceAS = new QComboBox(page_4);
        comboBox_serviceAS->setObjectName(QStringLiteral("comboBox_serviceAS"));
        comboBox_serviceAS->setGeometry(QRect(180, 210, 181, 31));
        QFont font10;
        font10.setFamily(QStringLiteral("MS UI Gothic"));
        font10.setPointSize(13);
        font10.setBold(true);
        font10.setWeight(75);
        comboBox_serviceAS->setFont(font10);
        confirmerAS = new QPushButton(page_4);
        confirmerAS->setObjectName(QStringLiteral("confirmerAS"));
        confirmerAS->setGeometry(QRect(320, 260, 121, 41));
        QFont font11;
        font11.setFamily(QStringLiteral("MS UI Gothic"));
        font11.setPointSize(17);
        font11.setBold(true);
        font11.setUnderline(false);
        font11.setWeight(75);
        font11.setStrikeOut(false);
        font11.setKerning(true);
        confirmerAS->setFont(font11);
        confirmerAS->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#639965;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        annulerAS = new QPushButton(page_4);
        annulerAS->setObjectName(QStringLiteral("annulerAS"));
        annulerAS->setGeometry(QRect(190, 260, 111, 41));
        annulerAS->setFont(font11);
        annulerAS->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#c88d98;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        lineEdit_nomAS = new QLineEdit(page_4);
        lineEdit_nomAS->setObjectName(QStringLiteral("lineEdit_nomAS"));
        lineEdit_nomAS->setGeometry(QRect(180, 80, 181, 31));
        QFont font12;
        font12.setFamily(QStringLiteral("MS UI Gothic"));
        font12.setPointSize(12);
        font12.setBold(false);
        font12.setWeight(50);
        lineEdit_nomAS->setFont(font12);
        stackedWidget_2->addWidget(page_4);
        page_22 = new QWidget();
        page_22->setObjectName(QStringLiteral("page_22"));
        annuler_SS = new QPushButton(page_22);
        annuler_SS->setObjectName(QStringLiteral("annuler_SS"));
        annuler_SS->setGeometry(QRect(180, 240, 111, 41));
        annuler_SS->setFont(font11);
        annuler_SS->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#c88d98;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        confirmerSS = new QPushButton(page_22);
        confirmerSS->setObjectName(QStringLiteral("confirmerSS"));
        confirmerSS->setGeometry(QRect(310, 240, 121, 41));
        confirmerSS->setFont(font11);
        confirmerSS->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#639965;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        lineEdit_idSE = new QLineEdit(page_22);
        lineEdit_idSE->setObjectName(QStringLiteral("lineEdit_idSE"));
        lineEdit_idSE->setGeometry(QRect(210, 90, 161, 41));
        lineEdit_idSE->setFont(font9);
        label_72 = new QLabel(page_22);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setGeometry(QRect(80, 90, 101, 41));
        QFont font13;
        font13.setPointSize(17);
        font13.setBold(false);
        font13.setItalic(true);
        font13.setWeight(50);
        label_72->setFont(font13);
        stackedWidget_2->addWidget(page_22);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        confirmerMS = new QPushButton(page_2);
        confirmerMS->setObjectName(QStringLiteral("confirmerMS"));
        confirmerMS->setGeometry(QRect(320, 260, 121, 41));
        confirmerMS->setFont(font11);
        confirmerMS->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#639965;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        annnulerMS = new QPushButton(page_2);
        annnulerMS->setObjectName(QStringLiteral("annnulerMS"));
        annnulerMS->setGeometry(QRect(190, 260, 111, 41));
        annnulerMS->setFont(font11);
        annnulerMS->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#c88d98;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        lineEdit_idMS = new QLineEdit(page_2);
        lineEdit_idMS->setObjectName(QStringLiteral("lineEdit_idMS"));
        lineEdit_idMS->setGeometry(QRect(180, 20, 181, 41));
        lineEdit_idMS->setFont(font9);
        label_57 = new QLabel(page_2);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(70, 70, 81, 41));
        label_57->setFont(font8);
        comboBox_serviceMS = new QComboBox(page_2);
        comboBox_serviceMS->setObjectName(QStringLiteral("comboBox_serviceMS"));
        comboBox_serviceMS->setGeometry(QRect(180, 200, 181, 41));
        comboBox_serviceMS->setFont(font10);
        label_58 = new QLabel(page_2);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(70, 200, 81, 41));
        label_58->setFont(font8);
        label_59 = new QLabel(page_2);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(70, 130, 81, 41));
        label_59->setFont(font8);
        label_60 = new QLabel(page_2);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(70, 20, 81, 41));
        label_60->setFont(font8);
        lineEdit_nomMS = new QLineEdit(page_2);
        lineEdit_nomMS->setObjectName(QStringLiteral("lineEdit_nomMS"));
        lineEdit_nomMS->setGeometry(QRect(180, 70, 181, 41));
        lineEdit_nomMS->setFont(font12);
        dateEdit_dateMS = new QDateEdit(page_2);
        dateEdit_dateMS->setObjectName(QStringLiteral("dateEdit_dateMS"));
        dateEdit_dateMS->setGeometry(QRect(180, 130, 181, 41));
        dateEdit_dateMS->setFont(font9);
        stackedWidget_2->addWidget(page_2);
        ajouter_rdv = new QPushButton(principal);
        ajouter_rdv->setObjectName(QStringLiteral("ajouter_rdv"));
        ajouter_rdv->setGeometry(QRect(870, 30, 411, 51));
        ajouter_rdv->setFont(font5);
        supprimer_rdv = new QPushButton(principal);
        supprimer_rdv->setObjectName(QStringLiteral("supprimer_rdv"));
        supprimer_rdv->setGeometry(QRect(870, 100, 411, 51));
        QFont font14;
        font14.setPointSize(12);
        font14.setBold(true);
        font14.setUnderline(false);
        font14.setWeight(75);
        font14.setStrikeOut(false);
        supprimer_rdv->setFont(font14);
        modifier_rdv = new QPushButton(principal);
        modifier_rdv->setObjectName(QStringLiteral("modifier_rdv"));
        modifier_rdv->setGeometry(QRect(870, 170, 411, 51));
        modifier_rdv->setFont(font5);
        pushButton_16 = new QPushButton(principal);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(870, 240, 411, 51));
        pushButton_16->setFont(font5);
        stackedWidget->addWidget(principal);
        ajouter_page = new QWidget();
        ajouter_page->setObjectName(QStringLiteral("ajouter_page"));
        groupBox_7 = new QGroupBox(ajouter_page);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(39, 29, 811, 601));
        groupBox_7->setFont(font2);
        tableView_6 = new QTableView(groupBox_7);
        tableView_6->setObjectName(QStringLiteral("tableView_6"));
        tableView_6->setGeometry(QRect(0, 60, 811, 471));
        tableView_6->setFont(font3);
        tableView_6->setAlternatingRowColors(true);
        tableView_6->setGridStyle(Qt::DashDotLine);
        tableView_6->setSortingEnabled(true);
        tableView_6->horizontalHeader()->setDefaultSectionSize(152);
        tableView_6->horizontalHeader()->setMinimumSectionSize(100);
        pushButton_36 = new QPushButton(groupBox_7);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        pushButton_36->setGeometry(QRect(10, 550, 61, 41));
        pushButton_36->setIcon(icon);
        pushButton_36->setIconSize(QSize(40, 30));
        plainTextEdit_4 = new QPlainTextEdit(groupBox_7);
        plainTextEdit_4->setObjectName(QStringLiteral("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(90, 550, 401, 41));
        plainTextEdit_4->setFont(font4);
        comboBox_7 = new QComboBox(groupBox_7);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setGeometry(QRect(510, 550, 151, 41));
        comboBox_7->setFont(font5);
        pushButton_37 = new QPushButton(groupBox_7);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        pushButton_37->setGeometry(QRect(680, 550, 121, 41));
        pushButton_37->setFont(font6);
        groupBox_8 = new QGroupBox(ajouter_page);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(860, 70, 491, 521));
        QFont font15;
        font15.setPointSize(24);
        font15.setBold(true);
        font15.setUnderline(true);
        font15.setWeight(75);
        font15.setStyleStrategy(QFont::PreferDefault);
        groupBox_8->setFont(font15);
        groupBox_8->setAlignment(Qt::AlignCenter);
        groupBox_8->setFlat(true);
        groupBox_8->setCheckable(false);
        id_line = new QLineEdit(groupBox_8);
        id_line->setObjectName(QStringLiteral("id_line"));
        id_line->setGeometry(QRect(200, 100, 281, 41));
        QFont font16;
        font16.setFamily(QStringLiteral("MS UI Gothic"));
        font16.setPointSize(20);
        font16.setBold(false);
        font16.setUnderline(false);
        font16.setWeight(50);
        font16.setStyleStrategy(QFont::PreferDefault);
        id_line->setFont(font16);
        label = new QLabel(groupBox_8);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 100, 61, 31));
        QFont font17;
        font17.setPointSize(15);
        font17.setBold(false);
        font17.setItalic(true);
        font17.setUnderline(false);
        font17.setWeight(50);
        font17.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font17);
        dateEdit_dateA = new QDateEdit(groupBox_8);
        dateEdit_dateA->setObjectName(QStringLiteral("dateEdit_dateA"));
        dateEdit_dateA->setGeometry(QRect(200, 340, 281, 41));
        QFont font18;
        font18.setFamily(QStringLiteral("MS UI Gothic"));
        font18.setPointSize(20);
        font18.setBold(true);
        font18.setUnderline(false);
        font18.setWeight(75);
        font18.setStyleStrategy(QFont::PreferDefault);
        dateEdit_dateA->setFont(font18);
        annulerA = new QPushButton(groupBox_8);
        annulerA->setObjectName(QStringLiteral("annulerA"));
        annulerA->setGeometry(QRect(200, 470, 131, 51));
        QFont font19;
        font19.setFamily(QStringLiteral("MS UI Gothic"));
        font19.setPointSize(20);
        font19.setBold(true);
        font19.setUnderline(false);
        font19.setWeight(75);
        font19.setStrikeOut(false);
        font19.setKerning(true);
        annulerA->setFont(font19);
        annulerA->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#c88d98;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        confirmer_A_R = new QPushButton(groupBox_8);
        confirmer_A_R->setObjectName(QStringLiteral("confirmer_A_R"));
        confirmer_A_R->setGeometry(QRect(340, 470, 151, 51));
        confirmer_A_R->setFont(font19);
        confirmer_A_R->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#639965;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 340, 61, 31));
        label_2->setFont(font17);
        name_line = new QLineEdit(groupBox_8);
        name_line->setObjectName(QStringLiteral("name_line"));
        name_line->setGeometry(QRect(200, 160, 281, 41));
        name_line->setFont(font16);
        label_3 = new QLabel(groupBox_8);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 220, 101, 31));
        label_3->setFont(font17);
        label_4 = new QLabel(groupBox_8);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 400, 131, 31));
        label_4->setFont(font17);
        label_5 = new QLabel(groupBox_8);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 280, 121, 31));
        label_5->setFont(font17);
        prenom_line = new QLineEdit(groupBox_8);
        prenom_line->setObjectName(QStringLiteral("prenom_line"));
        prenom_line->setGeometry(QRect(200, 220, 281, 41));
        prenom_line->setFont(font16);
        adress_line = new QLineEdit(groupBox_8);
        adress_line->setObjectName(QStringLiteral("adress_line"));
        adress_line->setGeometry(QRect(200, 280, 281, 41));
        adress_line->setFont(font16);
        comboBox_2 = new QComboBox(groupBox_8);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(200, 400, 281, 41));
        label_11 = new QLabel(groupBox_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 160, 61, 31));
        label_11->setFont(font17);
        stackedWidget->addWidget(ajouter_page);
        modifier_page = new QWidget();
        modifier_page->setObjectName(QStringLiteral("modifier_page"));
        groupBox_9 = new QGroupBox(modifier_page);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(860, 70, 491, 541));
        groupBox_9->setFont(font15);
        groupBox_9->setAlignment(Qt::AlignCenter);
        groupBox_9->setFlat(true);
        groupBox_9->setCheckable(false);
        annuler_M = new QPushButton(groupBox_9);
        annuler_M->setObjectName(QStringLiteral("annuler_M"));
        annuler_M->setGeometry(QRect(200, 480, 131, 51));
        annuler_M->setFont(font19);
        annuler_M->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#c88d98;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        confirmerM_R = new QPushButton(groupBox_9);
        confirmerM_R->setObjectName(QStringLiteral("confirmerM_R"));
        confirmerM_R->setGeometry(QRect(340, 480, 151, 51));
        confirmerM_R->setFont(font19);
        confirmerM_R->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#639965;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 260, 121, 31));
        label_6->setFont(font17);
        label_7 = new QLabel(groupBox_9);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 200, 101, 31));
        label_7->setFont(font17);
        dateEdit_dateA_2 = new QDateEdit(groupBox_9);
        dateEdit_dateA_2->setObjectName(QStringLiteral("dateEdit_dateA_2"));
        dateEdit_dateA_2->setGeometry(QRect(200, 320, 281, 41));
        dateEdit_dateA_2->setFont(font18);
        label_8 = new QLabel(groupBox_9);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 380, 131, 31));
        label_8->setFont(font17);
        name_line_2 = new QLineEdit(groupBox_9);
        name_line_2->setObjectName(QStringLiteral("name_line_2"));
        name_line_2->setGeometry(QRect(200, 140, 281, 41));
        name_line_2->setFont(font16);
        label_12 = new QLabel(groupBox_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 140, 61, 31));
        label_12->setFont(font17);
        prenom_line_2 = new QLineEdit(groupBox_9);
        prenom_line_2->setObjectName(QStringLiteral("prenom_line_2"));
        prenom_line_2->setGeometry(QRect(200, 200, 281, 41));
        prenom_line_2->setFont(font16);
        id_line_2 = new QLineEdit(groupBox_9);
        id_line_2->setObjectName(QStringLiteral("id_line_2"));
        id_line_2->setGeometry(QRect(200, 80, 281, 41));
        id_line_2->setFont(font16);
        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 80, 61, 31));
        label_9->setFont(font17);
        label_10 = new QLabel(groupBox_9);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 320, 61, 31));
        label_10->setFont(font17);
        comboBox_3 = new QComboBox(groupBox_9);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(200, 380, 281, 41));
        lineEdit_idA_7 = new QLineEdit(groupBox_9);
        lineEdit_idA_7->setObjectName(QStringLiteral("lineEdit_idA_7"));
        lineEdit_idA_7->setGeometry(QRect(200, 260, 281, 41));
        lineEdit_idA_7->setFont(font16);
        groupBox_10 = new QGroupBox(modifier_page);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(39, 29, 811, 601));
        groupBox_10->setFont(font2);
        tableView_7 = new QTableView(groupBox_10);
        tableView_7->setObjectName(QStringLiteral("tableView_7"));
        tableView_7->setGeometry(QRect(0, 60, 811, 471));
        tableView_7->setFont(font3);
        tableView_7->setAlternatingRowColors(true);
        tableView_7->setGridStyle(Qt::DashDotLine);
        tableView_7->setSortingEnabled(true);
        tableView_7->horizontalHeader()->setDefaultSectionSize(152);
        tableView_7->horizontalHeader()->setMinimumSectionSize(100);
        pushButton_38 = new QPushButton(groupBox_10);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        pushButton_38->setGeometry(QRect(10, 550, 61, 41));
        pushButton_38->setIcon(icon);
        pushButton_38->setIconSize(QSize(40, 30));
        plainTextEdit_5 = new QPlainTextEdit(groupBox_10);
        plainTextEdit_5->setObjectName(QStringLiteral("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(90, 550, 401, 41));
        comboBox_10 = new QComboBox(groupBox_10);
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));
        comboBox_10->setGeometry(QRect(510, 550, 151, 41));
        comboBox_10->setFont(font5);
        pushButton_39 = new QPushButton(groupBox_10);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        pushButton_39->setGeometry(QRect(680, 550, 121, 41));
        pushButton_39->setFont(font6);
        stackedWidget->addWidget(modifier_page);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox_11 = new QGroupBox(page);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(39, 29, 811, 601));
        groupBox_11->setFont(font2);
        tableView_8 = new QTableView(groupBox_11);
        tableView_8->setObjectName(QStringLiteral("tableView_8"));
        tableView_8->setGeometry(QRect(0, 60, 811, 471));
        tableView_8->setFont(font3);
        tableView_8->setAlternatingRowColors(true);
        tableView_8->setGridStyle(Qt::DashDotLine);
        tableView_8->setSortingEnabled(true);
        tableView_8->horizontalHeader()->setDefaultSectionSize(152);
        tableView_8->horizontalHeader()->setMinimumSectionSize(100);
        tableView_8->verticalHeader()->setDefaultSectionSize(47);
        pushButton_40 = new QPushButton(groupBox_11);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        pushButton_40->setGeometry(QRect(10, 550, 61, 41));
        pushButton_40->setIcon(icon);
        pushButton_40->setIconSize(QSize(40, 30));
        plainTextEdit_6 = new QPlainTextEdit(groupBox_11);
        plainTextEdit_6->setObjectName(QStringLiteral("plainTextEdit_6"));
        plainTextEdit_6->setGeometry(QRect(90, 550, 401, 41));
        comboBox_11 = new QComboBox(groupBox_11);
        comboBox_11->setObjectName(QStringLiteral("comboBox_11"));
        comboBox_11->setGeometry(QRect(510, 550, 151, 41));
        comboBox_11->setFont(font5);
        pushButton_41 = new QPushButton(groupBox_11);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        pushButton_41->setGeometry(QRect(680, 550, 121, 41));
        pushButton_41->setFont(font6);
        groupBox_12 = new QGroupBox(page);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(860, 80, 491, 491));
        groupBox_12->setFont(font15);
        groupBox_12->setAlignment(Qt::AlignCenter);
        groupBox_12->setFlat(true);
        groupBox_12->setCheckable(false);
        lineEdit_S = new QLineEdit(groupBox_12);
        lineEdit_S->setObjectName(QStringLiteral("lineEdit_S"));
        lineEdit_S->setGeometry(QRect(150, 210, 301, 51));
        lineEdit_S->setFont(font16);
        label_52 = new QLabel(groupBox_12);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(30, 210, 81, 51));
        QFont font20;
        font20.setPointSize(20);
        font20.setBold(false);
        font20.setItalic(true);
        font20.setUnderline(false);
        font20.setWeight(50);
        font20.setStyleStrategy(QFont::PreferDefault);
        label_52->setFont(font20);
        annuler_S = new QPushButton(groupBox_12);
        annuler_S->setObjectName(QStringLiteral("annuler_S"));
        annuler_S->setGeometry(QRect(230, 440, 121, 51));
        annuler_S->setFont(font19);
        annuler_S->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#c88d98;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        confimerS_R = new QPushButton(groupBox_12);
        confimerS_R->setObjectName(QStringLiteral("confimerS_R"));
        confimerS_R->setGeometry(QRect(360, 440, 131, 51));
        confimerS_R->setFont(font19);
        confimerS_R->setStyleSheet(QLatin1String("box-shadow: 0px 1px 0px 0px #1c1b18;\n"
"	background:linear-gradient(to bottom, #eae0c2 5%, #ccc2a6 100%);\n"
"	background-color:#639965;\n"
"	border-radius:15px;\n"
"	border:2px solid #333029;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#505739;\n"
"	font-weight:bold;\n"
"	padding:0px 0 px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #ffffff;"));
        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        background->setText(QString());
        agentname->setText(QApplication::translate("MainWindow", "Aziz Ali", Q_NULLPTR));
        department->setText(QApplication::translate("MainWindow", "Police Station", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Personnes Recherche\303\251s", Q_NULLPTR));
        refresh->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "By ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "By Name", Q_NULLPTR)
         << QApplication::translate("MainWindow", "By Address", Q_NULLPTR)
        );
        search_button->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "tri par nom", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Tri par Id", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Plaintes", Q_NULLPTR));
        ajouter_S->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modifier_S->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer_S->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_53->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        lineEdit_idAS->setText(QString());
        label_54->setText(QApplication::translate("MainWindow", "Raison", Q_NULLPTR));
        label_55->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_56->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        comboBox_serviceAS->clear();
        comboBox_serviceAS->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Simple", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Civile", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Juridique", Q_NULLPTR)
        );
        confirmerAS->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        annulerAS->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        annuler_SS->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        confirmerSS->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        label_72->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        confirmerMS->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        annnulerMS->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        lineEdit_idMS->setText(QString());
        label_57->setText(QApplication::translate("MainWindow", "Raison", Q_NULLPTR));
        comboBox_serviceMS->clear();
        comboBox_serviceMS->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Simple", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Civile", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Juridique", Q_NULLPTR)
        );
        label_58->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_59->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_60->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        ajouter_rdv->setText(QApplication::translate("MainWindow", "Ajouter Entit\303\251", Q_NULLPTR));
        supprimer_rdv->setText(QApplication::translate("MainWindow", "Supprimer Entit\303\251", Q_NULLPTR));
        modifier_rdv->setText(QApplication::translate("MainWindow", "Modifier Entit\303\251", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Personne Recherche\303\251s", Q_NULLPTR));
        pushButton_36->setText(QString());
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "By ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "By Modele", Q_NULLPTR)
         << QApplication::translate("MainWindow", "By Date_Achat", Q_NULLPTR)
        );
        pushButton_37->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Ajouter PERS", Q_NULLPTR));
        id_line->setText(QString());
        label->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        annulerA->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        confirmer_A_R->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Sexe", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Homme", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Femme", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Modifier PERS", Q_NULLPTR));
        annuler_M->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        confirmerM_R->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Sexe", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        id_line_2->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Homme", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Femme", Q_NULLPTR)
        );
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Personnes Recherche\303\251s", Q_NULLPTR));
        pushButton_38->setText(QString());
        comboBox_10->clear();
        comboBox_10->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "By ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "By Modele", Q_NULLPTR)
         << QApplication::translate("MainWindow", "By Date_Achat", Q_NULLPTR)
        );
        pushButton_39->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Personnes Recherche\303\251s", Q_NULLPTR));
        pushButton_40->setText(QString());
        comboBox_11->clear();
        comboBox_11->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "By ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "By Modele", Q_NULLPTR)
         << QApplication::translate("MainWindow", "By Date_Achat", Q_NULLPTR)
        );
        pushButton_41->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Supprimer PERS", Q_NULLPTR));
        label_52->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        annuler_S->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        confimerS_R->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
