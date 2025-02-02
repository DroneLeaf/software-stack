/****************************************************************************
** Meta object code from reading C++ file 'APMSensorsComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/AutoPilotPlugins/APM/APMSensorsComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMSensorsComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMSensorsComponentController_t {
    QByteArrayData data[100];
    char stringdata0[2091];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMSensorsComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMSensorsComponentController_t qt_meta_stringdata_APMSensorsComponentController = {
    {
QT_MOC_LITERAL(0, 0, 29), // "APMSensorsComponentController"
QT_MOC_LITERAL(1, 30, 22), // "showGyroCalAreaChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 29), // "showOrientationCalAreaChanged"
QT_MOC_LITERAL(4, 84, 30), // "orientationCalSidesDoneChanged"
QT_MOC_LITERAL(5, 115, 33), // "orientationCalSidesVisibleCha..."
QT_MOC_LITERAL(6, 149, 36), // "orientationCalSidesInProgress..."
QT_MOC_LITERAL(7, 186, 32), // "orientationCalSidesRotateChanged"
QT_MOC_LITERAL(8, 219, 19), // "resetStatusTextArea"
QT_MOC_LITERAL(9, 239, 23), // "waitingForCancelChanged"
QT_MOC_LITERAL(10, 263, 18), // "setupNeededChanged"
QT_MOC_LITERAL(11, 282, 19), // "calibrationComplete"
QT_MOC_LITERAL(12, 302, 9), // "CalType_t"
QT_MOC_LITERAL(13, 312, 7), // "calType"
QT_MOC_LITERAL(14, 320, 27), // "compass1CalSucceededChanged"
QT_MOC_LITERAL(15, 348, 20), // "compass1CalSucceeded"
QT_MOC_LITERAL(16, 369, 27), // "compass2CalSucceededChanged"
QT_MOC_LITERAL(17, 397, 20), // "compass2CalSucceeded"
QT_MOC_LITERAL(18, 418, 27), // "compass3CalSucceededChanged"
QT_MOC_LITERAL(19, 446, 20), // "compass3CalSucceeded"
QT_MOC_LITERAL(20, 467, 25), // "compass1CalFitnessChanged"
QT_MOC_LITERAL(21, 493, 18), // "compass1CalFitness"
QT_MOC_LITERAL(22, 512, 25), // "compass2CalFitnessChanged"
QT_MOC_LITERAL(23, 538, 18), // "compass2CalFitness"
QT_MOC_LITERAL(24, 557, 25), // "compass3CalFitnessChanged"
QT_MOC_LITERAL(25, 583, 18), // "compass3CalFitness"
QT_MOC_LITERAL(26, 602, 23), // "setAllCalButtonsEnabled"
QT_MOC_LITERAL(27, 626, 7), // "enabled"
QT_MOC_LITERAL(28, 634, 21), // "_handleUASTextMessage"
QT_MOC_LITERAL(29, 656, 5), // "uasId"
QT_MOC_LITERAL(30, 662, 6), // "compId"
QT_MOC_LITERAL(31, 669, 8), // "severity"
QT_MOC_LITERAL(32, 678, 4), // "text"
QT_MOC_LITERAL(33, 683, 23), // "_mavlinkMessageReceived"
QT_MOC_LITERAL(34, 707, 14), // "LinkInterface*"
QT_MOC_LITERAL(35, 722, 4), // "link"
QT_MOC_LITERAL(36, 727, 17), // "mavlink_message_t"
QT_MOC_LITERAL(37, 745, 7), // "message"
QT_MOC_LITERAL(38, 753, 17), // "_mavCommandResult"
QT_MOC_LITERAL(39, 771, 9), // "vehicleId"
QT_MOC_LITERAL(40, 781, 9), // "component"
QT_MOC_LITERAL(41, 791, 7), // "command"
QT_MOC_LITERAL(42, 799, 6), // "result"
QT_MOC_LITERAL(43, 806, 20), // "noReponseFromVehicle"
QT_MOC_LITERAL(44, 827, 16), // "calibrateCompass"
QT_MOC_LITERAL(45, 844, 14), // "calibrateAccel"
QT_MOC_LITERAL(46, 859, 16), // "doSimpleAccelCal"
QT_MOC_LITERAL(47, 876, 21), // "calibrateCompassNorth"
QT_MOC_LITERAL(48, 898, 3), // "lat"
QT_MOC_LITERAL(49, 902, 3), // "lon"
QT_MOC_LITERAL(50, 906, 4), // "mask"
QT_MOC_LITERAL(51, 911, 13), // "calibrateGyro"
QT_MOC_LITERAL(52, 925, 26), // "calibrateMotorInterference"
QT_MOC_LITERAL(53, 952, 12), // "levelHorizon"
QT_MOC_LITERAL(54, 965, 17), // "calibratePressure"
QT_MOC_LITERAL(55, 983, 17), // "cancelCalibration"
QT_MOC_LITERAL(56, 1001, 11), // "nextClicked"
QT_MOC_LITERAL(57, 1013, 12), // "usingUDPLink"
QT_MOC_LITERAL(58, 1026, 9), // "statusLog"
QT_MOC_LITERAL(59, 1036, 11), // "QQuickItem*"
QT_MOC_LITERAL(60, 1048, 11), // "progressBar"
QT_MOC_LITERAL(61, 1060, 10), // "nextButton"
QT_MOC_LITERAL(62, 1071, 12), // "cancelButton"
QT_MOC_LITERAL(63, 1084, 26), // "orientationCalAreaHelpText"
QT_MOC_LITERAL(64, 1111, 18), // "compassSetupNeeded"
QT_MOC_LITERAL(65, 1130, 16), // "accelSetupNeeded"
QT_MOC_LITERAL(66, 1147, 22), // "showOrientationCalArea"
QT_MOC_LITERAL(67, 1170, 26), // "orientationCalDownSideDone"
QT_MOC_LITERAL(68, 1197, 32), // "orientationCalUpsideDownSideDone"
QT_MOC_LITERAL(69, 1230, 26), // "orientationCalLeftSideDone"
QT_MOC_LITERAL(70, 1257, 27), // "orientationCalRightSideDone"
QT_MOC_LITERAL(71, 1285, 30), // "orientationCalNoseDownSideDone"
QT_MOC_LITERAL(72, 1316, 30), // "orientationCalTailDownSideDone"
QT_MOC_LITERAL(73, 1347, 29), // "orientationCalDownSideVisible"
QT_MOC_LITERAL(74, 1377, 35), // "orientationCalUpsideDownSideV..."
QT_MOC_LITERAL(75, 1413, 29), // "orientationCalLeftSideVisible"
QT_MOC_LITERAL(76, 1443, 30), // "orientationCalRightSideVisible"
QT_MOC_LITERAL(77, 1474, 33), // "orientationCalNoseDownSideVis..."
QT_MOC_LITERAL(78, 1508, 33), // "orientationCalTailDownSideVis..."
QT_MOC_LITERAL(79, 1542, 32), // "orientationCalDownSideInProgress"
QT_MOC_LITERAL(80, 1575, 38), // "orientationCalUpsideDownSideI..."
QT_MOC_LITERAL(81, 1614, 32), // "orientationCalLeftSideInProgress"
QT_MOC_LITERAL(82, 1647, 33), // "orientationCalRightSideInProg..."
QT_MOC_LITERAL(83, 1681, 36), // "orientationCalNoseDownSideInP..."
QT_MOC_LITERAL(84, 1718, 36), // "orientationCalTailDownSideInP..."
QT_MOC_LITERAL(85, 1755, 28), // "orientationCalDownSideRotate"
QT_MOC_LITERAL(86, 1784, 34), // "orientationCalUpsideDownSideR..."
QT_MOC_LITERAL(87, 1819, 28), // "orientationCalLeftSideRotate"
QT_MOC_LITERAL(88, 1848, 29), // "orientationCalRightSideRotate"
QT_MOC_LITERAL(89, 1878, 32), // "orientationCalNoseDownSideRotate"
QT_MOC_LITERAL(90, 1911, 32), // "orientationCalTailDownSideRotate"
QT_MOC_LITERAL(91, 1944, 16), // "waitingForCancel"
QT_MOC_LITERAL(92, 1961, 12), // "CalTypeAccel"
QT_MOC_LITERAL(93, 1974, 11), // "CalTypeGyro"
QT_MOC_LITERAL(94, 1986, 21), // "CalTypeOnboardCompass"
QT_MOC_LITERAL(95, 2008, 19), // "CalTypeLevelHorizon"
QT_MOC_LITERAL(96, 2028, 17), // "CalTypeCompassMot"
QT_MOC_LITERAL(97, 2046, 15), // "CalTypePressure"
QT_MOC_LITERAL(98, 2062, 16), // "CalTypeAccelFast"
QT_MOC_LITERAL(99, 2079, 11) // "CalTypeNone"

    },
    "APMSensorsComponentController\0"
    "showGyroCalAreaChanged\0\0"
    "showOrientationCalAreaChanged\0"
    "orientationCalSidesDoneChanged\0"
    "orientationCalSidesVisibleChanged\0"
    "orientationCalSidesInProgressChanged\0"
    "orientationCalSidesRotateChanged\0"
    "resetStatusTextArea\0waitingForCancelChanged\0"
    "setupNeededChanged\0calibrationComplete\0"
    "CalType_t\0calType\0compass1CalSucceededChanged\0"
    "compass1CalSucceeded\0compass2CalSucceededChanged\0"
    "compass2CalSucceeded\0compass3CalSucceededChanged\0"
    "compass3CalSucceeded\0compass1CalFitnessChanged\0"
    "compass1CalFitness\0compass2CalFitnessChanged\0"
    "compass2CalFitness\0compass3CalFitnessChanged\0"
    "compass3CalFitness\0setAllCalButtonsEnabled\0"
    "enabled\0_handleUASTextMessage\0uasId\0"
    "compId\0severity\0text\0_mavlinkMessageReceived\0"
    "LinkInterface*\0link\0mavlink_message_t\0"
    "message\0_mavCommandResult\0vehicleId\0"
    "component\0command\0result\0noReponseFromVehicle\0"
    "calibrateCompass\0calibrateAccel\0"
    "doSimpleAccelCal\0calibrateCompassNorth\0"
    "lat\0lon\0mask\0calibrateGyro\0"
    "calibrateMotorInterference\0levelHorizon\0"
    "calibratePressure\0cancelCalibration\0"
    "nextClicked\0usingUDPLink\0statusLog\0"
    "QQuickItem*\0progressBar\0nextButton\0"
    "cancelButton\0orientationCalAreaHelpText\0"
    "compassSetupNeeded\0accelSetupNeeded\0"
    "showOrientationCalArea\0"
    "orientationCalDownSideDone\0"
    "orientationCalUpsideDownSideDone\0"
    "orientationCalLeftSideDone\0"
    "orientationCalRightSideDone\0"
    "orientationCalNoseDownSideDone\0"
    "orientationCalTailDownSideDone\0"
    "orientationCalDownSideVisible\0"
    "orientationCalUpsideDownSideVisible\0"
    "orientationCalLeftSideVisible\0"
    "orientationCalRightSideVisible\0"
    "orientationCalNoseDownSideVisible\0"
    "orientationCalTailDownSideVisible\0"
    "orientationCalDownSideInProgress\0"
    "orientationCalUpsideDownSideInProgress\0"
    "orientationCalLeftSideInProgress\0"
    "orientationCalRightSideInProgress\0"
    "orientationCalNoseDownSideInProgress\0"
    "orientationCalTailDownSideInProgress\0"
    "orientationCalDownSideRotate\0"
    "orientationCalUpsideDownSideRotate\0"
    "orientationCalLeftSideRotate\0"
    "orientationCalRightSideRotate\0"
    "orientationCalNoseDownSideRotate\0"
    "orientationCalTailDownSideRotate\0"
    "waitingForCancel\0CalTypeAccel\0CalTypeGyro\0"
    "CalTypeOnboardCompass\0CalTypeLevelHorizon\0"
    "CalTypeCompassMot\0CalTypePressure\0"
    "CalTypeAccelFast\0CalTypeNone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMSensorsComponentController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      39,  240, // properties
       1,  396, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  164,    2, 0x06 /* Public */,
       3,    0,  165,    2, 0x06 /* Public */,
       4,    0,  166,    2, 0x06 /* Public */,
       5,    0,  167,    2, 0x06 /* Public */,
       6,    0,  168,    2, 0x06 /* Public */,
       7,    0,  169,    2, 0x06 /* Public */,
       8,    0,  170,    2, 0x06 /* Public */,
       9,    0,  171,    2, 0x06 /* Public */,
      10,    0,  172,    2, 0x06 /* Public */,
      11,    1,  173,    2, 0x06 /* Public */,
      14,    1,  176,    2, 0x06 /* Public */,
      16,    1,  179,    2, 0x06 /* Public */,
      18,    1,  182,    2, 0x06 /* Public */,
      20,    1,  185,    2, 0x06 /* Public */,
      22,    1,  188,    2, 0x06 /* Public */,
      24,    1,  191,    2, 0x06 /* Public */,
      26,    1,  194,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    4,  197,    2, 0x08 /* Private */,
      33,    2,  206,    2, 0x08 /* Private */,
      38,    5,  211,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      44,    0,  222,    2, 0x02 /* Public */,
      45,    1,  223,    2, 0x02 /* Public */,
      47,    3,  226,    2, 0x02 /* Public */,
      51,    0,  233,    2, 0x02 /* Public */,
      52,    0,  234,    2, 0x02 /* Public */,
      53,    0,  235,    2, 0x02 /* Public */,
      54,    0,  236,    2, 0x02 /* Public */,
      55,    0,  237,    2, 0x02 /* Public */,
      56,    0,  238,    2, 0x02 /* Public */,
      57,    0,  239,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void, QMetaType::Bool,   27,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   29,   30,   31,   32,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 36,   35,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   39,   40,   41,   42,   43,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Int,   48,   49,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
      58, 0x80000000 | 59, 0x0009500b,
      60, 0x80000000 | 59, 0x0009500b,
      61, 0x80000000 | 59, 0x0009500b,
      62, 0x80000000 | 59, 0x0009500b,
      63, 0x80000000 | 59, 0x0009500b,
      64, QMetaType::Bool, 0x00495001,
      65, QMetaType::Bool, 0x00495001,
      66, QMetaType::Bool, 0x00495003,
      67, QMetaType::Bool, 0x00495003,
      68, QMetaType::Bool, 0x00495003,
      69, QMetaType::Bool, 0x00495003,
      70, QMetaType::Bool, 0x00495003,
      71, QMetaType::Bool, 0x00495003,
      72, QMetaType::Bool, 0x00495003,
      73, QMetaType::Bool, 0x00495003,
      74, QMetaType::Bool, 0x00495003,
      75, QMetaType::Bool, 0x00495003,
      76, QMetaType::Bool, 0x00495003,
      77, QMetaType::Bool, 0x00495003,
      78, QMetaType::Bool, 0x00495003,
      79, QMetaType::Bool, 0x00495003,
      80, QMetaType::Bool, 0x00495003,
      81, QMetaType::Bool, 0x00495003,
      82, QMetaType::Bool, 0x00495003,
      83, QMetaType::Bool, 0x00495003,
      84, QMetaType::Bool, 0x00495003,
      85, QMetaType::Bool, 0x00495003,
      86, QMetaType::Bool, 0x00495003,
      87, QMetaType::Bool, 0x00495003,
      88, QMetaType::Bool, 0x00495003,
      89, QMetaType::Bool, 0x00495003,
      90, QMetaType::Bool, 0x00495003,
      91, QMetaType::Bool, 0x00495003,
      15, QMetaType::Bool, 0x00495001,
      17, QMetaType::Bool, 0x00495001,
      19, QMetaType::Bool, 0x00495001,
      21, QMetaType::Double, 0x00495001,
      23, QMetaType::Double, 0x00495001,
      25, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       8,
       8,
       1,
       2,
       2,
       2,
       2,
       2,
       2,
       3,
       3,
       3,
       3,
       3,
       3,
       4,
       4,
       4,
       4,
       4,
       4,
       5,
       5,
       5,
       5,
       5,
       5,
       7,
      10,
      11,
      12,
      13,
      14,
      15,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    8,  401,

 // enum data: key, value
      92, uint(APMSensorsComponentController::CalTypeAccel),
      93, uint(APMSensorsComponentController::CalTypeGyro),
      94, uint(APMSensorsComponentController::CalTypeOnboardCompass),
      95, uint(APMSensorsComponentController::CalTypeLevelHorizon),
      96, uint(APMSensorsComponentController::CalTypeCompassMot),
      97, uint(APMSensorsComponentController::CalTypePressure),
      98, uint(APMSensorsComponentController::CalTypeAccelFast),
      99, uint(APMSensorsComponentController::CalTypeNone),

       0        // eod
};

void APMSensorsComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMSensorsComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showGyroCalAreaChanged(); break;
        case 1: _t->showOrientationCalAreaChanged(); break;
        case 2: _t->orientationCalSidesDoneChanged(); break;
        case 3: _t->orientationCalSidesVisibleChanged(); break;
        case 4: _t->orientationCalSidesInProgressChanged(); break;
        case 5: _t->orientationCalSidesRotateChanged(); break;
        case 6: _t->resetStatusTextArea(); break;
        case 7: _t->waitingForCancelChanged(); break;
        case 8: _t->setupNeededChanged(); break;
        case 9: _t->calibrationComplete((*reinterpret_cast< CalType_t(*)>(_a[1]))); break;
        case 10: _t->compass1CalSucceededChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->compass2CalSucceededChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->compass3CalSucceededChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->compass1CalFitnessChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->compass2CalFitnessChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->compass3CalFitnessChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setAllCalButtonsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->_handleUASTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 18: _t->_mavlinkMessageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 19: _t->_mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 20: _t->calibrateCompass(); break;
        case 21: _t->calibrateAccel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->calibrateCompassNorth((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->calibrateGyro(); break;
        case 24: _t->calibrateMotorInterference(); break;
        case 25: _t->levelHorizon(); break;
        case 26: _t->calibratePressure(); break;
        case 27: _t->cancelCalibration(); break;
        case 28: _t->nextClicked(); break;
        case 29: { bool _r = _t->usingUDPLink();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::showGyroCalAreaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::showOrientationCalAreaChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::orientationCalSidesDoneChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::orientationCalSidesVisibleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::orientationCalSidesInProgressChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::orientationCalSidesRotateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::resetStatusTextArea)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::waitingForCancelChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::setupNeededChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(CalType_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::calibrationComplete)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::compass1CalSucceededChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::compass2CalSucceededChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::compass3CalSucceededChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::compass1CalFitnessChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::compass2CalFitnessChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::compass3CalFitnessChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMSensorsComponentController::setAllCalButtonsEnabled)) {
                *result = 16;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMSensorsComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->_statusLog; break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->_progressBar; break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->_nextButton; break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->_cancelButton; break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->_orientationCalAreaHelpText; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->compassSetupNeeded(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->accelSetupNeeded(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->_showOrientationCalArea; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideDone; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideDone; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideDone; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideDone; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideDone; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideDone; break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideVisible; break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideVisible; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideVisible; break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideVisible; break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideVisible; break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideVisible; break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideInProgress; break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideInProgress; break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideInProgress; break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideInProgress; break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideInProgress; break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideInProgress; break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideRotate; break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideRotate; break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideRotate; break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideRotate; break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideRotate; break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideRotate; break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->_waitingForCancel; break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->compass1CalSucceeded(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->compass2CalSucceeded(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->compass3CalSucceeded(); break;
        case 36: *reinterpret_cast< double*>(_v) = _t->compass1CalFitness(); break;
        case 37: *reinterpret_cast< double*>(_v) = _t->compass2CalFitness(); break;
        case 38: *reinterpret_cast< double*>(_v) = _t->compass3CalFitness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<APMSensorsComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_statusLog != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_statusLog = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 1:
            if (_t->_progressBar != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_progressBar = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 2:
            if (_t->_nextButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_nextButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 3:
            if (_t->_cancelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_cancelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 4:
            if (_t->_orientationCalAreaHelpText != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_orientationCalAreaHelpText = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 7:
            if (_t->_showOrientationCalArea != *reinterpret_cast< bool*>(_v)) {
                _t->_showOrientationCalArea = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->showOrientationCalAreaChanged();
            }
            break;
        case 8:
            if (_t->_orientationCalDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 9:
            if (_t->_orientationCalUpsideDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 10:
            if (_t->_orientationCalLeftSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 11:
            if (_t->_orientationCalRightSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 12:
            if (_t->_orientationCalNoseDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 13:
            if (_t->_orientationCalTailDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 14:
            if (_t->_orientationCalDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 15:
            if (_t->_orientationCalUpsideDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 16:
            if (_t->_orientationCalLeftSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 17:
            if (_t->_orientationCalRightSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 18:
            if (_t->_orientationCalNoseDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 19:
            if (_t->_orientationCalTailDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 20:
            if (_t->_orientationCalDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 21:
            if (_t->_orientationCalUpsideDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 22:
            if (_t->_orientationCalLeftSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 23:
            if (_t->_orientationCalRightSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 24:
            if (_t->_orientationCalNoseDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 25:
            if (_t->_orientationCalTailDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 26:
            if (_t->_orientationCalDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 27:
            if (_t->_orientationCalUpsideDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 28:
            if (_t->_orientationCalLeftSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 29:
            if (_t->_orientationCalRightSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 30:
            if (_t->_orientationCalNoseDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 31:
            if (_t->_orientationCalTailDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 32:
            if (_t->_waitingForCancel != *reinterpret_cast< bool*>(_v)) {
                _t->_waitingForCancel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->waitingForCancelChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject APMSensorsComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_APMSensorsComponentController.data,
    qt_meta_data_APMSensorsComponentController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *APMSensorsComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMSensorsComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMSensorsComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMSensorsComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 39;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 39;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 39;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 39;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 39;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void APMSensorsComponentController::showGyroCalAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void APMSensorsComponentController::showOrientationCalAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void APMSensorsComponentController::orientationCalSidesDoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void APMSensorsComponentController::orientationCalSidesVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void APMSensorsComponentController::orientationCalSidesInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void APMSensorsComponentController::orientationCalSidesRotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void APMSensorsComponentController::resetStatusTextArea()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void APMSensorsComponentController::waitingForCancelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void APMSensorsComponentController::setupNeededChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void APMSensorsComponentController::calibrationComplete(CalType_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void APMSensorsComponentController::compass1CalSucceededChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void APMSensorsComponentController::compass2CalSucceededChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void APMSensorsComponentController::compass3CalSucceededChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void APMSensorsComponentController::compass1CalFitnessChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void APMSensorsComponentController::compass2CalFitnessChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void APMSensorsComponentController::compass3CalFitnessChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void APMSensorsComponentController::setAllCalButtonsEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
