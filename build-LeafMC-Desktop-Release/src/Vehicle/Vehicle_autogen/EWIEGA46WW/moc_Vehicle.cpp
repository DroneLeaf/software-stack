/****************************************************************************
** Meta object code from reading C++ file 'Vehicle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/Vehicle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vehicle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Vehicle_t {
    QByteArrayData data[526];
    char stringdata0[8698];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vehicle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vehicle_t qt_meta_stringdata_Vehicle = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Vehicle"
QT_MOC_LITERAL(1, 8, 17), // "coordinateChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 42, 10), // "coordinate"
QT_MOC_LITERAL(5, 53, 22), // "joystickEnabledChanged"
QT_MOC_LITERAL(6, 76, 7), // "enabled"
QT_MOC_LITERAL(7, 84, 22), // "mavlinkMessageReceived"
QT_MOC_LITERAL(8, 107, 17), // "mavlink_message_t"
QT_MOC_LITERAL(9, 125, 7), // "message"
QT_MOC_LITERAL(10, 133, 19), // "homePositionChanged"
QT_MOC_LITERAL(11, 153, 12), // "homePosition"
QT_MOC_LITERAL(12, 166, 20), // "armedPositionChanged"
QT_MOC_LITERAL(13, 187, 12), // "armedChanged"
QT_MOC_LITERAL(14, 200, 5), // "armed"
QT_MOC_LITERAL(15, 206, 17), // "flightModeChanged"
QT_MOC_LITERAL(16, 224, 10), // "flightMode"
QT_MOC_LITERAL(17, 235, 13), // "flyingChanged"
QT_MOC_LITERAL(18, 249, 6), // "flying"
QT_MOC_LITERAL(19, 256, 14), // "landingChanged"
QT_MOC_LITERAL(20, 271, 7), // "landing"
QT_MOC_LITERAL(21, 279, 17), // "guidedModeChanged"
QT_MOC_LITERAL(22, 297, 10), // "guidedMode"
QT_MOC_LITERAL(23, 308, 22), // "vtolInFwdFlightChanged"
QT_MOC_LITERAL(24, 331, 15), // "vtolInFwdFlight"
QT_MOC_LITERAL(25, 347, 18), // "prearmErrorChanged"
QT_MOC_LITERAL(26, 366, 11), // "prearmError"
QT_MOC_LITERAL(27, 378, 19), // "soloFirmwareChanged"
QT_MOC_LITERAL(28, 398, 12), // "soloFirmware"
QT_MOC_LITERAL(29, 411, 25), // "defaultCruiseSpeedChanged"
QT_MOC_LITERAL(30, 437, 11), // "cruiseSpeed"
QT_MOC_LITERAL(31, 449, 24), // "defaultHoverSpeedChanged"
QT_MOC_LITERAL(32, 474, 10), // "hoverSpeed"
QT_MOC_LITERAL(33, 485, 19), // "firmwareTypeChanged"
QT_MOC_LITERAL(34, 505, 18), // "vehicleTypeChanged"
QT_MOC_LITERAL(35, 524, 20), // "cameraManagerChanged"
QT_MOC_LITERAL(36, 545, 17), // "hobbsMeterChanged"
QT_MOC_LITERAL(37, 563, 24), // "capabilitiesKnownChanged"
QT_MOC_LITERAL(38, 588, 17), // "capabilitiesKnown"
QT_MOC_LITERAL(39, 606, 33), // "initialPlanRequestCompleteCha..."
QT_MOC_LITERAL(40, 640, 26), // "initialPlanRequestComplete"
QT_MOC_LITERAL(41, 667, 21), // "capabilityBitsChanged"
QT_MOC_LITERAL(42, 689, 8), // "uint64_t"
QT_MOC_LITERAL(43, 698, 14), // "capabilityBits"
QT_MOC_LITERAL(44, 713, 21), // "toolIndicatorsChanged"
QT_MOC_LITERAL(45, 735, 21), // "modeIndicatorsChanged"
QT_MOC_LITERAL(46, 757, 19), // "textMessageReceived"
QT_MOC_LITERAL(47, 777, 5), // "uasid"
QT_MOC_LITERAL(48, 783, 11), // "componentid"
QT_MOC_LITERAL(49, 795, 8), // "severity"
QT_MOC_LITERAL(50, 804, 4), // "text"
QT_MOC_LITERAL(51, 809, 11), // "description"
QT_MOC_LITERAL(52, 821, 24), // "calibrationEventReceived"
QT_MOC_LITERAL(53, 846, 43), // "QSharedPointer<events::parser..."
QT_MOC_LITERAL(54, 890, 5), // "event"
QT_MOC_LITERAL(55, 896, 21), // "checkListStateChanged"
QT_MOC_LITERAL(56, 918, 23), // "messagesReceivedChanged"
QT_MOC_LITERAL(57, 942, 19), // "messagesSentChanged"
QT_MOC_LITERAL(58, 962, 19), // "messagesLostChanged"
QT_MOC_LITERAL(59, 982, 18), // "messageTypeChanged"
QT_MOC_LITERAL(60, 1001, 22), // "newMessageCountChanged"
QT_MOC_LITERAL(61, 1024, 19), // "messageCountChanged"
QT_MOC_LITERAL(62, 1044, 24), // "formattedMessagesChanged"
QT_MOC_LITERAL(63, 1069, 19), // "newFormattedMessage"
QT_MOC_LITERAL(64, 1089, 16), // "formattedMessage"
QT_MOC_LITERAL(65, 1106, 16), // "longitudeChanged"
QT_MOC_LITERAL(66, 1123, 20), // "currentConfigChanged"
QT_MOC_LITERAL(67, 1144, 21), // "flowImageIndexChanged"
QT_MOC_LITERAL(68, 1166, 13), // "rcRSSIChanged"
QT_MOC_LITERAL(69, 1180, 6), // "rcRSSI"
QT_MOC_LITERAL(70, 1187, 21), // "telemetryRRSSIChanged"
QT_MOC_LITERAL(71, 1209, 5), // "value"
QT_MOC_LITERAL(72, 1215, 21), // "telemetryLRSSIChanged"
QT_MOC_LITERAL(73, 1237, 24), // "telemetryRXErrorsChanged"
QT_MOC_LITERAL(74, 1262, 21), // "telemetryFixedChanged"
QT_MOC_LITERAL(75, 1284, 24), // "telemetryTXBufferChanged"
QT_MOC_LITERAL(76, 1309, 22), // "telemetryLNoiseChanged"
QT_MOC_LITERAL(77, 1332, 22), // "telemetryRNoiseChanged"
QT_MOC_LITERAL(78, 1355, 17), // "autoDisarmChanged"
QT_MOC_LITERAL(79, 1373, 18), // "flightModesChanged"
QT_MOC_LITERAL(80, 1392, 16), // "leafModesChanged"
QT_MOC_LITERAL(81, 1409, 25), // "sensorsPresentBitsChanged"
QT_MOC_LITERAL(82, 1435, 18), // "sensorsPresentBits"
QT_MOC_LITERAL(83, 1454, 25), // "sensorsEnabledBitsChanged"
QT_MOC_LITERAL(84, 1480, 18), // "sensorsEnabledBits"
QT_MOC_LITERAL(85, 1499, 24), // "sensorsHealthBitsChanged"
QT_MOC_LITERAL(86, 1524, 17), // "sensorsHealthBits"
QT_MOC_LITERAL(87, 1542, 27), // "sensorsUnhealthyBitsChanged"
QT_MOC_LITERAL(88, 1570, 20), // "sensorsUnhealthyBits"
QT_MOC_LITERAL(89, 1591, 18), // "orbitActiveChanged"
QT_MOC_LITERAL(90, 1610, 11), // "orbitActive"
QT_MOC_LITERAL(91, 1622, 26), // "readyToFlyAvailableChanged"
QT_MOC_LITERAL(92, 1649, 19), // "readyToFlyAvailable"
QT_MOC_LITERAL(93, 1669, 17), // "readyToFlyChanged"
QT_MOC_LITERAL(94, 1687, 9), // "readyToFy"
QT_MOC_LITERAL(95, 1697, 24), // "allSensorsHealthyChanged"
QT_MOC_LITERAL(96, 1722, 17), // "allSensorsHealthy"
QT_MOC_LITERAL(97, 1740, 21), // "requiresGpsFixChanged"
QT_MOC_LITERAL(98, 1762, 21), // "haveMRSpeedLimChanged"
QT_MOC_LITERAL(99, 1784, 21), // "haveFWSpeedLimChanged"
QT_MOC_LITERAL(100, 1806, 17), // "leafStatusChanged"
QT_MOC_LITERAL(101, 1824, 10), // "leafStatus"
QT_MOC_LITERAL(102, 1835, 15), // "leafModeChanged"
QT_MOC_LITERAL(103, 1851, 8), // "leafMode"
QT_MOC_LITERAL(104, 1860, 21), // "leafClientNameChanged"
QT_MOC_LITERAL(105, 1882, 14), // "leafClientName"
QT_MOC_LITERAL(106, 1897, 19), // "leafMRFTRollChanged"
QT_MOC_LITERAL(107, 1917, 4), // "roll"
QT_MOC_LITERAL(108, 1922, 20), // "leafMRFTPitchChanged"
QT_MOC_LITERAL(109, 1943, 5), // "pitch"
QT_MOC_LITERAL(110, 1949, 18), // "leafMRFTAltChanged"
QT_MOC_LITERAL(111, 1968, 3), // "alt"
QT_MOC_LITERAL(112, 1972, 16), // "leafMRFTXChanged"
QT_MOC_LITERAL(113, 1989, 1), // "x"
QT_MOC_LITERAL(114, 1991, 16), // "leafMRFTYChanged"
QT_MOC_LITERAL(115, 2008, 1), // "y"
QT_MOC_LITERAL(116, 2010, 18), // "leafProfileChanged"
QT_MOC_LITERAL(117, 2029, 11), // "leafProfile"
QT_MOC_LITERAL(118, 2041, 22), // "firmwareVersionChanged"
QT_MOC_LITERAL(119, 2064, 28), // "firmwareCustomVersionChanged"
QT_MOC_LITERAL(120, 2093, 14), // "gitHashChanged"
QT_MOC_LITERAL(121, 2108, 4), // "hash"
QT_MOC_LITERAL(122, 2113, 17), // "vehicleUIDChanged"
QT_MOC_LITERAL(123, 2131, 19), // "loadProgressChanged"
QT_MOC_LITERAL(124, 2151, 17), // "rcChannelsChanged"
QT_MOC_LITERAL(125, 2169, 12), // "channelCount"
QT_MOC_LITERAL(126, 2182, 19), // "int[cMaxRcChannels]"
QT_MOC_LITERAL(127, 2202, 9), // "pwmValues"
QT_MOC_LITERAL(128, 2212, 24), // "remoteControlRSSIChanged"
QT_MOC_LITERAL(129, 2237, 7), // "uint8_t"
QT_MOC_LITERAL(130, 2245, 4), // "rssi"
QT_MOC_LITERAL(131, 2250, 13), // "mavlinkRawImu"
QT_MOC_LITERAL(132, 2264, 17), // "mavlinkScaledImu1"
QT_MOC_LITERAL(133, 2282, 17), // "mavlinkScaledImu2"
QT_MOC_LITERAL(134, 2300, 17), // "mavlinkScaledImu3"
QT_MOC_LITERAL(135, 2318, 14), // "mavlinkLogData"
QT_MOC_LITERAL(136, 2333, 8), // "Vehicle*"
QT_MOC_LITERAL(137, 2342, 7), // "vehicle"
QT_MOC_LITERAL(138, 2350, 13), // "target_system"
QT_MOC_LITERAL(139, 2364, 16), // "target_component"
QT_MOC_LITERAL(140, 2381, 8), // "uint16_t"
QT_MOC_LITERAL(141, 2390, 8), // "sequence"
QT_MOC_LITERAL(142, 2399, 13), // "first_message"
QT_MOC_LITERAL(143, 2413, 4), // "data"
QT_MOC_LITERAL(144, 2418, 5), // "acked"
QT_MOC_LITERAL(145, 2424, 16), // "mavCommandResult"
QT_MOC_LITERAL(146, 2441, 9), // "vehicleId"
QT_MOC_LITERAL(147, 2451, 15), // "targetComponent"
QT_MOC_LITERAL(148, 2467, 7), // "command"
QT_MOC_LITERAL(149, 2475, 9), // "ackResult"
QT_MOC_LITERAL(150, 2485, 11), // "failureCode"
QT_MOC_LITERAL(151, 2497, 20), // "mavlinkSerialControl"
QT_MOC_LITERAL(152, 2518, 6), // "device"
QT_MOC_LITERAL(153, 2525, 5), // "flags"
QT_MOC_LITERAL(154, 2531, 7), // "timeout"
QT_MOC_LITERAL(155, 2539, 8), // "uint32_t"
QT_MOC_LITERAL(156, 2548, 8), // "baudrate"
QT_MOC_LITERAL(157, 2557, 22), // "requestProtocolVersion"
QT_MOC_LITERAL(158, 2580, 7), // "version"
QT_MOC_LITERAL(159, 2588, 20), // "mavlinkStatusChanged"
QT_MOC_LITERAL(160, 2609, 19), // "isROIEnabledChanged"
QT_MOC_LITERAL(161, 2629, 15), // "roiCoordChanged"
QT_MOC_LITERAL(162, 2645, 11), // "centerCoord"
QT_MOC_LITERAL(163, 2657, 22), // "initialConnectComplete"
QT_MOC_LITERAL(164, 2680, 25), // "sensorsParametersResetAck"
QT_MOC_LITERAL(165, 2706, 7), // "success"
QT_MOC_LITERAL(166, 2714, 18), // "setVtolInFwdFlight"
QT_MOC_LITERAL(167, 2733, 34), // "_offlineFirmwareTypeSettingCh..."
QT_MOC_LITERAL(168, 2768, 15), // "varFirmwareType"
QT_MOC_LITERAL(169, 2784, 33), // "_offlineVehicleTypeSettingCha..."
QT_MOC_LITERAL(170, 2818, 14), // "varVehicleType"
QT_MOC_LITERAL(171, 2833, 23), // "_mavlinkMessageReceived"
QT_MOC_LITERAL(172, 2857, 14), // "LinkInterface*"
QT_MOC_LITERAL(173, 2872, 4), // "link"
QT_MOC_LITERAL(174, 2877, 24), // "_sendMessageMultipleNext"
QT_MOC_LITERAL(175, 2902, 16), // "_parametersReady"
QT_MOC_LITERAL(176, 2919, 15), // "parametersReady"
QT_MOC_LITERAL(177, 2935, 25), // "_remoteControlRSSIChanged"
QT_MOC_LITERAL(178, 2961, 24), // "_handleFlightModeChanged"
QT_MOC_LITERAL(179, 2986, 21), // "_announceArmedChanged"
QT_MOC_LITERAL(180, 3008, 24), // "_announceLeafModeChanged"
QT_MOC_LITERAL(181, 3033, 4), // "mode"
QT_MOC_LITERAL(182, 3038, 33), // "_offlineCruiseSpeedSettingCha..."
QT_MOC_LITERAL(183, 3072, 32), // "_offlineHoverSpeedSettingChanged"
QT_MOC_LITERAL(184, 3105, 18), // "_handleTextMessage"
QT_MOC_LITERAL(185, 3124, 8), // "newCount"
QT_MOC_LITERAL(186, 3133, 26), // "_handletextMessageReceived"
QT_MOC_LITERAL(187, 3160, 11), // "UASMessage*"
QT_MOC_LITERAL(188, 3172, 24), // "_imageProtocolImageReady"
QT_MOC_LITERAL(189, 3197, 19), // "_prearmErrorTimeout"
QT_MOC_LITERAL(190, 3217, 25), // "_firstMissionLoadComplete"
QT_MOC_LITERAL(191, 3243, 26), // "_firstGeoFenceLoadComplete"
QT_MOC_LITERAL(192, 3270, 28), // "_firstRallyPointLoadComplete"
QT_MOC_LITERAL(193, 3299, 35), // "_sendMavCommandResponseTimeou..."
QT_MOC_LITERAL(194, 3335, 25), // "_clearCameraTriggerPoints"
QT_MOC_LITERAL(195, 3361, 28), // "_updateDistanceHeadingToHome"
QT_MOC_LITERAL(196, 3390, 23), // "_updateMissionItemIndex"
QT_MOC_LITERAL(197, 3414, 22), // "_updateHeadingToNextWP"
QT_MOC_LITERAL(198, 3437, 20), // "_updateDistanceToGCS"
QT_MOC_LITERAL(199, 3458, 16), // "_updateHomepoint"
QT_MOC_LITERAL(200, 3475, 17), // "_updateHobbsMeter"
QT_MOC_LITERAL(201, 3493, 19), // "_vehicleParamLoaded"
QT_MOC_LITERAL(202, 3513, 5), // "ready"
QT_MOC_LITERAL(203, 3519, 21), // "_sendQGCTimeToVehicle"
QT_MOC_LITERAL(204, 3541, 21), // "_mavlinkMessageStatus"
QT_MOC_LITERAL(205, 3563, 5), // "uasId"
QT_MOC_LITERAL(206, 3569, 9), // "totalSent"
QT_MOC_LITERAL(207, 3579, 13), // "totalReceived"
QT_MOC_LITERAL(208, 3593, 9), // "totalLoss"
QT_MOC_LITERAL(209, 3603, 11), // "lossPercent"
QT_MOC_LITERAL(210, 3615, 22), // "_orbitTelemetryTimeout"
QT_MOC_LITERAL(211, 3638, 17), // "_updateFlightTime"
QT_MOC_LITERAL(212, 3656, 18), // "_gotProgressUpdate"
QT_MOC_LITERAL(213, 3675, 13), // "progressValue"
QT_MOC_LITERAL(214, 3689, 25), // "_doSetHomeTerrainReceived"
QT_MOC_LITERAL(215, 3715, 13), // "QList<double>"
QT_MOC_LITERAL(216, 3729, 7), // "heights"
QT_MOC_LITERAL(217, 3737, 22), // "_updateAltAboveTerrain"
QT_MOC_LITERAL(218, 3760, 29), // "_altitudeAboveTerrainReceived"
QT_MOC_LITERAL(219, 3790, 6), // "sucess"
QT_MOC_LITERAL(220, 3797, 13), // "resetCounters"
QT_MOC_LITERAL(221, 3811, 16), // "resetAllMessages"
QT_MOC_LITERAL(222, 3828, 23), // "resetErrorLevelMessages"
QT_MOC_LITERAL(223, 3852, 26), // "virtualTabletJoystickValue"
QT_MOC_LITERAL(224, 3879, 3), // "yaw"
QT_MOC_LITERAL(225, 3883, 6), // "thrust"
QT_MOC_LITERAL(226, 3890, 13), // "guidedModeRTL"
QT_MOC_LITERAL(227, 3904, 8), // "smartRTL"
QT_MOC_LITERAL(228, 3913, 14), // "guidedModeLand"
QT_MOC_LITERAL(229, 3928, 17), // "guidedModeTakeoff"
QT_MOC_LITERAL(230, 3946, 16), // "altitudeRelative"
QT_MOC_LITERAL(231, 3963, 27), // "guidedModeExecuteCircleTraj"
QT_MOC_LITERAL(232, 3991, 25), // "guidedModeExecuteFig8Traj"
QT_MOC_LITERAL(233, 4017, 9), // "leafArmFC"
QT_MOC_LITERAL(234, 4027, 12), // "leafDisarmFC"
QT_MOC_LITERAL(235, 4040, 19), // "leafMRFTPitchToggle"
QT_MOC_LITERAL(236, 4060, 5), // "state"
QT_MOC_LITERAL(237, 4066, 18), // "leafMRFTRollToggle"
QT_MOC_LITERAL(238, 4085, 17), // "leafMRFTAltToggle"
QT_MOC_LITERAL(239, 4103, 15), // "leafMRFTXToggle"
QT_MOC_LITERAL(240, 4119, 15), // "leafMRFTYToggle"
QT_MOC_LITERAL(241, 4135, 15), // "leafInspectSlap"
QT_MOC_LITERAL(242, 4151, 4), // "slap"
QT_MOC_LITERAL(243, 4156, 17), // "leafPausePipeline"
QT_MOC_LITERAL(244, 4174, 18), // "leafResumePipeline"
QT_MOC_LITERAL(245, 4193, 22), // "minimumTakeoffAltitude"
QT_MOC_LITERAL(246, 4216, 32), // "maximumHorizontalSpeedMultirotor"
QT_MOC_LITERAL(247, 4249, 25), // "maximumEquivalentAirspeed"
QT_MOC_LITERAL(248, 4275, 25), // "minimumEquivalentAirspeed"
QT_MOC_LITERAL(249, 4301, 22), // "guidedModeGotoLocation"
QT_MOC_LITERAL(250, 4324, 9), // "gotoCoord"
QT_MOC_LITERAL(251, 4334, 24), // "guidedModeChangeAltitude"
QT_MOC_LITERAL(252, 4359, 14), // "altitudeChange"
QT_MOC_LITERAL(253, 4374, 12), // "pauseVehicle"
QT_MOC_LITERAL(254, 4387, 39), // "guidedModeChangeGroundSpeedMe..."
QT_MOC_LITERAL(255, 4427, 11), // "groundspeed"
QT_MOC_LITERAL(256, 4439, 46), // "guidedModeChangeEquivalentAir..."
QT_MOC_LITERAL(257, 4486, 8), // "airspeed"
QT_MOC_LITERAL(258, 4495, 15), // "guidedModeOrbit"
QT_MOC_LITERAL(259, 4511, 6), // "radius"
QT_MOC_LITERAL(260, 4518, 12), // "amslAltitude"
QT_MOC_LITERAL(261, 4531, 13), // "guidedModeROI"
QT_MOC_LITERAL(262, 4545, 17), // "stopGuidedModeROI"
QT_MOC_LITERAL(263, 4563, 13), // "emergencyStop"
QT_MOC_LITERAL(264, 4577, 12), // "abortLanding"
QT_MOC_LITERAL(265, 4590, 16), // "climbOutAltitude"
QT_MOC_LITERAL(266, 4607, 17), // "landingGearDeploy"
QT_MOC_LITERAL(267, 4625, 18), // "landingGearRetract"
QT_MOC_LITERAL(268, 4644, 12), // "startMission"
QT_MOC_LITERAL(269, 4657, 25), // "setCurrentMissionSequence"
QT_MOC_LITERAL(270, 4683, 3), // "seq"
QT_MOC_LITERAL(271, 4687, 13), // "rebootVehicle"
QT_MOC_LITERAL(272, 4701, 13), // "clearMessages"
QT_MOC_LITERAL(273, 4715, 8), // "sendPlan"
QT_MOC_LITERAL(274, 4724, 8), // "planFile"
QT_MOC_LITERAL(275, 4733, 14), // "versionCompare"
QT_MOC_LITERAL(276, 4748, 8), // "QString&"
QT_MOC_LITERAL(277, 4757, 7), // "compare"
QT_MOC_LITERAL(278, 4765, 5), // "major"
QT_MOC_LITERAL(279, 4771, 5), // "minor"
QT_MOC_LITERAL(280, 4777, 5), // "patch"
QT_MOC_LITERAL(281, 4783, 9), // "motorTest"
QT_MOC_LITERAL(282, 4793, 5), // "motor"
QT_MOC_LITERAL(283, 4799, 7), // "percent"
QT_MOC_LITERAL(284, 4807, 11), // "timeoutSecs"
QT_MOC_LITERAL(285, 4819, 9), // "showError"
QT_MOC_LITERAL(286, 4829, 25), // "setPIDTuningTelemetryMode"
QT_MOC_LITERAL(287, 4855, 22), // "PIDTuningTelemetryMode"
QT_MOC_LITERAL(288, 4878, 8), // "forceArm"
QT_MOC_LITERAL(289, 4887, 14), // "sendParamMapRC"
QT_MOC_LITERAL(290, 4902, 9), // "paramName"
QT_MOC_LITERAL(291, 4912, 5), // "scale"
QT_MOC_LITERAL(292, 4918, 11), // "centerValue"
QT_MOC_LITERAL(293, 4930, 8), // "tuningID"
QT_MOC_LITERAL(294, 4939, 8), // "minValue"
QT_MOC_LITERAL(295, 4948, 8), // "maxValue"
QT_MOC_LITERAL(296, 4957, 18), // "clearAllParamMapRC"
QT_MOC_LITERAL(297, 4976, 12), // "closeVehicle"
QT_MOC_LITERAL(298, 4989, 19), // "triggerSimpleCamera"
QT_MOC_LITERAL(299, 5009, 15), // "flashBootloader"
QT_MOC_LITERAL(300, 5025, 9), // "doSetHome"
QT_MOC_LITERAL(301, 5035, 5), // "coord"
QT_MOC_LITERAL(302, 5041, 20), // "saveJoystickSettings"
QT_MOC_LITERAL(303, 5062, 15), // "vehicleTypeName"
QT_MOC_LITERAL(304, 5078, 17), // "sendGripperAction"
QT_MOC_LITERAL(305, 5096, 15), // "GRIPPER_OPTIONS"
QT_MOC_LITERAL(306, 5112, 13), // "gripperOption"
QT_MOC_LITERAL(307, 5126, 11), // "sendCommand"
QT_MOC_LITERAL(308, 5138, 6), // "compId"
QT_MOC_LITERAL(309, 5145, 6), // "param1"
QT_MOC_LITERAL(310, 5152, 6), // "param2"
QT_MOC_LITERAL(311, 5159, 6), // "param3"
QT_MOC_LITERAL(312, 5166, 6), // "param4"
QT_MOC_LITERAL(313, 5173, 6), // "param5"
QT_MOC_LITERAL(314, 5180, 6), // "param6"
QT_MOC_LITERAL(315, 5187, 6), // "param7"
QT_MOC_LITERAL(316, 5194, 2), // "id"
QT_MOC_LITERAL(317, 5197, 9), // "autopilot"
QT_MOC_LITERAL(318, 5207, 16), // "AutoPilotPlugin*"
QT_MOC_LITERAL(319, 5224, 13), // "armedPosition"
QT_MOC_LITERAL(320, 5238, 10), // "autoDisarm"
QT_MOC_LITERAL(321, 5249, 22), // "flightModeSetAvailable"
QT_MOC_LITERAL(322, 5272, 11), // "flightModes"
QT_MOC_LITERAL(323, 5284, 16), // "trajectoryPoints"
QT_MOC_LITERAL(324, 5301, 17), // "TrajectoryPoints*"
QT_MOC_LITERAL(325, 5319, 19), // "cameraTriggerPoints"
QT_MOC_LITERAL(326, 5339, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(327, 5359, 8), // "latitude"
QT_MOC_LITERAL(328, 5368, 9), // "longitude"
QT_MOC_LITERAL(329, 5378, 15), // "messageTypeNone"
QT_MOC_LITERAL(330, 5394, 17), // "messageTypeNormal"
QT_MOC_LITERAL(331, 5412, 18), // "messageTypeWarning"
QT_MOC_LITERAL(332, 5431, 16), // "messageTypeError"
QT_MOC_LITERAL(333, 5448, 15), // "newMessageCount"
QT_MOC_LITERAL(334, 5464, 12), // "messageCount"
QT_MOC_LITERAL(335, 5477, 17), // "formattedMessages"
QT_MOC_LITERAL(336, 5495, 15), // "joystickEnabled"
QT_MOC_LITERAL(337, 5511, 14), // "flowImageIndex"
QT_MOC_LITERAL(338, 5526, 11), // "px4Firmware"
QT_MOC_LITERAL(339, 5538, 11), // "apmFirmware"
QT_MOC_LITERAL(340, 5550, 15), // "genericFirmware"
QT_MOC_LITERAL(341, 5566, 16), // "messagesReceived"
QT_MOC_LITERAL(342, 5583, 12), // "messagesSent"
QT_MOC_LITERAL(343, 5596, 12), // "messagesLost"
QT_MOC_LITERAL(344, 5609, 7), // "airship"
QT_MOC_LITERAL(345, 5617, 9), // "fixedWing"
QT_MOC_LITERAL(346, 5627, 10), // "multiRotor"
QT_MOC_LITERAL(347, 5638, 4), // "vtol"
QT_MOC_LITERAL(348, 5643, 5), // "rover"
QT_MOC_LITERAL(349, 5649, 3), // "sub"
QT_MOC_LITERAL(350, 5653, 30), // "supportsThrottleModeCenterZero"
QT_MOC_LITERAL(351, 5684, 22), // "supportsNegativeThrust"
QT_MOC_LITERAL(352, 5707, 16), // "supportsJSButton"
QT_MOC_LITERAL(353, 5724, 13), // "supportsRadio"
QT_MOC_LITERAL(354, 5738, 25), // "supportsMotorInterference"
QT_MOC_LITERAL(355, 5764, 10), // "motorCount"
QT_MOC_LITERAL(356, 5775, 13), // "coaxialMotors"
QT_MOC_LITERAL(357, 5789, 13), // "xConfigMotors"
QT_MOC_LITERAL(358, 5803, 23), // "isOfflineEditingVehicle"
QT_MOC_LITERAL(359, 5827, 16), // "brandImageIndoor"
QT_MOC_LITERAL(360, 5844, 17), // "brandImageOutdoor"
QT_MOC_LITERAL(361, 5862, 17), // "missionFlightMode"
QT_MOC_LITERAL(362, 5880, 15), // "pauseFlightMode"
QT_MOC_LITERAL(363, 5896, 13), // "rtlFlightMode"
QT_MOC_LITERAL(364, 5910, 18), // "smartRTLFlightMode"
QT_MOC_LITERAL(365, 5929, 16), // "supportsSmartRTL"
QT_MOC_LITERAL(366, 5946, 14), // "landFlightMode"
QT_MOC_LITERAL(367, 5961, 21), // "takeControlFlightMode"
QT_MOC_LITERAL(368, 5983, 16), // "followFlightMode"
QT_MOC_LITERAL(369, 6000, 18), // "firmwareTypeString"
QT_MOC_LITERAL(370, 6019, 17), // "vehicleTypeString"
QT_MOC_LITERAL(371, 6037, 18), // "vehicleImageOpaque"
QT_MOC_LITERAL(372, 6056, 19), // "vehicleImageOutline"
QT_MOC_LITERAL(373, 6076, 19), // "vehicleImageCompass"
QT_MOC_LITERAL(374, 6096, 14), // "telemetryRRSSI"
QT_MOC_LITERAL(375, 6111, 14), // "telemetryLRSSI"
QT_MOC_LITERAL(376, 6126, 17), // "telemetryRXErrors"
QT_MOC_LITERAL(377, 6144, 14), // "telemetryFixed"
QT_MOC_LITERAL(378, 6159, 17), // "telemetryTXBuffer"
QT_MOC_LITERAL(379, 6177, 15), // "telemetryLNoise"
QT_MOC_LITERAL(380, 6193, 15), // "telemetryRNoise"
QT_MOC_LITERAL(381, 6209, 14), // "toolIndicators"
QT_MOC_LITERAL(382, 6224, 14), // "modeIndicators"
QT_MOC_LITERAL(383, 6239, 16), // "staticCameraList"
QT_MOC_LITERAL(384, 6256, 13), // "cameraManager"
QT_MOC_LITERAL(385, 6270, 17), // "QGCCameraManager*"
QT_MOC_LITERAL(386, 6288, 10), // "hobbsMeter"
QT_MOC_LITERAL(387, 6299, 20), // "supportsTerrainFrame"
QT_MOC_LITERAL(388, 6320, 16), // "mavlinkSentCount"
QT_MOC_LITERAL(389, 6337, 20), // "mavlinkReceivedCount"
QT_MOC_LITERAL(390, 6358, 16), // "mavlinkLossCount"
QT_MOC_LITERAL(391, 6375, 18), // "mavlinkLossPercent"
QT_MOC_LITERAL(392, 6394, 16), // "gimbalController"
QT_MOC_LITERAL(393, 6411, 17), // "GimbalController*"
QT_MOC_LITERAL(394, 6429, 10), // "hasGripper"
QT_MOC_LITERAL(395, 6440, 12), // "isROIEnabled"
QT_MOC_LITERAL(396, 6453, 14), // "checkListState"
QT_MOC_LITERAL(397, 6468, 9), // "CheckList"
QT_MOC_LITERAL(398, 6478, 10), // "readyToFly"
QT_MOC_LITERAL(399, 6489, 19), // "sysStatusSensorInfo"
QT_MOC_LITERAL(400, 6509, 14), // "requiresGpsFix"
QT_MOC_LITERAL(401, 6524, 12), // "loadProgress"
QT_MOC_LITERAL(402, 6537, 14), // "orbitMapCircle"
QT_MOC_LITERAL(403, 6552, 13), // "QGCMapCircle*"
QT_MOC_LITERAL(404, 6566, 19), // "guidedModeSupported"
QT_MOC_LITERAL(405, 6586, 21), // "pauseVehicleSupported"
QT_MOC_LITERAL(406, 6608, 18), // "orbitModeSupported"
QT_MOC_LITERAL(407, 6627, 16), // "roiModeSupported"
QT_MOC_LITERAL(408, 6644, 23), // "takeoffVehicleSupported"
QT_MOC_LITERAL(409, 6668, 14), // "gotoFlightMode"
QT_MOC_LITERAL(410, 6683, 17), // "haveMRSpeedLimits"
QT_MOC_LITERAL(411, 6701, 17), // "haveFWSpeedLimits"
QT_MOC_LITERAL(412, 6719, 9), // "leafModes"
QT_MOC_LITERAL(413, 6729, 12), // "leafMRFTRoll"
QT_MOC_LITERAL(414, 6742, 13), // "leafMRFTPitch"
QT_MOC_LITERAL(415, 6756, 11), // "leafMRFTAlt"
QT_MOC_LITERAL(416, 6768, 9), // "leafMRFTX"
QT_MOC_LITERAL(417, 6778, 9), // "leafMRFTY"
QT_MOC_LITERAL(418, 6788, 16), // "parameterManager"
QT_MOC_LITERAL(419, 6805, 17), // "ParameterManager*"
QT_MOC_LITERAL(420, 6823, 18), // "vehicleLinkManager"
QT_MOC_LITERAL(421, 6842, 19), // "VehicleLinkManager*"
QT_MOC_LITERAL(422, 6862, 15), // "objectAvoidance"
QT_MOC_LITERAL(423, 6878, 23), // "VehicleObjectAvoidance*"
QT_MOC_LITERAL(424, 6902, 8), // "autotune"
QT_MOC_LITERAL(425, 6911, 9), // "Autotune*"
QT_MOC_LITERAL(426, 6921, 15), // "remoteIDManager"
QT_MOC_LITERAL(427, 6937, 16), // "RemoteIDManager*"
QT_MOC_LITERAL(428, 6954, 5), // "Fact*"
QT_MOC_LITERAL(429, 6960, 7), // "heading"
QT_MOC_LITERAL(430, 6968, 8), // "rollRate"
QT_MOC_LITERAL(431, 6977, 9), // "pitchRate"
QT_MOC_LITERAL(432, 6987, 7), // "yawRate"
QT_MOC_LITERAL(433, 6995, 11), // "groundSpeed"
QT_MOC_LITERAL(434, 7007, 8), // "airSpeed"
QT_MOC_LITERAL(435, 7016, 16), // "airSpeedSetpoint"
QT_MOC_LITERAL(436, 7033, 9), // "climbRate"
QT_MOC_LITERAL(437, 7043, 12), // "altitudeAMSL"
QT_MOC_LITERAL(438, 7056, 17), // "altitudeAboveTerr"
QT_MOC_LITERAL(439, 7074, 14), // "altitudeTuning"
QT_MOC_LITERAL(440, 7089, 22), // "altitudeTuningSetpoint"
QT_MOC_LITERAL(441, 7112, 11), // "xTrackError"
QT_MOC_LITERAL(442, 7124, 15), // "rangeFinderDist"
QT_MOC_LITERAL(443, 7140, 14), // "flightDistance"
QT_MOC_LITERAL(444, 7155, 14), // "distanceToHome"
QT_MOC_LITERAL(445, 7170, 10), // "timeToHome"
QT_MOC_LITERAL(446, 7181, 16), // "missionItemIndex"
QT_MOC_LITERAL(447, 7198, 15), // "headingToNextWP"
QT_MOC_LITERAL(448, 7214, 16), // "distanceToNextWP"
QT_MOC_LITERAL(449, 7231, 13), // "headingToHome"
QT_MOC_LITERAL(450, 7245, 13), // "distanceToGCS"
QT_MOC_LITERAL(451, 7259, 5), // "hobbs"
QT_MOC_LITERAL(452, 7265, 11), // "throttlePct"
QT_MOC_LITERAL(453, 7277, 7), // "imuTemp"
QT_MOC_LITERAL(454, 7285, 3), // "gps"
QT_MOC_LITERAL(455, 7289, 10), // "FactGroup*"
QT_MOC_LITERAL(456, 7300, 4), // "gps2"
QT_MOC_LITERAL(457, 7305, 4), // "wind"
QT_MOC_LITERAL(458, 7310, 9), // "vibration"
QT_MOC_LITERAL(459, 7320, 11), // "temperature"
QT_MOC_LITERAL(460, 7332, 5), // "clock"
QT_MOC_LITERAL(461, 7338, 8), // "setpoint"
QT_MOC_LITERAL(462, 7347, 9), // "escStatus"
QT_MOC_LITERAL(463, 7357, 15), // "estimatorStatus"
QT_MOC_LITERAL(464, 7373, 7), // "terrain"
QT_MOC_LITERAL(465, 7381, 15), // "distanceSensors"
QT_MOC_LITERAL(466, 7397, 13), // "localPosition"
QT_MOC_LITERAL(467, 7411, 21), // "localPositionSetpoint"
QT_MOC_LITERAL(468, 7433, 10), // "hygrometer"
QT_MOC_LITERAL(469, 7444, 9), // "generator"
QT_MOC_LITERAL(470, 7454, 3), // "efi"
QT_MOC_LITERAL(471, 7458, 9), // "batteries"
QT_MOC_LITERAL(472, 7468, 9), // "actuators"
QT_MOC_LITERAL(473, 7478, 10), // "Actuators*"
QT_MOC_LITERAL(474, 7489, 26), // "healthAndArmingCheckReport"
QT_MOC_LITERAL(475, 7516, 27), // "HealthAndArmingCheckReport*"
QT_MOC_LITERAL(476, 7544, 20), // "firmwareMajorVersion"
QT_MOC_LITERAL(477, 7565, 20), // "firmwareMinorVersion"
QT_MOC_LITERAL(478, 7586, 20), // "firmwarePatchVersion"
QT_MOC_LITERAL(479, 7607, 19), // "firmwareVersionType"
QT_MOC_LITERAL(480, 7627, 25), // "firmwareVersionTypeString"
QT_MOC_LITERAL(481, 7653, 26), // "firmwareCustomMajorVersion"
QT_MOC_LITERAL(482, 7680, 26), // "firmwareCustomMinorVersion"
QT_MOC_LITERAL(483, 7707, 26), // "firmwareCustomPatchVersion"
QT_MOC_LITERAL(484, 7734, 7), // "gitHash"
QT_MOC_LITERAL(485, 7742, 10), // "vehicleUID"
QT_MOC_LITERAL(486, 7753, 13), // "vehicleUIDStr"
QT_MOC_LITERAL(487, 7767, 16), // "MavlinkSysStatus"
QT_MOC_LITERAL(488, 7784, 21), // "SysStatusSensor3dGyro"
QT_MOC_LITERAL(489, 7806, 22), // "SysStatusSensor3dAccel"
QT_MOC_LITERAL(490, 7829, 20), // "SysStatusSensor3dMag"
QT_MOC_LITERAL(491, 7850, 31), // "SysStatusSensorAbsolutePressure"
QT_MOC_LITERAL(492, 7882, 35), // "SysStatusSensorDifferentialPr..."
QT_MOC_LITERAL(493, 7918, 18), // "SysStatusSensorGPS"
QT_MOC_LITERAL(494, 7937, 26), // "SysStatusSensorOpticalFlow"
QT_MOC_LITERAL(495, 7964, 29), // "SysStatusSensorVisionPosition"
QT_MOC_LITERAL(496, 7994, 28), // "SysStatusSensorLaserPosition"
QT_MOC_LITERAL(497, 8023, 34), // "SysStatusSensorExternalGround..."
QT_MOC_LITERAL(498, 8058, 33), // "SysStatusSensorAngularRateCon..."
QT_MOC_LITERAL(499, 8092, 36), // "SysStatusSensorAttitudeStabil..."
QT_MOC_LITERAL(500, 8129, 26), // "SysStatusSensorYawPosition"
QT_MOC_LITERAL(501, 8156, 31), // "SysStatusSensorZAltitudeControl"
QT_MOC_LITERAL(502, 8188, 32), // "SysStatusSensorXYPositionControl"
QT_MOC_LITERAL(503, 8221, 27), // "SysStatusSensorMotorOutputs"
QT_MOC_LITERAL(504, 8249, 25), // "SysStatusSensorRCReceiver"
QT_MOC_LITERAL(505, 8275, 22), // "SysStatusSensor3dGyro2"
QT_MOC_LITERAL(506, 8298, 23), // "SysStatusSensor3dAccel2"
QT_MOC_LITERAL(507, 8322, 21), // "SysStatusSensor3dMag2"
QT_MOC_LITERAL(508, 8344, 23), // "SysStatusSensorGeoFence"
QT_MOC_LITERAL(509, 8368, 19), // "SysStatusSensorAHRS"
QT_MOC_LITERAL(510, 8388, 22), // "SysStatusSensorTerrain"
QT_MOC_LITERAL(511, 8411, 27), // "SysStatusSensorReverseMotor"
QT_MOC_LITERAL(512, 8439, 22), // "SysStatusSensorLogging"
QT_MOC_LITERAL(513, 8462, 22), // "SysStatusSensorBattery"
QT_MOC_LITERAL(514, 8485, 16), // "QLEAF_PROP_VALUE"
QT_MOC_LITERAL(515, 8502, 20), // "LEAF_UNDEFINED_VALUE"
QT_MOC_LITERAL(516, 8523, 17), // "CheckListNotSetup"
QT_MOC_LITERAL(517, 8541, 15), // "CheckListPassed"
QT_MOC_LITERAL(518, 8557, 15), // "CheckListFailed"
QT_MOC_LITERAL(519, 8573, 12), // "ModeDisabled"
QT_MOC_LITERAL(520, 8586, 19), // "ModeRateAndAttitude"
QT_MOC_LITERAL(521, 8606, 23), // "ModeVelocityAndPosition"
QT_MOC_LITERAL(522, 8630, 23), // "ModeAltitudeAndAirspeed"
QT_MOC_LITERAL(523, 8654, 15), // "Gripper_release"
QT_MOC_LITERAL(524, 8670, 12), // "Gripper_grab"
QT_MOC_LITERAL(525, 8683, 14) // "Invalid_option"

    },
    "Vehicle\0coordinateChanged\0\0QGeoCoordinate\0"
    "coordinate\0joystickEnabledChanged\0"
    "enabled\0mavlinkMessageReceived\0"
    "mavlink_message_t\0message\0homePositionChanged\0"
    "homePosition\0armedPositionChanged\0"
    "armedChanged\0armed\0flightModeChanged\0"
    "flightMode\0flyingChanged\0flying\0"
    "landingChanged\0landing\0guidedModeChanged\0"
    "guidedMode\0vtolInFwdFlightChanged\0"
    "vtolInFwdFlight\0prearmErrorChanged\0"
    "prearmError\0soloFirmwareChanged\0"
    "soloFirmware\0defaultCruiseSpeedChanged\0"
    "cruiseSpeed\0defaultHoverSpeedChanged\0"
    "hoverSpeed\0firmwareTypeChanged\0"
    "vehicleTypeChanged\0cameraManagerChanged\0"
    "hobbsMeterChanged\0capabilitiesKnownChanged\0"
    "capabilitiesKnown\0initialPlanRequestCompleteChanged\0"
    "initialPlanRequestComplete\0"
    "capabilityBitsChanged\0uint64_t\0"
    "capabilityBits\0toolIndicatorsChanged\0"
    "modeIndicatorsChanged\0textMessageReceived\0"
    "uasid\0componentid\0severity\0text\0"
    "description\0calibrationEventReceived\0"
    "QSharedPointer<events::parser::ParsedEvent>\0"
    "event\0checkListStateChanged\0"
    "messagesReceivedChanged\0messagesSentChanged\0"
    "messagesLostChanged\0messageTypeChanged\0"
    "newMessageCountChanged\0messageCountChanged\0"
    "formattedMessagesChanged\0newFormattedMessage\0"
    "formattedMessage\0longitudeChanged\0"
    "currentConfigChanged\0flowImageIndexChanged\0"
    "rcRSSIChanged\0rcRSSI\0telemetryRRSSIChanged\0"
    "value\0telemetryLRSSIChanged\0"
    "telemetryRXErrorsChanged\0telemetryFixedChanged\0"
    "telemetryTXBufferChanged\0"
    "telemetryLNoiseChanged\0telemetryRNoiseChanged\0"
    "autoDisarmChanged\0flightModesChanged\0"
    "leafModesChanged\0sensorsPresentBitsChanged\0"
    "sensorsPresentBits\0sensorsEnabledBitsChanged\0"
    "sensorsEnabledBits\0sensorsHealthBitsChanged\0"
    "sensorsHealthBits\0sensorsUnhealthyBitsChanged\0"
    "sensorsUnhealthyBits\0orbitActiveChanged\0"
    "orbitActive\0readyToFlyAvailableChanged\0"
    "readyToFlyAvailable\0readyToFlyChanged\0"
    "readyToFy\0allSensorsHealthyChanged\0"
    "allSensorsHealthy\0requiresGpsFixChanged\0"
    "haveMRSpeedLimChanged\0haveFWSpeedLimChanged\0"
    "leafStatusChanged\0leafStatus\0"
    "leafModeChanged\0leafMode\0leafClientNameChanged\0"
    "leafClientName\0leafMRFTRollChanged\0"
    "roll\0leafMRFTPitchChanged\0pitch\0"
    "leafMRFTAltChanged\0alt\0leafMRFTXChanged\0"
    "x\0leafMRFTYChanged\0y\0leafProfileChanged\0"
    "leafProfile\0firmwareVersionChanged\0"
    "firmwareCustomVersionChanged\0"
    "gitHashChanged\0hash\0vehicleUIDChanged\0"
    "loadProgressChanged\0rcChannelsChanged\0"
    "channelCount\0int[cMaxRcChannels]\0"
    "pwmValues\0remoteControlRSSIChanged\0"
    "uint8_t\0rssi\0mavlinkRawImu\0mavlinkScaledImu1\0"
    "mavlinkScaledImu2\0mavlinkScaledImu3\0"
    "mavlinkLogData\0Vehicle*\0vehicle\0"
    "target_system\0target_component\0uint16_t\0"
    "sequence\0first_message\0data\0acked\0"
    "mavCommandResult\0vehicleId\0targetComponent\0"
    "command\0ackResult\0failureCode\0"
    "mavlinkSerialControl\0device\0flags\0"
    "timeout\0uint32_t\0baudrate\0"
    "requestProtocolVersion\0version\0"
    "mavlinkStatusChanged\0isROIEnabledChanged\0"
    "roiCoordChanged\0centerCoord\0"
    "initialConnectComplete\0sensorsParametersResetAck\0"
    "success\0setVtolInFwdFlight\0"
    "_offlineFirmwareTypeSettingChanged\0"
    "varFirmwareType\0_offlineVehicleTypeSettingChanged\0"
    "varVehicleType\0_mavlinkMessageReceived\0"
    "LinkInterface*\0link\0_sendMessageMultipleNext\0"
    "_parametersReady\0parametersReady\0"
    "_remoteControlRSSIChanged\0"
    "_handleFlightModeChanged\0_announceArmedChanged\0"
    "_announceLeafModeChanged\0mode\0"
    "_offlineCruiseSpeedSettingChanged\0"
    "_offlineHoverSpeedSettingChanged\0"
    "_handleTextMessage\0newCount\0"
    "_handletextMessageReceived\0UASMessage*\0"
    "_imageProtocolImageReady\0_prearmErrorTimeout\0"
    "_firstMissionLoadComplete\0"
    "_firstGeoFenceLoadComplete\0"
    "_firstRallyPointLoadComplete\0"
    "_sendMavCommandResponseTimeoutCheck\0"
    "_clearCameraTriggerPoints\0"
    "_updateDistanceHeadingToHome\0"
    "_updateMissionItemIndex\0_updateHeadingToNextWP\0"
    "_updateDistanceToGCS\0_updateHomepoint\0"
    "_updateHobbsMeter\0_vehicleParamLoaded\0"
    "ready\0_sendQGCTimeToVehicle\0"
    "_mavlinkMessageStatus\0uasId\0totalSent\0"
    "totalReceived\0totalLoss\0lossPercent\0"
    "_orbitTelemetryTimeout\0_updateFlightTime\0"
    "_gotProgressUpdate\0progressValue\0"
    "_doSetHomeTerrainReceived\0QList<double>\0"
    "heights\0_updateAltAboveTerrain\0"
    "_altitudeAboveTerrainReceived\0sucess\0"
    "resetCounters\0resetAllMessages\0"
    "resetErrorLevelMessages\0"
    "virtualTabletJoystickValue\0yaw\0thrust\0"
    "guidedModeRTL\0smartRTL\0guidedModeLand\0"
    "guidedModeTakeoff\0altitudeRelative\0"
    "guidedModeExecuteCircleTraj\0"
    "guidedModeExecuteFig8Traj\0leafArmFC\0"
    "leafDisarmFC\0leafMRFTPitchToggle\0state\0"
    "leafMRFTRollToggle\0leafMRFTAltToggle\0"
    "leafMRFTXToggle\0leafMRFTYToggle\0"
    "leafInspectSlap\0slap\0leafPausePipeline\0"
    "leafResumePipeline\0minimumTakeoffAltitude\0"
    "maximumHorizontalSpeedMultirotor\0"
    "maximumEquivalentAirspeed\0"
    "minimumEquivalentAirspeed\0"
    "guidedModeGotoLocation\0gotoCoord\0"
    "guidedModeChangeAltitude\0altitudeChange\0"
    "pauseVehicle\0guidedModeChangeGroundSpeedMetersSecond\0"
    "groundspeed\0guidedModeChangeEquivalentAirspeedMetersSecond\0"
    "airspeed\0guidedModeOrbit\0radius\0"
    "amslAltitude\0guidedModeROI\0stopGuidedModeROI\0"
    "emergencyStop\0abortLanding\0climbOutAltitude\0"
    "landingGearDeploy\0landingGearRetract\0"
    "startMission\0setCurrentMissionSequence\0"
    "seq\0rebootVehicle\0clearMessages\0"
    "sendPlan\0planFile\0versionCompare\0"
    "QString&\0compare\0major\0minor\0patch\0"
    "motorTest\0motor\0percent\0timeoutSecs\0"
    "showError\0setPIDTuningTelemetryMode\0"
    "PIDTuningTelemetryMode\0forceArm\0"
    "sendParamMapRC\0paramName\0scale\0"
    "centerValue\0tuningID\0minValue\0maxValue\0"
    "clearAllParamMapRC\0closeVehicle\0"
    "triggerSimpleCamera\0flashBootloader\0"
    "doSetHome\0coord\0saveJoystickSettings\0"
    "vehicleTypeName\0sendGripperAction\0"
    "GRIPPER_OPTIONS\0gripperOption\0sendCommand\0"
    "compId\0param1\0param2\0param3\0param4\0"
    "param5\0param6\0param7\0id\0autopilot\0"
    "AutoPilotPlugin*\0armedPosition\0"
    "autoDisarm\0flightModeSetAvailable\0"
    "flightModes\0trajectoryPoints\0"
    "TrajectoryPoints*\0cameraTriggerPoints\0"
    "QmlObjectListModel*\0latitude\0longitude\0"
    "messageTypeNone\0messageTypeNormal\0"
    "messageTypeWarning\0messageTypeError\0"
    "newMessageCount\0messageCount\0"
    "formattedMessages\0joystickEnabled\0"
    "flowImageIndex\0px4Firmware\0apmFirmware\0"
    "genericFirmware\0messagesReceived\0"
    "messagesSent\0messagesLost\0airship\0"
    "fixedWing\0multiRotor\0vtol\0rover\0sub\0"
    "supportsThrottleModeCenterZero\0"
    "supportsNegativeThrust\0supportsJSButton\0"
    "supportsRadio\0supportsMotorInterference\0"
    "motorCount\0coaxialMotors\0xConfigMotors\0"
    "isOfflineEditingVehicle\0brandImageIndoor\0"
    "brandImageOutdoor\0missionFlightMode\0"
    "pauseFlightMode\0rtlFlightMode\0"
    "smartRTLFlightMode\0supportsSmartRTL\0"
    "landFlightMode\0takeControlFlightMode\0"
    "followFlightMode\0firmwareTypeString\0"
    "vehicleTypeString\0vehicleImageOpaque\0"
    "vehicleImageOutline\0vehicleImageCompass\0"
    "telemetryRRSSI\0telemetryLRSSI\0"
    "telemetryRXErrors\0telemetryFixed\0"
    "telemetryTXBuffer\0telemetryLNoise\0"
    "telemetryRNoise\0toolIndicators\0"
    "modeIndicators\0staticCameraList\0"
    "cameraManager\0QGCCameraManager*\0"
    "hobbsMeter\0supportsTerrainFrame\0"
    "mavlinkSentCount\0mavlinkReceivedCount\0"
    "mavlinkLossCount\0mavlinkLossPercent\0"
    "gimbalController\0GimbalController*\0"
    "hasGripper\0isROIEnabled\0checkListState\0"
    "CheckList\0readyToFly\0sysStatusSensorInfo\0"
    "requiresGpsFix\0loadProgress\0orbitMapCircle\0"
    "QGCMapCircle*\0guidedModeSupported\0"
    "pauseVehicleSupported\0orbitModeSupported\0"
    "roiModeSupported\0takeoffVehicleSupported\0"
    "gotoFlightMode\0haveMRSpeedLimits\0"
    "haveFWSpeedLimits\0leafModes\0leafMRFTRoll\0"
    "leafMRFTPitch\0leafMRFTAlt\0leafMRFTX\0"
    "leafMRFTY\0parameterManager\0ParameterManager*\0"
    "vehicleLinkManager\0VehicleLinkManager*\0"
    "objectAvoidance\0VehicleObjectAvoidance*\0"
    "autotune\0Autotune*\0remoteIDManager\0"
    "RemoteIDManager*\0Fact*\0heading\0rollRate\0"
    "pitchRate\0yawRate\0groundSpeed\0airSpeed\0"
    "airSpeedSetpoint\0climbRate\0altitudeAMSL\0"
    "altitudeAboveTerr\0altitudeTuning\0"
    "altitudeTuningSetpoint\0xTrackError\0"
    "rangeFinderDist\0flightDistance\0"
    "distanceToHome\0timeToHome\0missionItemIndex\0"
    "headingToNextWP\0distanceToNextWP\0"
    "headingToHome\0distanceToGCS\0hobbs\0"
    "throttlePct\0imuTemp\0gps\0FactGroup*\0"
    "gps2\0wind\0vibration\0temperature\0clock\0"
    "setpoint\0escStatus\0estimatorStatus\0"
    "terrain\0distanceSensors\0localPosition\0"
    "localPositionSetpoint\0hygrometer\0"
    "generator\0efi\0batteries\0actuators\0"
    "Actuators*\0healthAndArmingCheckReport\0"
    "HealthAndArmingCheckReport*\0"
    "firmwareMajorVersion\0firmwareMinorVersion\0"
    "firmwarePatchVersion\0firmwareVersionType\0"
    "firmwareVersionTypeString\0"
    "firmwareCustomMajorVersion\0"
    "firmwareCustomMinorVersion\0"
    "firmwareCustomPatchVersion\0gitHash\0"
    "vehicleUID\0vehicleUIDStr\0MavlinkSysStatus\0"
    "SysStatusSensor3dGyro\0SysStatusSensor3dAccel\0"
    "SysStatusSensor3dMag\0"
    "SysStatusSensorAbsolutePressure\0"
    "SysStatusSensorDifferentialPressure\0"
    "SysStatusSensorGPS\0SysStatusSensorOpticalFlow\0"
    "SysStatusSensorVisionPosition\0"
    "SysStatusSensorLaserPosition\0"
    "SysStatusSensorExternalGroundTruth\0"
    "SysStatusSensorAngularRateControl\0"
    "SysStatusSensorAttitudeStabilization\0"
    "SysStatusSensorYawPosition\0"
    "SysStatusSensorZAltitudeControl\0"
    "SysStatusSensorXYPositionControl\0"
    "SysStatusSensorMotorOutputs\0"
    "SysStatusSensorRCReceiver\0"
    "SysStatusSensor3dGyro2\0SysStatusSensor3dAccel2\0"
    "SysStatusSensor3dMag2\0SysStatusSensorGeoFence\0"
    "SysStatusSensorAHRS\0SysStatusSensorTerrain\0"
    "SysStatusSensorReverseMotor\0"
    "SysStatusSensorLogging\0SysStatusSensorBattery\0"
    "QLEAF_PROP_VALUE\0LEAF_UNDEFINED_VALUE\0"
    "CheckListNotSetup\0CheckListPassed\0"
    "CheckListFailed\0ModeDisabled\0"
    "ModeRateAndAttitude\0ModeVelocityAndPosition\0"
    "ModeAltitudeAndAirspeed\0Gripper_release\0"
    "Gripper_grab\0Invalid_option"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vehicle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     187,   14, // methods
     182, 1534, // properties
       5, 2262, // enums/sets
       0,    0, // constructors
       0,       // flags
      89,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  949,    2, 0x06 /* Public */,
       5,    1,  952,    2, 0x06 /* Public */,
       7,    1,  955,    2, 0x06 /* Public */,
      10,    1,  958,    2, 0x06 /* Public */,
      12,    0,  961,    2, 0x06 /* Public */,
      13,    1,  962,    2, 0x06 /* Public */,
      15,    1,  965,    2, 0x06 /* Public */,
      17,    1,  968,    2, 0x06 /* Public */,
      19,    1,  971,    2, 0x06 /* Public */,
      21,    1,  974,    2, 0x06 /* Public */,
      23,    1,  977,    2, 0x06 /* Public */,
      25,    1,  980,    2, 0x06 /* Public */,
      27,    1,  983,    2, 0x06 /* Public */,
      29,    1,  986,    2, 0x06 /* Public */,
      31,    1,  989,    2, 0x06 /* Public */,
      33,    0,  992,    2, 0x06 /* Public */,
      34,    0,  993,    2, 0x06 /* Public */,
      35,    0,  994,    2, 0x06 /* Public */,
      36,    0,  995,    2, 0x06 /* Public */,
      37,    1,  996,    2, 0x06 /* Public */,
      39,    1,  999,    2, 0x06 /* Public */,
      41,    1, 1002,    2, 0x06 /* Public */,
      44,    0, 1005,    2, 0x06 /* Public */,
      45,    0, 1006,    2, 0x06 /* Public */,
      46,    5, 1007,    2, 0x06 /* Public */,
      52,    4, 1018,    2, 0x06 /* Public */,
      55,    0, 1027,    2, 0x06 /* Public */,
      56,    0, 1028,    2, 0x06 /* Public */,
      57,    0, 1029,    2, 0x06 /* Public */,
      58,    0, 1030,    2, 0x06 /* Public */,
      59,    0, 1031,    2, 0x06 /* Public */,
      60,    0, 1032,    2, 0x06 /* Public */,
      61,    0, 1033,    2, 0x06 /* Public */,
      62,    0, 1034,    2, 0x06 /* Public */,
      63,    1, 1035,    2, 0x06 /* Public */,
      65,    0, 1038,    2, 0x06 /* Public */,
      66,    0, 1039,    2, 0x06 /* Public */,
      67,    0, 1040,    2, 0x06 /* Public */,
      68,    1, 1041,    2, 0x06 /* Public */,
      70,    1, 1044,    2, 0x06 /* Public */,
      72,    1, 1047,    2, 0x06 /* Public */,
      73,    1, 1050,    2, 0x06 /* Public */,
      74,    1, 1053,    2, 0x06 /* Public */,
      75,    1, 1056,    2, 0x06 /* Public */,
      76,    1, 1059,    2, 0x06 /* Public */,
      77,    1, 1062,    2, 0x06 /* Public */,
      78,    0, 1065,    2, 0x06 /* Public */,
      79,    0, 1066,    2, 0x06 /* Public */,
      80,    0, 1067,    2, 0x06 /* Public */,
      81,    1, 1068,    2, 0x06 /* Public */,
      83,    1, 1071,    2, 0x06 /* Public */,
      85,    1, 1074,    2, 0x06 /* Public */,
      87,    1, 1077,    2, 0x06 /* Public */,
      89,    1, 1080,    2, 0x06 /* Public */,
      91,    1, 1083,    2, 0x06 /* Public */,
      93,    1, 1086,    2, 0x06 /* Public */,
      95,    1, 1089,    2, 0x06 /* Public */,
      97,    0, 1092,    2, 0x06 /* Public */,
      98,    0, 1093,    2, 0x06 /* Public */,
      99,    0, 1094,    2, 0x06 /* Public */,
     100,    1, 1095,    2, 0x06 /* Public */,
     102,    1, 1098,    2, 0x06 /* Public */,
     104,    1, 1101,    2, 0x06 /* Public */,
     106,    1, 1104,    2, 0x06 /* Public */,
     108,    1, 1107,    2, 0x06 /* Public */,
     110,    1, 1110,    2, 0x06 /* Public */,
     112,    1, 1113,    2, 0x06 /* Public */,
     114,    1, 1116,    2, 0x06 /* Public */,
     116,    1, 1119,    2, 0x06 /* Public */,
     118,    0, 1122,    2, 0x06 /* Public */,
     119,    0, 1123,    2, 0x06 /* Public */,
     120,    1, 1124,    2, 0x06 /* Public */,
     122,    0, 1127,    2, 0x06 /* Public */,
     123,    1, 1128,    2, 0x06 /* Public */,
     124,    2, 1131,    2, 0x06 /* Public */,
     128,    1, 1136,    2, 0x06 /* Public */,
     131,    1, 1139,    2, 0x06 /* Public */,
     132,    1, 1142,    2, 0x06 /* Public */,
     133,    1, 1145,    2, 0x06 /* Public */,
     134,    1, 1148,    2, 0x06 /* Public */,
     135,    7, 1151,    2, 0x06 /* Public */,
     145,    5, 1166,    2, 0x06 /* Public */,
     151,    5, 1177,    2, 0x06 /* Public */,
     157,    1, 1188,    2, 0x06 /* Public */,
     159,    0, 1191,    2, 0x06 /* Public */,
     160,    0, 1192,    2, 0x06 /* Public */,
     161,    1, 1193,    2, 0x06 /* Public */,
     163,    0, 1196,    2, 0x06 /* Public */,
     164,    1, 1197,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     166,    1, 1200,    2, 0x0a /* Public */,
     167,    1, 1203,    2, 0x0a /* Public */,
     169,    1, 1206,    2, 0x0a /* Public */,
     171,    2, 1209,    2, 0x08 /* Private */,
     174,    0, 1214,    2, 0x08 /* Private */,
     175,    1, 1215,    2, 0x08 /* Private */,
     177,    1, 1218,    2, 0x08 /* Private */,
     178,    1, 1221,    2, 0x08 /* Private */,
     179,    1, 1224,    2, 0x08 /* Private */,
     180,    1, 1227,    2, 0x08 /* Private */,
     182,    1, 1230,    2, 0x08 /* Private */,
     183,    1, 1233,    2, 0x08 /* Private */,
     184,    1, 1236,    2, 0x08 /* Private */,
     186,    1, 1239,    2, 0x08 /* Private */,
     188,    0, 1242,    2, 0x08 /* Private */,
     189,    0, 1243,    2, 0x08 /* Private */,
     190,    0, 1244,    2, 0x08 /* Private */,
     191,    0, 1245,    2, 0x08 /* Private */,
     192,    0, 1246,    2, 0x08 /* Private */,
     193,    0, 1247,    2, 0x08 /* Private */,
     194,    0, 1248,    2, 0x08 /* Private */,
     195,    0, 1249,    2, 0x08 /* Private */,
     196,    0, 1250,    2, 0x08 /* Private */,
     197,    0, 1251,    2, 0x08 /* Private */,
     198,    0, 1252,    2, 0x08 /* Private */,
     199,    0, 1253,    2, 0x08 /* Private */,
     200,    0, 1254,    2, 0x08 /* Private */,
     201,    1, 1255,    2, 0x08 /* Private */,
     203,    0, 1258,    2, 0x08 /* Private */,
     204,    5, 1259,    2, 0x08 /* Private */,
     210,    0, 1270,    2, 0x08 /* Private */,
     211,    0, 1271,    2, 0x08 /* Private */,
     212,    1, 1272,    2, 0x08 /* Private */,
     214,    2, 1275,    2, 0x08 /* Private */,
     217,    0, 1280,    2, 0x08 /* Private */,
     218,    2, 1281,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     220,    0, 1286,    2, 0x02 /* Public */,
     221,    0, 1287,    2, 0x02 /* Public */,
     222,    0, 1288,    2, 0x02 /* Public */,
     223,    4, 1289,    2, 0x02 /* Public */,
     226,    1, 1298,    2, 0x02 /* Public */,
     228,    0, 1301,    2, 0x02 /* Public */,
     229,    1, 1302,    2, 0x02 /* Public */,
     231,    0, 1305,    2, 0x02 /* Public */,
     232,    0, 1306,    2, 0x02 /* Public */,
     233,    0, 1307,    2, 0x02 /* Public */,
     234,    0, 1308,    2, 0x02 /* Public */,
     235,    1, 1309,    2, 0x02 /* Public */,
     237,    1, 1312,    2, 0x02 /* Public */,
     238,    1, 1315,    2, 0x02 /* Public */,
     239,    1, 1318,    2, 0x02 /* Public */,
     240,    1, 1321,    2, 0x02 /* Public */,
     241,    1, 1324,    2, 0x02 /* Public */,
     243,    0, 1327,    2, 0x02 /* Public */,
     244,    0, 1328,    2, 0x02 /* Public */,
     245,    0, 1329,    2, 0x02 /* Public */,
     246,    0, 1330,    2, 0x02 /* Public */,
     247,    0, 1331,    2, 0x02 /* Public */,
     248,    0, 1332,    2, 0x02 /* Public */,
     249,    1, 1333,    2, 0x02 /* Public */,
     251,    2, 1336,    2, 0x02 /* Public */,
     254,    1, 1341,    2, 0x02 /* Public */,
     256,    1, 1344,    2, 0x02 /* Public */,
     258,    3, 1347,    2, 0x02 /* Public */,
     261,    1, 1354,    2, 0x02 /* Public */,
     262,    0, 1357,    2, 0x02 /* Public */,
     253,    0, 1358,    2, 0x02 /* Public */,
     263,    0, 1359,    2, 0x02 /* Public */,
     264,    1, 1360,    2, 0x02 /* Public */,
     266,    0, 1363,    2, 0x02 /* Public */,
     267,    0, 1364,    2, 0x02 /* Public */,
     268,    0, 1365,    2, 0x02 /* Public */,
     269,    1, 1366,    2, 0x02 /* Public */,
     271,    0, 1369,    2, 0x02 /* Public */,
     272,    0, 1370,    2, 0x02 /* Public */,
     273,    1, 1371,    2, 0x02 /* Public */,
     275,    1, 1374,    2, 0x02 /* Public */,
     275,    3, 1377,    2, 0x02 /* Public */,
     281,    4, 1384,    2, 0x02 /* Public */,
     286,    1, 1393,    2, 0x02 /* Public */,
     288,    0, 1396,    2, 0x02 /* Public */,
     289,    6, 1397,    2, 0x02 /* Public */,
     296,    0, 1410,    2, 0x02 /* Public */,
     297,    0, 1411,    2, 0x02 /* Public */,
     298,    0, 1412,    2, 0x02 /* Public */,
     299,    0, 1413,    2, 0x02 /* Public */,
     300,    1, 1414,    2, 0x02 /* Public */,
     302,    0, 1417,    2, 0x02 /* Public */,
     303,    0, 1418,    2, 0x02 /* Public */,
     304,    1, 1419,    2, 0x02 /* Public */,
     307,   10, 1422,    2, 0x02 /* Public */,
     307,    9, 1443,    2, 0x22 /* Public | MethodCloned */,
     307,    8, 1462,    2, 0x22 /* Public | MethodCloned */,
     307,    7, 1479,    2, 0x22 /* Public | MethodCloned */,
     307,    6, 1494,    2, 0x22 /* Public | MethodCloned */,
     307,    5, 1507,    2, 0x22 /* Public | MethodCloned */,
     307,    4, 1518,    2, 0x22 /* Public | MethodCloned */,
     307,    3, 1527,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void, QMetaType::Double,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,   47,   48,   49,   50,   51,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 53,   47,   48,   49,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void, QMetaType::Int,   86,
    QMetaType::Void, QMetaType::Int,   88,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void, QMetaType::Bool,   92,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void, QMetaType::Bool,   96,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  101,
    QMetaType::Void, QMetaType::QString,  103,
    QMetaType::Void, QMetaType::QString,  105,
    QMetaType::Void, QMetaType::Bool,  107,
    QMetaType::Void, QMetaType::Bool,  109,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, QMetaType::Bool,  113,
    QMetaType::Void, QMetaType::Bool,  115,
    QMetaType::Void, QMetaType::QString,  117,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  121,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   71,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 126,  125,  127,
    QMetaType::Void, 0x80000000 | 129,  130,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 136, 0x80000000 | 129, 0x80000000 | 129, 0x80000000 | 140, 0x80000000 | 129, QMetaType::QByteArray, QMetaType::Bool,  137,  138,  139,  141,  142,  143,  144,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  146,  147,  148,  149,  150,
    QMetaType::Void, 0x80000000 | 129, 0x80000000 | 129, 0x80000000 | 140, 0x80000000 | 155, QMetaType::QByteArray,  152,  153,  154,  156,  143,
    QMetaType::Void, QMetaType::UInt,  158,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,  162,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  165,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QVariant,  168,
    QMetaType::Void, QMetaType::QVariant,  170,
    QMetaType::Void, 0x80000000 | 172, 0x80000000 | 8,  173,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  176,
    QMetaType::Void, 0x80000000 | 129,  130,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,  181,
    QMetaType::Void, QMetaType::QVariant,   71,
    QMetaType::Void, QMetaType::QVariant,   71,
    QMetaType::Void, QMetaType::Int,  185,
    QMetaType::Void, 0x80000000 | 187,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  202,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 42, 0x80000000 | 42, 0x80000000 | 42, QMetaType::Float,  205,  206,  207,  208,  209,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  213,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 215,  165,  216,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 215,  219,  216,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  107,  109,  224,  225,
    QMetaType::Void, QMetaType::Bool,  227,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  230,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  236,
    QMetaType::Void, QMetaType::Bool,  236,
    QMetaType::Void, QMetaType::Bool,  236,
    QMetaType::Void, QMetaType::Bool,  236,
    QMetaType::Void, QMetaType::Bool,  236,
    QMetaType::Void, QMetaType::Int,  242,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, 0x80000000 | 3,  250,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,  252,  253,
    QMetaType::Void, QMetaType::Double,  255,
    QMetaType::Void, QMetaType::Double,  257,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,  162,  259,  260,
    QMetaType::Void, 0x80000000 | 3,  162,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  265,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  270,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  274,
    QMetaType::Int, 0x80000000 | 276,  277,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  278,  279,  280,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  282,  283,  284,  285,
    QMetaType::Void, 0x80000000 | 287,  181,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Double, QMetaType::Double,  290,  291,  292,  293,  294,  295,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,  301,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 305,  306,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  308,  148,  285,  309,  310,  311,  312,  313,  314,  315,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  308,  148,  285,  309,  310,  311,  312,  313,  314,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  308,  148,  285,  309,  310,  311,  312,  313,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  308,  148,  285,  309,  310,  311,  312,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,  308,  148,  285,  309,  310,  311,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double,  308,  148,  285,  309,  310,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double,  308,  148,  285,  309,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  308,  148,  285,

 // properties: name, type, flags
     316, QMetaType::Int, 0x00095401,
     317, 0x80000000 | 318, 0x00095409,
       4, 0x80000000 | 3, 0x00495009,
      11, 0x80000000 | 3, 0x00495009,
     319, 0x80000000 | 3, 0x00495009,
      14, QMetaType::Bool, 0x00495003,
     320, QMetaType::Bool, 0x00495001,
     321, QMetaType::Bool, 0x00095401,
     322, QMetaType::QStringList, 0x00495001,
      16, QMetaType::QString, 0x00495103,
     323, 0x80000000 | 324, 0x00095409,
     325, 0x80000000 | 326, 0x00095409,
     327, QMetaType::Float, 0x00495001,
     328, QMetaType::Float, 0x00495001,
     329, QMetaType::Bool, 0x00495001,
     330, QMetaType::Bool, 0x00495001,
     331, QMetaType::Bool, 0x00495001,
     332, QMetaType::Bool, 0x00495001,
     333, QMetaType::Int, 0x00495001,
     334, QMetaType::Int, 0x00495001,
     335, QMetaType::QString, 0x00495001,
     336, QMetaType::Bool, 0x00495103,
     337, QMetaType::Int, 0x00495001,
      69, QMetaType::Int, 0x00495001,
     338, QMetaType::Bool, 0x00495001,
     339, QMetaType::Bool, 0x00495001,
      28, QMetaType::Bool, 0x00495103,
     340, QMetaType::Bool, 0x00095401,
     341, QMetaType::UInt, 0x00495001,
     342, QMetaType::UInt, 0x00495001,
     343, QMetaType::UInt, 0x00495001,
     344, QMetaType::Bool, 0x00495001,
     345, QMetaType::Bool, 0x00495001,
     346, QMetaType::Bool, 0x00495001,
     347, QMetaType::Bool, 0x00495001,
     348, QMetaType::Bool, 0x00495001,
     349, QMetaType::Bool, 0x00495001,
     350, QMetaType::Bool, 0x00095401,
     351, QMetaType::Bool, 0x00095401,
     352, QMetaType::Bool, 0x00095401,
     353, QMetaType::Bool, 0x00095401,
     354, QMetaType::Bool, 0x00095401,
      26, QMetaType::QString, 0x00495103,
     355, QMetaType::Int, 0x00095401,
     356, QMetaType::Bool, 0x00095401,
     357, QMetaType::Bool, 0x00095401,
     358, QMetaType::Bool, 0x00095401,
     359, QMetaType::QString, 0x00495001,
     360, QMetaType::QString, 0x00495001,
      82, QMetaType::Int, 0x00495001,
      84, QMetaType::Int, 0x00495001,
      86, QMetaType::Int, 0x00495001,
      88, QMetaType::Int, 0x00495001,
     361, QMetaType::QString, 0x00095401,
     362, QMetaType::QString, 0x00095401,
     363, QMetaType::QString, 0x00095401,
     364, QMetaType::QString, 0x00095401,
     365, QMetaType::Bool, 0x00095401,
     366, QMetaType::QString, 0x00095401,
     367, QMetaType::QString, 0x00095401,
     368, QMetaType::QString, 0x00095401,
     369, QMetaType::QString, 0x00495001,
     370, QMetaType::QString, 0x00495001,
     371, QMetaType::QString, 0x00095401,
     372, QMetaType::QString, 0x00095401,
     373, QMetaType::QString, 0x00095401,
     374, QMetaType::Int, 0x00495001,
     375, QMetaType::Int, 0x00495001,
     376, QMetaType::UInt, 0x00495001,
     377, QMetaType::UInt, 0x00495001,
     378, QMetaType::UInt, 0x00495001,
     379, QMetaType::Int, 0x00495001,
     380, QMetaType::Int, 0x00495001,
     381, QMetaType::QVariantList, 0x00495001,
     382, QMetaType::QVariantList, 0x00495001,
      40, QMetaType::Bool, 0x00495001,
     383, QMetaType::QVariantList, 0x00095401,
     384, 0x80000000 | 385, 0x00495009,
     386, QMetaType::QString, 0x00495001,
      24, QMetaType::Bool, 0x00495103,
     387, QMetaType::Bool, 0x00495001,
     388, QMetaType::ULongLong, 0x00495001,
     389, QMetaType::ULongLong, 0x00495001,
     390, QMetaType::ULongLong, 0x00495001,
     391, QMetaType::Float, 0x00495001,
     392, 0x80000000 | 393, 0x00095409,
     394, QMetaType::Bool, 0x00095401,
     395, QMetaType::Bool, 0x00495001,
     396, 0x80000000 | 397, 0x0049510b,
      92, QMetaType::Bool, 0x00495001,
     398, QMetaType::Bool, 0x00495001,
     399, QMetaType::QObjectStar, 0x00095401,
      96, QMetaType::Bool, 0x00495001,
     400, QMetaType::Bool, 0x00495001,
     401, QMetaType::Double, 0x00495001,
     163, QMetaType::Bool, 0x00495001,
      90, QMetaType::Bool, 0x00495001,
     402, 0x80000000 | 403, 0x00095409,
      18, QMetaType::Bool, 0x00495001,
      20, QMetaType::Bool, 0x00495001,
      22, QMetaType::Bool, 0x00495103,
     404, QMetaType::Bool, 0x00095401,
     405, QMetaType::Bool, 0x00095401,
     406, QMetaType::Bool, 0x00095401,
     407, QMetaType::Bool, 0x00095401,
     408, QMetaType::Bool, 0x00095401,
     409, QMetaType::QString, 0x00095401,
     410, QMetaType::Bool, 0x00495001,
     411, QMetaType::Bool, 0x00495001,
     101, QMetaType::QString, 0x00495001,
     103, QMetaType::QString, 0x00495103,
     412, QMetaType::QStringList, 0x00495001,
     105, QMetaType::QString, 0x00495103,
     413, QMetaType::Bool, 0x00495103,
     414, QMetaType::Bool, 0x00495103,
     415, QMetaType::Bool, 0x00495103,
     416, QMetaType::Bool, 0x00495103,
     417, QMetaType::Bool, 0x00495103,
     117, QMetaType::QString, 0x00495103,
     418, 0x80000000 | 419, 0x00095409,
     420, 0x80000000 | 421, 0x00095409,
     422, 0x80000000 | 423, 0x00095409,
     424, 0x80000000 | 425, 0x00095409,
     426, 0x80000000 | 427, 0x00095409,
     107, 0x80000000 | 428, 0x00095409,
     109, 0x80000000 | 428, 0x00095409,
     429, 0x80000000 | 428, 0x00095409,
     430, 0x80000000 | 428, 0x00095409,
     431, 0x80000000 | 428, 0x00095409,
     432, 0x80000000 | 428, 0x00095409,
     433, 0x80000000 | 428, 0x00095409,
     434, 0x80000000 | 428, 0x00095409,
     435, 0x80000000 | 428, 0x00095409,
     436, 0x80000000 | 428, 0x00095409,
     230, 0x80000000 | 428, 0x00095409,
     437, 0x80000000 | 428, 0x00095409,
     438, 0x80000000 | 428, 0x00095409,
     439, 0x80000000 | 428, 0x00095409,
     440, 0x80000000 | 428, 0x00095409,
     441, 0x80000000 | 428, 0x00095409,
     442, 0x80000000 | 428, 0x00095409,
     443, 0x80000000 | 428, 0x00095409,
     444, 0x80000000 | 428, 0x00095409,
     445, 0x80000000 | 428, 0x00095409,
     446, 0x80000000 | 428, 0x00095409,
     447, 0x80000000 | 428, 0x00095409,
     448, 0x80000000 | 428, 0x00095409,
     449, 0x80000000 | 428, 0x00095409,
     450, 0x80000000 | 428, 0x00095409,
     451, 0x80000000 | 428, 0x00095409,
     452, 0x80000000 | 428, 0x00095409,
     453, 0x80000000 | 428, 0x00095409,
     454, 0x80000000 | 455, 0x00095409,
     456, 0x80000000 | 455, 0x00095409,
     457, 0x80000000 | 455, 0x00095409,
     458, 0x80000000 | 455, 0x00095409,
     459, 0x80000000 | 455, 0x00095409,
     460, 0x80000000 | 455, 0x00095409,
     461, 0x80000000 | 455, 0x00095409,
     462, 0x80000000 | 455, 0x00095409,
     463, 0x80000000 | 455, 0x00095409,
     464, 0x80000000 | 455, 0x00095409,
     465, 0x80000000 | 455, 0x00095409,
     466, 0x80000000 | 455, 0x00095409,
     467, 0x80000000 | 455, 0x00095409,
     468, 0x80000000 | 455, 0x00095409,
     469, 0x80000000 | 455, 0x00095409,
     470, 0x80000000 | 455, 0x00095409,
     471, 0x80000000 | 326, 0x00095409,
     472, 0x80000000 | 473, 0x00095409,
     474, 0x80000000 | 475, 0x00095409,
     476, QMetaType::Int, 0x00495001,
     477, QMetaType::Int, 0x00495001,
     478, QMetaType::Int, 0x00495001,
     479, QMetaType::Int, 0x00495001,
     480, QMetaType::QString, 0x00495001,
     481, QMetaType::Int, 0x00495001,
     482, QMetaType::Int, 0x00495001,
     483, QMetaType::Int, 0x00495001,
     484, QMetaType::QString, 0x00495001,
     485, QMetaType::ULongLong, 0x00495001,
     486, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       3,
       4,
       5,
      46,
       0,
      47,
       6,
       0,
       0,
       0,
       0,
      30,
      30,
      30,
      30,
      31,
      32,
      33,
       1,
      37,
      38,
      15,
      15,
      12,
       0,
      27,
      28,
      29,
      16,
      16,
      16,
      16,
      16,
      16,
       0,
       0,
       0,
       0,
       0,
      11,
       0,
       0,
       0,
       0,
      15,
      15,
      49,
      50,
      51,
      52,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
      15,
      16,
       0,
       0,
       0,
      39,
      40,
      41,
      42,
      43,
      44,
      45,
      22,
      23,
      20,
       0,
      17,
      18,
      10,
      15,
      84,
      84,
      84,
      84,
       0,
       0,
      85,
      26,
      54,
      55,
       0,
      56,
      57,
      73,
      87,
      53,
       0,
       7,
       8,
       9,
       0,
       0,
       0,
       0,
       0,
       0,
      58,
      59,
      60,
      61,
      48,
      62,
      63,
      64,
      65,
      66,
      67,
      68,
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
      69,
      69,
      69,
      69,
      69,
      70,
      70,
      70,
      71,
      72,
      72,

 // enums: name, alias, flags, count, data
     487,  487, 0x0,   26, 2287,
     514,  514, 0x0,    1, 2339,
     397,  397, 0x0,    3, 2341,
     287,  287, 0x0,    4, 2347,
     305,  305, 0x0,    3, 2355,

 // enum data: key, value
     488, uint(Vehicle::SysStatusSensor3dGyro),
     489, uint(Vehicle::SysStatusSensor3dAccel),
     490, uint(Vehicle::SysStatusSensor3dMag),
     491, uint(Vehicle::SysStatusSensorAbsolutePressure),
     492, uint(Vehicle::SysStatusSensorDifferentialPressure),
     493, uint(Vehicle::SysStatusSensorGPS),
     494, uint(Vehicle::SysStatusSensorOpticalFlow),
     495, uint(Vehicle::SysStatusSensorVisionPosition),
     496, uint(Vehicle::SysStatusSensorLaserPosition),
     497, uint(Vehicle::SysStatusSensorExternalGroundTruth),
     498, uint(Vehicle::SysStatusSensorAngularRateControl),
     499, uint(Vehicle::SysStatusSensorAttitudeStabilization),
     500, uint(Vehicle::SysStatusSensorYawPosition),
     501, uint(Vehicle::SysStatusSensorZAltitudeControl),
     502, uint(Vehicle::SysStatusSensorXYPositionControl),
     503, uint(Vehicle::SysStatusSensorMotorOutputs),
     504, uint(Vehicle::SysStatusSensorRCReceiver),
     505, uint(Vehicle::SysStatusSensor3dGyro2),
     506, uint(Vehicle::SysStatusSensor3dAccel2),
     507, uint(Vehicle::SysStatusSensor3dMag2),
     508, uint(Vehicle::SysStatusSensorGeoFence),
     509, uint(Vehicle::SysStatusSensorAHRS),
     510, uint(Vehicle::SysStatusSensorTerrain),
     511, uint(Vehicle::SysStatusSensorReverseMotor),
     512, uint(Vehicle::SysStatusSensorLogging),
     513, uint(Vehicle::SysStatusSensorBattery),
     515, uint(Vehicle::LEAF_UNDEFINED_VALUE),
     516, uint(Vehicle::CheckListNotSetup),
     517, uint(Vehicle::CheckListPassed),
     518, uint(Vehicle::CheckListFailed),
     519, uint(Vehicle::ModeDisabled),
     520, uint(Vehicle::ModeRateAndAttitude),
     521, uint(Vehicle::ModeVelocityAndPosition),
     522, uint(Vehicle::ModeAltitudeAndAirspeed),
     523, uint(Vehicle::Gripper_release),
     524, uint(Vehicle::Gripper_grab),
     525, uint(Vehicle::Invalid_option),

       0        // eod
};

void Vehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->joystickEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->mavlinkMessageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        case 3: _t->homePositionChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 4: _t->armedPositionChanged(); break;
        case 5: _t->armedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->flightModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->flyingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->landingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->guidedModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->vtolInFwdFlightChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->prearmErrorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->soloFirmwareChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->defaultCruiseSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->defaultHoverSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->firmwareTypeChanged(); break;
        case 16: _t->vehicleTypeChanged(); break;
        case 17: _t->cameraManagerChanged(); break;
        case 18: _t->hobbsMeterChanged(); break;
        case 19: _t->capabilitiesKnownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->initialPlanRequestCompleteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->capabilityBitsChanged((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 22: _t->toolIndicatorsChanged(); break;
        case 23: _t->modeIndicatorsChanged(); break;
        case 24: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 25: _t->calibrationEventReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QSharedPointer<events::parser::ParsedEvent>(*)>(_a[4]))); break;
        case 26: _t->checkListStateChanged(); break;
        case 27: _t->messagesReceivedChanged(); break;
        case 28: _t->messagesSentChanged(); break;
        case 29: _t->messagesLostChanged(); break;
        case 30: _t->messageTypeChanged(); break;
        case 31: _t->newMessageCountChanged(); break;
        case 32: _t->messageCountChanged(); break;
        case 33: _t->formattedMessagesChanged(); break;
        case 34: _t->newFormattedMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->longitudeChanged(); break;
        case 36: _t->currentConfigChanged(); break;
        case 37: _t->flowImageIndexChanged(); break;
        case 38: _t->rcRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->telemetryRRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->telemetryLRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->telemetryRXErrorsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 42: _t->telemetryFixedChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 43: _t->telemetryTXBufferChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 44: _t->telemetryLNoiseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->telemetryRNoiseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->autoDisarmChanged(); break;
        case 47: _t->flightModesChanged(); break;
        case 48: _t->leafModesChanged(); break;
        case 49: _t->sensorsPresentBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->sensorsEnabledBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->sensorsHealthBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->sensorsUnhealthyBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->orbitActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->readyToFlyAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->readyToFlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->allSensorsHealthyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->requiresGpsFixChanged(); break;
        case 58: _t->haveMRSpeedLimChanged(); break;
        case 59: _t->haveFWSpeedLimChanged(); break;
        case 60: _t->leafStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 61: _t->leafModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 62: _t->leafClientNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 63: _t->leafMRFTRollChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->leafMRFTPitchChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->leafMRFTAltChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->leafMRFTXChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->leafMRFTYChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->leafProfileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 69: _t->firmwareVersionChanged(); break;
        case 70: _t->firmwareCustomVersionChanged(); break;
        case 71: _t->gitHashChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 72: _t->vehicleUIDChanged(); break;
        case 73: _t->loadProgressChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 74: _t->rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[cMaxRcChannels]>(_a[2]))); break;
        case 75: _t->remoteControlRSSIChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 76: _t->mavlinkRawImu((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 77: _t->mavlinkScaledImu1((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 78: _t->mavlinkScaledImu2((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 79: _t->mavlinkScaledImu3((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 80: _t->mavlinkLogData((*reinterpret_cast< Vehicle*(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint8_t(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 81: _t->mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 82: _t->mavlinkSerialControl((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint32_t(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5]))); break;
        case 83: _t->requestProtocolVersion((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 84: _t->mavlinkStatusChanged(); break;
        case 85: _t->isROIEnabledChanged(); break;
        case 86: _t->roiCoordChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 87: _t->initialConnectComplete(); break;
        case 88: _t->sensorsParametersResetAck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->setVtolInFwdFlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->_offlineFirmwareTypeSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 91: _t->_offlineVehicleTypeSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 92: _t->_mavlinkMessageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 93: _t->_sendMessageMultipleNext(); break;
        case 94: _t->_parametersReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: _t->_remoteControlRSSIChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 96: _t->_handleFlightModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 97: _t->_announceArmedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 98: _t->_announceLeafModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 99: _t->_offlineCruiseSpeedSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 100: _t->_offlineHoverSpeedSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 101: _t->_handleTextMessage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 102: _t->_handletextMessageReceived((*reinterpret_cast< UASMessage*(*)>(_a[1]))); break;
        case 103: _t->_imageProtocolImageReady(); break;
        case 104: _t->_prearmErrorTimeout(); break;
        case 105: _t->_firstMissionLoadComplete(); break;
        case 106: _t->_firstGeoFenceLoadComplete(); break;
        case 107: _t->_firstRallyPointLoadComplete(); break;
        case 108: _t->_sendMavCommandResponseTimeoutCheck(); break;
        case 109: _t->_clearCameraTriggerPoints(); break;
        case 110: _t->_updateDistanceHeadingToHome(); break;
        case 111: _t->_updateMissionItemIndex(); break;
        case 112: _t->_updateHeadingToNextWP(); break;
        case 113: _t->_updateDistanceToGCS(); break;
        case 114: _t->_updateHomepoint(); break;
        case 115: _t->_updateHobbsMeter(); break;
        case 116: _t->_vehicleParamLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 117: _t->_sendQGCTimeToVehicle(); break;
        case 118: _t->_mavlinkMessageStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint64_t(*)>(_a[2])),(*reinterpret_cast< uint64_t(*)>(_a[3])),(*reinterpret_cast< uint64_t(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 119: _t->_orbitTelemetryTimeout(); break;
        case 120: _t->_updateFlightTime(); break;
        case 121: _t->_gotProgressUpdate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 122: _t->_doSetHomeTerrainReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2]))); break;
        case 123: _t->_updateAltAboveTerrain(); break;
        case 124: _t->_altitudeAboveTerrainReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2]))); break;
        case 125: _t->resetCounters(); break;
        case 126: _t->resetAllMessages(); break;
        case 127: _t->resetErrorLevelMessages(); break;
        case 128: _t->virtualTabletJoystickValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 129: _t->guidedModeRTL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 130: _t->guidedModeLand(); break;
        case 131: _t->guidedModeTakeoff((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 132: _t->guidedModeExecuteCircleTraj(); break;
        case 133: _t->guidedModeExecuteFig8Traj(); break;
        case 134: _t->leafArmFC(); break;
        case 135: _t->leafDisarmFC(); break;
        case 136: _t->leafMRFTPitchToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 137: _t->leafMRFTRollToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 138: _t->leafMRFTAltToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 139: _t->leafMRFTXToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 140: _t->leafMRFTYToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 141: _t->leafInspectSlap((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: _t->leafPausePipeline(); break;
        case 143: _t->leafResumePipeline(); break;
        case 144: { double _r = _t->minimumTakeoffAltitude();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 145: { double _r = _t->maximumHorizontalSpeedMultirotor();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 146: { double _r = _t->maximumEquivalentAirspeed();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 147: { double _r = _t->minimumEquivalentAirspeed();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 148: _t->guidedModeGotoLocation((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 149: _t->guidedModeChangeAltitude((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 150: _t->guidedModeChangeGroundSpeedMetersSecond((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 151: _t->guidedModeChangeEquivalentAirspeedMetersSecond((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 152: _t->guidedModeOrbit((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 153: _t->guidedModeROI((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 154: _t->stopGuidedModeROI(); break;
        case 155: _t->pauseVehicle(); break;
        case 156: _t->emergencyStop(); break;
        case 157: _t->abortLanding((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 158: _t->landingGearDeploy(); break;
        case 159: _t->landingGearRetract(); break;
        case 160: _t->startMission(); break;
        case 161: _t->setCurrentMissionSequence((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 162: _t->rebootVehicle(); break;
        case 163: _t->clearMessages(); break;
        case 164: _t->sendPlan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 165: { int _r = _t->versionCompare((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 166: { int _r = _t->versionCompare((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 167: _t->motorTest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 168: _t->setPIDTuningTelemetryMode((*reinterpret_cast< PIDTuningTelemetryMode(*)>(_a[1]))); break;
        case 169: _t->forceArm(); break;
        case 170: _t->sendParamMapRC((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 171: _t->clearAllParamMapRC(); break;
        case 172: _t->closeVehicle(); break;
        case 173: _t->triggerSimpleCamera(); break;
        case 174: _t->flashBootloader(); break;
        case 175: _t->doSetHome((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 176: _t->saveJoystickSettings(); break;
        case 177: { QString _r = _t->vehicleTypeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 178: _t->sendGripperAction((*reinterpret_cast< GRIPPER_OPTIONS(*)>(_a[1]))); break;
        case 179: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 180: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9]))); break;
        case 181: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 182: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 183: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 184: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 185: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 186: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 92:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 122:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 124:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 148:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 152:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 153:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 175:
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
            using _t = void (Vehicle::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::coordinateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::joystickEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const mavlink_message_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkMessageReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::homePositionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::armedPositionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::armedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flightModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flyingChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::landingChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::guidedModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vtolInFwdFlightChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::prearmErrorChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::soloFirmwareChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::defaultCruiseSpeedChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::defaultHoverSpeedChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareTypeChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vehicleTypeChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::cameraManagerChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::hobbsMeterChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::capabilitiesKnownChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::initialPlanRequestCompleteChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::capabilityBitsChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::toolIndicatorsChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::modeIndicatorsChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::textMessageReceived)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , QSharedPointer<events::parser::ParsedEvent> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::calibrationEventReceived)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::checkListStateChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesReceivedChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesSentChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesLostChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messageTypeChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::newMessageCountChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messageCountChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::formattedMessagesChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::newFormattedMessage)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::longitudeChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::currentConfigChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flowImageIndexChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::rcRSSIChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRRSSIChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryLRSSIChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRXErrorsChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryFixedChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryTXBufferChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryLNoiseChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRNoiseChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::autoDisarmChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flightModesChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafModesChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsPresentBitsChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsEnabledBitsChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsHealthBitsChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsUnhealthyBitsChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::orbitActiveChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::readyToFlyAvailableChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::readyToFlyChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::allSensorsHealthyChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::requiresGpsFixChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::haveMRSpeedLimChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::haveFWSpeedLimChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafStatusChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafModeChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafClientNameChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafMRFTRollChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafMRFTPitchChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafMRFTAltChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafMRFTXChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafMRFTYChanged)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::leafProfileChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareVersionChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareCustomVersionChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::gitHashChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vehicleUIDChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::loadProgressChanged)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int [cMaxRcChannels]);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::rcChannelsChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::remoteControlRSSIChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkRawImu)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu1)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu2)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu3)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(Vehicle * , uint8_t , uint8_t , uint16_t , uint8_t , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkLogData)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavCommandResult)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint8_t , uint8_t , uint16_t , uint32_t , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkSerialControl)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::requestProtocolVersion)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkStatusChanged)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::isROIEnabledChanged)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::roiCoordChanged)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::initialConnectComplete)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsParametersResetAck)) {
                *result = 88;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 151:
        case 150:
        case 149:
        case 148:
        case 147:
        case 146:
        case 145:
        case 144:
        case 143:
        case 142:
        case 141:
        case 140:
        case 139:
        case 138:
        case 137:
        case 136:
        case 135:
        case 134:
        case 133:
        case 132:
        case 131:
        case 130:
        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
        case 124:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 167:
        case 166:
        case 165:
        case 164:
        case 163:
        case 162:
        case 161:
        case 160:
        case 159:
        case 158:
        case 157:
        case 156:
        case 155:
        case 154:
        case 153:
        case 152:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FactGroup* >(); break;
        case 170:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HealthAndArmingCheckReport* >(); break;
        case 97:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapCircle* >(); break;
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 168:
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        case 120:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VehicleLinkManager* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< AutoPilotPlugin**>(_v) = _t->_autopilotPlugin; break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->homePosition(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->armedPosition(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->armed(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->autoDisarm(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->flightModeSetAvailable(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->flightModes(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->flightMode(); break;
        case 10: *reinterpret_cast< TrajectoryPoints**>(_v) = _t->_trajectoryPoints; break;
        case 11: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->cameraTriggerPoints(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->latitude(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->longitude(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->messageTypeNone(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->messageTypeNormal(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->messageTypeWarning(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->messageTypeError(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->newMessageCount(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->messageCount(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->formattedMessages(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->joystickEnabled(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->flowImageIndex(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->rcRSSI(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->px4Firmware(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->apmFirmware(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->soloFirmware(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->genericFirmware(); break;
        case 28: *reinterpret_cast< uint*>(_v) = _t->messagesReceived(); break;
        case 29: *reinterpret_cast< uint*>(_v) = _t->messagesSent(); break;
        case 30: *reinterpret_cast< uint*>(_v) = _t->messagesLost(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->airship(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->fixedWing(); break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->multiRotor(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->vtol(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->rover(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->sub(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->supportsThrottleModeCenterZero(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->supportsNegativeThrust(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->supportsJSButton(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->supportsRadio(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->supportsMotorInterference(); break;
        case 42: *reinterpret_cast< QString*>(_v) = _t->prearmError(); break;
        case 43: *reinterpret_cast< int*>(_v) = _t->motorCount(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->coaxialMotors(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->xConfigMotors(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->isOfflineEditingVehicle(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->brandImageIndoor(); break;
        case 48: *reinterpret_cast< QString*>(_v) = _t->brandImageOutdoor(); break;
        case 49: *reinterpret_cast< int*>(_v) = _t->sensorsPresentBits(); break;
        case 50: *reinterpret_cast< int*>(_v) = _t->sensorsEnabledBits(); break;
        case 51: *reinterpret_cast< int*>(_v) = _t->sensorsHealthBits(); break;
        case 52: *reinterpret_cast< int*>(_v) = _t->sensorsUnhealthyBits(); break;
        case 53: *reinterpret_cast< QString*>(_v) = _t->missionFlightMode(); break;
        case 54: *reinterpret_cast< QString*>(_v) = _t->pauseFlightMode(); break;
        case 55: *reinterpret_cast< QString*>(_v) = _t->rtlFlightMode(); break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->smartRTLFlightMode(); break;
        case 57: *reinterpret_cast< bool*>(_v) = _t->supportsSmartRTL(); break;
        case 58: *reinterpret_cast< QString*>(_v) = _t->landFlightMode(); break;
        case 59: *reinterpret_cast< QString*>(_v) = _t->takeControlFlightMode(); break;
        case 60: *reinterpret_cast< QString*>(_v) = _t->followFlightMode(); break;
        case 61: *reinterpret_cast< QString*>(_v) = _t->firmwareTypeString(); break;
        case 62: *reinterpret_cast< QString*>(_v) = _t->vehicleTypeString(); break;
        case 63: *reinterpret_cast< QString*>(_v) = _t->vehicleImageOpaque(); break;
        case 64: *reinterpret_cast< QString*>(_v) = _t->vehicleImageOutline(); break;
        case 65: *reinterpret_cast< QString*>(_v) = _t->vehicleImageCompass(); break;
        case 66: *reinterpret_cast< int*>(_v) = _t->telemetryRRSSI(); break;
        case 67: *reinterpret_cast< int*>(_v) = _t->telemetryLRSSI(); break;
        case 68: *reinterpret_cast< uint*>(_v) = _t->telemetryRXErrors(); break;
        case 69: *reinterpret_cast< uint*>(_v) = _t->telemetryFixed(); break;
        case 70: *reinterpret_cast< uint*>(_v) = _t->telemetryTXBuffer(); break;
        case 71: *reinterpret_cast< int*>(_v) = _t->telemetryLNoise(); break;
        case 72: *reinterpret_cast< int*>(_v) = _t->telemetryRNoise(); break;
        case 73: *reinterpret_cast< QVariantList*>(_v) = _t->toolIndicators(); break;
        case 74: *reinterpret_cast< QVariantList*>(_v) = _t->modeIndicators(); break;
        case 75: *reinterpret_cast< bool*>(_v) = _t->initialPlanRequestComplete(); break;
        case 76: *reinterpret_cast< QVariantList*>(_v) = _t->staticCameraList(); break;
        case 77: *reinterpret_cast< QGCCameraManager**>(_v) = _t->cameraManager(); break;
        case 78: *reinterpret_cast< QString*>(_v) = _t->hobbsMeter(); break;
        case 79: *reinterpret_cast< bool*>(_v) = _t->vtolInFwdFlight(); break;
        case 80: *reinterpret_cast< bool*>(_v) = _t->supportsTerrainFrame(); break;
        case 81: *reinterpret_cast< quint64*>(_v) = _t->mavlinkSentCount(); break;
        case 82: *reinterpret_cast< quint64*>(_v) = _t->mavlinkReceivedCount(); break;
        case 83: *reinterpret_cast< quint64*>(_v) = _t->mavlinkLossCount(); break;
        case 84: *reinterpret_cast< float*>(_v) = _t->mavlinkLossPercent(); break;
        case 85: *reinterpret_cast< GimbalController**>(_v) = _t->gimbalController(); break;
        case 86: *reinterpret_cast< bool*>(_v) = _t->hasGripper(); break;
        case 87: *reinterpret_cast< bool*>(_v) = _t->isROIEnabled(); break;
        case 88: *reinterpret_cast< CheckList*>(_v) = _t->checkListState(); break;
        case 89: *reinterpret_cast< bool*>(_v) = _t->readyToFlyAvailable(); break;
        case 90: *reinterpret_cast< bool*>(_v) = _t->readyToFly(); break;
        case 91: *reinterpret_cast< QObject**>(_v) = _t->sysStatusSensorInfo(); break;
        case 92: *reinterpret_cast< bool*>(_v) = _t->allSensorsHealthy(); break;
        case 93: *reinterpret_cast< bool*>(_v) = _t->requiresGpsFix(); break;
        case 94: *reinterpret_cast< double*>(_v) = _t->loadProgress(); break;
        case 95: *reinterpret_cast< bool*>(_v) = _t->isInitialConnectComplete(); break;
        case 96: *reinterpret_cast< bool*>(_v) = _t->orbitActive(); break;
        case 97: *reinterpret_cast< QGCMapCircle**>(_v) = _t->orbitMapCircle(); break;
        case 98: *reinterpret_cast< bool*>(_v) = _t->flying(); break;
        case 99: *reinterpret_cast< bool*>(_v) = _t->landing(); break;
        case 100: *reinterpret_cast< bool*>(_v) = _t->guidedMode(); break;
        case 101: *reinterpret_cast< bool*>(_v) = _t->guidedModeSupported(); break;
        case 102: *reinterpret_cast< bool*>(_v) = _t->pauseVehicleSupported(); break;
        case 103: *reinterpret_cast< bool*>(_v) = _t->orbitModeSupported(); break;
        case 104: *reinterpret_cast< bool*>(_v) = _t->roiModeSupported(); break;
        case 105: *reinterpret_cast< bool*>(_v) = _t->takeoffVehicleSupported(); break;
        case 106: *reinterpret_cast< QString*>(_v) = _t->gotoFlightMode(); break;
        case 107: *reinterpret_cast< bool*>(_v) = _t->haveMRSpeedLimits(); break;
        case 108: *reinterpret_cast< bool*>(_v) = _t->haveFWSpeedLimits(); break;
        case 109: *reinterpret_cast< QString*>(_v) = _t->leafStatus(); break;
        case 110: *reinterpret_cast< QString*>(_v) = _t->leafMode(); break;
        case 111: *reinterpret_cast< QStringList*>(_v) = _t->leafModes(); break;
        case 112: *reinterpret_cast< QString*>(_v) = _t->leafClientName(); break;
        case 113: *reinterpret_cast< bool*>(_v) = _t->leafMRFTRoll(); break;
        case 114: *reinterpret_cast< bool*>(_v) = _t->leafMRFTPitch(); break;
        case 115: *reinterpret_cast< bool*>(_v) = _t->leafMRFTAlt(); break;
        case 116: *reinterpret_cast< bool*>(_v) = _t->leafMRFTX(); break;
        case 117: *reinterpret_cast< bool*>(_v) = _t->leafMRFTY(); break;
        case 118: *reinterpret_cast< QString*>(_v) = _t->leafProfile(); break;
        case 119: *reinterpret_cast< ParameterManager**>(_v) = _t->parameterManager(); break;
        case 120: *reinterpret_cast< VehicleLinkManager**>(_v) = _t->vehicleLinkManager(); break;
        case 121: *reinterpret_cast< VehicleObjectAvoidance**>(_v) = _t->objectAvoidance(); break;
        case 122: *reinterpret_cast< Autotune**>(_v) = _t->autotune(); break;
        case 123: *reinterpret_cast< RemoteIDManager**>(_v) = _t->remoteIDManager(); break;
        case 124: *reinterpret_cast< Fact**>(_v) = _t->roll(); break;
        case 125: *reinterpret_cast< Fact**>(_v) = _t->pitch(); break;
        case 126: *reinterpret_cast< Fact**>(_v) = _t->heading(); break;
        case 127: *reinterpret_cast< Fact**>(_v) = _t->rollRate(); break;
        case 128: *reinterpret_cast< Fact**>(_v) = _t->pitchRate(); break;
        case 129: *reinterpret_cast< Fact**>(_v) = _t->yawRate(); break;
        case 130: *reinterpret_cast< Fact**>(_v) = _t->groundSpeed(); break;
        case 131: *reinterpret_cast< Fact**>(_v) = _t->airSpeed(); break;
        case 132: *reinterpret_cast< Fact**>(_v) = _t->airSpeedSetpoint(); break;
        case 133: *reinterpret_cast< Fact**>(_v) = _t->climbRate(); break;
        case 134: *reinterpret_cast< Fact**>(_v) = _t->altitudeRelative(); break;
        case 135: *reinterpret_cast< Fact**>(_v) = _t->altitudeAMSL(); break;
        case 136: *reinterpret_cast< Fact**>(_v) = _t->altitudeAboveTerr(); break;
        case 137: *reinterpret_cast< Fact**>(_v) = _t->altitudeTuning(); break;
        case 138: *reinterpret_cast< Fact**>(_v) = _t->altitudeTuningSetpoint(); break;
        case 139: *reinterpret_cast< Fact**>(_v) = _t->xTrackError(); break;
        case 140: *reinterpret_cast< Fact**>(_v) = _t->rangeFinderDist(); break;
        case 141: *reinterpret_cast< Fact**>(_v) = _t->flightDistance(); break;
        case 142: *reinterpret_cast< Fact**>(_v) = _t->distanceToHome(); break;
        case 143: *reinterpret_cast< Fact**>(_v) = _t->timeToHome(); break;
        case 144: *reinterpret_cast< Fact**>(_v) = _t->missionItemIndex(); break;
        case 145: *reinterpret_cast< Fact**>(_v) = _t->headingToNextWP(); break;
        case 146: *reinterpret_cast< Fact**>(_v) = _t->distanceToNextWP(); break;
        case 147: *reinterpret_cast< Fact**>(_v) = _t->headingToHome(); break;
        case 148: *reinterpret_cast< Fact**>(_v) = _t->distanceToGCS(); break;
        case 149: *reinterpret_cast< Fact**>(_v) = _t->hobbs(); break;
        case 150: *reinterpret_cast< Fact**>(_v) = _t->throttlePct(); break;
        case 151: *reinterpret_cast< Fact**>(_v) = _t->imuTemp(); break;
        case 152: *reinterpret_cast< FactGroup**>(_v) = _t->gpsFactGroup(); break;
        case 153: *reinterpret_cast< FactGroup**>(_v) = _t->gps2FactGroup(); break;
        case 154: *reinterpret_cast< FactGroup**>(_v) = _t->windFactGroup(); break;
        case 155: *reinterpret_cast< FactGroup**>(_v) = _t->vibrationFactGroup(); break;
        case 156: *reinterpret_cast< FactGroup**>(_v) = _t->temperatureFactGroup(); break;
        case 157: *reinterpret_cast< FactGroup**>(_v) = _t->clockFactGroup(); break;
        case 158: *reinterpret_cast< FactGroup**>(_v) = _t->setpointFactGroup(); break;
        case 159: *reinterpret_cast< FactGroup**>(_v) = _t->escStatusFactGroup(); break;
        case 160: *reinterpret_cast< FactGroup**>(_v) = _t->estimatorStatusFactGroup(); break;
        case 161: *reinterpret_cast< FactGroup**>(_v) = _t->terrainFactGroup(); break;
        case 162: *reinterpret_cast< FactGroup**>(_v) = _t->distanceSensorFactGroup(); break;
        case 163: *reinterpret_cast< FactGroup**>(_v) = _t->localPositionFactGroup(); break;
        case 164: *reinterpret_cast< FactGroup**>(_v) = _t->localPositionSetpointFactGroup(); break;
        case 165: *reinterpret_cast< FactGroup**>(_v) = _t->hygrometerFactGroup(); break;
        case 166: *reinterpret_cast< FactGroup**>(_v) = _t->generatorFactGroup(); break;
        case 167: *reinterpret_cast< FactGroup**>(_v) = _t->efiFactGroup(); break;
        case 168: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->batteries(); break;
        case 169: *reinterpret_cast< Actuators**>(_v) = _t->actuators(); break;
        case 170: *reinterpret_cast< HealthAndArmingCheckReport**>(_v) = _t->healthAndArmingCheckReport(); break;
        case 171: *reinterpret_cast< int*>(_v) = _t->firmwareMajorVersion(); break;
        case 172: *reinterpret_cast< int*>(_v) = _t->firmwareMinorVersion(); break;
        case 173: *reinterpret_cast< int*>(_v) = _t->firmwarePatchVersion(); break;
        case 174: *reinterpret_cast< int*>(_v) = _t->firmwareVersionType(); break;
        case 175: *reinterpret_cast< QString*>(_v) = _t->firmwareVersionTypeString(); break;
        case 176: *reinterpret_cast< int*>(_v) = _t->firmwareCustomMajorVersion(); break;
        case 177: *reinterpret_cast< int*>(_v) = _t->firmwareCustomMinorVersion(); break;
        case 178: *reinterpret_cast< int*>(_v) = _t->firmwareCustomPatchVersion(); break;
        case 179: *reinterpret_cast< QString*>(_v) = _t->gitHash(); break;
        case 180: *reinterpret_cast< quint64*>(_v) = _t->vehicleUID(); break;
        case 181: *reinterpret_cast< QString*>(_v) = _t->vehicleUIDStr(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setArmedShowError(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setFlightMode(*reinterpret_cast< QString*>(_v)); break;
        case 21: _t->setJoystickEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setSoloFirmware(*reinterpret_cast< bool*>(_v)); break;
        case 42: _t->setPrearmError(*reinterpret_cast< QString*>(_v)); break;
        case 79: _t->setVtolInFwdFlight(*reinterpret_cast< bool*>(_v)); break;
        case 88: _t->setCheckListState(*reinterpret_cast< CheckList*>(_v)); break;
        case 100: _t->setGuidedMode(*reinterpret_cast< bool*>(_v)); break;
        case 110: _t->setLeafMode(*reinterpret_cast< QString*>(_v)); break;
        case 112: _t->setLeafClientName(*reinterpret_cast< QString*>(_v)); break;
        case 113: _t->setLeafMRFTRoll(*reinterpret_cast< bool*>(_v)); break;
        case 114: _t->setLeafMRFTPitch(*reinterpret_cast< bool*>(_v)); break;
        case 115: _t->setLeafMRFTAlt(*reinterpret_cast< bool*>(_v)); break;
        case 116: _t->setLeafMRFTX(*reinterpret_cast< bool*>(_v)); break;
        case 117: _t->setLeafMRFTY(*reinterpret_cast< bool*>(_v)); break;
        case 118: _t->setLeafProfile(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Vehicle::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_Vehicle.data,
    qt_meta_data_Vehicle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Vehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Vehicle.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int Vehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 187)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 187;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 187)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 187;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 182;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 182;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 182;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 182;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 182;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 182;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Vehicle::coordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Vehicle::joystickEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Vehicle::mavlinkMessageReceived(const mavlink_message_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Vehicle::homePositionChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Vehicle::armedPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Vehicle::armedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Vehicle::flightModeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Vehicle::flyingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Vehicle::landingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Vehicle::guidedModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Vehicle::vtolInFwdFlightChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Vehicle::prearmErrorChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Vehicle::soloFirmwareChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Vehicle::defaultCruiseSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Vehicle::defaultHoverSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Vehicle::firmwareTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Vehicle::vehicleTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Vehicle::cameraManagerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Vehicle::hobbsMeterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Vehicle::capabilitiesKnownChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Vehicle::initialPlanRequestCompleteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Vehicle::capabilityBitsChanged(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Vehicle::toolIndicatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Vehicle::modeIndicatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Vehicle::textMessageReceived(int _t1, int _t2, int _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Vehicle::calibrationEventReceived(int _t1, int _t2, int _t3, QSharedPointer<events::parser::ParsedEvent> _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Vehicle::checkListStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Vehicle::messagesReceivedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void Vehicle::messagesSentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void Vehicle::messagesLostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void Vehicle::messageTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Vehicle::newMessageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void Vehicle::messageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Vehicle::formattedMessagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Vehicle::newFormattedMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Vehicle::longitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Vehicle::currentConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void Vehicle::flowImageIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void Vehicle::rcRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Vehicle::telemetryRRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Vehicle::telemetryLRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Vehicle::telemetryRXErrorsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Vehicle::telemetryFixedChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Vehicle::telemetryTXBufferChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Vehicle::telemetryLNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Vehicle::telemetryRNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Vehicle::autoDisarmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void Vehicle::flightModesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void Vehicle::leafModesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void Vehicle::sensorsPresentBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Vehicle::sensorsEnabledBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Vehicle::sensorsHealthBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Vehicle::sensorsUnhealthyBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Vehicle::orbitActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Vehicle::readyToFlyAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Vehicle::readyToFlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Vehicle::allSensorsHealthyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void Vehicle::requiresGpsFixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 57, nullptr);
}

// SIGNAL 58
void Vehicle::haveMRSpeedLimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 58, nullptr);
}

// SIGNAL 59
void Vehicle::haveFWSpeedLimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 59, nullptr);
}

// SIGNAL 60
void Vehicle::leafStatusChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void Vehicle::leafModeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void Vehicle::leafClientNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void Vehicle::leafMRFTRollChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void Vehicle::leafMRFTPitchChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void Vehicle::leafMRFTAltChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void Vehicle::leafMRFTXChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void Vehicle::leafMRFTYChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void Vehicle::leafProfileChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void Vehicle::firmwareVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 69, nullptr);
}

// SIGNAL 70
void Vehicle::firmwareCustomVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 70, nullptr);
}

// SIGNAL 71
void Vehicle::gitHashChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void Vehicle::vehicleUIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 72, nullptr);
}

// SIGNAL 73
void Vehicle::loadProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void Vehicle::rcChannelsChanged(int _t1, int _t2[cMaxRcChannels])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void Vehicle::remoteControlRSSIChanged(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void Vehicle::mavlinkRawImu(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void Vehicle::mavlinkScaledImu1(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void Vehicle::mavlinkScaledImu2(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void Vehicle::mavlinkScaledImu3(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void Vehicle::mavlinkLogData(Vehicle * _t1, uint8_t _t2, uint8_t _t3, uint16_t _t4, uint8_t _t5, QByteArray _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void Vehicle::mavCommandResult(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void Vehicle::mavlinkSerialControl(uint8_t _t1, uint8_t _t2, uint16_t _t3, uint32_t _t4, QByteArray _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void Vehicle::requestProtocolVersion(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void Vehicle::mavlinkStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 84, nullptr);
}

// SIGNAL 85
void Vehicle::isROIEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 85, nullptr);
}

// SIGNAL 86
void Vehicle::roiCoordChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void Vehicle::initialConnectComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 87, nullptr);
}

// SIGNAL 88
void Vehicle::sensorsParametersResetAck(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
