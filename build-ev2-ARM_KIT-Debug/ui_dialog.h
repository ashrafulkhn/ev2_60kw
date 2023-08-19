/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame_2;
    QStackedWidget *stackedWidget_1;
    QWidget *page_3;
    QLabel *label_9;
    QWidget *page_1;
    QDial *dial;
    QDial *dial_2;
    QProgressBar *progressBar;
    QLabel *Time_t_F_soc_g1;
    QLabel *energy_cons_g1;
    QLabel *voltage_g1_2;
    QLabel *current_g1_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *time_t_f_soc_val_g1_4;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *energy_g1_val;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_19;
    QWidget *page_5;
    QLabel *auth_status;
    QLabel *connect_stat;
    QWidget *page_6;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *soc_g1;
    QLabel *soc_val_g1;
    QLabel *voltage_g1;
    QLabel *voltage_val_g1;
    QLabel *current_g1;
    QLabel *current_val_g1;
    QLabel *time_t_f_soc_val_g1;
    QLabel *energy_cons_val_g1;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *session_cost_g1;
    QLabel *session_cost_val_g1;
    QWidget *page_2;
    QLabel *label_5;
    QFrame *frame_3;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QLabel *label_12;
    QWidget *page_8;
    QLabel *label_7;
    QLabel *label_11;
    QWidget *page_9;
    QLabel *auth_status_2;
    QLabel *connect_stat_2;
    QWidget *page;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *soc_g1_3;
    QLabel *soc_val_g1_3;
    QLabel *voltage_g1_3;
    QLabel *voltage_val_g1_3;
    QLabel *current_g1_3;
    QLabel *current_val_g1_3;
    QLabel *Time_t_F_soc_g1_3;
    QLabel *time_t_f_soc_val_g1_3;
    QLabel *energy_cons_g1_3;
    QLabel *energy_cons_val_g1_3;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *session_cost_g1_3;
    QLabel *session_cost_val_g1_3;
    QWidget *page_7;
    QDial *dial_4;
    QFrame *line_4;
    QProgressBar *progressBar_2;
    QLabel *energy_cons_g1_2;
    QLabel *current_g2;
    QLabel *time_t_f_soc_val_g2_6;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *Time_t_F_soc_g1_2;
    QFrame *line_3;
    QLabel *Time_t_F_soc_g1_7;
    QLabel *label_17;
    QDial *dial_3;
    QLabel *energy_g2_val;
    QLabel *voltage_g2;
    QLabel *label_18;
    QWidget *page_11;
    QLabel *label_13;
    QFrame *background_frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *header_frame;
    QLabel *label;
    QPushButton *btn_manual;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setEnabled(true);
        Dialog->resize(1280, 800);
        Dialog->setStyleSheet(QString::fromUtf8(""));
        frame_2 = new QFrame(Dialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 139, 620, 641));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(193, 125, 17, 128);\n"
"    border-radius: 10px; /* Adjust the value as needed */"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stackedWidget_1 = new QStackedWidget(frame_2);
        stackedWidget_1->setObjectName(QString::fromUtf8("stackedWidget_1"));
        stackedWidget_1->setGeometry(QRect(10, 10, 601, 621));
        stackedWidget_1->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 211, 211);\n"
