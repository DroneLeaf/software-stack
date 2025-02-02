/****************************************************************************
** Meta object code from reading C++ file 'SettingsManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Settings/SettingsManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsManager_t {
    QByteArrayData data[16];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsManager_t qt_meta_stringdata_SettingsManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SettingsManager"
QT_MOC_LITERAL(1, 16, 11), // "appSettings"
QT_MOC_LITERAL(2, 28, 13), // "unitsSettings"
QT_MOC_LITERAL(3, 42, 19), // "autoConnectSettings"
QT_MOC_LITERAL(4, 62, 13), // "videoSettings"
QT_MOC_LITERAL(5, 76, 17), // "flightMapSettings"
QT_MOC_LITERAL(6, 94, 11), // "rtkSettings"
QT_MOC_LITERAL(7, 106, 15), // "flyViewSettings"
QT_MOC_LITERAL(8, 122, 16), // "planViewSettings"
QT_MOC_LITERAL(9, 139, 18), // "brandImageSettings"
QT_MOC_LITERAL(10, 158, 19), // "offlineMapsSettings"
QT_MOC_LITERAL(11, 178, 23), // "firmwareUpgradeSettings"
QT_MOC_LITERAL(12, 202, 26), // "adsbVehicleManagerSettings"
QT_MOC_LITERAL(13, 229, 24), // "gimbalControllerSettings"
QT_MOC_LITERAL(14, 254, 28), // "apmMavlinkStreamRateSettings"
QT_MOC_LITERAL(15, 283, 16) // "remoteIDSettings"

    },
    "SettingsManager\0appSettings\0unitsSettings\0"
    "autoConnectSettings\0videoSettings\0"
    "flightMapSettings\0rtkSettings\0"
    "flyViewSettings\0planViewSettings\0"
    "brandImageSettings\0offlineMapsSettings\0"
    "firmwareUpgradeSettings\0"
    "adsbVehicleManagerSettings\0"
    "gimbalControllerSettings\0"
    "apmMavlinkStreamRateSettings\0"
    "remoteIDSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      15,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095401,
       2, QMetaType::QObjectStar, 0x00095401,
       3, QMetaType::QObjectStar, 0x00095401,
       4, QMetaType::QObjectStar, 0x00095401,
       5, QMetaType::QObjectStar, 0x00095401,
       6, QMetaType::QObjectStar, 0x00095401,
       7, QMetaType::QObjectStar, 0x00095401,
       8, QMetaType::QObjectStar, 0x00095401,
       9, QMetaType::QObjectStar, 0x00095401,
      10, QMetaType::QObjectStar, 0x00095401,
      11, QMetaType::QObjectStar, 0x00095401,
      12, QMetaType::QObjectStar, 0x00095401,
      13, QMetaType::QObjectStar, 0x00095401,
      14, QMetaType::QObjectStar, 0x00095401,
      15, QMetaType::QObjectStar, 0x00095401,

       0        // eod
};

void SettingsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SettingsManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->appSettings(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->unitsSettings(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->autoConnectSettings(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->videoSettings(); break;
        case 4: *reinterpret_cast< QObject**>(_v) = _t->flightMapSettings(); break;
        case 5: *reinterpret_cast< QObject**>(_v) = _t->rtkSettings(); break;
        case 6: *reinterpret_cast< QObject**>(_v) = _t->flyViewSettings(); break;
        case 7: *reinterpret_cast< QObject**>(_v) = _t->planViewSettings(); break;
        case 8: *reinterpret_cast< QObject**>(_v) = _t->brandImageSettings(); break;
        case 9: *reinterpret_cast< QObject**>(_v) = _t->offlineMapsSettings(); break;
        case 10: *reinterpret_cast< QObject**>(_v) = _t->firmwareUpgradeSettings(); break;
        case 11: *reinterpret_cast< QObject**>(_v) = _t->adsbVehicleManagerSettings(); break;
        case 12: *reinterpret_cast< QObject**>(_v) = _t->gimbalControllerSettings(); break;
        case 13: *reinterpret_cast< QObject**>(_v) = _t->apmMavlinkStreamRateSettings(); break;
        case 14: *reinterpret_cast< QObject**>(_v) = _t->remoteIDSettings(); break;
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

QT_INIT_METAOBJECT const QMetaObject SettingsManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_SettingsManager.data,
    qt_meta_data_SettingsManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int SettingsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
