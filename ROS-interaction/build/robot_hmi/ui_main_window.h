/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_12;
    QListView *view_logging;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *checkbox_remember_settings;
    QLabel *label_2;
    QCheckBox *checkbox_use_environment;
    QLineEdit *line_edit_master;
    QLabel *label;
    QLineEdit *line_edit_topic;
    QLineEdit *line_edit_host;
    QPushButton *button_connect;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_u;
    QPushButton *pushButton_i;
    QPushButton *pushButton_o;
    QPushButton *pushButton_l;
    QPushButton *pushButton_dh;
    QCheckBox *checkBox;
    QPushButton *pushButton_j;
    QPushButton *pushButton_d;
    QPushButton *pushButton_m;
    QWidget *widget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSlider *horizontalSlider_linear;
    QLabel *label_linear;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSlider *horizontalSlider_raw;
    QLabel *label_raw;
    QWidget *tab_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QWidget *widget_speed_x;
    QWidget *widget_speed_y;
    QLabel *label_6;
    QLabel *label_dir_x;
    QLabel *label_7;
    QLabel *label_dir_y;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(1102, 734);
        MainWindowDesign->setMinimumSize(QSize(1000, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QString::fromUtf8("tab_manager"));
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QString::fromUtf8("tab_status"));
        verticalLayout_2 = new QVBoxLayout(tab_status);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_12 = new QGroupBox(tab_status);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QString::fromUtf8("view_logging"));
        view_logging->setGeometry(QRect(80, 410, 256, 192));
        tabWidget = new QTabWidget(groupBox_12);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(630, 30, 431, 581));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 421, 301));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkbox_remember_settings = new QCheckBox(groupBox_2);
        checkbox_remember_settings->setObjectName(QString::fromUtf8("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_remember_settings, 7, 0, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        checkbox_use_environment = new QCheckBox(groupBox_2);
        checkbox_use_environment->setObjectName(QString::fromUtf8("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_use_environment, 6, 0, 1, 2);

        line_edit_master = new QLineEdit(groupBox_2);
        line_edit_master->setObjectName(QString::fromUtf8("line_edit_master"));

        gridLayout->addWidget(line_edit_master, 1, 0, 1, 2);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line_edit_topic = new QLineEdit(groupBox_2);
        line_edit_topic->setObjectName(QString::fromUtf8("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        gridLayout->addWidget(line_edit_topic, 5, 0, 1, 2);

        line_edit_host = new QLineEdit(groupBox_2);
        line_edit_host->setObjectName(QString::fromUtf8("line_edit_host"));

        gridLayout->addWidget(line_edit_host, 3, 0, 1, 2);

        button_connect = new QPushButton(groupBox_2);
        button_connect->setObjectName(QString::fromUtf8("button_connect"));
        button_connect->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_connect, 9, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_2);

        pushButton_u = new QPushButton(tab_3);
        pushButton_u->setObjectName(QString::fromUtf8("pushButton_u"));
        pushButton_u->setGeometry(QRect(20, 310, 77, 25));
        pushButton_i = new QPushButton(tab_3);
        pushButton_i->setObjectName(QString::fromUtf8("pushButton_i"));
        pushButton_i->setGeometry(QRect(101, 310, 78, 25));
        pushButton_o = new QPushButton(tab_3);
        pushButton_o->setObjectName(QString::fromUtf8("pushButton_o"));
        pushButton_o->setGeometry(QRect(183, 310, 77, 25));
        pushButton_l = new QPushButton(tab_3);
        pushButton_l->setObjectName(QString::fromUtf8("pushButton_l"));
        pushButton_l->setGeometry(QRect(200, 340, 80, 25));
        pushButton_dh = new QPushButton(tab_3);
        pushButton_dh->setObjectName(QString::fromUtf8("pushButton_dh"));
        pushButton_dh->setGeometry(QRect(101, 370, 78, 25));
        checkBox = new QCheckBox(tab_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(104, 340, 92, 29));
        pushButton_j = new QPushButton(tab_3);
        pushButton_j->setObjectName(QString::fromUtf8("pushButton_j"));
        pushButton_j->setGeometry(QRect(20, 340, 80, 25));
        pushButton_d = new QPushButton(tab_3);
        pushButton_d->setObjectName(QString::fromUtf8("pushButton_d"));
        pushButton_d->setGeometry(QRect(183, 370, 77, 25));
        pushButton_m = new QPushButton(tab_3);
        pushButton_m->setObjectName(QString::fromUtf8("pushButton_m"));
        pushButton_m->setGeometry(QRect(20, 370, 77, 25));
        widget = new QWidget(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 400, 171, 71));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSlider_linear = new QSlider(widget);
        horizontalSlider_linear->setObjectName(QString::fromUtf8("horizontalSlider_linear"));
        horizontalSlider_linear->setMaximum(100);
        horizontalSlider_linear->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_linear);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        label_linear = new QLabel(widget);
        label_linear->setObjectName(QString::fromUtf8("label_linear"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_linear);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        horizontalSlider_raw = new QSlider(widget);
        horizontalSlider_raw->setObjectName(QString::fromUtf8("horizontalSlider_raw"));
        horizontalSlider_raw->setMaximum(100);
        horizontalSlider_raw->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_raw);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        label_raw = new QLabel(widget);
        label_raw->setObjectName(QString::fromUtf8("label_raw"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_raw);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        layoutWidget = new QWidget(groupBox_12);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 608, 331));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_speed_x = new QWidget(layoutWidget);
        widget_speed_x->setObjectName(QString::fromUtf8("widget_speed_x"));
        widget_speed_x->setMinimumSize(QSize(300, 300));

        gridLayout_2->addWidget(widget_speed_x, 0, 0, 1, 2);

        widget_speed_y = new QWidget(layoutWidget);
        widget_speed_y->setObjectName(QString::fromUtf8("widget_speed_y"));
        widget_speed_y->setMinimumSize(QSize(300, 300));

        gridLayout_2->addWidget(widget_speed_y, 0, 2, 1, 2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_dir_x = new QLabel(layoutWidget);
        label_dir_x->setObjectName(QString::fromUtf8("label_dir_x"));

        gridLayout_2->addWidget(label_dir_x, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 2, 1, 1);

        label_dir_y = new QLabel(layoutWidget);
        label_dir_y->setObjectName(QString::fromUtf8("label_dir_y"));

        gridLayout_2->addWidget(label_dir_y, 1, 3, 1, 1);


        verticalLayout_2->addWidget(groupBox_12);

        tab_manager->addTab(tab_status, QString());

        verticalLayout->addWidget(tab_manager);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1102, 28));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", nullptr));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", nullptr));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", nullptr));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "Logging", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "GroupBox", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", nullptr));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", nullptr));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", nullptr));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "Use environment variables", nullptr));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", nullptr));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", nullptr));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", nullptr));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", nullptr));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", nullptr));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "Connect", nullptr));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", nullptr));
        pushButton_u->setText(QApplication::translate("MainWindowDesign", "u", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_u->setShortcut(QApplication::translate("MainWindowDesign", "U", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_i->setText(QApplication::translate("MainWindowDesign", "i", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_i->setShortcut(QApplication::translate("MainWindowDesign", "I", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_o->setText(QApplication::translate("MainWindowDesign", "o", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_o->setShortcut(QApplication::translate("MainWindowDesign", "O", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_l->setText(QApplication::translate("MainWindowDesign", "l", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_l->setShortcut(QApplication::translate("MainWindowDesign", "L", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_dh->setText(QApplication::translate("MainWindowDesign", ",", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_dh->setShortcut(QApplication::translate("MainWindowDesign", ",", nullptr));
#endif // QT_NO_SHORTCUT
        checkBox->setText(QApplication::translate("MainWindowDesign", "\345\205\250\345\220\221\350\275\256\346\250\241\345\274\217", nullptr));
        pushButton_j->setText(QApplication::translate("MainWindowDesign", "j", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_j->setShortcut(QApplication::translate("MainWindowDesign", "J", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_d->setText(QApplication::translate("MainWindowDesign", ".", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_d->setShortcut(QApplication::translate("MainWindowDesign", ".", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_m->setText(QApplication::translate("MainWindowDesign", "m", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_m->setShortcut(QApplication::translate("MainWindowDesign", "M", nullptr));
#endif // QT_NO_SHORTCUT
        label_4->setText(QApplication::translate("MainWindowDesign", "\347\272\277\351\200\237\345\272\246:", nullptr));
        label_linear->setText(QApplication::translate("MainWindowDesign", "0", nullptr));
        label_5->setText(QApplication::translate("MainWindowDesign", "\350\247\222\351\200\237\345\272\246:", nullptr));
        label_raw->setText(QApplication::translate("MainWindowDesign", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindowDesign", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindowDesign", "Tab 2", nullptr));
        label_6->setText(QApplication::translate("MainWindowDesign", "x\350\275\264\347\272\277\351\200\237\345\272\246", nullptr));
        label_dir_x->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", nullptr));
        label_7->setText(QApplication::translate("MainWindowDesign", "y\350\275\264\347\272\277\351\200\237\345\272\246", nullptr));
        label_dir_y->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", nullptr));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
