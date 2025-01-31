/****************************************************************************
** Meta object code from reading C++ file 'Joystick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Joystick/Joystick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Joystick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssignedButtonAction_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssignedButtonAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssignedButtonAction_t qt_meta_stringdata_AssignedButtonAction = {
    {
QT_MOC_LITERAL(0, 0, 20) // "AssignedButtonAction"

    },
    "AssignedButtonAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssignedButtonAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AssignedButtonAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssignedButtonAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssignedButtonAction.data,
    qt_meta_data_AssignedButtonAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssignedButtonAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignedButtonAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssignedButtonAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssignedButtonAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AssignableButtonAction_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssignableButtonAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssignableButtonAction_t qt_meta_stringdata_AssignableButtonAction = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AssignableButtonAction"
QT_MOC_LITERAL(1, 23, 6), // "action"
QT_MOC_LITERAL(2, 30, 9) // "canRepeat"

    },
    "AssignableButtonAction\0action\0canRepeat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssignableButtonAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::Bool, 0x00095401,

       0        // eod
};

void AssignableButtonAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AssignableButtonAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->action(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canRepeat(); break;
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

QT_INIT_METAOBJECT const QMetaObject AssignableButtonAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssignableButtonAction.data,
    qt_meta_data_AssignableButtonAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssignableButtonAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignableButtonAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssignableButtonAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssignableButtonAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_Joystick_t {
    QByteArrayData data[96];
    char stringdata0[1408];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Joystick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Joystick_t qt_meta_stringdata_Joystick = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Joystick"
QT_MOC_LITERAL(1, 9, 19), // "rawAxisValueChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 5), // "value"
QT_MOC_LITERAL(5, 42, 23), // "rawButtonPressedChanged"
QT_MOC_LITERAL(6, 66, 7), // "pressed"
QT_MOC_LITERAL(7, 74, 17), // "calibratedChanged"
QT_MOC_LITERAL(8, 92, 10), // "calibrated"
QT_MOC_LITERAL(9, 103, 20), // "buttonActionsChanged"
QT_MOC_LITERAL(10, 124, 24), // "assignableActionsChanged"
QT_MOC_LITERAL(11, 149, 19), // "throttleModeChanged"
QT_MOC_LITERAL(12, 169, 4), // "mode"
QT_MOC_LITERAL(13, 174, 21), // "negativeThrustChanged"
QT_MOC_LITERAL(14, 196, 13), // "allowNegative"
QT_MOC_LITERAL(15, 210, 18), // "exponentialChanged"
QT_MOC_LITERAL(16, 229, 11), // "exponential"
QT_MOC_LITERAL(17, 241, 18), // "accumulatorChanged"
QT_MOC_LITERAL(18, 260, 11), // "accumulator"
QT_MOC_LITERAL(19, 272, 14), // "enabledChanged"
QT_MOC_LITERAL(20, 287, 7), // "enabled"
QT_MOC_LITERAL(21, 295, 23), // "circleCorrectionChanged"
QT_MOC_LITERAL(22, 319, 16), // "circleCorrection"
QT_MOC_LITERAL(23, 336, 10), // "axisValues"
QT_MOC_LITERAL(24, 347, 4), // "roll"
QT_MOC_LITERAL(25, 352, 5), // "pitch"
QT_MOC_LITERAL(26, 358, 3), // "yaw"
QT_MOC_LITERAL(27, 362, 8), // "throttle"
QT_MOC_LITERAL(28, 371, 22), // "axisFrequencyHzChanged"
QT_MOC_LITERAL(29, 394, 24), // "buttonFrequencyHzChanged"
QT_MOC_LITERAL(30, 419, 19), // "startContinuousZoom"
QT_MOC_LITERAL(31, 439, 9), // "direction"
QT_MOC_LITERAL(32, 449, 18), // "stopContinuousZoom"
QT_MOC_LITERAL(33, 468, 8), // "stepZoom"
QT_MOC_LITERAL(34, 477, 10), // "stepCamera"
QT_MOC_LITERAL(35, 488, 10), // "stepStream"
QT_MOC_LITERAL(36, 499, 13), // "triggerCamera"
QT_MOC_LITERAL(37, 513, 16), // "startVideoRecord"
QT_MOC_LITERAL(38, 530, 15), // "stopVideoRecord"
QT_MOC_LITERAL(39, 546, 17), // "toggleVideoRecord"
QT_MOC_LITERAL(40, 564, 15), // "gimbalPitchStep"
QT_MOC_LITERAL(41, 580, 13), // "gimbalYawStep"
QT_MOC_LITERAL(42, 594, 12), // "centerGimbal"
QT_MOC_LITERAL(43, 607, 13), // "gimbalYawLock"
QT_MOC_LITERAL(44, 621, 4), // "lock"
QT_MOC_LITERAL(45, 626, 8), // "setArmed"
QT_MOC_LITERAL(46, 635, 3), // "arm"
QT_MOC_LITERAL(47, 639, 18), // "setVtolInFwdFlight"
QT_MOC_LITERAL(48, 658, 3), // "set"
QT_MOC_LITERAL(49, 662, 13), // "setFlightMode"
QT_MOC_LITERAL(50, 676, 10), // "flightMode"
QT_MOC_LITERAL(51, 687, 13), // "emergencyStop"
QT_MOC_LITERAL(52, 701, 13), // "gripperAction"
QT_MOC_LITERAL(53, 715, 15), // "GRIPPER_ACTIONS"
QT_MOC_LITERAL(54, 731, 17), // "landingGearDeploy"
QT_MOC_LITERAL(55, 749, 18), // "landingGearRetract"
QT_MOC_LITERAL(56, 768, 15), // "startSiYiZoomIn"
QT_MOC_LITERAL(57, 784, 14), // "stopSiYiZoomIn"
QT_MOC_LITERAL(58, 799, 16), // "startSiYiZoomOut"
QT_MOC_LITERAL(59, 816, 15), // "stopSiYiZoomOut"
QT_MOC_LITERAL(60, 832, 21), // "_activeVehicleChanged"
QT_MOC_LITERAL(61, 854, 8), // "Vehicle*"
QT_MOC_LITERAL(62, 863, 13), // "activeVehicle"
QT_MOC_LITERAL(63, 877, 20), // "_vehicleCountChanged"
QT_MOC_LITERAL(64, 898, 5), // "count"
QT_MOC_LITERAL(65, 904, 19), // "_flightModesChanged"
QT_MOC_LITERAL(66, 924, 17), // "_startZoomInTimer"
QT_MOC_LITERAL(67, 942, 18), // "_startZoomOutTimer"
QT_MOC_LITERAL(68, 961, 16), // "_stopZoomInTimer"
QT_MOC_LITERAL(69, 978, 17), // "_stopZoomOutTimer"
QT_MOC_LITERAL(70, 996, 18), // "_siyiZoomInTimeout"
QT_MOC_LITERAL(71, 1015, 19), // "_siyiZoomOutTimeout"
QT_MOC_LITERAL(72, 1035, 15), // "setButtonRepeat"
QT_MOC_LITERAL(73, 1051, 6), // "button"
QT_MOC_LITERAL(74, 1058, 6), // "repeat"
QT_MOC_LITERAL(75, 1065, 15), // "getButtonRepeat"
QT_MOC_LITERAL(76, 1081, 15), // "setButtonAction"
QT_MOC_LITERAL(77, 1097, 6), // "action"
QT_MOC_LITERAL(78, 1104, 15), // "getButtonAction"
QT_MOC_LITERAL(79, 1120, 4), // "name"
QT_MOC_LITERAL(80, 1125, 16), // "totalButtonCount"
QT_MOC_LITERAL(81, 1142, 9), // "axisCount"
QT_MOC_LITERAL(82, 1152, 19), // "requiresCalibration"
QT_MOC_LITERAL(83, 1172, 13), // "buttonActions"
QT_MOC_LITERAL(84, 1186, 17), // "assignableActions"
QT_MOC_LITERAL(85, 1204, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(86, 1224, 22), // "assignableActionTitles"
QT_MOC_LITERAL(87, 1247, 18), // "disabledActionName"
QT_MOC_LITERAL(88, 1266, 12), // "throttleMode"
QT_MOC_LITERAL(89, 1279, 15), // "axisFrequencyHz"
QT_MOC_LITERAL(90, 1295, 18), // "minAxisFrequencyHz"
QT_MOC_LITERAL(91, 1314, 18), // "maxAxisFrequencyHz"
QT_MOC_LITERAL(92, 1333, 17), // "buttonFrequencyHz"
QT_MOC_LITERAL(93, 1351, 20), // "minButtonFrequencyHz"
QT_MOC_LITERAL(94, 1372, 20), // "maxButtonFrequencyHz"
QT_MOC_LITERAL(95, 1393, 14) // "negativeThrust"

    },
    "Joystick\0rawAxisValueChanged\0\0index\0"
    "value\0rawButtonPressedChanged\0pressed\0"
    "calibratedChanged\0calibrated\0"
    "buttonActionsChanged\0assignableActionsChanged\0"
    "throttleModeChanged\0mode\0negativeThrustChanged\0"
    "allowNegative\0exponentialChanged\0"
    "exponential\0accumulatorChanged\0"
    "accumulator\0enabledChanged\0enabled\0"
    "circleCorrectionChanged\0circleCorrection\0"
    "axisValues\0roll\0pitch\0yaw\0throttle\0"
    "axisFrequencyHzChanged\0buttonFrequencyHzChanged\0"
    "startContinuousZoom\0direction\0"
    "stopContinuousZoom\0stepZoom\0stepCamera\0"
    "stepStream\0triggerCamera\0startVideoRecord\0"
    "stopVideoRecord\0toggleVideoRecord\0"
    "gimbalPitchStep\0gimbalYawStep\0"
    "centerGimbal\0gimbalYawLock\0lock\0"
    "setArmed\0arm\0setVtolInFwdFlight\0set\0"
    "setFlightMode\0flightMode\0emergencyStop\0"
    "gripperAction\0GRIPPER_ACTIONS\0"
    "landingGearDeploy\0landingGearRetract\0"
    "startSiYiZoomIn\0stopSiYiZoomIn\0"
    "startSiYiZoomOut\0stopSiYiZoomOut\0"
    "_activeVehicleChanged\0Vehicle*\0"
    "activeVehicle\0_vehicleCountChanged\0"
    "count\0_flightModesChanged\0_startZoomInTimer\0"
    "_startZoomOutTimer\0_stopZoomInTimer\0"
    "_stopZoomOutTimer\0_siyiZoomInTimeout\0"
    "_siyiZoomOutTimeout\0setButtonRepeat\0"
    "button\0repeat\0getButtonRepeat\0"
    "setButtonAction\0action\0getButtonAction\0"
    "name\0totalButtonCount\0axisCount\0"
    "requiresCalibration\0buttonActions\0"
    "assignableActions\0QmlObjectListModel*\0"
    "assignableActionTitles\0disabledActionName\0"
    "throttleMode\0axisFrequencyHz\0"
    "minAxisFrequencyHz\0maxAxisFrequencyHz\0"
    "buttonFrequencyHz\0minButtonFrequencyHz\0"
    "maxButtonFrequencyHz\0negativeThrust"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Joystick[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
      20,  388, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      38,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  269,    2, 0x06 /* Public */,
       5,    2,  274,    2, 0x06 /* Public */,
       7,    1,  279,    2, 0x06 /* Public */,
       9,    0,  282,    2, 0x06 /* Public */,
      10,    0,  283,    2, 0x06 /* Public */,
      11,    1,  284,    2, 0x06 /* Public */,
      13,    1,  287,    2, 0x06 /* Public */,
      15,    1,  290,    2, 0x06 /* Public */,
      17,    1,  293,    2, 0x06 /* Public */,
      19,    1,  296,    2, 0x06 /* Public */,
      21,    1,  299,    2, 0x06 /* Public */,
      23,    4,  302,    2, 0x06 /* Public */,
      28,    0,  311,    2, 0x06 /* Public */,
      29,    0,  312,    2, 0x06 /* Public */,
      30,    1,  313,    2, 0x06 /* Public */,
      32,    0,  316,    2, 0x06 /* Public */,
      33,    1,  317,    2, 0x06 /* Public */,
      34,    1,  320,    2, 0x06 /* Public */,
      35,    1,  323,    2, 0x06 /* Public */,
      36,    0,  326,    2, 0x06 /* Public */,
      37,    0,  327,    2, 0x06 /* Public */,
      38,    0,  328,    2, 0x06 /* Public */,
      39,    0,  329,    2, 0x06 /* Public */,
      40,    1,  330,    2, 0x06 /* Public */,
      41,    1,  333,    2, 0x06 /* Public */,
      42,    0,  336,    2, 0x06 /* Public */,
      43,    1,  337,    2, 0x06 /* Public */,
      45,    1,  340,    2, 0x06 /* Public */,
      47,    1,  343,    2, 0x06 /* Public */,
      49,    1,  346,    2, 0x06 /* Public */,
      51,    0,  349,    2, 0x06 /* Public */,
      52,    1,  350,    2, 0x06 /* Public */,
      54,    0,  353,    2, 0x06 /* Public */,
      55,    0,  354,    2, 0x06 /* Public */,
      56,    0,  355,    2, 0x06 /* Public */,
      57,    0,  356,    2, 0x06 /* Public */,
      58,    0,  357,    2, 0x06 /* Public */,
      59,    0,  358,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      60,    1,  359,    2, 0x08 /* Private */,
      63,    1,  362,    2, 0x08 /* Private */,
      65,    0,  365,    2, 0x08 /* Private */,
      66,    0,  366,    2, 0x08 /* Private */,
      67,    0,  367,    2, 0x08 /* Private */,
      68,    0,  368,    2, 0x08 /* Private */,
      69,    0,  369,    2, 0x08 /* Private */,
      70,    0,  370,    2, 0x08 /* Private */,
      71,    0,  371,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      72,    2,  372,    2, 0x02 /* Public */,
      75,    1,  377,    2, 0x02 /* Public */,
      76,    2,  380,    2, 0x02 /* Public */,
      78,    1,  385,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   24,   25,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 53,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   73,   74,
    QMetaType::Bool, QMetaType::Int,   73,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   73,   77,
    QMetaType::QString, QMetaType::Int,   73,

 // properties: name, type, flags
      79, QMetaType::QString, 0x00095401,
       8, QMetaType::Bool, 0x00495003,
      80, QMetaType::Int, 0x00095401,
      81, QMetaType::Int, 0x00095401,
      82, QMetaType::Bool, 0x00095401,
      83, QMetaType::QStringList, 0x00495001,
      84, 0x80000000 | 85, 0x00495009,
      86, QMetaType::QStringList, 0x00495001,
      87, QMetaType::QString, 0x00095401,
      88, QMetaType::Int, 0x00495103,
      89, QMetaType::Float, 0x00495003,
      90, QMetaType::Float, 0x00095401,
      91, QMetaType::Float, 0x00095401,
      92, QMetaType::Float, 0x00495003,
      93, QMetaType::Float, 0x00095401,
      94, QMetaType::Float, 0x00095401,
      95, QMetaType::Bool, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      18, QMetaType::Bool, 0x00495103,
      22, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       0,
       0,
       0,
       3,
       4,
       4,
       0,
       5,
      12,
       0,
       0,
      13,
       0,
       0,
       6,
       7,
       8,
      10,

       0        // eod
};