"border-radius: 5px; /* Adjust the value as needed */"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 200, 501, 61));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(78, 154, 6);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));
        stackedWidget_1->addWidget(page_3);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        dial = new QDial(page_1);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(30, 30, 250, 250));
        dial->setStyleSheet(QString::fromUtf8("border-color: rgb(49, 139, 222);"));
        dial->setMaximum(1000);
        dial_2 = new QDial(page_1);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setGeometry(QRect(330, 30, 250, 250));
        dial_2->setMaximum(250);
        progressBar = new QProgressBar(page_1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(50, 370, 501, 51));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setMinimumSize(QSize(101, 0));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        progressBar->setFont(font);
        progressBar->setMouseTracking(false);
        progressBar->setTabletTracking(false);
        progressBar->setStyleSheet(QString::fromUtf8("background-color: rgba(193, 125, 17, 50);\n"
"    border-radius: 10px; /* Adjust the value as needed */\n"
"border-color:rgba(255,255,255,10)"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::BottomToTop);
        Time_t_F_soc_g1 = new QLabel(page_1);
        Time_t_F_soc_g1->setObjectName(QString::fromUtf8("Time_t_F_soc_g1"));
        Time_t_F_soc_g1->setGeometry(QRect(20, 520, 250, 40));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        Time_t_F_soc_g1->setFont(font1);
        Time_t_F_soc_g1->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 211, 211)"));
        Time_t_F_soc_g1->setAlignment(Qt::AlignCenter);
        energy_cons_g1 = new QLabel(page_1);
        energy_cons_g1->setObjectName(QString::fromUtf8("energy_cons_g1"));
        energy_cons_g1->setGeometry(QRect(330, 520, 250, 40));
        energy_cons_g1->setFont(font1);
        energy_cons_g1->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 211, 211)"));
        energy_cons_g1->setAlignment(Qt::AlignCenter);
        voltage_g1_2 = new QLabel(page_1);
        voltage_g1_2->setObjectName(QString::fromUtf8("voltage_g1_2"));
        voltage_g1_2->setGeometry(QRect(80, 130, 141, 31));
        QFont font2;
        font2.setPointSize(20);
        voltage_g1_2->setFont(font2);
        voltage_g1_2->setStyleSheet(QString::fromUtf8("background-color: a(0);"));
        voltage_g1_2->setAlignment(Qt::AlignCenter);
        current_g1_2 = new QLabel(page_1);
        current_g1_2->setObjectName(QString::fromUtf8("current_g1_2"));
        current_g1_2->setGeometry(QRect(380, 130, 141, 41));
        current_g1_2->setFont(font2);
        current_g1_2->setStyleSheet(QString::fromUtf8("background-color: a(0);"));
        current_g1_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(page_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 350, 67, 17));
        label_6 = new QLabel(page_1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 350, 67, 17));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        time_t_f_soc_val_g1_4 = new QLabel(page_1);
        time_t_f_soc_val_g1_4->setObjectName(QString::fromUtf8("time_t_f_soc_val_g1_4"));
        time_t_f_soc_val_g1_4->setGeometry(QRect(20, 560, 250, 40));
        QFont font3;
        font3.setPointSize(15);
        time_t_f_soc_val_g1_4->setFont(font3);
        time_t_f_soc_val_g1_4->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(page_1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(420, 260, 67, 17));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(61, 56, 70);"));
        label_8->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(page_1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(120, 260, 67, 17));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(61, 56, 70);"));
        label_10->setAlignment(Qt::AlignCenter);
        energy_g1_val = new QLabel(page_1);
        energy_g1_val->setObjectName(QString::fromUtf8("energy_g1_val"));
        energy_g1_val->setGeometry(QRect(330, 560, 250, 40));
        energy_g1_val->setFont(font3);
        energy_g1_val->setAlignment(Qt::AlignCenter);
        line = new QFrame(page_1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(70, 550, 151, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(page_1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(380, 550, 151, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_19 = new QLabel(page_1);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(50, 430, 500, 51));
        QFont font4;
        font4.setPointSize(50);
        label_19->setFont(font4);
        label_19->setAlignment(Qt::AlignCenter);
        stackedWidget_1->addWidget(page_1);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        auth_status = new QLabel(page_5);
        auth_status->setObjectName(QString::fromUtf8("auth_status"));
        auth_status->setGeometry(QRect(50, 50, 501, 81));
        QFont font5;
        font5.setPointSize(30);
        auth_status->setFont(font5);
        auth_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        auth_status->setAlignment(Qt::AlignCenter);
        connect_stat = new QLabel(page_5);
        connect_stat->setObjectName(QString::fromUtf8("connect_stat"));
        connect_stat->setGeometry(QRect(50, 260, 501, 81));
        connect_stat->setFont(font5);
        connect_stat->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        connect_stat->setAlignment(Qt::AlignCenter);
        stackedWidget_1->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        formLayoutWidget = new QWidget(page_6);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 40, 551, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        soc_g1 = new QLabel(formLayoutWidget);
        soc_g1->setObjectName(QString::fromUtf8("soc_g1"));
        soc_g1->setFont(font2);
        soc_g1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, soc_g1);

        soc_val_g1 = new QLabel(formLayoutWidget);
        soc_val_g1->setObjectName(QString::fromUtf8("soc_val_g1"));
        soc_val_g1->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, soc_val_g1);

        voltage_g1 = new QLabel(formLayoutWidget);
        voltage_g1->setObjectName(QString::fromUtf8("voltage_g1"));
        voltage_g1->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, voltage_g1);

        voltage_val_g1 = new QLabel(formLayoutWidget);
        voltage_val_g1->setObjectName(QString::fromUtf8("voltage_val_g1"));
        voltage_val_g1->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, voltage_val_g1);

        current_g1 = new QLabel(formLayoutWidget);
        current_g1->setObjectName(QString::fromUtf8("current_g1"));
        current_g1->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, current_g1);

        current_val_g1 = new QLabel(formLayoutWidget);
        current_val_g1->setObjectName(QString::fromUtf8("current_val_g1"));
        current_val_g1->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, current_val_g1);

        time_t_f_soc_val_g1 = new QLabel(formLayoutWidget);
        time_t_f_soc_val_g1->setObjectName(QString::fromUtf8("time_t_f_soc_val_g1"));
        time_t_f_soc_val_g1->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, time_t_f_soc_val_g1);

        energy_cons_val_g1 = new QLabel(formLayoutWidget);
        energy_cons_val_g1->setObjectName(QString::fromUtf8("energy_cons_val_g1"));
        energy_cons_val_g1->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, energy_cons_val_g1);

        horizontalLayoutWidget_7 = new QWidget(page_6);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(110, 410, 465, 80));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        session_cost_g1 = new QLabel(horizontalLayoutWidget_7);
        session_cost_g1->setObjectName(QString::fromUtf8("session_cost_g1"));
        session_cost_g1->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"font: 700 11pt;\n"
