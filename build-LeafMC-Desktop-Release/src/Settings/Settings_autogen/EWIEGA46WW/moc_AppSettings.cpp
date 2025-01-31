/****************************************************************************
** Meta object code from reading C++ file 'AppSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Settings/AppSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppSettings_t {
    QByteArrayData data[68];
    char stringdata0[1235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppSettings_t qt_meta_stringdata_AppSettings = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AppSettings"
QT_MOC_LITERAL(1, 12, 16), // "savePathsChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "_indoorPaletteChanged"
QT_MOC_LITERAL(4, 52, 25), // "_checkSavePathDirectories"
QT_MOC_LITERAL(5, 78, 23), // "_qLocaleLanguageChanged"
QT_MOC_LITERAL(6, 102, 30), // "firstRunPromptIdsMarkIdAsShown"
QT_MOC_LITERAL(7, 133, 2), // "id"
QT_MOC_LITERAL(8, 136, 27), // "offlineEditingFirmwareClass"
QT_MOC_LITERAL(9, 164, 5), // "Fact*"
QT_MOC_LITERAL(10, 170, 26), // "offlineEditingVehicleClass"
QT_MOC_LITERAL(11, 197, 25), // "offlineEditingCruiseSpeed"
QT_MOC_LITERAL(12, 223, 24), // "offlineEditingHoverSpeed"
QT_MOC_LITERAL(13, 248, 25), // "offlineEditingAscentSpeed"
QT_MOC_LITERAL(14, 274, 26), // "offlineEditingDescentSpeed"
QT_MOC_LITERAL(15, 301, 31), // "batteryPercentRemainingAnnounce"
QT_MOC_LITERAL(16, 333, 26), // "defaultMissionItemAltitude"
QT_MOC_LITERAL(17, 360, 13), // "telemetrySave"
QT_MOC_LITERAL(18, 374, 21), // "telemetrySaveNotArmed"
QT_MOC_LITERAL(19, 396, 10), // "audioMuted"
QT_MOC_LITERAL(20, 407, 13), // "checkInternet"
QT_MOC_LITERAL(21, 421, 15), // "virtualJoystick"
QT_MOC_LITERAL(22, 437, 33), // "virtualJoystickAutoCenterThro..."
QT_MOC_LITERAL(23, 471, 16), // "appFontPointSize"
QT_MOC_LITERAL(24, 488, 13), // "indoorPalette"
QT_MOC_LITERAL(25, 502, 16), // "showLargeCompass"
QT_MOC_LITERAL(26, 519, 8), // "savePath"
QT_MOC_LITERAL(27, 528, 19), // "androidSaveToSDCard"
QT_MOC_LITERAL(28, 548, 12), // "useChecklist"
QT_MOC_LITERAL(29, 561, 16), // "enforceChecklist"
QT_MOC_LITERAL(30, 578, 11), // "mapboxToken"
QT_MOC_LITERAL(31, 590, 13), // "mapboxAccount"
QT_MOC_LITERAL(32, 604, 11), // "mapboxStyle"
QT_MOC_LITERAL(33, 616, 9), // "esriToken"
QT_MOC_LITERAL(34, 626, 9), // "customURL"
QT_MOC_LITERAL(35, 636, 11), // "vworldToken"
QT_MOC_LITERAL(36, 648, 19), // "defaultFirmwareType"
QT_MOC_LITERAL(37, 668, 13), // "gstDebugLevel"
QT_MOC_LITERAL(38, 682, 12), // "followTarget"
QT_MOC_LITERAL(39, 695, 13), // "enableTaisync"
QT_MOC_LITERAL(40, 709, 18), // "enableTaisyncVideo"
QT_MOC_LITERAL(41, 728, 15), // "enableMicrohard"
QT_MOC_LITERAL(42, 744, 15), // "qLocaleLanguage"
QT_MOC_LITERAL(43, 760, 21), // "disableAllPersistence"
QT_MOC_LITERAL(44, 782, 10), // "usePairing"
QT_MOC_LITERAL(45, 793, 16), // "saveCsvTelemetry"
QT_MOC_LITERAL(46, 810, 22), // "firstRunPromptIdsShown"
QT_MOC_LITERAL(47, 833, 14), // "forwardMavlink"
QT_MOC_LITERAL(48, 848, 22), // "forwardMavlinkHostName"
QT_MOC_LITERAL(49, 871, 32), // "forwardMavlinkAPMSupportHostName"
QT_MOC_LITERAL(50, 904, 22), // "apmStartMavlinkStreams"
QT_MOC_LITERAL(51, 927, 15), // "missionSavePath"
QT_MOC_LITERAL(52, 943, 17), // "parameterSavePath"
QT_MOC_LITERAL(53, 961, 17), // "telemetrySavePath"
QT_MOC_LITERAL(54, 979, 11), // "logSavePath"
QT_MOC_LITERAL(55, 991, 13), // "videoSavePath"
QT_MOC_LITERAL(56, 1005, 13), // "photoSavePath"
QT_MOC_LITERAL(57, 1019, 13), // "crashSavePath"
QT_MOC_LITERAL(58, 1033, 21), // "customActionsSavePath"
QT_MOC_LITERAL(59, 1055, 17), // "planFileExtension"
QT_MOC_LITERAL(60, 1073, 20), // "missionFileExtension"
QT_MOC_LITERAL(61, 1094, 22), // "waypointsFileExtension"
QT_MOC_LITERAL(62, 1117, 22), // "parameterFileExtension"
QT_MOC_LITERAL(63, 1140, 22), // "telemetryFileExtension"
QT_MOC_LITERAL(64, 1163, 16), // "kmlFileExtension"
QT_MOC_LITERAL(65, 1180, 16), // "shpFileExtension"
QT_MOC_LITERAL(66, 1197, 16), // "logFileExtension"
QT_MOC_LITERAL(67, 1214, 20) // "tilesetFileExtension"

    },
    "AppSettings\0savePathsChanged\0\0"
    "_indoorPaletteChanged\0_checkSavePathDirectories\0"
    "_qLocaleLanguageChanged\0"
    "firstRunPromptIdsMarkIdAsShown\0id\0"
    "offlineEditingFirmwareClass\0Fact*\0"
    "offlineEditingVehicleClass\0"
    "offlineEditingCruiseSpeed\0"
    "offlineEditingHoverSpeed\0"
    "offlineEditingAscentSpeed\0"
    "offlineEditingDescentSpeed\0"
    "batteryPercentRemainingAnnounce\0"
    "defaultMissionItemAltitude\0telemetrySave\0"
    "telemetrySaveNotArmed\0audioMuted\0"
    "checkInternet\0virtualJoystick\0"
    "virtualJoystickAutoCenterThrottle\0"
    "appFontPointSize\0indoorPalette\0"
    "showLargeCompass\0savePath\0androidSaveToSDCard\0"
    "useChecklist\0enforceChecklist\0mapboxToken\0"
    "mapboxAccount\0mapboxStyle\0esriToken\0"
    "customURL\0vworldToken\0defaultFirmwareType\0"
    "gstDebugLevel\0followTarget\0enableTaisync\0"
    "enableTaisyncVideo\0enableMicrohard\0"
    "qLocaleLanguage\0disableAllPersistence\0"
    "usePairing\0saveCsvTelemetry\0"
    "firstRunPromptIdsShown\0forwardMavlink\0"
    "forwardMavlinkHostName\0"
    "forwardMavlinkAPMSupportHostName\0"
    "apmStartMavlinkStreams\0missionSavePath\0"
    "parameterSavePath\0telemetrySavePath\0"
    "logSavePath\0videoSavePath\0photoSavePath\0"
    "crashSavePath\0customActionsSavePath\0"
    "planFileExtension\0missionFileExtension\0"
    "waypointsFileExtension\0parameterFileExtension\0"
    "telemetryFileExtension\0kmlFileExtension\0"
    "shpFileExtension\0logFileExtension\0"
    "tilesetFileExtension"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      59,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095409,
      10, 0x80000000 | 9, 0x00095409,
      11, 0x80000000 | 9, 0x00095409,
      12, 0x80000000 | 9, 0x00095409,
      13, 0x80000000 | 9, 0x00095409,
      14, 0x80000000 | 9, 0x00095409,
      15, 0x80000000 | 9, 0x00095409,
      16, 0x80000000 | 9, 0x00095409,
      17, 0x80000000 | 9, 0x00095409,
      18, 0x80000000 | 9, 0x00095409,
      19, 0x80000000 | 9, 0x00095409,
      20, 0x80000000 | 9, 0x00095409,
      21, 0x80000000 | 9, 0x00095409,
      22, 0x80000000 | 9, 0x00095409,
      23, 0x80000000 | 9, 0x00095409,
      24, 0x80000000 | 9, 0x00095409,
      25, 0x80000000 | 9, 0x00095409,
      26, 0x80000000 | 9, 0x00095409,
      27, 0x80000000 | 9, 0x00095409,
      28, 0x80000000 | 9, 0x00095409,
      29, 0x80000000 | 9, 0x00095409,
      30, 0x80000000 | 9, 0x00095409,
      31, 0x80000000 | 9, 0x00095409,
      32, 0x80000000 | 9, 0x00095409,
      33, 0x80000000 | 9, 0x00095409,
      34, 0x80000000 | 9, 0x00095409,
      35, 0x80000000 | 9, 0x00095409,
      36, 0x80000000 | 9, 0x00095409,
      37, 0x80000000 | 9, 0x00095409,
      38, 0x80000000 | 9, 0x00095409,
      39, 0x80000000 | 9, 0x00095409,
      40, 0x80000000 | 9, 0x00095409,
      41, 0x80000000 | 9, 0x00095409,
      42, 0x80000000 | 9, 0x00095409,
      43, 0x80000000 | 9, 0x00095409,
      44, 0x80000000 | 9, 0x00095409,
      45, 0x80000000 | 9, 0x00095409,
      46, 0x80000000 | 9, 0x00095409,
      47, 0x80000000 | 9, 0x00095409,
      48, 0x80000000 | 9, 0x00095409,
      49, 0x80000000 | 9, 0x00095409,
      50, 0x80000000 | 9, 0x00095409,
      51, QMetaType::QString, 0x00495001,
      52, QMetaType::QString, 0x00495001,
      53, QMetaType::QString, 0x00495001,
      54, QMetaType::QString, 0x00495001,
      55, QMetaType::QString, 0x00495001,
      56, QMetaType::QString, 0x00495001,
      57, QMetaType::QString, 0x00495001,
      58, QMetaType::QString, 0x00495001,
      59, QMetaType::QString, 0x00095401,
      60, QMetaType::QString, 0x00095401,
      61, QMetaType::QString, 0x00095401,
      62, QMetaType::QString, 0x00095401,
      63, QMetaType::QString, 0x00095401,
      64, QMetaType::QString, 0x00095401,
      65, QMetaType::QString, 0x00095401,
      66, QMetaType::QString, 0x00095401,
      67, QMetaType::QString, 0x00095401,

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

void AppSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->savePathsChanged(); break;
        case 1: _t->_indoorPaletteChanged(); break;
        case 2: _t->_checkSavePathDirectories(); break;
        case 3: _t->_qLocaleLanguageChanged(); break;
        case 4: _t->firstRunPromptIdsMarkIdAsShown((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppSettings::savePathsChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 35:
        case 34:
        case 33:
        case 32:
        case 31:
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
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
        auto *_t = static_cast<AppSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->offlineEditingFirmwareClass(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->offlineEditingVehicleClass(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->offlineEditingCruiseSpeed(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->offlineEditingHoverSpeed(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->offlineEditingAscentSpeed(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->offlineEditingDescentSpeed(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->batteryPercentRemainingAnnounce(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->defaultMissionItemAltitude(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->telemetrySave(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->telemetrySaveNotArmed(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->audioMuted(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->checkInternet(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->virtualJoystick(); break;
        case 13: *reinterpret_cast< Fact**>(_v) = _t->virtualJoystickAutoCenterThrottle(); break;
        case 14: *reinterpret_cast< Fact**>(_v) = _t->appFontPointSize(); break;
        case 15: *reinterpret_cast< Fact**>(_v) = _t->indoorPalette(); break;
        case 16: *reinterpret_cast< Fact**>(_v) = _t->showLargeCompass(); break;
        case 17: *reinterpret_cast< Fact**>(_v) = _t->savePath(); break;
        case 18: *reinterpret_cast< Fact**>(_v) = _t->androidSaveToSDCard(); break;
        case 19: *reinterpret_cast< Fact**>(_v) = _t->useChecklist(); break;
        case 20: *reinterpret_cast< Fact**>(_v) = _t->enforceChecklist(); break;
        case 21: *reinterpret_cast< Fact**>(_v) = _t->mapboxToken(); break;
        case 22: *reinterpret_cast< Fact**>(_v) = _t->mapboxAccount(); break;
        case 23: *reinterpret_cast< Fact**>(_v) = _t->mapboxStyle(); break;
        case 24: *reinterpret_cast< Fact**>(_v) = _t->esriToken(); break;
        case 25: *reinterpret_cast< Fact**>(_v) = _t->customURL(); break;
        case 26: *reinterpret_cast< Fact**>(_v) = _t->vworldToken(); break;
        case 27: *reinterpret_cast< Fact**>(_v) = _t->defaultFirmwareType(); break;
        case 28: *reinterpret_cast< Fact**>(_v) = _t->gstDebugLevel(); break;
        case 29: *reinterpret_cast< Fact**>(_v) = _t->followTarget(); break;
        case 30: *reinterpret_cast< Fact**>(_v) = _t->enableTaisync(); break;
        case 31: *reinterpret_cast< Fact**>(_v) = _t->enableTaisyncVideo(); break;
        case 32: *reinterpret_cast< Fact**>(_v) = _t->enableMicrohard(); break;
        case 33: *reinterpret_cast< Fact**>(_v) = _t->qLocaleLanguage(); break;
        case 34: *reinterpret_cast< Fact**>(_v) = _t->disableAllPersistence(); break;
        case 35: *reinterpret_cast< Fact**>(_v) = _t->usePairing(); break;
        case 36: *reinterpret_cast< Fact**>(_v) = _t->saveCsvTelemetry(); break;
        case 37: *reinterpret_cast< Fact**>(_v) = _t->firstRunPromptIdsShown(); break;
        case 38: *reinterpret_cast< Fact**>(_v) = _t->forwardMavlink(); break;
        case 39: *reinterpret_cast< Fact**>(_v) = _t->forwardMavlinkHostName(); break;
        case 40: *reinterpret_cast< Fact**>(_v) = _t->forwardMavlinkAPMSupportHostName(); break;
        case 41: *reinterpret_cast< Fact**>(_v) = _t->apmStartMavlinkStreams(); break;
        case 42: *reinterpret_cast< QString*>(_v) = _t->missionSavePath(); break;
        case 43: *reinterpret_cast< QString*>(_v) = _t->parameterSavePath(); break;
        case 44: *reinterpret_cast< QString*>(_v) = _t->telemetrySavePath(); break;
        case 45: *reinterpret_cast< QString*>(_v) = _t->logSavePath(); break;
        case 46: *reinterpret_cast< QString*>(_v) = _t->videoSavePath(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->photoSavePath(); break;
        case 48: *reinterpret_cast< QString*>(_v) = _t->crashSavePath(); break;
        case 49: *reinterpret_cast< QString*>(_v) = _t->customActionsSavePath(); break;
        case 50: *reinterpret_cast< QString*>(_v) = _t->planFileExtension; break;
        case 51: *reinterpret_cast< QString*>(_v) = _t->missionFileExtension; break;
        case 52: *reinterpret_cast< QString*>(_v) = _t->waypointsFileExtension; break;
        case 53: *reinterpret_cast< QString*>(_v) = _t->parameterFileExtension; break;
        case 54: *reinterpret_cast< QString*>(_v) = _t->telemetryFileExtension; break;
        case 55: *reinterpret_cast< QString*>(_v) = _t->kmlFileExtension; break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->shpFileExtension; break;
        case 57: *reinterpret_cast< QString*>(_v) = _t->logFileExtension; break;
        case 58: *reinterpret_cast< QString*>(_v) = _t->tilesetFileExtension; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AppSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsGroup::staticMetaObject>(),
    qt_meta_stringdata_AppSettings.data,
    qt_meta_data_AppSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppSettings.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int AppSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
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
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 59;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AppSettings::savePathsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
