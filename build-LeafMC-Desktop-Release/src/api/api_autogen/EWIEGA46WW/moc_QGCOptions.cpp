/****************************************************************************
** Meta object code from reading C++ file 'QGCOptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/api/QGCOptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCOptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCFlyViewOptions_t {
    QByteArrayData data[12];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCFlyViewOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCFlyViewOptions_t qt_meta_stringdata_QGCFlyViewOptions = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGCFlyViewOptions"
QT_MOC_LITERAL(1, 18, 33), // "guidedBarShowEmergencyStopCha..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4), // "show"
QT_MOC_LITERAL(4, 58, 25), // "guidedBarShowOrbitChanged"
QT_MOC_LITERAL(5, 84, 23), // "guidedBarShowROIChanged"
QT_MOC_LITERAL(6, 108, 20), // "showMultiVehicleList"
QT_MOC_LITERAL(7, 129, 19), // "showInstrumentPanel"
QT_MOC_LITERAL(8, 149, 12), // "showMapScale"
QT_MOC_LITERAL(9, 162, 26), // "guidedBarShowEmergencyStop"
QT_MOC_LITERAL(10, 189, 18), // "guidedBarShowOrbit"
QT_MOC_LITERAL(11, 208, 16) // "guidedBarShowROI"

    },
    "QGCFlyViewOptions\0guidedBarShowEmergencyStopChanged\0"
    "\0show\0guidedBarShowOrbitChanged\0"
    "guidedBarShowROIChanged\0showMultiVehicleList\0"
    "showInstrumentPanel\0showMapScale\0"
    "guidedBarShowEmergencyStop\0"
    "guidedBarShowOrbit\0guidedBarShowROI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCFlyViewOptions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::Bool, 0x00495001,
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       2,

       0        // eod
};

void QGCFlyViewOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCFlyViewOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->guidedBarShowEmergencyStopChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->guidedBarShowOrbitChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->guidedBarShowROIChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCFlyViewOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCFlyViewOptions::guidedBarShowEmergencyStopChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCFlyViewOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCFlyViewOptions::guidedBarShowOrbitChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCFlyViewOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCFlyViewOptions::guidedBarShowROIChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCFlyViewOptions *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showMultiVehicleList(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showInstrumentPanel(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showMapScale(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->guidedBarShowEmergencyStop(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->guidedBarShowOrbit(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->guidedBarShowROI(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCFlyViewOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCFlyViewOptions.data,
    qt_meta_data_QGCFlyViewOptions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCFlyViewOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFlyViewOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCFlyViewOptions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCFlyViewOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QGCFlyViewOptions::guidedBarShowEmergencyStopChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCFlyViewOptions::guidedBarShowOrbitChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCFlyViewOptions::guidedBarShowROIChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QGCOptions_t {
    QByteArrayData data[51];
    char stringdata0[1219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCOptions_t qt_meta_stringdata_QGCOptions = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGCOptions"
QT_MOC_LITERAL(1, 11, 35), // "showSensorCalibrationCompassC..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4), // "show"
QT_MOC_LITERAL(4, 53, 32), // "showSensorCalibrationGyroChanged"
QT_MOC_LITERAL(5, 86, 33), // "showSensorCalibrationAccelCha..."
QT_MOC_LITERAL(6, 120, 33), // "showSensorCalibrationLevelCha..."
QT_MOC_LITERAL(7, 154, 36), // "showSensorCalibrationAirspeed..."
QT_MOC_LITERAL(8, 191, 26), // "showFirmwareUpgradeChanged"
QT_MOC_LITERAL(9, 218, 27), // "missionWaypointsOnlyChanged"
QT_MOC_LITERAL(10, 246, 20), // "missionWaypointsOnly"
QT_MOC_LITERAL(11, 267, 26), // "multiVehicleEnabledChanged"
QT_MOC_LITERAL(12, 294, 19), // "multiVehicleEnabled"
QT_MOC_LITERAL(13, 314, 29), // "allowJoystickSelectionChanged"
QT_MOC_LITERAL(14, 344, 5), // "allow"
QT_MOC_LITERAL(15, 350, 27), // "showOfflineMapExportChanged"
QT_MOC_LITERAL(16, 378, 27), // "showOfflineMapImportChanged"
QT_MOC_LITERAL(17, 406, 34), // "showMissionAbsoluteAltitudeCh..."
QT_MOC_LITERAL(18, 441, 29), // "showSimpleMissionStartChanged"
QT_MOC_LITERAL(19, 471, 23), // "devicePixelRatioChanged"
QT_MOC_LITERAL(20, 495, 25), // "devicePixelDensityChanged"
QT_MOC_LITERAL(21, 521, 23), // "combineSettingsAndSetup"
QT_MOC_LITERAL(22, 545, 23), // "toolbarHeightMultiplier"
QT_MOC_LITERAL(23, 569, 22), // "enablePlanViewSelector"
QT_MOC_LITERAL(24, 592, 21), // "preFlightChecklistUrl"
QT_MOC_LITERAL(25, 614, 28), // "showSensorCalibrationCompass"
QT_MOC_LITERAL(26, 643, 25), // "showSensorCalibrationGyro"
QT_MOC_LITERAL(27, 669, 26), // "showSensorCalibrationAccel"
QT_MOC_LITERAL(28, 696, 26), // "showSensorCalibrationLevel"
QT_MOC_LITERAL(29, 723, 29), // "showSensorCalibrationAirspeed"
QT_MOC_LITERAL(30, 753, 27), // "sensorsHaveFixedOrientation"
QT_MOC_LITERAL(31, 781, 26), // "wifiReliableForCalibration"
QT_MOC_LITERAL(32, 808, 19), // "showFirmwareUpgrade"
QT_MOC_LITERAL(33, 828, 24), // "firmwareUpgradeSingleURL"
QT_MOC_LITERAL(34, 853, 20), // "showOfflineMapExport"
QT_MOC_LITERAL(35, 874, 20), // "showOfflineMapImport"
QT_MOC_LITERAL(36, 895, 19), // "useMobileFileDialog"
QT_MOC_LITERAL(37, 915, 17), // "showMissionStatus"
QT_MOC_LITERAL(38, 933, 26), // "guidedActionsRequireRCRSSI"
QT_MOC_LITERAL(39, 960, 27), // "showMissionAbsoluteAltitude"
QT_MOC_LITERAL(40, 988, 22), // "showSimpleMissionStart"
QT_MOC_LITERAL(41, 1011, 24), // "disableVehicleConnection"
QT_MOC_LITERAL(42, 1036, 16), // "devicePixelRatio"
QT_MOC_LITERAL(43, 1053, 18), // "devicePixelDensity"
QT_MOC_LITERAL(44, 1072, 20), // "checkFirmwareVersion"
QT_MOC_LITERAL(45, 1093, 21), // "showMavlinkLogOptions"
QT_MOC_LITERAL(46, 1115, 28), // "enableSaveMainWindowPosition"
QT_MOC_LITERAL(47, 1144, 24), // "surveyBuiltInPresetNames"
QT_MOC_LITERAL(48, 1169, 22), // "allowJoystickSelection"
QT_MOC_LITERAL(49, 1192, 7), // "flyView"
QT_MOC_LITERAL(50, 1200, 18) // "QGCFlyViewOptions*"

    },
    "QGCOptions\0showSensorCalibrationCompassChanged\0"
    "\0show\0showSensorCalibrationGyroChanged\0"
    "showSensorCalibrationAccelChanged\0"
    "showSensorCalibrationLevelChanged\0"
    "showSensorCalibrationAirspeedChanged\0"
    "showFirmwareUpgradeChanged\0"
    "missionWaypointsOnlyChanged\0"
    "missionWaypointsOnly\0multiVehicleEnabledChanged\0"
    "multiVehicleEnabled\0allowJoystickSelectionChanged\0"
    "allow\0showOfflineMapExportChanged\0"
    "showOfflineMapImportChanged\0"
    "showMissionAbsoluteAltitudeChanged\0"
    "showSimpleMissionStartChanged\0"
    "devicePixelRatioChanged\0"
    "devicePixelDensityChanged\0"
    "combineSettingsAndSetup\0toolbarHeightMultiplier\0"
    "enablePlanViewSelector\0preFlightChecklistUrl\0"
    "showSensorCalibrationCompass\0"
    "showSensorCalibrationGyro\0"
    "showSensorCalibrationAccel\0"
    "showSensorCalibrationLevel\0"
    "showSensorCalibrationAirspeed\0"
    "sensorsHaveFixedOrientation\0"
    "wifiReliableForCalibration\0"
    "showFirmwareUpgrade\0firmwareUpgradeSingleURL\0"
    "showOfflineMapExport\0showOfflineMapImport\0"
    "useMobileFileDialog\0showMissionStatus\0"
    "guidedActionsRequireRCRSSI\0"
    "showMissionAbsoluteAltitude\0"
    "showSimpleMissionStart\0disableVehicleConnection\0"
    "devicePixelRatio\0devicePixelDensity\0"
    "checkFirmwareVersion\0showMavlinkLogOptions\0"
    "enableSaveMainWindowPosition\0"
    "surveyBuiltInPresetNames\0"
    "allowJoystickSelection\0flyView\0"
    "QGCFlyViewOptions*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCOptions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      31,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    1,   95,    2, 0x06 /* Public */,
       6,    1,   98,    2, 0x06 /* Public */,
       7,    1,  101,    2, 0x06 /* Public */,
       8,    1,  104,    2, 0x06 /* Public */,
       9,    1,  107,    2, 0x06 /* Public */,
      11,    1,  110,    2, 0x06 /* Public */,
      13,    1,  113,    2, 0x06 /* Public */,
      15,    0,  116,    2, 0x06 /* Public */,
      16,    0,  117,    2, 0x06 /* Public */,
      17,    0,  118,    2, 0x06 /* Public */,
      18,    0,  119,    2, 0x06 /* Public */,
      19,    0,  120,    2, 0x06 /* Public */,
      20,    0,  121,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00095401,
      22, QMetaType::Double, 0x00095401,
      23, QMetaType::Bool, 0x00095401,
      24, QMetaType::QUrl, 0x00095401,
      25, QMetaType::Bool, 0x00495001,
      26, QMetaType::Bool, 0x00495001,
      27, QMetaType::Bool, 0x00495001,
      28, QMetaType::Bool, 0x00495001,
      29, QMetaType::Bool, 0x00495001,
      30, QMetaType::Bool, 0x00095401,
      31, QMetaType::Bool, 0x00095401,
      32, QMetaType::Bool, 0x00495001,
      33, QMetaType::QString, 0x00095401,
      10, QMetaType::Bool, 0x00495001,
      12, QMetaType::Bool, 0x00495001,
      34, QMetaType::Bool, 0x00495001,
      35, QMetaType::Bool, 0x00495001,
      36, QMetaType::Bool, 0x00095401,
      37, QMetaType::Bool, 0x00095401,
      38, QMetaType::Bool, 0x00095401,
      39, QMetaType::Bool, 0x00495001,
      40, QMetaType::Bool, 0x00495001,
      41, QMetaType::Bool, 0x00095401,
      42, QMetaType::Float, 0x00495001,
      43, QMetaType::Float, 0x00495001,
      44, QMetaType::Bool, 0x00095401,
      45, QMetaType::Bool, 0x00095401,
      46, QMetaType::Bool, 0x00095401,
      47, QMetaType::QStringList, 0x00095401,
      48, QMetaType::Bool, 0x00495001,
      49, 0x80000000 | 50, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       1,
       2,
       3,
       4,
       0,
       0,
       5,
       0,
       6,
       7,
       9,
      10,
       0,
       0,
       0,
      11,
      12,
       0,
      13,
      14,
       0,
       0,
       0,
       0,
       8,
       0,

       0        // eod
};

void QGCOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showSensorCalibrationCompassChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showSensorCalibrationGyroChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showSensorCalibrationAccelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showSensorCalibrationLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showSensorCalibrationAirspeedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showFirmwareUpgradeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->missionWaypointsOnlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->multiVehicleEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->allowJoystickSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showOfflineMapExportChanged(); break;
        case 10: _t->showOfflineMapImportChanged(); break;
        case 11: _t->showMissionAbsoluteAltitudeChanged(); break;
        case 12: _t->showSimpleMissionStartChanged(); break;
        case 13: _t->devicePixelRatioChanged(); break;
        case 14: _t->devicePixelDensityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showSensorCalibrationCompassChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showSensorCalibrationGyroChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showSensorCalibrationAccelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showSensorCalibrationLevelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showSensorCalibrationAirspeedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showFirmwareUpgradeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::missionWaypointsOnlyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::multiVehicleEnabledChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::allowJoystickSelectionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showOfflineMapExportChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showOfflineMapImportChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showMissionAbsoluteAltitudeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::showSimpleMissionStartChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::devicePixelRatioChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCOptions::devicePixelDensityChanged)) {
                *result = 14;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCFlyViewOptions* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCOptions *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->combineSettingsAndSetup(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->toolbarHeightMultiplier(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->enablePlanViewSelector(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->preFlightChecklistUrl(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationCompass(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationGyro(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationAccel(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationLevel(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationAirspeed(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->sensorsHaveFixedOrientation(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->wifiReliableForCalibration(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->showFirmwareUpgrade(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->firmwareUpgradeSingleURL(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->missionWaypointsOnly(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->multiVehicleEnabled(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->showOfflineMapExport(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->showOfflineMapImport(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->useMobileFileDialog(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->showMissionStatus(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->guidedActionsRequireRCRSSI(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->showMissionAbsoluteAltitude(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->showSimpleMissionStart(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->disableVehicleConnection(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->devicePixelRatio(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->devicePixelDensity(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->checkFirmwareVersion(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->showMavlinkLogOptions(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->enableSaveMainWindowPosition(); break;
        case 28: *reinterpret_cast< QStringList*>(_v) = _t->surveyBuiltInPresetNames(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->allowJoystickSelection(); break;
        case 30: *reinterpret_cast< QGCFlyViewOptions**>(_v) = _t->flyViewOptions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCOptions.data,
    qt_meta_data_QGCOptions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCOptions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 31;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCOptions::showSensorCalibrationCompassChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCOptions::showSensorCalibrationGyroChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCOptions::showSensorCalibrationAccelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCOptions::showSensorCalibrationLevelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGCOptions::showSensorCalibrationAirspeedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCOptions::showFirmwareUpgradeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGCOptions::missionWaypointsOnlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGCOptions::multiVehicleEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGCOptions::allowJoystickSelectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGCOptions::showOfflineMapExportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCOptions::showOfflineMapImportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCOptions::showMissionAbsoluteAltitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QGCOptions::showSimpleMissionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QGCOptions::devicePixelRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QGCOptions::devicePixelDensityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
