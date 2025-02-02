/****************************************************************************
** Meta object code from reading C++ file 'VehicleEstimatorStatusFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/VehicleEstimatorStatusFactGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleEstimatorStatusFactGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleEstimatorStatusFactGroup_t {
    QByteArrayData data[22];
    char stringdata0[393];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleEstimatorStatusFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleEstimatorStatusFactGroup_t qt_meta_stringdata_VehicleEstimatorStatusFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 31), // "VehicleEstimatorStatusFactGroup"
QT_MOC_LITERAL(1, 32, 20), // "goodAttitudeEstimate"
QT_MOC_LITERAL(2, 53, 5), // "Fact*"
QT_MOC_LITERAL(3, 59, 20), // "goodHorizVelEstimate"
QT_MOC_LITERAL(4, 80, 19), // "goodVertVelEstimate"
QT_MOC_LITERAL(5, 100, 23), // "goodHorizPosRelEstimate"
QT_MOC_LITERAL(6, 124, 23), // "goodHorizPosAbsEstimate"
QT_MOC_LITERAL(7, 148, 22), // "goodVertPosAbsEstimate"
QT_MOC_LITERAL(8, 171, 22), // "goodVertPosAGLEstimate"
QT_MOC_LITERAL(9, 194, 24), // "goodConstPosModeEstimate"
QT_MOC_LITERAL(10, 219, 27), // "goodPredHorizPosRelEstimate"
QT_MOC_LITERAL(11, 247, 27), // "goodPredHorizPosAbsEstimate"
QT_MOC_LITERAL(12, 275, 9), // "gpsGlitch"
QT_MOC_LITERAL(13, 285, 10), // "accelError"
QT_MOC_LITERAL(14, 296, 8), // "velRatio"
QT_MOC_LITERAL(15, 305, 13), // "horizPosRatio"
QT_MOC_LITERAL(16, 319, 12), // "vertPosRatio"
QT_MOC_LITERAL(17, 332, 8), // "magRatio"
QT_MOC_LITERAL(18, 341, 9), // "haglRatio"
QT_MOC_LITERAL(19, 351, 8), // "tasRatio"
QT_MOC_LITERAL(20, 360, 16), // "horizPosAccuracy"
QT_MOC_LITERAL(21, 377, 15) // "vertPosAccuracy"

    },
    "VehicleEstimatorStatusFactGroup\0"
    "goodAttitudeEstimate\0Fact*\0"
    "goodHorizVelEstimate\0goodVertVelEstimate\0"
    "goodHorizPosRelEstimate\0goodHorizPosAbsEstimate\0"
    "goodVertPosAbsEstimate\0goodVertPosAGLEstimate\0"
    "goodConstPosModeEstimate\0"
    "goodPredHorizPosRelEstimate\0"
    "goodPredHorizPosAbsEstimate\0gpsGlitch\0"
    "accelError\0velRatio\0horizPosRatio\0"
    "vertPosRatio\0magRatio\0haglRatio\0"
    "tasRatio\0horizPosAccuracy\0vertPosAccuracy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleEstimatorStatusFactGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      20,   14, // properties
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
      15, 0x80000000 | 2, 0x00095409,
      16, 0x80000000 | 2, 0x00095409,
      17, 0x80000000 | 2, 0x00095409,
      18, 0x80000000 | 2, 0x00095409,
      19, 0x80000000 | 2, 0x00095409,
      20, 0x80000000 | 2, 0x00095409,
      21, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void VehicleEstimatorStatusFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
        case 18:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
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
        auto *_t = static_cast<VehicleEstimatorStatusFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->goodAttitudeEstimate(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->goodHorizVelEstimate(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->goodVertVelEstimate(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->goodHorizPosRelEstimate(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->goodHorizPosAbsEstimate(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->goodVertPosAbsEstimate(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->goodVertPosAGLEstimate(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->goodConstPosModeEstimate(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->goodPredHorizPosRelEstimate(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->goodPredHorizPosAbsEstimate(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->gpsGlitch(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->accelError(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->velRatio(); break;
        case 13: *reinterpret_cast< Fact**>(_v) = _t->horizPosRatio(); break;
        case 14: *reinterpret_cast< Fact**>(_v) = _t->vertPosRatio(); break;
        case 15: *reinterpret_cast< Fact**>(_v) = _t->magRatio(); break;
        case 16: *reinterpret_cast< Fact**>(_v) = _t->haglRatio(); break;
        case 17: *reinterpret_cast< Fact**>(_v) = _t->tasRatio(); break;
        case 18: *reinterpret_cast< Fact**>(_v) = _t->horizPosAccuracy(); break;
        case 19: *reinterpret_cast< Fact**>(_v) = _t->vertPosAccuracy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject VehicleEstimatorStatusFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_VehicleEstimatorStatusFactGroup.data,
    qt_meta_data_VehicleEstimatorStatusFactGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VehicleEstimatorStatusFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleEstimatorStatusFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleEstimatorStatusFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleEstimatorStatusFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