"font-size: 40px;"));

        horizontalLayout_7->addWidget(session_cost_g1);

        session_cost_val_g1 = new QLabel(horizontalLayoutWidget_7);
        session_cost_val_g1->setObjectName(QString::fromUtf8("session_cost_val_g1"));
        session_cost_val_g1->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"font: 700 11pt;\n"
"font-size: 40px;"));

        horizontalLayout_7->addWidget(session_cost_val_g1);

        stackedWidget_1->addWidget(page_6);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 200, 501, 61));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));
        stackedWidget_1->addWidget(page_2);
        frame_3 = new QFrame(Dialog);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(649, 139, 620, 641));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgba(193, 125, 17, 128);\n"
"    border-radius: 10px; /* Adjust the value as needed */"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        stackedWidget_2 = new QStackedWidget(frame_3);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 10, 601, 621));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 211, 211);"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_12 = new QLabel(page_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(70, 200, 501, 61));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(78, 154, 6);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));
        stackedWidget_2->addWidget(page_4);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        label_7 = new QLabel(page_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, -10, 601, 491));
        QFont font6;
        font6.setPointSize(40);
        label_7->setFont(font6);
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_7->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(page_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 420, 611, 53));
        QFont font7;
        font7.setPointSize(35);
        label_11->setFont(font7);
        label_11->setAlignment(Qt::AlignCenter);
        stackedWidget_2->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        auth_status_2 = new QLabel(page_9);
        auth_status_2->setObjectName(QString::fromUtf8("auth_status_2"));
        auth_status_2->setGeometry(QRect(70, 40, 501, 81));
        auth_status_2->setFont(font7);
        auth_status_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        auth_status_2->setAlignment(Qt::AlignCenter);
        connect_stat_2 = new QLabel(page_9);
        connect_stat_2->setObjectName(QString::fromUtf8("connect_stat_2"));
        connect_stat_2->setGeometry(QRect(60, 260, 501, 81));
        connect_stat_2->setFont(font5);
        connect_stat_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        connect_stat_2->setAlignment(Qt::AlignCenter);
        stackedWidget_2->addWidget(page_9);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        formLayoutWidget_3 = new QWidget(page);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(0, 20, 571, 231));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        soc_g1_3 = new QLabel(formLayoutWidget_3);
        soc_g1_3->setObjectName(QString::fromUtf8("soc_g1_3"));
        soc_g1_3->setFont(font2);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, soc_g1_3);

        soc_val_g1_3 = new QLabel(formLayoutWidget_3);
        soc_val_g1_3->setObjectName(QString::fromUtf8("soc_val_g1_3"));
        soc_val_g1_3->setFont(font2);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, soc_val_g1_3);

        voltage_g1_3 = new QLabel(formLayoutWidget_3);
        voltage_g1_3->setObjectName(QString::fromUtf8("voltage_g1_3"));
        voltage_g1_3->setFont(font2);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, voltage_g1_3);

        voltage_val_g1_3 = new QLabel(formLayoutWidget_3);
        voltage_val_g1_3->setObjectName(QString::fromUtf8("voltage_val_g1_3"));
        voltage_val_g1_3->setFont(font2);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, voltage_val_g1_3);

        current_g1_3 = new QLabel(formLayoutWidget_3);
        current_g1_3->setObjectName(QString::fromUtf8("current_g1_3"));
        current_g1_3->setFont(font2);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, current_g1_3);

        current_val_g1_3 = new QLabel(formLayoutWidget_3);
        current_val_g1_3->setObjectName(QString::fromUtf8("current_val_g1_3"));
        current_val_g1_3->setFont(font2);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, current_val_g1_3);

        Time_t_F_soc_g1_3 = new QLabel(formLayoutWidget_3);
        Time_t_F_soc_g1_3->setObjectName(QString::fromUtf8("Time_t_F_soc_g1_3"));
        Time_t_F_soc_g1_3->setFont(font2);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, Time_t_F_soc_g1_3);

        time_t_f_soc_val_g1_3 = new QLabel(formLayoutWidget_3);
        time_t_f_soc_val_g1_3->setObjectName(QString::fromUtf8("time_t_f_soc_val_g1_3"));
        time_t_f_soc_val_g1_3->setFont(font2);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, time_t_f_soc_val_g1_3);

        energy_cons_g1_3 = new QLabel(formLayoutWidget_3);
        energy_cons_g1_3->setObjectName(QString::fromUtf8("energy_cons_g1_3"));
        energy_cons_g1_3->setFont(font2);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, energy_cons_g1_3);

        energy_cons_val_g1_3 = new QLabel(formLayoutWidget_3);
        energy_cons_val_g1_3->setObjectName(QString::fromUtf8("energy_cons_val_g1_3"));
        energy_cons_val_g1_3->setFont(font2);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, energy_cons_val_g1_3);

        horizontalLayoutWidget_6 = new QWidget(page);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(100, 390, 465, 80));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        session_cost_g1_3 = new QLabel(horizontalLayoutWidget_6);
        session_cost_g1_3->setObjectName(QString::fromUtf8("session_cost_g1_3"));
        session_cost_g1_3->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"font: 700 11pt;\n"
