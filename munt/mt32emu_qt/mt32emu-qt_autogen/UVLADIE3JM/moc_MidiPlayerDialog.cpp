/****************************************************************************
** Meta object code from reading C++ file 'MidiPlayerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/MidiPlayerDialog.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MidiPlayerDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MidiPlayerDialog_t {
    uint offsetsAndSizes[66];
    char stringdata0[17];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[11];
    char stringdata5[22];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[21];
    char stringdata9[25];
    char stringdata10[24];
    char stringdata11[23];
    char stringdata12[26];
    char stringdata13[24];
    char stringdata14[26];
    char stringdata15[22];
    char stringdata16[23];
    char stringdata17[22];
    char stringdata18[29];
    char stringdata19[30];
    char stringdata20[33];
    char stringdata21[34];
    char stringdata22[29];
    char stringdata23[9];
    char stringdata24[31];
    char stringdata25[33];
    char stringdata26[23];
    char stringdata27[11];
    char stringdata28[26];
    char stringdata29[13];
    char stringdata30[13];
    char stringdata31[15];
    char stringdata32[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MidiPlayerDialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MidiPlayerDialog_t qt_meta_stringdata_MidiPlayerDialog = {
    {
        QT_MOC_LITERAL(0, 16),  // "MidiPlayerDialog"
        QT_MOC_LITERAL(17, 15),  // "playbackStarted"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 29),  // "on_playList_currentRowChanged"
        QT_MOC_LITERAL(64, 10),  // "currentRow"
        QT_MOC_LITERAL(75, 21),  // "on_playList_activated"
        QT_MOC_LITERAL(97, 11),  // "QModelIndex"
        QT_MOC_LITERAL(109, 5),  // "index"
        QT_MOC_LITERAL(115, 20),  // "on_addButton_clicked"
        QT_MOC_LITERAL(136, 24),  // "on_addListButton_clicked"
        QT_MOC_LITERAL(161, 23),  // "on_removeButton_clicked"
        QT_MOC_LITERAL(185, 22),  // "on_clearButton_clicked"
        QT_MOC_LITERAL(208, 25),  // "on_saveListButton_clicked"
        QT_MOC_LITERAL(234, 23),  // "on_moveUpButton_clicked"
        QT_MOC_LITERAL(258, 25),  // "on_moveDownButton_clicked"
        QT_MOC_LITERAL(284, 21),  // "on_playButton_clicked"
        QT_MOC_LITERAL(306, 22),  // "on_pauseButton_clicked"
        QT_MOC_LITERAL(329, 21),  // "on_stopButton_clicked"
        QT_MOC_LITERAL(351, 28),  // "on_fastForwardButton_pressed"
        QT_MOC_LITERAL(380, 29),  // "on_fastForwardButton_released"
        QT_MOC_LITERAL(410, 32),  // "on_fastFastForwardButton_pressed"
        QT_MOC_LITERAL(443, 33),  // "on_fastFastForwardButton_rele..."
        QT_MOC_LITERAL(477, 28),  // "on_tempoSpinBox_valueChanged"
        QT_MOC_LITERAL(506, 8),  // "newValue"
        QT_MOC_LITERAL(515, 30),  // "on_positionSlider_valueChanged"
        QT_MOC_LITERAL(546, 32),  // "on_positionSlider_sliderReleased"
        QT_MOC_LITERAL(579, 22),  // "handlePlaybackFinished"
        QT_MOC_LITERAL(602, 10),  // "successful"
        QT_MOC_LITERAL(613, 25),  // "handlePlaybackTimeChanged"
        QT_MOC_LITERAL(639, 12),  // "currentNanos"
        QT_MOC_LITERAL(652, 12),  // "totalSeconds"
        QT_MOC_LITERAL(665, 14),  // "handleTempoSet"
        QT_MOC_LITERAL(680, 5)   // "tempo"
    },
    "MidiPlayerDialog",
    "playbackStarted",
    "",
    "on_playList_currentRowChanged",
    "currentRow",
    "on_playList_activated",
    "QModelIndex",
    "index",
    "on_addButton_clicked",
    "on_addListButton_clicked",
    "on_removeButton_clicked",
    "on_clearButton_clicked",
    "on_saveListButton_clicked",
    "on_moveUpButton_clicked",
    "on_moveDownButton_clicked",
    "on_playButton_clicked",
    "on_pauseButton_clicked",
    "on_stopButton_clicked",
    "on_fastForwardButton_pressed",
    "on_fastForwardButton_released",
    "on_fastFastForwardButton_pressed",
    "on_fastFastForwardButton_released",
    "on_tempoSpinBox_valueChanged",
    "newValue",
    "on_positionSlider_valueChanged",
    "on_positionSlider_sliderReleased",
    "handlePlaybackFinished",
    "successful",
    "handlePlaybackTimeChanged",
    "currentNanos",
    "totalSeconds",
    "handleTempoSet",
    "tempo"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MidiPlayerDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  152,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  157,    2, 0x08,    4 /* Private */,
       5,    1,  160,    2, 0x08,    6 /* Private */,
       8,    0,  163,    2, 0x08,    8 /* Private */,
       9,    0,  164,    2, 0x08,    9 /* Private */,
      10,    0,  165,    2, 0x08,   10 /* Private */,
      11,    0,  166,    2, 0x08,   11 /* Private */,
      12,    0,  167,    2, 0x08,   12 /* Private */,
      13,    0,  168,    2, 0x08,   13 /* Private */,
      14,    0,  169,    2, 0x08,   14 /* Private */,
      15,    0,  170,    2, 0x08,   15 /* Private */,
      16,    0,  171,    2, 0x08,   16 /* Private */,
      17,    0,  172,    2, 0x08,   17 /* Private */,
      18,    0,  173,    2, 0x08,   18 /* Private */,
      19,    0,  174,    2, 0x08,   19 /* Private */,
      20,    0,  175,    2, 0x08,   20 /* Private */,
      21,    0,  176,    2, 0x08,   21 /* Private */,
      22,    1,  177,    2, 0x08,   22 /* Private */,
      24,    0,  180,    2, 0x08,   24 /* Private */,
      25,    0,  181,    2, 0x08,   25 /* Private */,
      26,    1,  182,    2, 0x08,   26 /* Private */,
      28,    2,  185,    2, 0x08,   28 /* Private */,
      31,    1,  190,    2, 0x08,   31 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::UInt,   29,   30,
    QMetaType::Void, QMetaType::UInt,   32,

       0        // eod
};

