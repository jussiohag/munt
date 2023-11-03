/****************************************************************************
** Meta object code from reading C++ file 'MidiDriver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/mididrv/MidiDriver.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MidiDriver.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MidiDriver_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[10];
    char stringdata5[12];
    char stringdata6[11];
    char stringdata7[5];
    char stringdata8[19];
    char stringdata9[13];
    char stringdata10[12];
    char stringdata11[23];
    char stringdata12[6];
    char stringdata13[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MidiDriver_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MidiDriver_t qt_meta_stringdata_MidiDriver = {
    {
        QT_MOC_LITERAL(0, 10),  // "MidiDriver"
        QT_MOC_LITERAL(11, 20),  // "midiSessionInitiated"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 13),  // "MidiSession**"
        QT_MOC_LITERAL(47, 9),  // "returnVal"
        QT_MOC_LITERAL(57, 11),  // "MidiDriver*"
        QT_MOC_LITERAL(69, 10),  // "midiDriver"
        QT_MOC_LITERAL(80, 4),  // "name"
        QT_MOC_LITERAL(85, 18),  // "midiSessionDeleted"
        QT_MOC_LITERAL(104, 12),  // "MidiSession*"
        QT_MOC_LITERAL(117, 11),  // "midiSession"
        QT_MOC_LITERAL(129, 22),  // "balloonMessageAppeared"
        QT_MOC_LITERAL(152, 5),  // "title"
        QT_MOC_LITERAL(158, 4)   // "text"
    },
    "MidiDriver",
    "midiSessionInitiated",
    "",
    "MidiSession**",
    "returnVal",
    "MidiDriver*",
    "midiDriver",
    "name",
    "midiSessionDeleted",
    "MidiSession*",
    "midiSession",
    "balloonMessageAppeared",
    "title",
    "text"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MidiDriver[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   32,    2, 0x06,    1 /* Public */,
       8,    1,   39,    2, 0x06,    5 /* Public */,
      11,    2,   42,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject MidiDriver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MidiDriver.offsetsAndSizes,
    qt_meta_data_MidiDriver,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MidiDriver_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MidiDriver, std::true_type>,
        // method 'midiSessionInitiated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MidiSession * *, std::false_type>,
        QtPrivate::TypeAndForceComplete<MidiDriver *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'midiSessionDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MidiSession *, std::false_type>,
        // method 'balloonMessageAppeared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MidiDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiDriver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->midiSessionInitiated((*reinterpret_cast< std::add_pointer_t<MidiSession**>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MidiDriver*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->midiSessionDeleted((*reinterpret_cast< std::add_pointer_t<MidiSession*>>(_a[1]))); break;
        case 2: _t->balloonMessageAppeared((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< MidiDriver* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MidiDriver::*)(MidiSession * * , MidiDriver * , QString );
            if (_t _q_method = &MidiDriver::midiSessionInitiated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MidiDriver::*)(MidiSession * );
            if (_t _q_method = &MidiDriver::midiSessionDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MidiDriver::*)(const QString & , const QString & );
            if (_t _q_method = &MidiDriver::balloonMessageAppeared; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *MidiDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MidiDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MidiDriver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MidiDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MidiDriver::midiSessionInitiated(MidiSession * * _t1, MidiDriver * _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MidiDriver::midiSessionDeleted(MidiSession * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MidiDriver::balloonMessageAppeared(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