void Joystick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rawAxisValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->rawButtonPressedChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->calibratedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->buttonActionsChanged(); break;
        case 4: _t->assignableActionsChanged(); break;
        case 5: _t->throttleModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->negativeThrustChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->exponentialChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->accumulatorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->circleCorrectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->axisValues((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 12: _t->axisFrequencyHzChanged(); break;
        case 13: _t->buttonFrequencyHzChanged(); break;
        case 14: _t->startContinuousZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->stopContinuousZoom(); break;
        case 16: _t->stepZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->stepCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->stepStream((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->triggerCamera(); break;
        case 20: _t->startVideoRecord(); break;
        case 21: _t->stopVideoRecord(); break;
        case 22: _t->toggleVideoRecord(); break;
        case 23: _t->gimbalPitchStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->gimbalYawStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->centerGimbal(); break;
        case 26: _t->gimbalYawLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->setArmed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->setVtolInFwdFlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->setFlightMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->emergencyStop(); break;
        case 31: _t->gripperAction((*reinterpret_cast< GRIPPER_ACTIONS(*)>(_a[1]))); break;
        case 32: _t->landingGearDeploy(); break;
        case 33: _t->landingGearRetract(); break;
        case 34: _t->startSiYiZoomIn(); break;
        case 35: _t->stopSiYiZoomIn(); break;
        case 36: _t->startSiYiZoomOut(); break;
        case 37: _t->stopSiYiZoomOut(); break;
        case 38: _t->_activeVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 39: _t->_vehicleCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->_flightModesChanged(); break;
        case 41: _t->_startZoomInTimer(); break;
        case 42: _t->_startZoomOutTimer(); break;
        case 43: _t->_stopZoomInTimer(); break;
        case 44: _t->_stopZoomOutTimer(); break;
        case 45: _t->_siyiZoomInTimeout(); break;
        case 46: _t->_siyiZoomOutTimeout(); break;
        case 47: _t->setButtonRepeat((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 48: { bool _r = _t->getButtonRepeat((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->setButtonAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: { QString _r = _t->getButtonAction((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GRIPPER_ACTIONS >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Joystick::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::rawAxisValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::rawButtonPressedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::calibratedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::buttonActionsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::assignableActionsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::throttleModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::negativeThrustChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::exponentialChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::accumulatorChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::enabledChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::circleCorrectionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::axisValues)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::axisFrequencyHzChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::buttonFrequencyHzChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::startContinuousZoom)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stopContinuousZoom)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepZoom)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepCamera)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepStream)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::triggerCamera)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::startVideoRecord)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stopVideoRecord)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::toggleVideoRecord)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::gimbalPitchStep)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::gimbalYawStep)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::centerGimbal)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::gimbalYawLock)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::setArmed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::setVtolInFwdFlight)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::setFlightMode)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::emergencyStop)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(GRIPPER_ACTIONS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::gripperAction)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::landingGearDeploy)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::landingGearRetract)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::startSiYiZoomIn)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stopSiYiZoomIn)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::startSiYiZoomOut)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stopSiYiZoomOut)) {
                *result = 37;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->_calibrated; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->totalButtonCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->axisCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->requiresCalibration(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->buttonActions(); break;
        case 6: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->assignableActions(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->assignableActionTitles(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->disabledActionName(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->throttleMode(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->axisFrequencyHz(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->_minAxisFrequencyHz; break;
        case 12: *reinterpret_cast< float*>(_v) = _t->_minAxisFrequencyHz; break;
        case 13: *reinterpret_cast< float*>(_v) = _t->buttonFrequencyHz(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->_minButtonFrequencyHz; break;
        case 15: *reinterpret_cast< float*>(_v) = _t->_maxButtonFrequencyHz; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->negativeThrust(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->exponential(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->accumulator(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->circleCorrection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->_calibrated != *reinterpret_cast< bool*>(_v)) {
                _t->_calibrated = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->calibratedChanged(_t->_calibrated);
            }
            break;
        case 9: _t->setThrottleMode(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setAxisFrequency(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setButtonFrequency(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setNegativeThrust(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setExponential(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setAccumulator(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setCircleCorrection(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Joystick::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Joystick.data,
    qt_meta_data_Joystick,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Joystick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Joystick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Joystick.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Joystick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void Joystick::rawAxisValueChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Joystick::rawButtonPressedChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Joystick::calibratedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Joystick::buttonActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Joystick::assignableActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Joystick::throttleModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Joystick::negativeThrustChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Joystick::exponentialChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Joystick::accumulatorChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Joystick::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Joystick::circleCorrectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Joystick::axisValues(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Joystick::axisFrequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Joystick::buttonFrequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Joystick::startContinuousZoom(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Joystick::stopContinuousZoom()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Joystick::stepZoom(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Joystick::stepCamera(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Joystick::stepStream(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Joystick::triggerCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Joystick::startVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Joystick::stopVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Joystick::toggleVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Joystick::gimbalPitchStep(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Joystick::gimbalYawStep(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Joystick::centerGimbal()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Joystick::gimbalYawLock(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Joystick::setArmed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Joystick::setVtolInFwdFlight(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Joystick::setFlightMode(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Joystick::emergencyStop()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Joystick::gripperAction(GRIPPER_ACTIONS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Joystick::landingGearDeploy()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Joystick::landingGearRetract()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Joystick::startSiYiZoomIn()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void Joystick::stopSiYiZoomIn()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Joystick::startSiYiZoomOut()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void Joystick::stopSiYiZoomOut()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