"font-size: 40px;"));

        horizontalLayout_6->addWidget(session_cost_g1_3);

        session_cost_val_g1_3 = new QLabel(horizontalLayoutWidget_6);
        session_cost_val_g1_3->setObjectName(QString::fromUtf8("session_cost_val_g1_3"));
        session_cost_val_g1_3->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"font: 700 11pt;\n"
"font-size: 40px;"));

        horizontalLayout_6->addWidget(session_cost_val_g1_3);

        stackedWidget_2->addWidget(page);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        dial_4 = new QDial(page_7);
        dial_4->setObjectName(QString::fromUtf8("dial_4"));
        dial_4->setGeometry(QRect(330, 30, 250, 250));
        dial_4->setMaximum(250);
        line_4 = new QFrame(page_7);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(70, 550, 151, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        progressBar_2 = new QProgressBar(page_7);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(50, 370, 501, 51));
        sizePolicy.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy);
        progressBar_2->setMinimumSize(QSize(101, 0));
        progressBar_2->setFont(font);
        progressBar_2->setMouseTracking(false);
        progressBar_2->setTabletTracking(false);
        progressBar_2->setStyleSheet(QString::fromUtf8("background-color: rgba(193, 125, 17, 50);\n"
"    border-radius: 10px; /* Adjust the value as needed */\n"
"border-color:rgba(255,255,255,10)"));
        progressBar_2->setValue(0);
        progressBar_2->setAlignment(Qt::AlignCenter);
        progressBar_2->setTextVisible(true);
        progressBar_2->setOrientation(Qt::Horizontal);
        progressBar_2->setInvertedAppearance(false);
        progressBar_2->setTextDirection(QProgressBar::BottomToTop);
        energy_cons_g1_2 = new QLabel(page_7);
        energy_cons_g1_2->setObjectName(QString::fromUtf8("energy_cons_g1_2"));
        energy_cons_g1_2->setGeometry(QRect(330, 520, 250, 40));
        energy_cons_g1_2->setFont(font1);
        energy_cons_g1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 211, 211)"));
        energy_cons_g1_2->setAlignment(Qt::AlignCenter);
        current_g2 = new QLabel(page_7);
        current_g2->setObjectName(QString::fromUtf8("current_g2"));
        current_g2->setGeometry(QRect(380, 130, 141, 41));
        current_g2->setFont(font2);
        current_g2->setStyleSheet(QString::fromUtf8("background-color: a(0);"));
        current_g2->setAlignment(Qt::AlignCenter);
        time_t_f_soc_val_g2_6 = new QLabel(page_7);
        time_t_f_soc_val_g2_6->setObjectName(QString::fromUtf8("time_t_f_soc_val_g2_6"));
        time_t_f_soc_val_g2_6->setGeometry(QRect(20, 560, 250, 40));
        time_t_f_soc_val_g2_6->setFont(font3);
        time_t_f_soc_val_g2_6->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(page_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(420, 260, 67, 17));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(61, 56, 70);"));
        label_16->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(page_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(120, 260, 67, 17));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(61, 56, 70);"));
        label_15->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(page_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(480, 350, 67, 17));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Time_t_F_soc_g1_2 = new QLabel(page_7);
        Time_t_F_soc_g1_2->setObjectName(QString::fromUtf8("Time_t_F_soc_g1_2"));
        Time_t_F_soc_g1_2->setGeometry(QRect(20, 520, 250, 40));
        Time_t_F_soc_g1_2->setFont(font1);
        Time_t_F_soc_g1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 211, 211)"));
        Time_t_F_soc_g1_2->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(page_7);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(380, 550, 151, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        Time_t_F_soc_g1_7 = new QLabel(page_7);
        Time_t_F_soc_g1_7->setObjectName(QString::fromUtf8("Time_t_F_soc_g1_7"));
        Time_t_F_soc_g1_7->setGeometry(QRect(80, 130, 141, 31));
        Time_t_F_soc_g1_7->setFont(font2);
        Time_t_F_soc_g1_7->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(page_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 350, 67, 17));
        dial_3 = new QDial(page_7);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setGeometry(QRect(30, 30, 250, 250));
        dial_3->setMaximum(1000);
        energy_g2_val = new QLabel(page_7);
        energy_g2_val->setObjectName(QString::fromUtf8("energy_g2_val"));
        energy_g2_val->setGeometry(QRect(330, 560, 250, 40));
        energy_g2_val->setFont(font3);
        energy_g2_val->setAlignment(Qt::AlignCenter);
        voltage_g2 = new QLabel(page_7);
        voltage_g2->setObjectName(QString::fromUtf8("voltage_g2"));
        voltage_g2->setGeometry(QRect(90, 140, 141, 31));
        voltage_g2->setFont(font2);
        voltage_g2->setStyleSheet(QString::fromUtf8("background-color: a(0);"));
        voltage_g2->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(page_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(50, 430, 500, 51));
        label_18->setFont(font4);
        label_18->setAlignment(Qt::AlignCenter);
        stackedWidget_2->addWidget(page_7);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        label_13 = new QLabel(page_11);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 200, 501, 61));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));
        stackedWidget_2->addWidget(page_11);
        background_frame = new QFrame(Dialog);
        background_frame->setObjectName(QString::fromUtf8("background_frame"));
        background_frame->setGeometry(QRect(0, 0, 1280, 800));
        background_frame->setStyleSheet(QString::fromUtf8("background-color:  rgb(32, 72, 84)"));
        background_frame->setFrameShape(QFrame::StyledPanel);
        background_frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(background_frame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 100, 1261, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font8;
        font8.setPointSize(20);
        font8.setBold(true);
        label_2->setFont(font8);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(246, 245, 244)"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font8);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(246, 245, 244)"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        header_frame = new QFrame(background_frame);
        header_frame->setObjectName(QString::fromUtf8("header_frame"));
        header_frame->setGeometry(QRect(10, 10, 1260, 90));
        sizePolicy.setHeightForWidth(header_frame->sizePolicy().hasHeightForWidth());
        header_frame->setSizePolicy(sizePolicy);
        header_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 211, 211);"));
        header_frame->setFrameShape(QFrame::StyledPanel);
        header_frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(header_frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 1231, 51));
        QFont font9;
        font9.setPointSize(30);
        font9.setBold(true);
        label->setFont(font9);
        label->setStyleSheet(QString::fromUtf8("color: rgb(49, 139, 222)"));
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setMargin(0);
        btn_manual = new QPushButton(header_frame);
        btn_manual->setObjectName(QString::fromUtf8("btn_manual"));
        btn_manual->setGeometry(QRect(1010, 20, 211, 51));
        btn_manual->setFont(font3);
        btn_manual->setStyleSheet(QString::fromUtf8("color: rgb(61, 56, 70)"));
        pushButton = new QPushButton(header_frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(61, 56, 70)"));
        background_frame->raise();
        frame_3->raise();
        frame_2->raise();

        retranslateUi(Dialog);

        stackedWidget_1->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "No Network, Try Other Stations", nullptr));
