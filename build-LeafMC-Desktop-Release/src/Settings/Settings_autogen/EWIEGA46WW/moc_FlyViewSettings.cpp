/****************************************************************************
** Meta object code from reading C++ file 'FlyViewSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Settings/FlyViewSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlyViewSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlyViewSettings_t {
    QByteArrayData data[15];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlyViewSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlyViewSettings_t qt_meta_stringdata_FlyViewSettings = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FlyViewSettings"
QT_MOC_LITERAL(1, 16, 21), // "guidedMinimumAltitude"
QT_MOC_LITERAL(2, 38, 5), // "Fact*"
QT_MOC_LITERAL(3, 44, 21), // "guidedMaximumAltitude"
QT_MOC_LITERAL(4, 66, 22), // "showLogReplayStatusBar"
QT_MOC_LITERAL(5, 89, 24), // "alternateInstrumentPanel"
QT_MOC_LITERAL(6, 114, 31), // "showAdditionalIndicatorsCompass"
QT_MOC_LITERAL(7, 146, 17), // "lockNoseUpCompass"
QT_MOC_LITERAL(8, 164, 23), // "maxGoToLocationDistance"
QT_MOC_LITERAL(9, 188, 24), // "keepMapCenteredOnVehicle"
QT_MOC_LITERAL(10, 213, 23), // "showSimpleCameraControl"
QT_MOC_LITERAL(11, 237, 27), // "showObstacleDistanceOverlay"
QT_MOC_LITERAL(12, 265, 18), // "updateHomePosition"
QT_MOC_LITERAL(13, 284, 19), // "enableCustomActions"
QT_MOC_LITERAL(14, 304, 23) // "customActionDefinitions"

    },
    "FlyViewSettings\0guidedMinimumAltitude\0"
    "Fact*\0guidedMaximumAltitude\0"
    "showLogReplayStatusBar\0alternateInstrumentPanel\0"
    "showAdditionalIndicatorsCompass\0"
    "lockNoseUpCompass\0maxGoToLocationDistance\0"
    "keepMapCenteredOnVehicle\0"
    "showSimpleCameraControl\0"
    "showObstacleDistanceOverlay\0"
    "updateHomePosition\0enableCustomActions\0"
    "customActionDefinitions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlyViewSettings[] = {

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

void FlyViewSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        auto *_t = static_cast<FlyViewSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->guidedMinimumAltitude(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->guidedMaximumAltitude(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->showLogReplayStatusBar(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->alternateInstrumentPanel(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->showAdditionalIndicatorsCompass(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->lockNoseUpCompass(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->maxGoToLocationDistance(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->keepMapCenteredOnVehicle(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->showSimpleCameraControl(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->showObstacleDistanceOverlay(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->updateHomePosition(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->enableCustomActions(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->customActionDefinitions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject FlyViewSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsGroup::staticMetaObject>(),
    qt_meta_stringdata_FlyViewSettings.data,
    qt_meta_data_FlyViewSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlyViewSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlyViewSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlyViewSettings.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int FlyViewSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
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
