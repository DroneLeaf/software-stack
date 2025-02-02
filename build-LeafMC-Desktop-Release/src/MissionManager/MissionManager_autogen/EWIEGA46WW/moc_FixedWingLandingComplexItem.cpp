/****************************************************************************
** Meta object code from reading C++ file 'FixedWingLandingComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/FixedWingLandingComplexItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FixedWingLandingComplexItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FixedWingLandingComplexItem_t {
    QByteArrayData data[10];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FixedWingLandingComplexItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FixedWingLandingComplexItem_t qt_meta_stringdata_FixedWingLandingComplexItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FixedWingLandingComplexItem"
QT_MOC_LITERAL(1, 28, 41), // "_updateFlightPathSegmentsDont..."
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 18), // "_glideSlopeChanged"
QT_MOC_LITERAL(4, 90, 19), // "moveLandingPosition"
QT_MOC_LITERAL(5, 110, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(6, 125, 10), // "coordinate"
QT_MOC_LITERAL(7, 136, 18), // "valueSetIsDistance"
QT_MOC_LITERAL(8, 155, 5), // "Fact*"
QT_MOC_LITERAL(9, 161, 10) // "glideSlope"

    },
    "FixedWingLandingComplexItem\0"
    "_updateFlightPathSegmentsDontCallDirectly\0"
    "\0_glideSlopeChanged\0moveLandingPosition\0"
    "QGeoCoordinate\0coordinate\0valueSetIsDistance\0"
    "Fact*\0glideSlope"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FixedWingLandingComplexItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00095409,
       9, 0x80000000 | 8, 0x00095409,

       0        // eod
};

void FixedWingLandingComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FixedWingLandingComplexItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_updateFlightPathSegmentsDontCallDirectly(); break;
        case 1: _t->_glideSlopeChanged(); break;
        case 2: _t->moveLandingPosition((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FixedWingLandingComplexItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->valueSetIsDistance(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->glideSlope(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FixedWingLandingComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<LandingComplexItem::staticMetaObject>(),
    qt_meta_stringdata_FixedWingLandingComplexItem.data,
    qt_meta_data_FixedWingLandingComplexItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FixedWingLandingComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FixedWingLandingComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FixedWingLandingComplexItem.stringdata0))
        return static_cast<void*>(this);
    return LandingComplexItem::qt_metacast(_clname);
}

int FixedWingLandingComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LandingComplexItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
