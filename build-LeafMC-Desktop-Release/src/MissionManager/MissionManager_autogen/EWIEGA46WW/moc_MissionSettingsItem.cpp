/****************************************************************************
** Meta object code from reading C++ file 'MissionSettingsItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/MissionSettingsItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionSettingsItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionSettingsItem_t {
    QByteArrayData data[21];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionSettingsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionSettingsItem_t qt_meta_stringdata_MissionSettingsItem = {
    {
QT_MOC_LITERAL(0, 0, 19), // "MissionSettingsItem"
QT_MOC_LITERAL(1, 20, 32), // "specifyMissionFlightSpeedChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 25), // "specifyMissionFlightSpeed"
QT_MOC_LITERAL(4, 80, 36), // "_setDirtyAndUpdateLastSequenc..."
QT_MOC_LITERAL(5, 117, 9), // "_setDirty"
QT_MOC_LITERAL(6, 127, 20), // "_sectionDirtyChanged"
QT_MOC_LITERAL(7, 148, 5), // "dirty"
QT_MOC_LITERAL(8, 154, 27), // "_updateAltitudeInCoordinate"
QT_MOC_LITERAL(9, 182, 5), // "value"
QT_MOC_LITERAL(10, 188, 22), // "_setHomeAltFromTerrain"
QT_MOC_LITERAL(11, 211, 15), // "terrainAltitude"
QT_MOC_LITERAL(12, 227, 20), // "_setCoordinateWorker"
QT_MOC_LITERAL(13, 248, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(14, 263, 10), // "coordinate"
QT_MOC_LITERAL(15, 274, 19), // "_updateHomePosition"
QT_MOC_LITERAL(16, 294, 12), // "homePosition"
QT_MOC_LITERAL(17, 307, 27), // "plannedHomePositionAltitude"
QT_MOC_LITERAL(18, 335, 5), // "Fact*"
QT_MOC_LITERAL(19, 341, 13), // "cameraSection"
QT_MOC_LITERAL(20, 355, 12) // "speedSection"

    },
    "MissionSettingsItem\0"
    "specifyMissionFlightSpeedChanged\0\0"
    "specifyMissionFlightSpeed\0"
    "_setDirtyAndUpdateLastSequenceNumber\0"
    "_setDirty\0_sectionDirtyChanged\0dirty\0"
    "_updateAltitudeInCoordinate\0value\0"
    "_setHomeAltFromTerrain\0terrainAltitude\0"
    "_setCoordinateWorker\0QGeoCoordinate\0"
    "coordinate\0_updateHomePosition\0"
    "homePosition\0plannedHomePositionAltitude\0"
    "Fact*\0cameraSection\0speedSection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionSettingsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,
      12,    1,   68,    2, 0x08 /* Private */,
      15,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QVariant,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   16,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x00095409,
      19, QMetaType::QObjectStar, 0x00095401,
      20, QMetaType::QObjectStar, 0x00095401,

       0        // eod
};

void MissionSettingsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionSettingsItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->specifyMissionFlightSpeedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->_setDirtyAndUpdateLastSequenceNumber(); break;
        case 2: _t->_setDirty(); break;
        case 3: _t->_sectionDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->_updateAltitudeInCoordinate((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: _t->_setHomeAltFromTerrain((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->_setCoordinateWorker((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 7: _t->_updateHomePosition((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MissionSettingsItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionSettingsItem::specifyMissionFlightSpeedChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MissionSettingsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->plannedHomePositionAltitude(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->cameraSection(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->speedSection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MissionSettingsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ComplexMissionItem::staticMetaObject>(),
    qt_meta_stringdata_MissionSettingsItem.data,
    qt_meta_data_MissionSettingsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MissionSettingsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionSettingsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionSettingsItem.stringdata0))
        return static_cast<void*>(this);
    return ComplexMissionItem::qt_metacast(_clname);
}

int MissionSettingsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComplexMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void MissionSettingsItem::specifyMissionFlightSpeedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
