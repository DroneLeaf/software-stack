/****************************************************************************
** Meta object code from reading C++ file 'ActuatorTesting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../LeafMC/src/Vehicle/Actuators/ActuatorTesting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActuatorTesting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActuatorTesting__Actuator_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorTesting__Actuator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorTesting__Actuator_t qt_meta_stringdata_ActuatorTesting__Actuator = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ActuatorTesting::Actuator"
QT_MOC_LITERAL(1, 26, 5), // "label"
QT_MOC_LITERAL(2, 32, 3), // "min"
QT_MOC_LITERAL(3, 36, 3), // "max"
QT_MOC_LITERAL(4, 40, 12), // "defaultValue"
QT_MOC_LITERAL(5, 53, 8), // "function"
QT_MOC_LITERAL(6, 62, 7) // "isMotor"

    },
    "ActuatorTesting::Actuator\0label\0min\0"
    "max\0defaultValue\0function\0isMotor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorTesting__Actuator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::Float, 0x00095401,
       3, QMetaType::Float, 0x00095401,
       4, QMetaType::Float, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::Bool, 0x00095401,

       0        // eod
};

void ActuatorTesting::Actuator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Actuator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->min(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->max(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->defaultValue(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->function(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMotor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorTesting::Actuator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorTesting__Actuator.data,
    qt_meta_data_ActuatorTesting__Actuator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorTesting::Actuator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorTesting::Actuator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorTesting__Actuator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorTesting::Actuator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_ActuatorTesting__ActuatorTest_t {
    QByteArrayData data[15];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorTesting__ActuatorTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorTesting__ActuatorTest_t qt_meta_stringdata_ActuatorTesting__ActuatorTest = {
    {
QT_MOC_LITERAL(0, 0, 29), // "ActuatorTesting::ActuatorTest"
QT_MOC_LITERAL(1, 30, 16), // "actuatorsChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 17), // "hadFailureChanged"
QT_MOC_LITERAL(4, 66, 9), // "setActive"
QT_MOC_LITERAL(5, 76, 6), // "active"
QT_MOC_LITERAL(6, 83, 12), // "setChannelTo"
QT_MOC_LITERAL(7, 96, 5), // "index"
QT_MOC_LITERAL(8, 102, 5), // "value"
QT_MOC_LITERAL(9, 108, 11), // "stopControl"
QT_MOC_LITERAL(10, 120, 9), // "actuators"
QT_MOC_LITERAL(11, 130, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(12, 150, 17), // "allMotorsActuator"
QT_MOC_LITERAL(13, 168, 9), // "Actuator*"
QT_MOC_LITERAL(14, 178, 10) // "hadFailure"

    },
    "ActuatorTesting::ActuatorTest\0"
    "actuatorsChanged\0\0hadFailureChanged\0"
    "setActive\0active\0setChannelTo\0index\0"
    "value\0stopControl\0actuators\0"
    "QmlObjectListModel*\0allMotorsActuator\0"
    "Actuator*\0hadFailure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorTesting__ActuatorTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x02 /* Public */,
       6,    2,   44,    2, 0x02 /* Public */,
       9,    1,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    7,    8,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00495009,
      12, 0x80000000 | 13, 0x00495009,
      14, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void ActuatorTesting::ActuatorTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actuatorsChanged(); break;
        case 1: _t->hadFailureChanged(); break;
        case 2: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setChannelTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 4: _t->stopControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorTest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorTest::actuatorsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorTest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorTest::hadFailureChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Actuator* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorTest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->actuators(); break;
        case 1: *reinterpret_cast< Actuator**>(_v) = _t->allMotorsActuator(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hadFailure(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ActuatorTesting::ActuatorTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorTesting__ActuatorTest.data,
    qt_meta_data_ActuatorTesting__ActuatorTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorTesting::ActuatorTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorTesting::ActuatorTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorTesting__ActuatorTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorTesting::ActuatorTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ActuatorTesting::ActuatorTest::actuatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActuatorTesting::ActuatorTest::hadFailureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
