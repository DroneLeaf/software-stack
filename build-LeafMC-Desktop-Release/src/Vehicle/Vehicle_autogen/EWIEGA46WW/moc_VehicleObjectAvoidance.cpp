/****************************************************************************
** Meta object code from reading C++ file 'VehicleObjectAvoidance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/VehicleObjectAvoidance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleObjectAvoidance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleObjectAvoidance_t {
    QByteArrayData data[17];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleObjectAvoidance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleObjectAvoidance_t qt_meta_stringdata_VehicleObjectAvoidance = {
    {
QT_MOC_LITERAL(0, 0, 22), // "VehicleObjectAvoidance"
QT_MOC_LITERAL(1, 23, 22), // "objectAvoidanceChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "start"
QT_MOC_LITERAL(4, 53, 11), // "minDistance"
QT_MOC_LITERAL(5, 65, 4), // "stop"
QT_MOC_LITERAL(6, 70, 4), // "grid"
QT_MOC_LITERAL(7, 75, 1), // "i"
QT_MOC_LITERAL(8, 77, 8), // "distance"
QT_MOC_LITERAL(9, 86, 9), // "available"
QT_MOC_LITERAL(10, 96, 7), // "enabled"
QT_MOC_LITERAL(11, 104, 9), // "distances"
QT_MOC_LITERAL(12, 114, 10), // "QList<int>"
QT_MOC_LITERAL(13, 125, 9), // "increment"
QT_MOC_LITERAL(14, 135, 11), // "maxDistance"
QT_MOC_LITERAL(15, 147, 11), // "angleOffset"
QT_MOC_LITERAL(16, 159, 8) // "gridSize"

    },
    "VehicleObjectAvoidance\0objectAvoidanceChanged\0"
    "\0start\0minDistance\0stop\0grid\0i\0distance\0"
    "available\0enabled\0distances\0QList<int>\0"
    "increment\0maxDistance\0angleOffset\0"
    "gridSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleObjectAvoidance[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x02 /* Public */,
       5,    0,   43,    2, 0x02 /* Public */,
       6,    1,   44,    2, 0x02 /* Public */,
       8,    1,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::QPointF, QMetaType::Int,    7,
    QMetaType::QReal, QMetaType::Int,    7,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00495001,
      10, QMetaType::Bool, 0x00495001,
      11, 0x80000000 | 12, 0x00495009,
      13, QMetaType::QReal, 0x00495001,
       4, QMetaType::Int, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::QReal, 0x00495001,
      16, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void VehicleObjectAvoidance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleObjectAvoidance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectAvoidanceChanged(); break;
        case 1: _t->start((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->stop(); break;
        case 3: { QPointF _r = _t->grid((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = std::move(_r); }  break;
        case 4: { qreal _r = _t->distance((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleObjectAvoidance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleObjectAvoidance::objectAvoidanceChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleObjectAvoidance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 2: *reinterpret_cast< QList<int>*>(_v) = _t->distances(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->increment(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->minDistance(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->maxDistance(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->angleOffset(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->gridSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VehicleObjectAvoidance::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VehicleObjectAvoidance.data,
    qt_meta_data_VehicleObjectAvoidance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VehicleObjectAvoidance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleObjectAvoidance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleObjectAvoidance.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VehicleObjectAvoidance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VehicleObjectAvoidance::objectAvoidanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
