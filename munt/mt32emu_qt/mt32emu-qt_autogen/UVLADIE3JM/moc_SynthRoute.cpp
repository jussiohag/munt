/****************************************************************************
** Meta object code from reading C++ file 'SynthRoute.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/SynthRoute.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SynthRoute.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SynthRoute_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[6];
    char stringdata5[17];
    char stringdata6[13];
    char stringdata7[12];
    char stringdata8[19];
    char stringdata9[23];
    char stringdata10[28];
    char stringdata11[18];
    char stringdata12[11];
    char stringdata13[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SynthRoute_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SynthRoute_t qt_meta_stringdata_SynthRoute = {
    {
        QT_MOC_LITERAL(0, 10),  // "SynthRoute"
        QT_MOC_LITERAL(11, 12),  // "stateChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 15),  // "SynthRouteState"
        QT_MOC_LITERAL(41, 5),  // "state"
        QT_MOC_LITERAL(47, 16),  // "midiSessionAdded"
        QT_MOC_LITERAL(64, 12),  // "MidiSession*"
        QT_MOC_LITERAL(77, 11),  // "midiSession"
        QT_MOC_LITERAL(89, 18),  // "midiSessionRemoved"
        QT_MOC_LITERAL(108, 22),  // "midiSessionNameChanged"
        QT_MOC_LITERAL(131, 27),  // "exclusiveMidiSessionRemoved"
        QT_MOC_LITERAL(159, 17),  // "handleQSynthState"
        QT_MOC_LITERAL(177, 10),  // "SynthState"
        QT_MOC_LITERAL(188, 10)   // "synthState"
    },
    "SynthRoute",
    "stateChanged",
    "",
    "SynthRouteState",
    "state",
    "midiSessionAdded",
    "MidiSession*",
    "midiSession",
    "midiSessionRemoved",
    "midiSessionNameChanged",
    "exclusiveMidiSessionRemoved",
    "handleQSynthState",
    "SynthState",
    "synthState"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SynthRoute[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       5,    1,   53,    2, 0x06,    3 /* Public */,
       8,    1,   56,    2, 0x06,    5 /* Public */,
       9,    1,   59,    2, 0x06,    7 /* Public */,
      10,    1,   62,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject SynthRoute::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SynthRoute.offsetsAndSizes,
    qt_meta_data_SynthRoute,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SynthRoute_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SynthRoute, std::true_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SynthRouteState, std::false_type>,
        // method 'midiSessionAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MidiSession *, std::false_type>,
        // method 'midiSessionRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MidiSession *, std::false_type>,
        // method 'midiSessionNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MidiSession *, std::false_type>,
        // method 'exclusiveMidiSessionRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MidiSession *, std::false_type>,
        // method 'handleQSynthState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SynthState, std::false_type>
    >,
    nullptr
} };

void SynthRoute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SynthRoute *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<SynthRouteState>>(_a[1]))); break;
        case 1: _t->midiSessionAdded((*reinterpret_cast< std::add_pointer_t<MidiSession*>>(_a[1]))); break;
        case 2: _t->midiSessionRemoved((*reinterpret_cast< std::add_pointer_t<MidiSession*>>(_a[1]))); break;
        case 3: _t->midiSessionNameChanged((*reinterpret_cast< std::add_pointer_t<MidiSession*>>(_a[1]))); break;
        case 4: _t->exclusiveMidiSessionRemoved((*reinterpret_cast< std::add_pointer_t<MidiSession*>>(_a[1]))); break;
        case 5: _t->handleQSynthState((*reinterpret_cast< std::add_pointer_t<SynthState>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SynthRoute::*)(SynthRouteState );
            if (_t _q_method = &SynthRoute::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SynthRoute::*)(MidiSession * );
            if (_t _q_method = &SynthRoute::midiSessionAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SynthRoute::*)(MidiSession * );
            if (_t _q_method = &SynthRoute::midiSessionRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SynthRoute::*)(MidiSession * );
            if (_t _q_method = &SynthRoute::midiSessionNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SynthRoute::*)(MidiSession * );
            if (_t _q_method = &SynthRoute::exclusiveMidiSessionRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *SynthRoute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SynthRoute::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SynthRoute.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SynthRoute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SynthRoute::stateChanged(SynthRouteState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SynthRoute::midiSessionAdded(MidiSession * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SynthRoute::midiSessionRemoved(MidiSession * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SynthRoute::midiSessionNameChanged(MidiSession * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SynthRoute::exclusiveMidiSessionRemoved(MidiSession * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
