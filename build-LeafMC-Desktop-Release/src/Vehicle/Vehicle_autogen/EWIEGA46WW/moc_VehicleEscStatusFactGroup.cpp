/****************************************************************************
** Meta object code from reading C++ file 'VehicleEscStatusFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/VehicleEscStatusFactGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleEscStatusFactGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleEscStatusFactGroup_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleEscStatusFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleEscStatusFactGroup_t qt_meta_stringdata_VehicleEscStatusFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 25), // "VehicleEscStatusFactGroup"
QT_MOC_LITERAL(1, 26, 5), // "index"
QT_MOC_LITERAL(2, 32, 5), // "Fact*"
QT_MOC_LITERAL(3, 38, 8), // "rpmFirst"
QT_MOC_LITERAL(4, 47, 9), // "rpmSecond"
QT_MOC_LITERAL(5, 57, 8), // "rpmThird"
QT_MOC_LITERAL(6, 66, 9), // "rpmFourth"
QT_MOC_LITERAL(7, 76, 12), // "currentFirst"
QT_MOC_LITERAL(8, 89, 13), // "currentSecond"
QT_MOC_LITERAL(9, 103, 12), // "currentThird"
QT_MOC_LITERAL(10, 116, 13), // "currentFourth"
QT_MOC_LITERAL(11, 130, 12), // "voltageFirst"
QT_MOC_LITERAL(12, 143, 13), // "voltageSecond"
QT_MOC_LITERAL(13, 157, 12), // "voltageThird"
QT_MOC_LITERAL(14, 170, 13) // "voltageFourth"

    },
    "VehicleEscStatusFactGroup\0index\0Fact*\0"
    "rpmFirst\0rpmSecond\0rpmThird\0rpmFourth\0"
    "currentFirst\0currentSecond\0currentThird\0"
    "currentFourth\0voltageFirst\0voltageSecond\0"
    "voltageThird\0voltageFourth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleEscStatusFactGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,
       5, 0x80000000 | 2, 0x00095409,
       6, 0x80000000 | 2, 0x00095409,
       7, 0x80000000 | 2, 0x00095409,
       8, 0x80000000 | 2, 0x00095409,
       9, 0x80000000 | 2, 0x00095409,
      10, 0x80000000 | 2, 0x00095409,
      11, 0x80000000 | 2, 0x00095409,
      12, 0x80000000 | 2, 0x00095409,
      13, 0x80000000 | 2, 0x00095409,
      14, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void VehicleEscStatusFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleEscStatusFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->index(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->rpmFirst(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->rpmSecond(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->rpmThird(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->rpmFourth(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->currentFirst(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->currentSecond(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->currentThird(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->currentFourth(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->voltageFirst(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->voltageSecond(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->voltageThird(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->voltageFourth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject VehicleEscStatusFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_VehicleEscStatusFactGroup.data,
    qt_meta_data_VehicleEscStatusFactGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VehicleEscStatusFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleEscStatusFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleEscStatusFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleEscStatusFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
