/****************************************************************************
** Meta object code from reading C++ file 'VehicleGeneratorFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/VehicleGeneratorFactGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleGeneratorFactGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleGeneratorFactGroup_t {
    QByteArrayData data[16];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleGeneratorFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleGeneratorFactGroup_t qt_meta_stringdata_VehicleGeneratorFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 25), // "VehicleGeneratorFactGroup"
QT_MOC_LITERAL(1, 26, 25), // "flagsListGeneratorChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 6), // "status"
QT_MOC_LITERAL(4, 60, 5), // "Fact*"
QT_MOC_LITERAL(5, 66, 8), // "genSpeed"
QT_MOC_LITERAL(6, 75, 14), // "batteryCurrent"
QT_MOC_LITERAL(7, 90, 11), // "loadCurrent"
QT_MOC_LITERAL(8, 102, 14), // "powerGenerated"
QT_MOC_LITERAL(9, 117, 10), // "busVoltage"
QT_MOC_LITERAL(10, 128, 13), // "rectifierTemp"
QT_MOC_LITERAL(11, 142, 18), // "batCurrentSetpoint"
QT_MOC_LITERAL(12, 161, 7), // "genTemp"
QT_MOC_LITERAL(13, 169, 7), // "runtime"
QT_MOC_LITERAL(14, 177, 15), // "timeMaintenance"
QT_MOC_LITERAL(15, 193, 18) // "flagsListGenerator"

    },
    "VehicleGeneratorFactGroup\0"
    "flagsListGeneratorChanged\0\0status\0"
    "Fact*\0genSpeed\0batteryCurrent\0loadCurrent\0"
    "powerGenerated\0busVoltage\0rectifierTemp\0"
    "batCurrentSetpoint\0genTemp\0runtime\0"
    "timeMaintenance\0flagsListGenerator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleGeneratorFactGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      12,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 4, 0x00095409,
       6, 0x80000000 | 4, 0x00095409,
       7, 0x80000000 | 4, 0x00095409,
       8, 0x80000000 | 4, 0x00095409,
       9, 0x80000000 | 4, 0x00095409,
      10, 0x80000000 | 4, 0x00095409,
      11, 0x80000000 | 4, 0x00095409,
      12, 0x80000000 | 4, 0x00095409,
      13, 0x80000000 | 4, 0x00095409,
      14, 0x80000000 | 4, 0x00095409,
      15, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
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

void VehicleGeneratorFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleGeneratorFactGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flagsListGeneratorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleGeneratorFactGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleGeneratorFactGroup::flagsListGeneratorChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        auto *_t = static_cast<VehicleGeneratorFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->genSpeed(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->batteryCurrent(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->loadCurrent(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->powerGenerated(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->busVoltage(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->rectifierTemp(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->batCurrentSetpoint(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->genTemp(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->runtime(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->timeMaintenance(); break;
        case 11: *reinterpret_cast< QVariantList*>(_v) = _t->flagsListGenerator(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VehicleGeneratorFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_VehicleGeneratorFactGroup.data,
    qt_meta_data_VehicleGeneratorFactGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VehicleGeneratorFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleGeneratorFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleGeneratorFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleGeneratorFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void VehicleGeneratorFactGroup::flagsListGeneratorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
