/****************************************************************************
** Meta object code from reading C++ file 'ADSBVehicle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/ADSB/ADSBVehicle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ADSBVehicle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ADSBVehicle_t {
    QByteArrayData data[14];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ADSBVehicle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ADSBVehicle_t qt_meta_stringdata_ADSBVehicle = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ADSBVehicle"
QT_MOC_LITERAL(1, 12, 17), // "coordinateChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "callsignChanged"
QT_MOC_LITERAL(4, 47, 15), // "altitudeChanged"
QT_MOC_LITERAL(5, 63, 14), // "headingChanged"
QT_MOC_LITERAL(6, 78, 12), // "alertChanged"
QT_MOC_LITERAL(7, 91, 11), // "icaoAddress"
QT_MOC_LITERAL(8, 103, 8), // "callsign"
QT_MOC_LITERAL(9, 112, 10), // "coordinate"
QT_MOC_LITERAL(10, 123, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(11, 138, 8), // "altitude"
QT_MOC_LITERAL(12, 147, 7), // "heading"
QT_MOC_LITERAL(13, 155, 5) // "alert"

    },
    "ADSBVehicle\0coordinateChanged\0\0"
    "callsignChanged\0altitudeChanged\0"
    "headingChanged\0alertChanged\0icaoAddress\0"
    "callsign\0coordinate\0QGeoCoordinate\0"
    "altitude\0heading\0alert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ADSBVehicle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::QString, 0x00495001,
       9, 0x80000000 | 10, 0x00495009,
      11, QMetaType::Double, 0x00495001,
      12, QMetaType::Double, 0x00495001,
      13, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,
       3,
       4,

       0        // eod
};

void ADSBVehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ADSBVehicle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateChanged(); break;
        case 1: _t->callsignChanged(); break;
        case 2: _t->altitudeChanged(); break;
        case 3: _t->headingChanged(); break;
        case 4: _t->alertChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ADSBVehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::coordinateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ADSBVehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::callsignChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ADSBVehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::altitudeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ADSBVehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::headingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ADSBVehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::alertChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ADSBVehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->icaoAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->callsign(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->altitude(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->heading(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->alert(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ADSBVehicle::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ADSBVehicle.data,
    qt_meta_data_ADSBVehicle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ADSBVehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADSBVehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ADSBVehicle.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ADSBVehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ADSBVehicle::coordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ADSBVehicle::callsignChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ADSBVehicle::altitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ADSBVehicle::headingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ADSBVehicle::alertChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
