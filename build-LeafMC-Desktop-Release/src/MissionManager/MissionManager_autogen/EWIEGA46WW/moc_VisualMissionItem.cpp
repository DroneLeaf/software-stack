/****************************************************************************
** Meta object code from reading C++ file 'VisualMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/VisualMissionItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualMissionItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualMissionItem_t {
    QByteArrayData data[105];
    char stringdata0[1928];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisualMissionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisualMissionItem_t qt_meta_stringdata_VisualMissionItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VisualMissionItem"
QT_MOC_LITERAL(1, 18, 20), // "altDifferenceChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "altDifference"
QT_MOC_LITERAL(4, 54, 17), // "altPercentChanged"
QT_MOC_LITERAL(5, 72, 10), // "altPercent"
QT_MOC_LITERAL(6, 83, 21), // "terrainPercentChanged"
QT_MOC_LITERAL(7, 105, 14), // "terrainPercent"
QT_MOC_LITERAL(8, 120, 23), // "terrainCollisionChanged"
QT_MOC_LITERAL(9, 144, 16), // "terrainCollision"
QT_MOC_LITERAL(10, 161, 14), // "azimuthChanged"
QT_MOC_LITERAL(11, 176, 7), // "azimuth"
QT_MOC_LITERAL(12, 184, 25), // "commandDescriptionChanged"
QT_MOC_LITERAL(13, 210, 18), // "commandNameChanged"
QT_MOC_LITERAL(14, 229, 19), // "abbreviationChanged"
QT_MOC_LITERAL(15, 249, 17), // "coordinateChanged"
QT_MOC_LITERAL(16, 267, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(17, 282, 10), // "coordinate"
QT_MOC_LITERAL(18, 293, 21), // "exitCoordinateChanged"
QT_MOC_LITERAL(19, 315, 14), // "exitCoordinate"
QT_MOC_LITERAL(20, 330, 12), // "dirtyChanged"
QT_MOC_LITERAL(21, 343, 5), // "dirty"
QT_MOC_LITERAL(22, 349, 15), // "distanceChanged"
QT_MOC_LITERAL(23, 365, 8), // "distance"
QT_MOC_LITERAL(24, 374, 24), // "distanceFromStartChanged"
QT_MOC_LITERAL(25, 399, 17), // "distanceFromStart"
QT_MOC_LITERAL(26, 417, 20), // "isCurrentItemChanged"
QT_MOC_LITERAL(27, 438, 13), // "isCurrentItem"
QT_MOC_LITERAL(28, 452, 26), // "hasCurrentChildItemChanged"
QT_MOC_LITERAL(29, 479, 19), // "hasCurrentChildItem"
QT_MOC_LITERAL(30, 499, 21), // "sequenceNumberChanged"
QT_MOC_LITERAL(31, 521, 14), // "sequenceNumber"
QT_MOC_LITERAL(32, 536, 19), // "isSimpleItemChanged"
QT_MOC_LITERAL(33, 556, 12), // "isSimpleItem"
QT_MOC_LITERAL(34, 569, 20), // "isTakeoffItemChanged"
QT_MOC_LITERAL(35, 590, 13), // "isTakeoffItem"
QT_MOC_LITERAL(36, 604, 20), // "isLandCommandChanged"
QT_MOC_LITERAL(37, 625, 26), // "specifiesCoordinateChanged"
QT_MOC_LITERAL(38, 652, 29), // "isStandaloneCoordinateChanged"
QT_MOC_LITERAL(39, 682, 28), // "specifiesAltitudeOnlyChanged"
QT_MOC_LITERAL(40, 711, 27), // "specifiedFlightSpeedChanged"
QT_MOC_LITERAL(41, 739, 25), // "specifiedGimbalYawChanged"
QT_MOC_LITERAL(42, 765, 27), // "specifiedGimbalPitchChanged"
QT_MOC_LITERAL(43, 793, 26), // "specifiedVehicleYawChanged"
QT_MOC_LITERAL(44, 820, 25), // "lastSequenceNumberChanged"
QT_MOC_LITERAL(45, 846, 23), // "missionGimbalYawChanged"
QT_MOC_LITERAL(46, 870, 16), // "missionGimbalYaw"
QT_MOC_LITERAL(47, 887, 24), // "missionVehicleYawChanged"
QT_MOC_LITERAL(48, 912, 17), // "missionVehicleYaw"
QT_MOC_LITERAL(49, 930, 22), // "terrainAltitudeChanged"
QT_MOC_LITERAL(50, 953, 15), // "terrainAltitude"
QT_MOC_LITERAL(51, 969, 26), // "additionalTimeDelayChanged"
QT_MOC_LITERAL(52, 996, 19), // "boundingCubeChanged"
QT_MOC_LITERAL(53, 1016, 24), // "readyForSaveStateChanged"
QT_MOC_LITERAL(54, 1041, 17), // "wizardModeChanged"
QT_MOC_LITERAL(55, 1059, 10), // "wizardMode"
QT_MOC_LITERAL(56, 1070, 17), // "parentItemChanged"
QT_MOC_LITERAL(57, 1088, 18), // "VisualMissionItem*"
QT_MOC_LITERAL(58, 1107, 10), // "parentItem"
QT_MOC_LITERAL(59, 1118, 19), // "amslEntryAltChanged"
QT_MOC_LITERAL(60, 1138, 3), // "alt"
QT_MOC_LITERAL(61, 1142, 18), // "amslExitAltChanged"
QT_MOC_LITERAL(62, 1161, 23), // "previousVTOLModeChanged"
QT_MOC_LITERAL(63, 1185, 22), // "currentVTOLModeChanged"
QT_MOC_LITERAL(64, 1208, 32), // "exitCoordinateSameAsEntryChanged"
QT_MOC_LITERAL(65, 1241, 25), // "exitCoordinateSameAsEntry"
QT_MOC_LITERAL(66, 1267, 20), // "_amslEntryAltChanged"
QT_MOC_LITERAL(67, 1288, 19), // "_amslExitAltChanged"
QT_MOC_LITERAL(68, 1308, 22), // "_updateTerrainAltitude"
QT_MOC_LITERAL(69, 1331, 28), // "_reallyUpdateTerrainAltitude"
QT_MOC_LITERAL(70, 1360, 20), // "_terrainDataReceived"
QT_MOC_LITERAL(71, 1381, 7), // "success"
QT_MOC_LITERAL(72, 1389, 13), // "QList<double>"
QT_MOC_LITERAL(73, 1403, 7), // "heights"
QT_MOC_LITERAL(74, 1411, 12), // "homePosition"
QT_MOC_LITERAL(75, 1424, 12), // "amslEntryAlt"
QT_MOC_LITERAL(76, 1437, 11), // "amslExitAlt"
QT_MOC_LITERAL(77, 1449, 18), // "commandDescription"
QT_MOC_LITERAL(78, 1468, 11), // "commandName"
QT_MOC_LITERAL(79, 1480, 12), // "abbreviation"
QT_MOC_LITERAL(80, 1493, 18), // "lastSequenceNumber"
QT_MOC_LITERAL(81, 1512, 19), // "specifiesCoordinate"
QT_MOC_LITERAL(82, 1532, 22), // "isStandaloneCoordinate"
QT_MOC_LITERAL(83, 1555, 21), // "specifiesAltitudeOnly"
QT_MOC_LITERAL(84, 1577, 13), // "isLandCommand"
QT_MOC_LITERAL(85, 1591, 12), // "isSurveyItem"
QT_MOC_LITERAL(86, 1604, 9), // "editorQml"
QT_MOC_LITERAL(87, 1614, 12), // "mapVisualQML"
QT_MOC_LITERAL(88, 1627, 20), // "specifiedFlightSpeed"
QT_MOC_LITERAL(89, 1648, 18), // "specifiedGimbalYaw"
QT_MOC_LITERAL(90, 1667, 20), // "specifiedGimbalPitch"
QT_MOC_LITERAL(91, 1688, 19), // "specifiedVehicleYaw"
QT_MOC_LITERAL(92, 1708, 7), // "flyView"
QT_MOC_LITERAL(93, 1716, 16), // "previousVTOLMode"
QT_MOC_LITERAL(94, 1733, 16), // "masterController"
QT_MOC_LITERAL(95, 1750, 21), // "PlanMasterController*"
QT_MOC_LITERAL(96, 1772, 17), // "readyForSaveState"
QT_MOC_LITERAL(97, 1790, 17), // "ReadyForSaveState"
QT_MOC_LITERAL(98, 1808, 10), // "childItems"
QT_MOC_LITERAL(99, 1819, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(100, 1839, 12), // "boundingCube"
QT_MOC_LITERAL(101, 1852, 19), // "QGCGeoBoundingCube*"
QT_MOC_LITERAL(102, 1872, 12), // "ReadyForSave"
QT_MOC_LITERAL(103, 1885, 22), // "NotReadyForSaveTerrain"
QT_MOC_LITERAL(104, 1908, 19) // "NotReadyForSaveData"

    },
    "VisualMissionItem\0altDifferenceChanged\0"
    "\0altDifference\0altPercentChanged\0"
    "altPercent\0terrainPercentChanged\0"
    "terrainPercent\0terrainCollisionChanged\0"
    "terrainCollision\0azimuthChanged\0azimuth\0"
    "commandDescriptionChanged\0commandNameChanged\0"
    "abbreviationChanged\0coordinateChanged\0"
    "QGeoCoordinate\0coordinate\0"
    "exitCoordinateChanged\0exitCoordinate\0"
    "dirtyChanged\0dirty\0distanceChanged\0"
    "distance\0distanceFromStartChanged\0"
    "distanceFromStart\0isCurrentItemChanged\0"
    "isCurrentItem\0hasCurrentChildItemChanged\0"
    "hasCurrentChildItem\0sequenceNumberChanged\0"
    "sequenceNumber\0isSimpleItemChanged\0"
    "isSimpleItem\0isTakeoffItemChanged\0"
    "isTakeoffItem\0isLandCommandChanged\0"
    "specifiesCoordinateChanged\0"
    "isStandaloneCoordinateChanged\0"
    "specifiesAltitudeOnlyChanged\0"
    "specifiedFlightSpeedChanged\0"
    "specifiedGimbalYawChanged\0"
    "specifiedGimbalPitchChanged\0"
    "specifiedVehicleYawChanged\0"
    "lastSequenceNumberChanged\0"
    "missionGimbalYawChanged\0missionGimbalYaw\0"
    "missionVehicleYawChanged\0missionVehicleYaw\0"
    "terrainAltitudeChanged\0terrainAltitude\0"
    "additionalTimeDelayChanged\0"
    "boundingCubeChanged\0readyForSaveStateChanged\0"
    "wizardModeChanged\0wizardMode\0"
    "parentItemChanged\0VisualMissionItem*\0"
    "parentItem\0amslEntryAltChanged\0alt\0"
    "amslExitAltChanged\0previousVTOLModeChanged\0"
    "currentVTOLModeChanged\0"
    "exitCoordinateSameAsEntryChanged\0"
    "exitCoordinateSameAsEntry\0"
    "_amslEntryAltChanged\0_amslExitAltChanged\0"
    "_updateTerrainAltitude\0"
    "_reallyUpdateTerrainAltitude\0"
    "_terrainDataReceived\0success\0QList<double>\0"
    "heights\0homePosition\0amslEntryAlt\0"
    "amslExitAlt\0commandDescription\0"
    "commandName\0abbreviation\0lastSequenceNumber\0"
    "specifiesCoordinate\0isStandaloneCoordinate\0"
    "specifiesAltitudeOnly\0isLandCommand\0"
    "isSurveyItem\0editorQml\0mapVisualQML\0"
    "specifiedFlightSpeed\0specifiedGimbalYaw\0"
    "specifiedGimbalPitch\0specifiedVehicleYaw\0"
    "flyView\0previousVTOLMode\0masterController\0"
    "PlanMasterController*\0readyForSaveState\0"
    "ReadyForSaveState\0childItems\0"
    "QmlObjectListModel*\0boundingCube\0"
    "QGCGeoBoundingCube*\0ReadyForSave\0"
    "NotReadyForSaveTerrain\0NotReadyForSaveData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualMissionItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
      45,  336, // properties
       1,  516, // enums/sets
       0,    0, // constructors
       0,       // flags
      40,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  239,    2, 0x06 /* Public */,
       4,    1,  242,    2, 0x06 /* Public */,
       6,    1,  245,    2, 0x06 /* Public */,
       8,    1,  248,    2, 0x06 /* Public */,
      10,    1,  251,    2, 0x06 /* Public */,
      12,    0,  254,    2, 0x06 /* Public */,
      13,    0,  255,    2, 0x06 /* Public */,
      14,    0,  256,    2, 0x06 /* Public */,
      15,    1,  257,    2, 0x06 /* Public */,
      18,    1,  260,    2, 0x06 /* Public */,
      20,    1,  263,    2, 0x06 /* Public */,
      22,    1,  266,    2, 0x06 /* Public */,
      24,    1,  269,    2, 0x06 /* Public */,
      26,    1,  272,    2, 0x06 /* Public */,
      28,    1,  275,    2, 0x06 /* Public */,
      30,    1,  278,    2, 0x06 /* Public */,
      32,    1,  281,    2, 0x06 /* Public */,
      34,    1,  284,    2, 0x06 /* Public */,
      36,    0,  287,    2, 0x06 /* Public */,
      37,    0,  288,    2, 0x06 /* Public */,
      38,    0,  289,    2, 0x06 /* Public */,
      39,    0,  290,    2, 0x06 /* Public */,
      40,    0,  291,    2, 0x06 /* Public */,
      41,    0,  292,    2, 0x06 /* Public */,
      42,    0,  293,    2, 0x06 /* Public */,
      43,    0,  294,    2, 0x06 /* Public */,
      44,    1,  295,    2, 0x06 /* Public */,
      45,    1,  298,    2, 0x06 /* Public */,
      47,    1,  301,    2, 0x06 /* Public */,
      49,    1,  304,    2, 0x06 /* Public */,
      51,    0,  307,    2, 0x06 /* Public */,
      52,    0,  308,    2, 0x06 /* Public */,
      53,    0,  309,    2, 0x06 /* Public */,
      54,    1,  310,    2, 0x06 /* Public */,
      56,    1,  313,    2, 0x06 /* Public */,
      59,    1,  316,    2, 0x06 /* Public */,
      61,    1,  319,    2, 0x06 /* Public */,
      62,    0,  322,    2, 0x06 /* Public */,
      63,    0,  323,    2, 0x06 /* Public */,
      64,    1,  324,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      66,    0,  327,    2, 0x09 /* Protected */,
      67,    0,  328,    2, 0x09 /* Protected */,
      68,    0,  329,    2, 0x08 /* Private */,
      69,    0,  330,    2, 0x08 /* Private */,
      70,    2,  331,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Double,   46,
    QMetaType::Void, QMetaType::Double,   48,
    QMetaType::Void, QMetaType::Double,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::Double,   60,
    QMetaType::Void, QMetaType::Double,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   65,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 72,   71,   73,

 // properties: name, type, flags
      74, QMetaType::Bool, 0x00095401,
      17, 0x80000000 | 16, 0x0049510b,
      75, QMetaType::Double, 0x00495001,
      50, QMetaType::Double, 0x00495001,
      19, 0x80000000 | 16, 0x00495009,
      76, QMetaType::Double, 0x00495001,
      65, QMetaType::Bool, 0x00495001,
      77, QMetaType::QString, 0x00495001,
      78, QMetaType::QString, 0x00495001,
      79, QMetaType::QString, 0x00495001,
      21, QMetaType::Bool, 0x00495103,
      27, QMetaType::Bool, 0x00495103,
      29, QMetaType::Bool, 0x00495103,
      31, QMetaType::Int, 0x00495103,
      80, QMetaType::Int, 0x00495001,
      81, QMetaType::Bool, 0x00495001,
      82, QMetaType::Bool, 0x00495001,
      83, QMetaType::Bool, 0x00495001,
      33, QMetaType::Bool, 0x00495001,
      35, QMetaType::Bool, 0x00495001,
      84, QMetaType::Bool, 0x00495001,
      85, QMetaType::Bool, 0x00095001,
      86, QMetaType::QString, 0x00095401,
      87, QMetaType::QString, 0x00095401,
      88, QMetaType::Double, 0x00495001,
      89, QMetaType::Double, 0x00495001,
      90, QMetaType::Double, 0x00495001,
      91, QMetaType::Double, 0x00495001,
      46, QMetaType::Double, 0x00495001,
      48, QMetaType::Double, 0x00495001,
      92, QMetaType::Bool, 0x00095401,
      55, QMetaType::Bool, 0x00495103,
      93, QMetaType::Int, 0x00495003,
      94, 0x80000000 | 95, 0x00095409,
      96, 0x80000000 | 97, 0x00495009,
      58, 0x80000000 | 57, 0x0049510b,
      98, 0x80000000 | 99, 0x00095409,
     100, 0x80000000 | 101, 0x00495009,
       3, QMetaType::Double, 0x00495103,
       5, QMetaType::Double, 0x00495103,
       7, QMetaType::Double, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      11, QMetaType::Double, 0x00495103,
      23, QMetaType::Double, 0x00495103,
      25, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       8,
      35,
      29,
       9,
      36,
      39,
       5,
       6,
       7,
      10,
      13,
      14,
      15,
      26,
      19,
      20,
      21,
      16,
      17,
      18,
       0,
       0,
       0,
      22,
      23,
      24,
      25,
      27,
      28,
       0,
      33,
      37,
       0,
      32,
      34,
       0,
      31,
       0,
       1,
       2,
       3,
       4,
      11,
      12,

 // enums: name, alias, flags, count, data
      97,   97, 0x0,    3,  521,

 // enum data: key, value
     102, uint(VisualMissionItem::ReadyForSave),
     103, uint(VisualMissionItem::NotReadyForSaveTerrain),
     104, uint(VisualMissionItem::NotReadyForSaveData),

       0        // eod
};

void VisualMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->altDifferenceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->altPercentChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->terrainPercentChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->terrainCollisionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->azimuthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->commandDescriptionChanged(); break;
        case 6: _t->commandNameChanged(); break;
        case 7: _t->abbreviationChanged(); break;
        case 8: _t->coordinateChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 9: _t->exitCoordinateChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 10: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->distanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->distanceFromStartChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->isCurrentItemChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->hasCurrentChildItemChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->sequenceNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->isSimpleItemChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->isTakeoffItemChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->isLandCommandChanged(); break;
        case 19: _t->specifiesCoordinateChanged(); break;
        case 20: _t->isStandaloneCoordinateChanged(); break;
        case 21: _t->specifiesAltitudeOnlyChanged(); break;
        case 22: _t->specifiedFlightSpeedChanged(); break;
        case 23: _t->specifiedGimbalYawChanged(); break;
        case 24: _t->specifiedGimbalPitchChanged(); break;
        case 25: _t->specifiedVehicleYawChanged(); break;
        case 26: _t->lastSequenceNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->missionGimbalYawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->missionVehicleYawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->terrainAltitudeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: _t->additionalTimeDelayChanged(); break;
        case 31: _t->boundingCubeChanged(); break;
        case 32: _t->readyForSaveStateChanged(); break;
        case 33: _t->wizardModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->parentItemChanged((*reinterpret_cast< VisualMissionItem*(*)>(_a[1]))); break;
        case 35: _t->amslEntryAltChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: _t->amslExitAltChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 37: _t->previousVTOLModeChanged(); break;
        case 38: _t->currentVTOLModeChanged(); break;
        case 39: _t->exitCoordinateSameAsEntryChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->_amslEntryAltChanged(); break;
        case 41: _t->_amslExitAltChanged(); break;
        case 42: _t->_updateTerrainAltitude(); break;
        case 43: _t->_reallyUpdateTerrainAltitude(); break;
        case 44: _t->_terrainDataReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VisualMissionItem* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::altDifferenceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::altPercentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::terrainPercentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::terrainCollisionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::azimuthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::commandDescriptionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::commandNameChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::abbreviationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::coordinateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::exitCoordinateChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::dirtyChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::distanceChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::distanceFromStartChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::isCurrentItemChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::hasCurrentChildItemChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::sequenceNumberChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::isSimpleItemChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::isTakeoffItemChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::isLandCommandChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiesCoordinateChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::isStandaloneCoordinateChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiesAltitudeOnlyChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiedFlightSpeedChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiedGimbalYawChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiedGimbalPitchChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiedVehicleYawChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::lastSequenceNumberChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::missionGimbalYawChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::missionVehicleYawChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::terrainAltitudeChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::additionalTimeDelayChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::boundingCubeChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::readyForSaveStateChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::wizardModeChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(VisualMissionItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::parentItemChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::amslEntryAltChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::amslExitAltChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::previousVTOLModeChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::currentVTOLModeChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::exitCoordinateSameAsEntryChanged)) {
                *result = 39;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 37:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCGeoBoundingCube* >(); break;
        case 4:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 36:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        case 35:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VisualMissionItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->homePosition(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->amslEntryAlt(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->terrainAltitude(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->exitCoordinate(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->amslExitAlt(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->exitCoordinateSameAsEntry(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->commandDescription(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->commandName(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->abbreviation(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isCurrentItem(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasCurrentChildItem(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->sequenceNumber(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->lastSequenceNumber(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->specifiesCoordinate(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isStandaloneCoordinate(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->specifiesAltitudeOnly(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->isSimpleItem(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->isTakeoffItem(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->isLandCommand(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->isSurveyItem(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->_editorQml; break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->mapVisualQML(); break;
        case 24: *reinterpret_cast< double*>(_v) = _t->specifiedFlightSpeed(); break;
        case 25: *reinterpret_cast< double*>(_v) = _t->specifiedGimbalYaw(); break;
        case 26: *reinterpret_cast< double*>(_v) = _t->specifiedGimbalPitch(); break;
        case 27: *reinterpret_cast< double*>(_v) = _t->specifiedVehicleYaw(); break;
        case 28: *reinterpret_cast< double*>(_v) = _t->missionGimbalYaw(); break;
        case 29: *reinterpret_cast< double*>(_v) = _t->missionVehicleYaw(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->flyView(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->wizardMode(); break;
        case 32: *reinterpret_cast< int*>(_v) = _t->_previousVTOLMode; break;
        case 33: *reinterpret_cast< PlanMasterController**>(_v) = _t->masterController(); break;
        case 34: *reinterpret_cast< ReadyForSaveState*>(_v) = _t->readyForSaveState(); break;
        case 35: *reinterpret_cast< VisualMissionItem**>(_v) = _t->parentItem(); break;
        case 36: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->childItems(); break;
        case 37: *reinterpret_cast< QGCGeoBoundingCube**>(_v) = _t->boundingCube(); break;
        case 38: *reinterpret_cast< double*>(_v) = _t->altDifference(); break;
        case 39: *reinterpret_cast< double*>(_v) = _t->altPercent(); break;
        case 40: *reinterpret_cast< double*>(_v) = _t->terrainPercent(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->terrainCollision(); break;
        case 42: *reinterpret_cast< double*>(_v) = _t->azimuth(); break;
        case 43: *reinterpret_cast< double*>(_v) = _t->distance(); break;
        case 44: *reinterpret_cast< double*>(_v) = _t->distanceFromStart(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 10: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setIsCurrentItem(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setHasCurrentChildItem(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setSequenceNumber(*reinterpret_cast< int*>(_v)); break;
        case 31: _t->setWizardMode(*reinterpret_cast< bool*>(_v)); break;
        case 32:
            if (_t->_previousVTOLMode != *reinterpret_cast< int*>(_v)) {
                _t->_previousVTOLMode = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->previousVTOLModeChanged();
            }
            break;
        case 35: _t->setParentItem(*reinterpret_cast< VisualMissionItem**>(_v)); break;
        case 38: _t->setAltDifference(*reinterpret_cast< double*>(_v)); break;
        case 39: _t->setAltPercent(*reinterpret_cast< double*>(_v)); break;
        case 40: _t->setTerrainPercent(*reinterpret_cast< double*>(_v)); break;
        case 41: _t->setTerrainCollision(*reinterpret_cast< bool*>(_v)); break;
        case 42: _t->setAzimuth(*reinterpret_cast< double*>(_v)); break;
        case 43: _t->setDistance(*reinterpret_cast< double*>(_v)); break;
        case 44: _t->setDistanceFromStart(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VisualMissionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VisualMissionItem.data,
    qt_meta_data_VisualMissionItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VisualMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisualMissionItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VisualMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 45;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 45;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 45;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 45;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 45;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VisualMissionItem::altDifferenceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VisualMissionItem::altPercentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VisualMissionItem::terrainPercentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VisualMissionItem::terrainCollisionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VisualMissionItem::azimuthChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VisualMissionItem::commandDescriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VisualMissionItem::commandNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void VisualMissionItem::abbreviationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void VisualMissionItem::coordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VisualMissionItem::exitCoordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void VisualMissionItem::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void VisualMissionItem::distanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void VisualMissionItem::distanceFromStartChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void VisualMissionItem::isCurrentItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void VisualMissionItem::hasCurrentChildItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void VisualMissionItem::sequenceNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void VisualMissionItem::isSimpleItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void VisualMissionItem::isTakeoffItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void VisualMissionItem::isLandCommandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void VisualMissionItem::specifiesCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void VisualMissionItem::isStandaloneCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void VisualMissionItem::specifiesAltitudeOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void VisualMissionItem::specifiedFlightSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void VisualMissionItem::specifiedGimbalYawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void VisualMissionItem::specifiedGimbalPitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void VisualMissionItem::specifiedVehicleYawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void VisualMissionItem::lastSequenceNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void VisualMissionItem::missionGimbalYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void VisualMissionItem::missionVehicleYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void VisualMissionItem::terrainAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void VisualMissionItem::additionalTimeDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void VisualMissionItem::boundingCubeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void VisualMissionItem::readyForSaveStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void VisualMissionItem::wizardModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void VisualMissionItem::parentItemChanged(VisualMissionItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void VisualMissionItem::amslEntryAltChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void VisualMissionItem::amslExitAltChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void VisualMissionItem::previousVTOLModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void VisualMissionItem::currentVTOLModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void VisualMissionItem::exitCoordinateSameAsEntryChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