Q_CONSTINIT const QMetaObject MidiPlayerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MidiPlayerDialog.offsetsAndSizes,
    qt_meta_data_MidiPlayerDialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MidiPlayerDialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MidiPlayerDialog, std::true_type>,
        // method 'playbackStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_playList_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_playList_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_addButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addListButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveListButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveUpButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveDownButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_playButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pauseButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stopButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fastForwardButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fastForwardButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fastFastForwardButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fastFastForwardButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tempoSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_positionSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_positionSlider_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handlePlaybackFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'handlePlaybackTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'handleTempoSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>
    >,
    nullptr
} };

void MidiPlayerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiPlayerDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->playbackStarted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->on_playList_currentRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_playList_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->on_addButton_clicked(); break;
        case 4: _t->on_addListButton_clicked(); break;
        case 5: _t->on_removeButton_clicked(); break;
        case 6: _t->on_clearButton_clicked(); break;
        case 7: _t->on_saveListButton_clicked(); break;
        case 8: _t->on_moveUpButton_clicked(); break;
        case 9: _t->on_moveDownButton_clicked(); break;
        case 10: _t->on_playButton_clicked(); break;
        case 11: _t->on_pauseButton_clicked(); break;
        case 12: _t->on_stopButton_clicked(); break;
        case 13: _t->on_fastForwardButton_pressed(); break;
        case 14: _t->on_fastForwardButton_released(); break;
        case 15: _t->on_fastFastForwardButton_pressed(); break;
        case 16: _t->on_fastFastForwardButton_released(); break;
        case 17: _t->on_tempoSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_positionSlider_valueChanged(); break;
        case 19: _t->on_positionSlider_sliderReleased(); break;
        case 20: _t->handlePlaybackFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->handlePlaybackTimeChanged((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2]))); break;
        case 22: _t->handleTempoSet((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MidiPlayerDialog::*)(const QString & , const QString & );
            if (_t _q_method = &MidiPlayerDialog::playbackStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MidiPlayerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MidiPlayerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MidiPlayerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MidiPlayerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MidiPlayerDialog::playbackStarted(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
