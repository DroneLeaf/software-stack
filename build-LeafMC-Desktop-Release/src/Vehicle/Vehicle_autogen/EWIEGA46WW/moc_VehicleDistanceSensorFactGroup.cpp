/****************************************************************************
** Meta object code from reading C++ file 'VehicleDistanceSensorFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/VehicleDistanceSensorFactGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleDistanceSensorFactGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleDistanceSensorFactGroup_t {
    QByteArrayData data[14];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleDistanceSensorFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleDistanceSensorFactGroup_t qt_meta_stringdata_VehicleDistanceSensorFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 30), // "VehicleDistanceSensorFactGroup"
QT_MOC_LITERAL(1, 31, 12), // "rotationNone"
QT_MOC_LITERAL(2, 44, 5), // "Fact*"
QT_MOC_LITERAL(3, 50, 13), // "rotationYaw45"
QT_MOC_LITERAL(4, 64, 13), // "rotationYaw90"
QT_MOC_LITERAL(5, 78, 14), // "rotationYaw135"
QT_MOC_LITERAL(6, 93, 14), // "rotationYaw180"
QT_MOC_LITERAL(7, 108, 14), // "rotationYaw225"
QT_MOC_LITERAL(8, 123, 14), // "rotationYaw270"
QT_MOC_LITERAL(9, 138, 14), // "rotationYaw315"
QT_MOC_LITERAL(10, 153, 15), // "rotationPitch90"
QT_MOC_LITERAL(11, 169, 16), // "rotationPitch270"
QT_MOC_LITERAL(12, 186, 11), // "minDistance"
QT_MOC_LITERAL(13, 198, 11) // "maxDistance"

    },
    "VehicleDistanceSensorFactGroup\0"
    "rotationNone\0Fact*\0rotationYaw45\0"
    "rotationYaw90\0rotationYaw135\0"
    "rotationYaw180\0rotationYaw225\0"
    "rotationYaw270\0rotationYaw315\0"
    "rotationPitch90\0rotationPitch270\0"
    "minDistance\0maxDistance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleDistanceSensorFactGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
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

       0        // eod
};

void VehicleDistanceSensorFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        auto *_t = static_cast<VehicleDistanceSensorFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->rotationNone(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw45(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw90(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw135(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw180(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw225(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw270(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw315(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->rotationPitch90(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->rotationPitch270(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->minDistance(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->maxDistance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject VehicleDistanceSensorFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_VehicleDistanceSensorFactGroup.data,
    qt_meta_data_VehicleDistanceSensorFactGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VehicleDistanceSensorFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleDistanceSensorFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleDistanceSensorFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleDistanceSensorFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
