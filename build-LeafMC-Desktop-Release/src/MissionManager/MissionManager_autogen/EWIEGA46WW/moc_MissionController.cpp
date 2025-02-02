/****************************************************************************
** Meta object code from reading C++ file 'MissionController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/MissionController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionController_t {
    QByteArrayData data[137];
    char stringdata0[2957];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionController_t qt_meta_stringdata_MissionController = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MissionController"
QT_MOC_LITERAL(1, 18, 18), // "visualItemsChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "waypointPathChanged"
QT_MOC_LITERAL(4, 58, 19), // "splitSegmentChanged"
QT_MOC_LITERAL(5, 78, 19), // "newItemsFromVehicle"
QT_MOC_LITERAL(6, 98, 22), // "missionDistanceChanged"
QT_MOC_LITERAL(7, 121, 15), // "missionDistance"
QT_MOC_LITERAL(8, 137, 18), // "missionTimeChanged"
QT_MOC_LITERAL(9, 156, 27), // "missionHoverDistanceChanged"
QT_MOC_LITERAL(10, 184, 20), // "missionHoverDistance"
QT_MOC_LITERAL(11, 205, 23), // "missionHoverTimeChanged"
QT_MOC_LITERAL(12, 229, 28), // "missionCruiseDistanceChanged"
QT_MOC_LITERAL(13, 258, 21), // "missionCruiseDistance"
QT_MOC_LITERAL(14, 280, 24), // "missionCruiseTimeChanged"
QT_MOC_LITERAL(15, 305, 26), // "missionMaxTelemetryChanged"
QT_MOC_LITERAL(16, 332, 19), // "missionMaxTelemetry"
QT_MOC_LITERAL(17, 352, 30), // "complexMissionItemNamesChanged"
QT_MOC_LITERAL(18, 383, 25), // "resumeMissionIndexChanged"
QT_MOC_LITERAL(19, 409, 18), // "resumeMissionReady"
QT_MOC_LITERAL(20, 428, 23), // "resumeMissionUploadFail"
QT_MOC_LITERAL(21, 452, 25), // "batteryChangePointChanged"
QT_MOC_LITERAL(22, 478, 18), // "batteryChangePoint"
QT_MOC_LITERAL(23, 497, 24), // "batteriesRequiredChanged"
QT_MOC_LITERAL(24, 522, 17), // "batteriesRequired"
QT_MOC_LITERAL(25, 540, 26), // "plannedHomePositionChanged"
QT_MOC_LITERAL(26, 567, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(27, 582, 19), // "plannedHomePosition"
QT_MOC_LITERAL(28, 602, 18), // "progressPctChanged"
QT_MOC_LITERAL(29, 621, 11), // "progressPct"
QT_MOC_LITERAL(30, 633, 26), // "currentMissionIndexChanged"
QT_MOC_LITERAL(31, 660, 19), // "currentMissionIndex"
QT_MOC_LITERAL(32, 680, 28), // "currentPlanViewSeqNumChanged"
QT_MOC_LITERAL(33, 709, 29), // "currentPlanViewVIIndexChanged"
QT_MOC_LITERAL(34, 739, 26), // "currentPlanViewItemChanged"
QT_MOC_LITERAL(35, 766, 25), // "takeoffMissionItemChanged"
QT_MOC_LITERAL(36, 792, 26), // "missionBoundingCubeChanged"
QT_MOC_LITERAL(37, 819, 23), // "missionItemCountChanged"
QT_MOC_LITERAL(38, 843, 16), // "missionItemCount"
QT_MOC_LITERAL(39, 860, 29), // "onlyInsertTakeoffValidChanged"
QT_MOC_LITERAL(40, 890, 27), // "isInsertTakeoffValidChanged"
QT_MOC_LITERAL(41, 918, 24), // "isInsertLandValidChanged"
QT_MOC_LITERAL(42, 943, 18), // "isROIActiveChanged"
QT_MOC_LITERAL(43, 962, 28), // "isROIBeginCurrentItemChanged"
QT_MOC_LITERAL(44, 991, 32), // "flyThroughCommandsAllowedChanged"
QT_MOC_LITERAL(45, 1024, 25), // "previousCoordinateChanged"
QT_MOC_LITERAL(46, 1050, 22), // "minAMSLAltitudeChanged"
QT_MOC_LITERAL(47, 1073, 15), // "minAMSLAltitude"
QT_MOC_LITERAL(48, 1089, 22), // "maxAMSLAltitudeChanged"
QT_MOC_LITERAL(49, 1112, 15), // "maxAMSLAltitude"
QT_MOC_LITERAL(50, 1128, 20), // "recalcTerrainProfile"
QT_MOC_LITERAL(51, 1149, 32), // "_recalcMissionFlightStatusSignal"
QT_MOC_LITERAL(52, 1182, 31), // "_recalcFlightPathSegmentsSignal"
QT_MOC_LITERAL(53, 1214, 25), // "globalAltitudeModeChanged"
QT_MOC_LITERAL(54, 1240, 36), // "_newMissionItemsAvailableFrom..."
QT_MOC_LITERAL(55, 1277, 18), // "removeAllRequested"
QT_MOC_LITERAL(56, 1296, 19), // "_itemCommandChanged"
QT_MOC_LITERAL(57, 1316, 18), // "_inProgressChanged"
QT_MOC_LITERAL(58, 1335, 10), // "inProgress"
QT_MOC_LITERAL(59, 1346, 27), // "_currentMissionIndexChanged"
QT_MOC_LITERAL(60, 1374, 14), // "sequenceNumber"
QT_MOC_LITERAL(61, 1389, 25), // "_recalcFlightPathSegments"
QT_MOC_LITERAL(62, 1415, 26), // "_recalcMissionFlightStatus"
QT_MOC_LITERAL(63, 1442, 20), // "_updateContainsItems"
QT_MOC_LITERAL(64, 1463, 19), // "_progressPctChanged"
QT_MOC_LITERAL(65, 1483, 24), // "_visualItemsDirtyChanged"
QT_MOC_LITERAL(66, 1508, 5), // "dirty"
QT_MOC_LITERAL(67, 1514, 20), // "_managerSendComplete"
QT_MOC_LITERAL(68, 1535, 5), // "error"
QT_MOC_LITERAL(69, 1541, 25), // "_managerRemoveAllComplete"
QT_MOC_LITERAL(70, 1567, 14), // "_updateTimeout"
QT_MOC_LITERAL(71, 1582, 26), // "_complexBoundingBoxChanged"
QT_MOC_LITERAL(72, 1609, 10), // "_recalcAll"
QT_MOC_LITERAL(73, 1620, 22), // "_managerVehicleChanged"
QT_MOC_LITERAL(74, 1643, 8), // "Vehicle*"
QT_MOC_LITERAL(75, 1652, 14), // "managerVehicle"
QT_MOC_LITERAL(76, 1667, 30), // "_takeoffItemNotRequiredChanged"
QT_MOC_LITERAL(77, 1698, 16), // "removeVisualItem"
QT_MOC_LITERAL(78, 1715, 7), // "viIndex"
QT_MOC_LITERAL(79, 1723, 23), // "insertSimpleMissionItem"
QT_MOC_LITERAL(80, 1747, 18), // "VisualMissionItem*"
QT_MOC_LITERAL(81, 1766, 10), // "coordinate"
QT_MOC_LITERAL(82, 1777, 15), // "visualItemIndex"
QT_MOC_LITERAL(83, 1793, 15), // "makeCurrentItem"
QT_MOC_LITERAL(84, 1809, 17), // "insertTakeoffItem"
QT_MOC_LITERAL(85, 1827, 14), // "insertLandItem"
QT_MOC_LITERAL(86, 1842, 20), // "insertROIMissionItem"
QT_MOC_LITERAL(87, 1863, 26), // "insertCancelROIMissionItem"
QT_MOC_LITERAL(88, 1890, 24), // "insertComplexMissionItem"
QT_MOC_LITERAL(89, 1915, 8), // "itemName"
QT_MOC_LITERAL(90, 1924, 19), // "mapCenterCoordinate"
QT_MOC_LITERAL(91, 1944, 36), // "insertComplexMissionItemFromK..."
QT_MOC_LITERAL(92, 1981, 4), // "file"
QT_MOC_LITERAL(93, 1986, 13), // "resumeMission"
QT_MOC_LITERAL(94, 2000, 11), // "resumeIndex"
QT_MOC_LITERAL(95, 2012, 27), // "applyDefaultMissionAltitude"
QT_MOC_LITERAL(96, 2040, 24), // "setCurrentPlanViewSeqNum"
QT_MOC_LITERAL(97, 2065, 5), // "force"
QT_MOC_LITERAL(98, 2071, 21), // "sendToVehiclePreCheck"
QT_MOC_LITERAL(99, 2093, 26), // "SendToVehiclePreCheckState"
QT_MOC_LITERAL(100, 2120, 11), // "visualItems"
QT_MOC_LITERAL(101, 2132, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(102, 2152, 24), // "simpleFlightPathSegments"
QT_MOC_LITERAL(103, 2177, 12), // "waypointPath"
QT_MOC_LITERAL(104, 2190, 15), // "directionArrows"
QT_MOC_LITERAL(105, 2206, 26), // "incompleteComplexItemLines"
QT_MOC_LITERAL(106, 2233, 23), // "complexMissionItemNames"
QT_MOC_LITERAL(107, 2257, 18), // "previousCoordinate"
QT_MOC_LITERAL(108, 2276, 12), // "splitSegment"
QT_MOC_LITERAL(109, 2289, 18), // "FlightPathSegment*"
QT_MOC_LITERAL(110, 2308, 18), // "resumeMissionIndex"
QT_MOC_LITERAL(111, 2327, 21), // "currentPlanViewSeqNum"
QT_MOC_LITERAL(112, 2349, 22), // "currentPlanViewVIIndex"
QT_MOC_LITERAL(113, 2372, 19), // "currentPlanViewItem"
QT_MOC_LITERAL(114, 2392, 18), // "takeoffMissionItem"
QT_MOC_LITERAL(115, 2411, 19), // "TakeoffMissionItem*"
QT_MOC_LITERAL(116, 2431, 11), // "missionTime"
QT_MOC_LITERAL(117, 2443, 16), // "missionHoverTime"
QT_MOC_LITERAL(118, 2460, 17), // "missionCruiseTime"
QT_MOC_LITERAL(119, 2478, 18), // "travelBoundingCube"
QT_MOC_LITERAL(120, 2497, 19), // "QGCGeoBoundingCube*"
QT_MOC_LITERAL(121, 2517, 21), // "surveyComplexItemName"
QT_MOC_LITERAL(122, 2539, 27), // "corridorScanComplexItemName"
QT_MOC_LITERAL(123, 2567, 28), // "structureScanComplexItemName"
QT_MOC_LITERAL(124, 2596, 22), // "onlyInsertTakeoffValid"
QT_MOC_LITERAL(125, 2619, 20), // "isInsertTakeoffValid"
QT_MOC_LITERAL(126, 2640, 17), // "isInsertLandValid"
QT_MOC_LITERAL(127, 2658, 11), // "isROIActive"
QT_MOC_LITERAL(128, 2670, 21), // "isROIBeginCurrentItem"
QT_MOC_LITERAL(129, 2692, 25), // "flyThroughCommandsAllowed"
QT_MOC_LITERAL(130, 2718, 18), // "globalAltitudeMode"
QT_MOC_LITERAL(131, 2737, 32), // "QGroundControlQmlGlobal::AltMode"
QT_MOC_LITERAL(132, 2770, 25), // "globalAltitudeModeDefault"
QT_MOC_LITERAL(133, 2796, 28), // "SendToVehiclePreCheckStateOk"
QT_MOC_LITERAL(134, 2825, 41), // "SendToVehiclePreCheckStateNoA..."
QT_MOC_LITERAL(135, 2867, 49), // "SendToVehiclePreCheckStateFir..."
QT_MOC_LITERAL(136, 2917, 39) // "SendToVehiclePreCheckStateAct..."

    },
    "MissionController\0visualItemsChanged\0"
    "\0waypointPathChanged\0splitSegmentChanged\0"
    "newItemsFromVehicle\0missionDistanceChanged\0"
    "missionDistance\0missionTimeChanged\0"
    "missionHoverDistanceChanged\0"
    "missionHoverDistance\0missionHoverTimeChanged\0"
    "missionCruiseDistanceChanged\0"
    "missionCruiseDistance\0missionCruiseTimeChanged\0"
    "missionMaxTelemetryChanged\0"
    "missionMaxTelemetry\0complexMissionItemNamesChanged\0"
    "resumeMissionIndexChanged\0resumeMissionReady\0"
    "resumeMissionUploadFail\0"
    "batteryChangePointChanged\0batteryChangePoint\0"
    "batteriesRequiredChanged\0batteriesRequired\0"
    "plannedHomePositionChanged\0QGeoCoordinate\0"
    "plannedHomePosition\0progressPctChanged\0"
    "progressPct\0currentMissionIndexChanged\0"
    "currentMissionIndex\0currentPlanViewSeqNumChanged\0"
    "currentPlanViewVIIndexChanged\0"
    "currentPlanViewItemChanged\0"
    "takeoffMissionItemChanged\0"
    "missionBoundingCubeChanged\0"
    "missionItemCountChanged\0missionItemCount\0"
    "onlyInsertTakeoffValidChanged\0"
    "isInsertTakeoffValidChanged\0"
    "isInsertLandValidChanged\0isROIActiveChanged\0"
    "isROIBeginCurrentItemChanged\0"
    "flyThroughCommandsAllowedChanged\0"
    "previousCoordinateChanged\0"
    "minAMSLAltitudeChanged\0minAMSLAltitude\0"
    "maxAMSLAltitudeChanged\0maxAMSLAltitude\0"
    "recalcTerrainProfile\0"
    "_recalcMissionFlightStatusSignal\0"
    "_recalcFlightPathSegmentsSignal\0"
    "globalAltitudeModeChanged\0"
    "_newMissionItemsAvailableFromVehicle\0"
    "removeAllRequested\0_itemCommandChanged\0"
    "_inProgressChanged\0inProgress\0"
    "_currentMissionIndexChanged\0sequenceNumber\0"
    "_recalcFlightPathSegments\0"
    "_recalcMissionFlightStatus\0"
    "_updateContainsItems\0_progressPctChanged\0"
    "_visualItemsDirtyChanged\0dirty\0"
    "_managerSendComplete\0error\0"
    "_managerRemoveAllComplete\0_updateTimeout\0"
    "_complexBoundingBoxChanged\0_recalcAll\0"
    "_managerVehicleChanged\0Vehicle*\0"
    "managerVehicle\0_takeoffItemNotRequiredChanged\0"
    "removeVisualItem\0viIndex\0"
    "insertSimpleMissionItem\0VisualMissionItem*\0"
    "coordinate\0visualItemIndex\0makeCurrentItem\0"
    "insertTakeoffItem\0insertLandItem\0"
    "insertROIMissionItem\0insertCancelROIMissionItem\0"
    "insertComplexMissionItem\0itemName\0"
    "mapCenterCoordinate\0"
    "insertComplexMissionItemFromKMLOrSHP\0"
    "file\0resumeMission\0resumeIndex\0"
    "applyDefaultMissionAltitude\0"
    "setCurrentPlanViewSeqNum\0force\0"
    "sendToVehiclePreCheck\0SendToVehiclePreCheckState\0"
    "visualItems\0QmlObjectListModel*\0"
    "simpleFlightPathSegments\0waypointPath\0"
    "directionArrows\0incompleteComplexItemLines\0"
    "complexMissionItemNames\0previousCoordinate\0"
    "splitSegment\0FlightPathSegment*\0"
    "resumeMissionIndex\0currentPlanViewSeqNum\0"
    "currentPlanViewVIIndex\0currentPlanViewItem\0"
    "takeoffMissionItem\0TakeoffMissionItem*\0"
    "missionTime\0missionHoverTime\0"
    "missionCruiseTime\0travelBoundingCube\0"
    "QGCGeoBoundingCube*\0surveyComplexItemName\0"
    "corridorScanComplexItemName\0"
    "structureScanComplexItemName\0"
    "onlyInsertTakeoffValid\0isInsertTakeoffValid\0"
    "isInsertLandValid\0isROIActive\0"
    "isROIBeginCurrentItem\0flyThroughCommandsAllowed\0"
    "globalAltitudeMode\0QGroundControlQmlGlobal::AltMode\0"
    "globalAltitudeModeDefault\0"
    "SendToVehiclePreCheckStateOk\0"
    "SendToVehiclePreCheckStateNoActiveVehicle\0"
    "SendToVehiclePreCheckStateFirwmareVehicleMismatch\0"
    "SendToVehiclePreCheckStateActiveMission"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
      40,  580, // properties
       1,  740, // enums/sets
       0,    0, // constructors
       0,       // flags
      39,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  384,    2, 0x06 /* Public */,
       3,    0,  385,    2, 0x06 /* Public */,
       4,    0,  386,    2, 0x06 /* Public */,
       5,    0,  387,    2, 0x06 /* Public */,
       6,    1,  388,    2, 0x06 /* Public */,
       8,    0,  391,    2, 0x06 /* Public */,
       9,    1,  392,    2, 0x06 /* Public */,
      11,    0,  395,    2, 0x06 /* Public */,
      12,    1,  396,    2, 0x06 /* Public */,
      14,    0,  399,    2, 0x06 /* Public */,
      15,    1,  400,    2, 0x06 /* Public */,
      17,    0,  403,    2, 0x06 /* Public */,
      18,    0,  404,    2, 0x06 /* Public */,
      19,    0,  405,    2, 0x06 /* Public */,
      20,    0,  406,    2, 0x06 /* Public */,
      21,    1,  407,    2, 0x06 /* Public */,
      23,    1,  410,    2, 0x06 /* Public */,
      25,    1,  413,    2, 0x06 /* Public */,
      28,    1,  416,    2, 0x06 /* Public */,
      30,    1,  419,    2, 0x06 /* Public */,
      32,    0,  422,    2, 0x06 /* Public */,
      33,    0,  423,    2, 0x06 /* Public */,
      34,    0,  424,    2, 0x06 /* Public */,
      35,    0,  425,    2, 0x06 /* Public */,
      36,    0,  426,    2, 0x06 /* Public */,
      37,    1,  427,    2, 0x06 /* Public */,
      39,    0,  430,    2, 0x06 /* Public */,
      40,    0,  431,    2, 0x06 /* Public */,
      41,    0,  432,    2, 0x06 /* Public */,
      42,    0,  433,    2, 0x06 /* Public */,
      43,    0,  434,    2, 0x06 /* Public */,
      44,    0,  435,    2, 0x06 /* Public */,
      45,    0,  436,    2, 0x06 /* Public */,
      46,    1,  437,    2, 0x06 /* Public */,
      48,    1,  440,    2, 0x06 /* Public */,
      50,    0,  443,    2, 0x06 /* Public */,
      51,    0,  444,    2, 0x06 /* Public */,
      52,    0,  445,    2, 0x06 /* Public */,
      53,    0,  446,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      54,    1,  447,    2, 0x08 /* Private */,
      56,    0,  450,    2, 0x08 /* Private */,
      57,    1,  451,    2, 0x08 /* Private */,
      59,    1,  454,    2, 0x08 /* Private */,
      61,    0,  457,    2, 0x08 /* Private */,
      62,    0,  458,    2, 0x08 /* Private */,
      63,    0,  459,    2, 0x08 /* Private */,
      64,    1,  460,    2, 0x08 /* Private */,
      65,    1,  463,    2, 0x08 /* Private */,
      67,    1,  466,    2, 0x08 /* Private */,
      69,    1,  469,    2, 0x08 /* Private */,
      70,    0,  472,    2, 0x08 /* Private */,
      71,    0,  473,    2, 0x08 /* Private */,
      72,    0,  474,    2, 0x08 /* Private */,
      73,    1,  475,    2, 0x08 /* Private */,
      76,    0,  478,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      77,    1,  479,    2, 0x02 /* Public */,
      79,    3,  482,    2, 0x02 /* Public */,
      79,    2,  489,    2, 0x22 /* Public | MethodCloned */,
      84,    3,  494,    2, 0x02 /* Public */,
      84,    2,  501,    2, 0x22 /* Public | MethodCloned */,
      85,    3,  506,    2, 0x02 /* Public */,
      85,    2,  513,    2, 0x22 /* Public | MethodCloned */,
      86,    3,  518,    2, 0x02 /* Public */,
      86,    2,  525,    2, 0x22 /* Public | MethodCloned */,
      87,    2,  530,    2, 0x02 /* Public */,
      87,    1,  535,    2, 0x22 /* Public | MethodCloned */,
      88,    4,  538,    2, 0x02 /* Public */,
      88,    3,  547,    2, 0x22 /* Public | MethodCloned */,
      91,    4,  554,    2, 0x02 /* Public */,
      91,    3,  563,    2, 0x22 /* Public | MethodCloned */,
      93,    1,  570,    2, 0x02 /* Public */,
      95,    0,  573,    2, 0x02 /* Public */,
      96,    2,  574,    2, 0x02 /* Public */,
      98,    0,  579,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   47,
    QMetaType::Void, QMetaType::Double,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Bool,   66,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   78,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   81,   82,   83,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int,   81,   82,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   81,   82,   83,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int,   81,   82,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   81,   82,   83,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int,   81,   82,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   81,   82,   83,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int,   81,   82,
    0x80000000 | 80, QMetaType::Int, QMetaType::Bool,   82,   83,
    0x80000000 | 80, QMetaType::Int,   82,
    0x80000000 | 80, QMetaType::QString, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   89,   90,   82,   83,
    0x80000000 | 80, QMetaType::QString, 0x80000000 | 26, QMetaType::Int,   89,   90,   82,
    0x80000000 | 80, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   89,   92,   82,   83,
    0x80000000 | 80, QMetaType::QString, QMetaType::QString, QMetaType::Int,   89,   92,   82,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   60,   97,
    0x80000000 | 99,

 // properties: name, type, flags
     100, 0x80000000 | 101, 0x00495009,
     102, 0x80000000 | 101, 0x00095409,
     103, QMetaType::QVariantList, 0x00495001,
     104, 0x80000000 | 101, 0x00095409,
     105, 0x80000000 | 101, 0x00095409,
     106, QMetaType::QStringList, 0x00495001,
      27, 0x80000000 | 26, 0x00495009,
     107, 0x80000000 | 26, 0x0049500b,
     108, 0x80000000 | 109, 0x0049500b,
      29, QMetaType::Double, 0x00495001,
      38, QMetaType::Int, 0x00495001,
      31, QMetaType::Int, 0x00495001,
     110, QMetaType::Int, 0x00495001,
     111, QMetaType::Int, 0x00495001,
     112, QMetaType::Int, 0x00495001,
     113, 0x80000000 | 80, 0x00495009,
     114, 0x80000000 | 115, 0x00495009,
       7, QMetaType::Double, 0x00495001,
     116, QMetaType::Double, 0x00495001,
      10, QMetaType::Double, 0x00495001,
      13, QMetaType::Double, 0x00495001,
     117, QMetaType::Double, 0x00495001,
     118, QMetaType::Double, 0x00495001,
      16, QMetaType::Double, 0x00495001,
      22, QMetaType::Int, 0x00495001,
      24, QMetaType::Int, 0x00495001,
     119, 0x80000000 | 120, 0x00495009,
     121, QMetaType::QString, 0x00095401,
     122, QMetaType::QString, 0x00095401,
     123, QMetaType::QString, 0x00095401,
     124, QMetaType::Bool, 0x00495003,
     125, QMetaType::Bool, 0x00495003,
     126, QMetaType::Bool, 0x00495003,
     127, QMetaType::Bool, 0x00495003,
     128, QMetaType::Bool, 0x00495003,
     129, QMetaType::Bool, 0x00495003,
      47, QMetaType::Double, 0x00495003,
      49, QMetaType::Double, 0x00495003,
     130, 0x80000000 | 131, 0x0049510b,
     132, 0x80000000 | 131, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,
       0,
      11,
      17,
      32,
       2,
      18,
      25,
      19,
      12,
      20,
      21,
      22,
      23,
       4,
       5,
       6,
       8,
       7,
       9,
      10,
      15,
      16,
      24,
       0,
       0,
       0,
      26,
      27,
      28,
      29,
      30,
      31,
      33,
      34,
      38,
      38,

 // enums: name, alias, flags, count, data
      99,   99, 0x0,    4,  745,

 // enum data: key, value
     133, uint(MissionController::SendToVehiclePreCheckStateOk),
     134, uint(MissionController::SendToVehiclePreCheckStateNoActiveVehicle),
     135, uint(MissionController::SendToVehiclePreCheckStateFirwmareVehicleMismatch),
     136, uint(MissionController::SendToVehiclePreCheckStateActiveMission),

       0        // eod
};

