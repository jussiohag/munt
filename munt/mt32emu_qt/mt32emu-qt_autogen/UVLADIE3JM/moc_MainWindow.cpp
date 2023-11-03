/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/MainWindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[98];
    char stringdata0[11];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[35];
    char stringdata5[22];
    char stringdata6[12];
    char stringdata7[11];
    char stringdata8[19];
    char stringdata9[12];
    char stringdata10[9];
    char stringdata11[24];
    char stringdata12[21];
    char stringdata13[6];
    char stringdata14[18];
    char stringdata15[25];
    char stringdata16[33];
    char stringdata17[34];
    char stringdata18[8];
    char stringdata19[34];
    char stringdata20[40];
    char stringdata21[35];
    char stringdata22[45];
    char stringdata23[15];
    char stringdata24[9];
    char stringdata25[27];
    char stringdata26[32];
    char stringdata27[39];
    char stringdata28[35];
    char stringdata29[42];
    char stringdata30[41];
    char stringdata31[36];
    char stringdata32[39];
    char stringdata33[16];
    char stringdata34[56];
    char stringdata35[28];
    char stringdata36[6];
    char stringdata37[37];
    char stringdata38[16];
    char stringdata39[19];
    char stringdata40[24];
    char stringdata41[30];
    char stringdata42[24];
    char stringdata43[34];
    char stringdata44[7];
    char stringdata45[18];
    char stringdata46[20];
    char stringdata47[9];
    char stringdata48[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 23),  // "on_actionExit_triggered"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 24),  // "on_actionAbout_triggered"
        QT_MOC_LITERAL(61, 34),  // "on_actionCommandLineHelp_trig..."
        QT_MOC_LITERAL(96, 21),  // "handleSynthRouteAdded"
        QT_MOC_LITERAL(118, 11),  // "SynthRoute*"
        QT_MOC_LITERAL(130, 10),  // "synthRoute"
        QT_MOC_LITERAL(141, 18),  // "const AudioDevice*"
        QT_MOC_LITERAL(160, 11),  // "audioDevice"
        QT_MOC_LITERAL(172, 8),  // "pinnable"
        QT_MOC_LITERAL(181, 23),  // "handleSynthRouteRemoved"
        QT_MOC_LITERAL(205, 20),  // "handleROMSLoadFailed"
        QT_MOC_LITERAL(226, 5),  // "bool&"
        QT_MOC_LITERAL(232, 17),  // "recoveryAttempted"
        QT_MOC_LITERAL(250, 24),  // "on_menuTools_aboutToShow"
        QT_MOC_LITERAL(275, 32),  // "on_actionNew_MIDI_port_triggered"
        QT_MOC_LITERAL(308, 33),  // "on_actionTest_MIDI_Driver_tog..."
        QT_MOC_LITERAL(342, 7),  // "checked"
        QT_MOC_LITERAL(350, 33),  // "on_actionPlay_MIDI_file_trigg..."
        QT_MOC_LITERAL(384, 39),  // "on_actionConvert_MIDI_to_Wave..."
        QT_MOC_LITERAL(424, 34),  // "on_menuPlay_Demo_Songs_aboutT..."
        QT_MOC_LITERAL(459, 44),  // "on_actionSuitable_ROMs_unavai..."
        QT_MOC_LITERAL(504, 14),  // "handleDemoPlay"
        QT_MOC_LITERAL(519, 8),  // "QAction*"
        QT_MOC_LITERAL(528, 26),  // "on_menuOptions_aboutToShow"
        QT_MOC_LITERAL(555, 31),  // "on_actionStart_iconized_toggled"
        QT_MOC_LITERAL(587, 38),  // "on_actionHide_to_tray_on_clos..."
        QT_MOC_LITERAL(626, 34),  // "on_actionShow_LCD_balloons_to..."
        QT_MOC_LITERAL(661, 41),  // "on_actionShow_connection_ball..."
        QT_MOC_LITERAL(703, 40),  // "on_actionShow_native_file_dia..."
        QT_MOC_LITERAL(744, 35),  // "on_menuFloating_Display_about..."
        QT_MOC_LITERAL(780, 38),  // "handleFloatingDisplayVisibili..."
        QT_MOC_LITERAL(819, 15),  // "triggeredAction"
        QT_MOC_LITERAL(835, 55),  // "on_actionFloating_display_Byp..."
        QT_MOC_LITERAL(891, 27),  // "on_synthTabs_currentChanged"
        QT_MOC_LITERAL(919, 5),  // "index"
        QT_MOC_LITERAL(925, 36),  // "on_actionROM_Configuration_tr..."
        QT_MOC_LITERAL(962, 15),  // "refreshTabNames"
        QT_MOC_LITERAL(978, 18),  // "showHideMainWindow"
        QT_MOC_LITERAL(997, 23),  // "showHideFloatingDisplay"
        QT_MOC_LITERAL(1021, 29),  // "handleTrayIconMenuAboutToShow"
        QT_MOC_LITERAL(1051, 23),  // "handleTrayIconActivated"
        QT_MOC_LITERAL(1075, 33),  // "QSystemTrayIcon::ActivationRe..."
        QT_MOC_LITERAL(1109, 6),  // "reason"
        QT_MOC_LITERAL(1116, 17),  // "toggleShowConsole"
        QT_MOC_LITERAL(1134, 19),  // "handlePlayMidiFiles"
        QT_MOC_LITERAL(1154, 8),  // "fileList"
        QT_MOC_LITERAL(1163, 22)   // "handleConvertMidiFiles"
    },
    "MainWindow",
    "on_actionExit_triggered",
    "",
    "on_actionAbout_triggered",
    "on_actionCommandLineHelp_triggered",
    "handleSynthRouteAdded",
    "SynthRoute*",
    "synthRoute",
    "const AudioDevice*",
    "audioDevice",
    "pinnable",
    "handleSynthRouteRemoved",
    "handleROMSLoadFailed",
    "bool&",
    "recoveryAttempted",
    "on_menuTools_aboutToShow",
    "on_actionNew_MIDI_port_triggered",
    "on_actionTest_MIDI_Driver_toggled",
    "checked",
    "on_actionPlay_MIDI_file_triggered",
    "on_actionConvert_MIDI_to_Wave_triggered",
    "on_menuPlay_Demo_Songs_aboutToShow",
    "on_actionSuitable_ROMs_unavailable_triggered",
    "handleDemoPlay",
    "QAction*",
    "on_menuOptions_aboutToShow",
    "on_actionStart_iconized_toggled",
    "on_actionHide_to_tray_on_close_toggled",
    "on_actionShow_LCD_balloons_toggled",
    "on_actionShow_connection_balloons_toggled",
    "on_actionShow_native_file_dialog_toggled",
    "on_menuFloating_Display_aboutToShow",
    "handleFloatingDisplayVisibilityChanged",
    "triggeredAction",
    "on_actionFloating_display_Bypass_window_manager_toggled",
    "on_synthTabs_currentChanged",
    "index",
    "on_actionROM_Configuration_triggered",
    "refreshTabNames",
    "showHideMainWindow",
    "showHideFloatingDisplay",
    "handleTrayIconMenuAboutToShow",
    "handleTrayIconActivated",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "toggleShowConsole",
    "handlePlayMidiFiles",
    "fileList",
    "handleConvertMidiFiles"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  212,    2, 0x08,    1 /* Private */,
       3,    0,  213,    2, 0x08,    2 /* Private */,
       4,    0,  214,    2, 0x08,    3 /* Private */,
       5,    3,  215,    2, 0x08,    4 /* Private */,
      11,    1,  222,    2, 0x08,    8 /* Private */,
      12,    1,  225,    2, 0x08,   10 /* Private */,
      15,    0,  228,    2, 0x08,   12 /* Private */,
      16,    0,  229,    2, 0x08,   13 /* Private */,
      17,    1,  230,    2, 0x08,   14 /* Private */,
      19,    0,  233,    2, 0x08,   16 /* Private */,
      20,    0,  234,    2, 0x08,   17 /* Private */,
      21,    0,  235,    2, 0x08,   18 /* Private */,
      22,    0,  236,    2, 0x08,   19 /* Private */,
      23,    1,  237,    2, 0x08,   20 /* Private */,
      25,    0,  240,    2, 0x08,   22 /* Private */,
      26,    1,  241,    2, 0x08,   23 /* Private */,
      27,    1,  244,    2, 0x08,   25 /* Private */,
      28,    1,  247,    2, 0x08,   27 /* Private */,
      29,    1,  250,    2, 0x08,   29 /* Private */,
      30,    1,  253,    2, 0x08,   31 /* Private */,
      31,    0,  256,    2, 0x08,   33 /* Private */,
      32,    1,  257,    2, 0x08,   34 /* Private */,
      34,    1,  260,    2, 0x08,   36 /* Private */,
      35,    1,  263,    2, 0x08,   38 /* Private */,
      37,    0,  266,    2, 0x08,   40 /* Private */,
      38,    0,  267,    2, 0x08,   41 /* Private */,
      39,    0,  268,    2, 0x08,   42 /* Private */,
      40,    0,  269,    2, 0x08,   43 /* Private */,
      41,    0,  270,    2, 0x08,   44 /* Private */,
      42,    1,  271,    2, 0x08,   45 /* Private */,
      45,    0,  274,    2, 0x08,   47 /* Private */,
      46,    1,  275,    2, 0x08,   48 /* Private */,
      48,    1,  278,    2, 0x08,   50 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, QMetaType::Bool,    7,    9,   10,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   33,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   47,
    QMetaType::Void, QMetaType::QStringList,   47,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actionExit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCommandLineHelp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSynthRouteAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SynthRoute *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AudioDevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'handleSynthRouteRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SynthRoute *, std::false_type>,
        // method 'handleROMSLoadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool &, std::false_type>,
        // method 'on_menuTools_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_MIDI_port_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTest_MIDI_Driver_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionPlay_MIDI_file_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionConvert_MIDI_to_Wave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_menuPlay_Demo_Songs_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSuitable_ROMs_unavailable_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleDemoPlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'on_menuOptions_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStart_iconized_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionHide_to_tray_on_close_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_LCD_balloons_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_connection_balloons_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionShow_native_file_dialog_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_menuFloating_Display_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleFloatingDisplayVisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'on_actionFloating_display_Bypass_window_manager_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_synthTabs_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionROM_Configuration_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshTabNames'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showHideMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showHideFloatingDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleTrayIconMenuAboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleTrayIconActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'toggleShowConsole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handlePlayMidiFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'handleConvertMidiFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionExit_triggered(); break;
        case 1: _t->on_actionAbout_triggered(); break;
        case 2: _t->on_actionCommandLineHelp_triggered(); break;
        case 3: _t->handleSynthRouteAdded((*reinterpret_cast< std::add_pointer_t<SynthRoute*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const AudioDevice*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->handleSynthRouteRemoved((*reinterpret_cast< std::add_pointer_t<SynthRoute*>>(_a[1]))); break;
        case 5: _t->handleROMSLoadFailed((*reinterpret_cast< std::add_pointer_t<bool&>>(_a[1]))); break;
        case 6: _t->on_menuTools_aboutToShow(); break;
        case 7: _t->on_actionNew_MIDI_port_triggered(); break;
        case 8: _t->on_actionTest_MIDI_Driver_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_actionPlay_MIDI_file_triggered(); break;
        case 10: _t->on_actionConvert_MIDI_to_Wave_triggered(); break;
        case 11: _t->on_menuPlay_Demo_Songs_aboutToShow(); break;
        case 12: _t->on_actionSuitable_ROMs_unavailable_triggered(); break;
        case 13: _t->handleDemoPlay((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 14: _t->on_menuOptions_aboutToShow(); break;
        case 15: _t->on_actionStart_iconized_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->on_actionHide_to_tray_on_close_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->on_actionShow_LCD_balloons_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->on_actionShow_connection_balloons_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->on_actionShow_native_file_dialog_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->on_menuFloating_Display_aboutToShow(); break;
        case 21: _t->handleFloatingDisplayVisibilityChanged((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 22: _t->on_actionFloating_display_Bypass_window_manager_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->on_synthTabs_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->on_actionROM_Configuration_triggered(); break;
        case 25: _t->refreshTabNames(); break;
        case 26: _t->showHideMainWindow(); break;
        case 27: _t->showHideFloatingDisplay(); break;
        case 28: _t->handleTrayIconMenuAboutToShow(); break;
        case 29: _t->handleTrayIconActivated((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 30: _t->toggleShowConsole(); break;
        case 31: _t->handlePlayMidiFiles((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 32: _t->handleConvertMidiFiles((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