#if QT_CONFIG(accessibility)
        progressBar->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        progressBar->setFormat(QCoreApplication::translate("Dialog", "%p%", nullptr));
        Time_t_F_soc_g1->setText(QCoreApplication::translate("Dialog", "Time to Full SOC", nullptr));
        energy_cons_g1->setText(QCoreApplication::translate("Dialog", "Energy Consumed", nullptr));
        voltage_g1_2->setText(QCoreApplication::translate("Dialog", "0 V", nullptr));
        current_g1_2->setText(QCoreApplication::translate("Dialog", "0 A", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "0%", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "100%", nullptr));
        time_t_f_soc_val_g1_4->setText(QCoreApplication::translate("Dialog", "0 Sec", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "Current", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "Voltage", nullptr));
        energy_g1_val->setText(QCoreApplication::translate("Dialog", "0 KWh", nullptr));
        label_19->setText(QString());
        auth_status->setText(QCoreApplication::translate("Dialog", "Please wait ...", nullptr));
        connect_stat->setText(QString());
        soc_g1->setText(QCoreApplication::translate("Dialog", "SOC                               :", nullptr));
        soc_val_g1->setText(QString());
        voltage_g1->setText(QCoreApplication::translate("Dialog", "Voltage                        :", nullptr));
        voltage_val_g1->setText(QString());
        current_g1->setText(QCoreApplication::translate("Dialog", "Current                        :", nullptr));
        current_val_g1->setText(QString());
        time_t_f_soc_val_g1->setText(QString());
        energy_cons_val_g1->setText(QString());
        session_cost_g1->setText(QCoreApplication::translate("Dialog", "Session Cost   : ", nullptr));
        session_cost_val_g1->setText(QCoreApplication::translate("Dialog", "Rs. 00.00", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Please Disconnect the Charger", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "No Network, Try Other Stations", nullptr));
        label_7->setText(QString());
        label_11->setText(QCoreApplication::translate("Dialog", "CCS2", nullptr));
        auth_status_2->setText(QCoreApplication::translate("Dialog", "Please Wait ...", nullptr));
        connect_stat_2->setText(QString());
        soc_g1_3->setText(QCoreApplication::translate("Dialog", "SOC                                          :", nullptr));
        soc_val_g1_3->setText(QCoreApplication::translate("Dialog", "    20%", nullptr));
        voltage_g1_3->setText(QCoreApplication::translate("Dialog", "Voltage                                   :", nullptr));
        voltage_val_g1_3->setText(QCoreApplication::translate("Dialog", "    340V", nullptr));
        current_g1_3->setText(QCoreApplication::translate("Dialog", "Current                                   :", nullptr));
        current_val_g1_3->setText(QCoreApplication::translate("Dialog", "    80A", nullptr));
        Time_t_F_soc_g1_3->setText(QCoreApplication::translate("Dialog", "Time to Full SOC                  :", nullptr));
        time_t_f_soc_val_g1_3->setText(QCoreApplication::translate("Dialog", "    500secs", nullptr));
        energy_cons_g1_3->setText(QCoreApplication::translate("Dialog", "Energy Consumed               :", nullptr));
        energy_cons_val_g1_3->setText(QCoreApplication::translate("Dialog", "    0.05kWh", nullptr));
        session_cost_g1_3->setText(QCoreApplication::translate("Dialog", "Session Cost   : ", nullptr));
        session_cost_val_g1_3->setText(QCoreApplication::translate("Dialog", "Rs. 00.00", nullptr));
#if QT_CONFIG(accessibility)
        progressBar_2->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        progressBar_2->setFormat(QCoreApplication::translate("Dialog", "%p%", nullptr));
        energy_cons_g1_2->setText(QCoreApplication::translate("Dialog", "Energy Consumed", nullptr));
        current_g2->setText(QCoreApplication::translate("Dialog", "0 A", nullptr));
        time_t_f_soc_val_g2_6->setText(QCoreApplication::translate("Dialog", "0 Sec", nullptr));
        label_16->setText(QCoreApplication::translate("Dialog", "Current", nullptr));
        label_15->setText(QCoreApplication::translate("Dialog", "Voltage", nullptr));
        label_14->setText(QCoreApplication::translate("Dialog", "100%", nullptr));
        Time_t_F_soc_g1_2->setText(QCoreApplication::translate("Dialog", "Time to Full SOC", nullptr));
        Time_t_F_soc_g1_7->setText(QCoreApplication::translate("Dialog", "100 V", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "0%", nullptr));
        energy_g2_val->setText(QCoreApplication::translate("Dialog", "0 KWh", nullptr));
        voltage_g2->setText(QCoreApplication::translate("Dialog", "0 V", nullptr));
        label_18->setText(QString());
        label_13->setText(QCoreApplication::translate("Dialog", "Please Disconnect the Charger", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Gun 1", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Gun 2", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Ultra Fast Chargers", nullptr));
        btn_manual->setText(QCoreApplication::translate("Dialog", "Goto Manual Mode", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Go Online", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
