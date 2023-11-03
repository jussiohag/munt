/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionPlay_MIDI_file;
    QAction *actionTest_MIDI_Driver;
    QAction *actionNew_MIDI_port;
    QAction *actionStart_iconized;
    QAction *actionShow_LCD_balloons;
    QAction *actionShow_connection_balloons;
    QAction *actionROM_Configuration;
    QAction *actionConvert_MIDI_to_Wave;
    QAction *actionExit;
    QAction *actionHide_to_tray_on_close;
    QAction *actionNew_JACK_MIDI_port;
    QAction *actionNew_exclusive_JACK_MIDI_port;
    QAction *actionShow_native_file_dialog;
    QAction *actionFloating_display_Always_shown;
    QAction *actionFloating_display_Never_shown;
    QAction *actionFloating_display_Default_visibility;
    QAction *actionFloating_display_Bypass_window_manager;
    QAction *actionCommandLineHelp;
    QAction *actionSuitable_ROMs_unavailable;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *synthTabs;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuPlay_Demo_Songs;
    QMenu *menuOptions;
    QMenu *menuFloating_Display;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(300, 200);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionPlay_MIDI_file = new QAction(MainWindow);
        actionPlay_MIDI_file->setObjectName("actionPlay_MIDI_file");
        actionPlay_MIDI_file->setEnabled(true);
        actionTest_MIDI_Driver = new QAction(MainWindow);
        actionTest_MIDI_Driver->setObjectName("actionTest_MIDI_Driver");
        actionTest_MIDI_Driver->setCheckable(true);
        actionNew_MIDI_port = new QAction(MainWindow);
        actionNew_MIDI_port->setObjectName("actionNew_MIDI_port");
        actionStart_iconized = new QAction(MainWindow);
        actionStart_iconized->setObjectName("actionStart_iconized");
        actionStart_iconized->setCheckable(true);
        actionShow_LCD_balloons = new QAction(MainWindow);
        actionShow_LCD_balloons->setObjectName("actionShow_LCD_balloons");
        actionShow_LCD_balloons->setCheckable(true);
        actionShow_connection_balloons = new QAction(MainWindow);
        actionShow_connection_balloons->setObjectName("actionShow_connection_balloons");
        actionShow_connection_balloons->setCheckable(true);
        actionROM_Configuration = new QAction(MainWindow);
        actionROM_Configuration->setObjectName("actionROM_Configuration");
        actionConvert_MIDI_to_Wave = new QAction(MainWindow);
        actionConvert_MIDI_to_Wave->setObjectName("actionConvert_MIDI_to_Wave");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionHide_to_tray_on_close = new QAction(MainWindow);
        actionHide_to_tray_on_close->setObjectName("actionHide_to_tray_on_close");
        actionHide_to_tray_on_close->setCheckable(true);
        actionNew_JACK_MIDI_port = new QAction(MainWindow);
        actionNew_JACK_MIDI_port->setObjectName("actionNew_JACK_MIDI_port");
        actionNew_JACK_MIDI_port->setVisible(false);
        actionNew_exclusive_JACK_MIDI_port = new QAction(MainWindow);
        actionNew_exclusive_JACK_MIDI_port->setObjectName("actionNew_exclusive_JACK_MIDI_port");
        actionNew_exclusive_JACK_MIDI_port->setVisible(false);
        actionShow_native_file_dialog = new QAction(MainWindow);
        actionShow_native_file_dialog->setObjectName("actionShow_native_file_dialog");
        actionShow_native_file_dialog->setCheckable(true);
        actionFloating_display_Always_shown = new QAction(MainWindow);
        actionFloating_display_Always_shown->setObjectName("actionFloating_display_Always_shown");
        actionFloating_display_Always_shown->setCheckable(true);
        actionFloating_display_Never_shown = new QAction(MainWindow);
        actionFloating_display_Never_shown->setObjectName("actionFloating_display_Never_shown");
        actionFloating_display_Never_shown->setCheckable(true);
        actionFloating_display_Default_visibility = new QAction(MainWindow);
        actionFloating_display_Default_visibility->setObjectName("actionFloating_display_Default_visibility");
        actionFloating_display_Default_visibility->setCheckable(true);
        actionFloating_display_Bypass_window_manager = new QAction(MainWindow);
        actionFloating_display_Bypass_window_manager->setObjectName("actionFloating_display_Bypass_window_manager");
        actionFloating_display_Bypass_window_manager->setCheckable(true);
        actionCommandLineHelp = new QAction(MainWindow);
        actionCommandLineHelp->setObjectName("actionCommandLineHelp");
        actionSuitable_ROMs_unavailable = new QAction(MainWindow);
        actionSuitable_ROMs_unavailable->setObjectName("actionSuitable_ROMs_unavailable");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        synthTabs = new QTabWidget(centralwidget);
        synthTabs->setObjectName("synthTabs");

        verticalLayout_2->addWidget(synthTabs);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 30));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuPlay_Demo_Songs = new QMenu(menuTools);
        menuPlay_Demo_Songs->setObjectName("menuPlay_Demo_Songs");
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        menuFloating_Display = new QMenu(menuOptions);
        menuFloating_Display->setObjectName("menuFloating_Display");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionCommandLineHelp);
        menuTools->addAction(actionNew_MIDI_port);
        menuTools->addAction(actionNew_JACK_MIDI_port);
        menuTools->addAction(actionNew_exclusive_JACK_MIDI_port);
        menuTools->addAction(actionTest_MIDI_Driver);
        menuTools->addSeparator();
        menuTools->addAction(actionPlay_MIDI_file);
        menuTools->addAction(actionConvert_MIDI_to_Wave);
        menuTools->addAction(menuPlay_Demo_Songs->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(actionExit);
        menuPlay_Demo_Songs->addAction(actionSuitable_ROMs_unavailable);
        menuOptions->addAction(actionStart_iconized);
        menuOptions->addAction(actionHide_to_tray_on_close);
        menuOptions->addAction(actionShow_LCD_balloons);
        menuOptions->addAction(actionShow_connection_balloons);
        menuOptions->addAction(actionShow_native_file_dialog);
        menuOptions->addAction(menuFloating_Display->menuAction());
        menuOptions->addSeparator();
        menuOptions->addAction(actionROM_Configuration);
        menuFloating_Display->addAction(actionFloating_display_Default_visibility);
        menuFloating_Display->addAction(actionFloating_display_Always_shown);
        menuFloating_Display->addAction(actionFloating_display_Never_shown);
        menuFloating_Display->addSeparator();
        menuFloating_Display->addAction(actionFloating_display_Bypass_window_manager);

        retranslateUi(MainWindow);

        synthTabs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Munt: MT-32 Emulator", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionPlay_MIDI_file->setText(QCoreApplication::translate("MainWindow", "&Play MIDI file...", nullptr));
        actionTest_MIDI_Driver->setText(QCoreApplication::translate("MainWindow", "&Test MIDI Driver", nullptr));
        actionNew_MIDI_port->setText(QCoreApplication::translate("MainWindow", "&New MIDI port...", nullptr));
        actionStart_iconized->setText(QCoreApplication::translate("MainWindow", "Start &iconized", nullptr));
        actionShow_LCD_balloons->setText(QCoreApplication::translate("MainWindow", "Show &LCD balloons", nullptr));
        actionShow_connection_balloons->setText(QCoreApplication::translate("MainWindow", "Show &connection balloons", nullptr));
        actionROM_Configuration->setText(QCoreApplication::translate("MainWindow", "&ROM Configuration...", nullptr));
        actionConvert_MIDI_to_Wave->setText(QCoreApplication::translate("MainWindow", "&Convert MIDI to Wave...", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionHide_to_tray_on_close->setText(QCoreApplication::translate("MainWindow", "&Hide to tray on close", nullptr));
        actionNew_JACK_MIDI_port->setText(QCoreApplication::translate("MainWindow", "New &JACK MIDI port", nullptr));
#if QT_CONFIG(tooltip)
        actionNew_JACK_MIDI_port->setToolTip(QCoreApplication::translate("MainWindow", "New JACK MIDI port", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNew_exclusive_JACK_MIDI_port->setText(QCoreApplication::translate("MainWindow", "New &exclusive JACK MIDI port", nullptr));
#if QT_CONFIG(tooltip)
        actionNew_exclusive_JACK_MIDI_port->setToolTip(QCoreApplication::translate("MainWindow", "New exclusive JACK MIDI port", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShow_native_file_dialog->setText(QCoreApplication::translate("MainWindow", "Show system file selection &dialogs", nullptr));
        actionFloating_display_Always_shown->setText(QCoreApplication::translate("MainWindow", "&Always shown", nullptr));
        actionFloating_display_Never_shown->setText(QCoreApplication::translate("MainWindow", "&Never shown", nullptr));
        actionFloating_display_Default_visibility->setText(QCoreApplication::translate("MainWindow", "&Default visibility", nullptr));
#if QT_CONFIG(statustip)
        actionFloating_display_Default_visibility->setStatusTip(QCoreApplication::translate("MainWindow", "Shown only when the Main window is hidden", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionFloating_display_Default_visibility->setWhatsThis(QCoreApplication::translate("MainWindow", "Shown only when the Main window is hidden", nullptr));
#endif // QT_CONFIG(whatsthis)
        actionFloating_display_Bypass_window_manager->setText(QCoreApplication::translate("MainWindow", "&Bypass window manager", nullptr));
#if QT_CONFIG(statustip)
        actionFloating_display_Bypass_window_manager->setStatusTip(QCoreApplication::translate("MainWindow", "Instructs the window manager to keep the floating display window unmanaged. Changing this may help to fix some issues with the window manager like drawing artefacts, problems with handling mouse clicks, etc.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionFloating_display_Bypass_window_manager->setWhatsThis(QCoreApplication::translate("MainWindow", "Instructs the window manager to keep the floating display window unmanaged. Changing this may help to fix some issues with the window manager like drawing artefacts, problems with handling mouse clicks, etc.", nullptr));
#endif // QT_CONFIG(whatsthis)
        actionCommandLineHelp->setText(QCoreApplication::translate("MainWindow", "&Command Line Help", nullptr));
        actionSuitable_ROMs_unavailable->setText(QCoreApplication::translate("MainWindow", "Suitable ROMs unavailable...", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menuPlay_Demo_Songs->setTitle(QCoreApplication::translate("MainWindow", "Play &Demo Songs", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "&Options", nullptr));
        menuFloating_Display->setTitle(QCoreApplication::translate("MainWindow", "&Floating Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