void MissionController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visualItemsChanged(); break;
        case 1: _t->waypointPathChanged(); break;
        case 2: _t->splitSegmentChanged(); break;
        case 3: _t->newItemsFromVehicle(); break;
        case 4: _t->missionDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->missionTimeChanged(); break;
        case 6: _t->missionHoverDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->missionHoverTimeChanged(); break;
        case 8: _t->missionCruiseDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->missionCruiseTimeChanged(); break;
        case 10: _t->missionMaxTelemetryChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->complexMissionItemNamesChanged(); break;
        case 12: _t->resumeMissionIndexChanged(); break;
        case 13: _t->resumeMissionReady(); break;
        case 14: _t->resumeMissionUploadFail(); break;
        case 15: _t->batteryChangePointChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->batteriesRequiredChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->plannedHomePositionChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 18: _t->progressPctChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->currentMissionIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->currentPlanViewSeqNumChanged(); break;
        case 21: _t->currentPlanViewVIIndexChanged(); break;
        case 22: _t->currentPlanViewItemChanged(); break;
        case 23: _t->takeoffMissionItemChanged(); break;
        case 24: _t->missionBoundingCubeChanged(); break;
        case 25: _t->missionItemCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->onlyInsertTakeoffValidChanged(); break;
        case 27: _t->isInsertTakeoffValidChanged(); break;
        case 28: _t->isInsertLandValidChanged(); break;
        case 29: _t->isROIActiveChanged(); break;
        case 30: _t->isROIBeginCurrentItemChanged(); break;
        case 31: _t->flyThroughCommandsAllowedChanged(); break;
        case 32: _t->previousCoordinateChanged(); break;
        case 33: _t->minAMSLAltitudeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 34: _t->maxAMSLAltitudeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 35: _t->recalcTerrainProfile(); break;
        case 36: _t->_recalcMissionFlightStatusSignal(); break;
        case 37: _t->_recalcFlightPathSegmentsSignal(); break;
        case 38: _t->globalAltitudeModeChanged(); break;
        case 39: _t->_newMissionItemsAvailableFromVehicle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->_itemCommandChanged(); break;
        case 41: _t->_inProgressChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->_currentMissionIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->_recalcFlightPathSegments(); break;
        case 44: _t->_recalcMissionFlightStatus(); break;
        case 45: _t->_updateContainsItems(); break;
        case 46: _t->_progressPctChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 47: _t->_visualItemsDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->_managerSendComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->_managerRemoveAllComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->_updateTimeout(); break;
        case 51: _t->_complexBoundingBoxChanged(); break;
        case 52: _t->_recalcAll(); break;
        case 53: _t->_managerVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 54: _t->_takeoffItemNotRequiredChanged(); break;
        case 55: _t->removeVisualItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: { VisualMissionItem* _r = _t->insertSimpleMissionItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 57: { VisualMissionItem* _r = _t->insertSimpleMissionItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 58: { VisualMissionItem* _r = _t->insertTakeoffItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 59: { VisualMissionItem* _r = _t->insertTakeoffItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 60: { VisualMissionItem* _r = _t->insertLandItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 61: { VisualMissionItem* _r = _t->insertLandItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 62: { VisualMissionItem* _r = _t->insertROIMissionItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 63: { VisualMissionItem* _r = _t->insertROIMissionItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 64: { VisualMissionItem* _r = _t->insertCancelROIMissionItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 65: { VisualMissionItem* _r = _t->insertCancelROIMissionItem((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 66: { VisualMissionItem* _r = _t->insertComplexMissionItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QGeoCoordinate(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 67: { VisualMissionItem* _r = _t->insertComplexMissionItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QGeoCoordinate(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 68: { VisualMissionItem* _r = _t->insertComplexMissionItemFromKMLOrSHP((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 69: { VisualMissionItem* _r = _t->insertComplexMissionItemFromKMLOrSHP((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 70: _t->resumeMission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->applyDefaultMissionAltitude(); break;
        case 72: _t->setCurrentPlanViewSeqNum((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 73: { SendToVehiclePreCheckState _r = _t->sendToVehiclePreCheck();
            if (_a[0]) *reinterpret_cast< SendToVehiclePreCheckState*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::visualItemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::waypointPathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::splitSegmentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::newItemsFromVehicle)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionDistanceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionTimeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionHoverDistanceChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionHoverTimeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionCruiseDistanceChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionCruiseTimeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionMaxTelemetryChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::complexMissionItemNamesChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionIndexChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionReady)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionUploadFail)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::batteryChangePointChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::batteriesRequiredChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::plannedHomePositionChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::progressPctChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentMissionIndexChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentPlanViewSeqNumChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentPlanViewVIIndexChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentPlanViewItemChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::takeoffMissionItemChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionBoundingCubeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionItemCountChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::onlyInsertTakeoffValidChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::isInsertTakeoffValidChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::isInsertLandValidChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::isROIActiveChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::isROIBeginCurrentItemChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::flyThroughCommandsAllowedChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::previousCoordinateChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::minAMSLAltitudeChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::maxAMSLAltitudeChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::recalcTerrainProfile)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::_recalcMissionFlightStatusSignal)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::_recalcFlightPathSegmentsSignal)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::globalAltitudeModeChanged)) {
                *result = 38;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCGeoBoundingCube* >(); break;
        case 7:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 4:
        case 3:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MissionController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->visualItems(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->simpleFlightPathSegments(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->waypointPath(); break;
        case 3: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->directionArrows(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->incompleteComplexItemLines(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->complexMissionItemNames(); break;
        case 6: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->plannedHomePosition(); break;
        case 7: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->_previousCoordinate; break;
        case 8: *reinterpret_cast< FlightPathSegment**>(_v) = _t->_splitSegment; break;
        case 9: *reinterpret_cast< double*>(_v) = _t->progressPct(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->missionItemCount(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->currentMissionIndex(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->resumeMissionIndex(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->currentPlanViewSeqNum(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->currentPlanViewVIIndex(); break;
        case 15: *reinterpret_cast< VisualMissionItem**>(_v) = _t->currentPlanViewItem(); break;
        case 16: *reinterpret_cast< TakeoffMissionItem**>(_v) = _t->takeoffMissionItem(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->missionDistance(); break;
        case 18: *reinterpret_cast< double*>(_v) = _t->missionTime(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->missionHoverDistance(); break;
        case 20: *reinterpret_cast< double*>(_v) = _t->missionCruiseDistance(); break;
        case 21: *reinterpret_cast< double*>(_v) = _t->missionHoverTime(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->missionCruiseTime(); break;
        case 23: *reinterpret_cast< double*>(_v) = _t->missionMaxTelemetry(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->batteryChangePoint(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->batteriesRequired(); break;
        case 26: *reinterpret_cast< QGCGeoBoundingCube**>(_v) = _t->travelBoundingCube(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->surveyComplexItemName(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->corridorScanComplexItemName(); break;
        case 29: *reinterpret_cast< QString*>(_v) = _t->structureScanComplexItemName(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->_onlyInsertTakeoffValid; break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->_isInsertTakeoffValid; break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->_isInsertLandValid; break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->_isROIActive; break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->_isROIBeginCurrentItem; break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->_flyThroughCommandsAllowed; break;
        case 36: *reinterpret_cast< double*>(_v) = _t->_minAMSLAltitude; break;
        case 37: *reinterpret_cast< double*>(_v) = _t->_maxAMSLAltitude; break;
        case 38: *reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v) = _t->globalAltitudeMode(); break;
        case 39: *reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v) = _t->globalAltitudeModeDefault(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MissionController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 7:
            if (_t->_previousCoordinate != *reinterpret_cast< QGeoCoordinate*>(_v)) {
                _t->_previousCoordinate = *reinterpret_cast< QGeoCoordinate*>(_v);
                Q_EMIT _t->previousCoordinateChanged();
            }
            break;
        case 8:
            if (_t->_splitSegment != *reinterpret_cast< FlightPathSegment**>(_v)) {
                _t->_splitSegment = *reinterpret_cast< FlightPathSegment**>(_v);
                Q_EMIT _t->splitSegmentChanged();
            }
            break;
        case 30:
            if (_t->_onlyInsertTakeoffValid != *reinterpret_cast< bool*>(_v)) {
                _t->_onlyInsertTakeoffValid = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->onlyInsertTakeoffValidChanged();
            }
            break;
        case 31:
            if (_t->_isInsertTakeoffValid != *reinterpret_cast< bool*>(_v)) {
                _t->_isInsertTakeoffValid = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isInsertTakeoffValidChanged();
            }
            break;
        case 32:
            if (_t->_isInsertLandValid != *reinterpret_cast< bool*>(_v)) {
                _t->_isInsertLandValid = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isInsertLandValidChanged();
            }
            break;
        case 33:
            if (_t->_isROIActive != *reinterpret_cast< bool*>(_v)) {
                _t->_isROIActive = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isROIActiveChanged();
            }
            break;
        case 34:
            if (_t->_isROIBeginCurrentItem != *reinterpret_cast< bool*>(_v)) {
                _t->_isROIBeginCurrentItem = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isROIBeginCurrentItemChanged();
            }
            break;
        case 35:
            if (_t->_flyThroughCommandsAllowed != *reinterpret_cast< bool*>(_v)) {
                _t->_flyThroughCommandsAllowed = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->flyThroughCommandsAllowedChanged();
            }
            break;
        case 36:
            if (_t->_minAMSLAltitude != *reinterpret_cast< double*>(_v)) {
                _t->_minAMSLAltitude = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->minAMSLAltitudeChanged(_t->_minAMSLAltitude);
            }
            break;
        case 37:
            if (_t->_maxAMSLAltitude != *reinterpret_cast< double*>(_v)) {
                _t->_maxAMSLAltitude = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->maxAMSLAltitudeChanged(_t->_maxAMSLAltitude);
            }
            break;
        case 38: _t->setGlobalAltitudeMode(*reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_MissionController[] = {
    QMetaObject::SuperData::link<QGroundControlQmlGlobal::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject MissionController::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanElementController::staticMetaObject>(),
    qt_meta_stringdata_MissionController.data,
    qt_meta_data_MissionController,
    qt_static_metacall,
    qt_meta_extradata_MissionController,
    nullptr
} };


const QMetaObject *MissionController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionController.stringdata0))
        return static_cast<void*>(this);
    return PlanElementController::qt_metacast(_clname);
}

int MissionController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanElementController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 40;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MissionController::visualItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MissionController::waypointPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MissionController::splitSegmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MissionController::newItemsFromVehicle()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MissionController::missionDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MissionController::missionTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MissionController::missionHoverDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MissionController::missionHoverTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MissionController::missionCruiseDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MissionController::missionCruiseTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MissionController::missionMaxTelemetryChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MissionController::complexMissionItemNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MissionController::resumeMissionIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MissionController::resumeMissionReady()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MissionController::resumeMissionUploadFail()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MissionController::batteryChangePointChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MissionController::batteriesRequiredChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MissionController::plannedHomePositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MissionController::progressPctChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MissionController::currentMissionIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MissionController::currentPlanViewSeqNumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MissionController::currentPlanViewVIIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MissionController::currentPlanViewItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MissionController::takeoffMissionItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MissionController::missionBoundingCubeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MissionController::missionItemCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MissionController::onlyInsertTakeoffValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void MissionController::isInsertTakeoffValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void MissionController::isInsertLandValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void MissionController::isROIActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void MissionController::isROIBeginCurrentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void MissionController::flyThroughCommandsAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void MissionController::previousCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void MissionController::minAMSLAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MissionController::maxAMSLAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MissionController::recalcTerrainProfile()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void MissionController::_recalcMissionFlightStatusSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void MissionController::_recalcFlightPathSegmentsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void MissionController::globalAltitudeModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
