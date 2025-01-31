/****************************************************************************
** Meta object code from reading C++ file 'SiYiCamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/SiYi/SiYiCamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SiYiCamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SiYiCamera_t {
    QByteArrayData data[115];
    char stringdata0[1720];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SiYiCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SiYiCamera_t qt_meta_stringdata_SiYiCamera = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SiYiCamera"
QT_MOC_LITERAL(1, 11, 22), // "operationResultChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "result"
QT_MOC_LITERAL(4, 42, 13), // "aiInfoChanged"
QT_MOC_LITERAL(5, 56, 1), // "x"
QT_MOC_LITERAL(6, 58, 1), // "y"
QT_MOC_LITERAL(7, 60, 1), // "w"
QT_MOC_LITERAL(8, 62, 1), // "h"
QT_MOC_LITERAL(9, 64, 19), // "zoomMultipleChanged"
QT_MOC_LITERAL(10, 84, 17), // "enableZoomChanged"
QT_MOC_LITERAL(11, 102, 18), // "enableFocusChanged"
QT_MOC_LITERAL(12, 121, 18), // "enablePhotoChanged"
QT_MOC_LITERAL(13, 140, 20), // "enableControlChanged"
QT_MOC_LITERAL(14, 161, 11), // "is4kChanged"
QT_MOC_LITERAL(15, 173, 18), // "enableLaserChanged"
QT_MOC_LITERAL(16, 192, 20), // "laserDistanceChanged"
QT_MOC_LITERAL(17, 213, 19), // "laserCoordsXChanged"
QT_MOC_LITERAL(18, 233, 19), // "laserCoordsYChanged"
QT_MOC_LITERAL(19, 253, 19), // "laserStateOnChanged"
QT_MOC_LITERAL(20, 273, 26), // "cookedLaserDistanceChanged"
QT_MOC_LITERAL(21, 300, 18), // "resolutionWChanged"
QT_MOC_LITERAL(22, 319, 18), // "resolutionHChanged"
QT_MOC_LITERAL(23, 338, 15), // "aiModeOnChanged"
QT_MOC_LITERAL(24, 354, 15), // "enableAiChanged"
QT_MOC_LITERAL(25, 370, 17), // "isTrackingChanged"
QT_MOC_LITERAL(26, 388, 17), // "using1080pChanged"
QT_MOC_LITERAL(27, 406, 22), // "cookedLongitudeChanged"
QT_MOC_LITERAL(28, 429, 21), // "cookedLatitudeChanged"
QT_MOC_LITERAL(29, 451, 28), // "laserStateHasResponseChanged"
QT_MOC_LITERAL(30, 480, 26), // "mainStreamSplitModeChanged"
QT_MOC_LITERAL(31, 507, 25), // "subStreamSplitModeChanged"
QT_MOC_LITERAL(32, 533, 18), // "isRecordingChanged"
QT_MOC_LITERAL(33, 552, 18), // "enableVideoChanged"
QT_MOC_LITERAL(34, 571, 9), // "analyzeIp"
QT_MOC_LITERAL(35, 581, 8), // "videoUrl"
QT_MOC_LITERAL(36, 590, 4), // "turn"
QT_MOC_LITERAL(37, 595, 3), // "yaw"
QT_MOC_LITERAL(38, 599, 5), // "pitch"
QT_MOC_LITERAL(39, 605, 12), // "resetPostion"
QT_MOC_LITERAL(40, 618, 9), // "autoFocus"
QT_MOC_LITERAL(41, 628, 4), // "zoom"
QT_MOC_LITERAL(42, 633, 6), // "option"
QT_MOC_LITERAL(43, 640, 5), // "focus"
QT_MOC_LITERAL(44, 646, 11), // "sendCommand"
QT_MOC_LITERAL(45, 658, 3), // "cmd"
QT_MOC_LITERAL(46, 662, 19), // "sendRecodingCommand"
QT_MOC_LITERAL(47, 682, 26), // "emitOperationResultChanged"
QT_MOC_LITERAL(48, 709, 14), // "getLaserCoords"
QT_MOC_LITERAL(49, 724, 16), // "getLaserDistance"
QT_MOC_LITERAL(50, 741, 13), // "getLaserState"
QT_MOC_LITERAL(51, 755, 13), // "setLaserState"
QT_MOC_LITERAL(52, 769, 5), // "state"
QT_MOC_LITERAL(53, 775, 10), // "setAiModel"
QT_MOC_LITERAL(54, 786, 4), // "mode"
QT_MOC_LITERAL(55, 791, 10), // "getAiModel"
QT_MOC_LITERAL(56, 802, 17), // "setTrackingTarget"
QT_MOC_LITERAL(57, 820, 8), // "tracking"
QT_MOC_LITERAL(58, 829, 16), // "getTrackingState"
QT_MOC_LITERAL(59, 846, 12), // "getSplitMode"
QT_MOC_LITERAL(60, 859, 11), // "isRecording"
QT_MOC_LITERAL(61, 871, 12), // "zoomMultiple"
QT_MOC_LITERAL(62, 884, 10), // "enableZoom"
QT_MOC_LITERAL(63, 895, 11), // "enableFocus"
QT_MOC_LITERAL(64, 907, 11), // "enablePhoto"
QT_MOC_LITERAL(65, 919, 11), // "enableVideo"
QT_MOC_LITERAL(66, 931, 13), // "enableControl"
QT_MOC_LITERAL(67, 945, 4), // "is4k"
QT_MOC_LITERAL(68, 950, 11), // "enableLaser"
QT_MOC_LITERAL(69, 962, 12), // "laserStateOn"
QT_MOC_LITERAL(70, 975, 13), // "laserDistance"
QT_MOC_LITERAL(71, 989, 12), // "laserCoordsX"
QT_MOC_LITERAL(72, 1002, 12), // "laserCoordsY"
QT_MOC_LITERAL(73, 1015, 19), // "cookedLaserDistance"
QT_MOC_LITERAL(74, 1035, 11), // "resolutionW"
QT_MOC_LITERAL(75, 1047, 11), // "resolutionH"
QT_MOC_LITERAL(76, 1059, 8), // "enableAi"
QT_MOC_LITERAL(77, 1068, 8), // "aiModeOn"
QT_MOC_LITERAL(78, 1077, 10), // "isTracking"
QT_MOC_LITERAL(79, 1088, 10), // "using1080p"
QT_MOC_LITERAL(80, 1099, 15), // "cookedLongitude"
QT_MOC_LITERAL(81, 1115, 14), // "cookedLatitude"
QT_MOC_LITERAL(82, 1130, 21), // "laserStateHasResponse"
QT_MOC_LITERAL(83, 1152, 19), // "mainStreamSplitMode"
QT_MOC_LITERAL(84, 1172, 18), // "subStreamSplitMode"
QT_MOC_LITERAL(85, 1191, 13), // "CameraCommand"
QT_MOC_LITERAL(86, 1205, 22), // "CameraCommandTakePhoto"
QT_MOC_LITERAL(87, 1228, 18), // "CameraVideoCommand"
QT_MOC_LITERAL(88, 1247, 14), // "CloseRecording"
QT_MOC_LITERAL(89, 1262, 13), // "OpenRecording"
QT_MOC_LITERAL(90, 1276, 6), // "AiMode"
QT_MOC_LITERAL(91, 1283, 9), // "AiModeOff"
QT_MOC_LITERAL(92, 1293, 8), // "AiModeOn"
QT_MOC_LITERAL(93, 1302, 10), // "LaserState"
QT_MOC_LITERAL(94, 1313, 13), // "LaserStateOff"
QT_MOC_LITERAL(95, 1327, 12), // "LaserStateOn"
QT_MOC_LITERAL(96, 1340, 10), // "CameraType"
QT_MOC_LITERAL(97, 1351, 12), // "CameraTypeR1"
QT_MOC_LITERAL(98, 1364, 14), // "CameraTypeZR10"
QT_MOC_LITERAL(99, 1379, 13), // "CameraTypeR1M"
QT_MOC_LITERAL(100, 1393, 12), // "CameraTypeA8"
QT_MOC_LITERAL(101, 1406, 12), // "CameraTypeA2"
QT_MOC_LITERAL(102, 1419, 14), // "CameraTypeZR30"
QT_MOC_LITERAL(103, 1434, 14), // "CameraTypeZT30"
QT_MOC_LITERAL(104, 1449, 13), // "CameraTypeZT6"
QT_MOC_LITERAL(105, 1463, 15), // "CameraTipOption"
QT_MOC_LITERAL(106, 1479, 30), // "TipOptionTakePhotoSuccessfully"
QT_MOC_LITERAL(107, 1510, 24), // "TipOptionTakePhotoFailed"
QT_MOC_LITERAL(108, 1535, 26), // "TipOptionRecordVideoFailed"
QT_MOC_LITERAL(109, 1562, 23), // "TipOptionNotSupported4K"
QT_MOC_LITERAL(110, 1586, 24), // "TipOptionLaserNotInRange"
QT_MOC_LITERAL(111, 1611, 18), // "TipOptionSettingOK"
QT_MOC_LITERAL(112, 1630, 22), // "TipOptionSettingFailed"
QT_MOC_LITERAL(113, 1653, 28), // "TipOptionIsNotAiTrackingMode"
QT_MOC_LITERAL(114, 1682, 37) // "TipOptionStreamNotSupportedAi..."

    },
    "SiYiCamera\0operationResultChanged\0\0"
    "result\0aiInfoChanged\0x\0y\0w\0h\0"
    "zoomMultipleChanged\0enableZoomChanged\0"
    "enableFocusChanged\0enablePhotoChanged\0"
    "enableControlChanged\0is4kChanged\0"
    "enableLaserChanged\0laserDistanceChanged\0"
    "laserCoordsXChanged\0laserCoordsYChanged\0"
    "laserStateOnChanged\0cookedLaserDistanceChanged\0"
    "resolutionWChanged\0resolutionHChanged\0"
    "aiModeOnChanged\0enableAiChanged\0"
    "isTrackingChanged\0using1080pChanged\0"
    "cookedLongitudeChanged\0cookedLatitudeChanged\0"
    "laserStateHasResponseChanged\0"
    "mainStreamSplitModeChanged\0"
    "subStreamSplitModeChanged\0isRecordingChanged\0"
    "enableVideoChanged\0analyzeIp\0videoUrl\0"
    "turn\0yaw\0pitch\0resetPostion\0autoFocus\0"
    "zoom\0option\0focus\0sendCommand\0cmd\0"
    "sendRecodingCommand\0emitOperationResultChanged\0"
    "getLaserCoords\0getLaserDistance\0"
    "getLaserState\0setLaserState\0state\0"
    "setAiModel\0mode\0getAiModel\0setTrackingTarget\0"
    "tracking\0getTrackingState\0getSplitMode\0"
    "isRecording\0zoomMultiple\0enableZoom\0"
    "enableFocus\0enablePhoto\0enableVideo\0"
    "enableControl\0is4k\0enableLaser\0"
    "laserStateOn\0laserDistance\0laserCoordsX\0"
    "laserCoordsY\0cookedLaserDistance\0"
    "resolutionW\0resolutionH\0enableAi\0"
    "aiModeOn\0isTracking\0using1080p\0"
    "cookedLongitude\0cookedLatitude\0"
    "laserStateHasResponse\0mainStreamSplitMode\0"
    "subStreamSplitMode\0CameraCommand\0"
    "CameraCommandTakePhoto\0CameraVideoCommand\0"
    "CloseRecording\0OpenRecording\0AiMode\0"
    "AiModeOff\0AiModeOn\0LaserState\0"
    "LaserStateOff\0LaserStateOn\0CameraType\0"
    "CameraTypeR1\0CameraTypeZR10\0CameraTypeR1M\0"
    "CameraTypeA8\0CameraTypeA2\0CameraTypeZR30\0"
    "CameraTypeZT30\0CameraTypeZT6\0"
    "CameraTipOption\0TipOptionTakePhotoSuccessfully\0"
    "TipOptionTakePhotoFailed\0"
    "TipOptionRecordVideoFailed\0"
    "TipOptionNotSupported4K\0"
    "TipOptionLaserNotInRange\0TipOptionSettingOK\0"
    "TipOptionSettingFailed\0"
    "TipOptionIsNotAiTrackingMode\0"
    "TipOptionStreamNotSupportedAiTracking"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SiYiCamera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
      25,  328, // properties
       6,  428, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  239,    2, 0x06 /* Public */,
       4,    4,  242,    2, 0x06 /* Public */,
       9,    0,  251,    2, 0x04 /* Private */,
      10,    0,  252,    2, 0x04 /* Private */,
      11,    0,  253,    2, 0x04 /* Private */,
      12,    0,  254,    2, 0x04 /* Private */,
      13,    0,  255,    2, 0x04 /* Private */,
      14,    0,  256,    2, 0x04 /* Private */,
      15,    0,  257,    2, 0x04 /* Private */,
      16,    0,  258,    2, 0x04 /* Private */,
      17,    0,  259,    2, 0x04 /* Private */,
      18,    0,  260,    2, 0x04 /* Private */,
      19,    0,  261,    2, 0x04 /* Private */,
      20,    0,  262,    2, 0x04 /* Private */,
      21,    0,  263,    2, 0x04 /* Private */,
      22,    0,  264,    2, 0x04 /* Private */,
      23,    0,  265,    2, 0x04 /* Private */,
      24,    0,  266,    2, 0x04 /* Private */,
      25,    0,  267,    2, 0x04 /* Private */,
      26,    0,  268,    2, 0x04 /* Private */,
      27,    0,  269,    2, 0x04 /* Private */,
      28,    0,  270,    2, 0x04 /* Private */,
      29,    0,  271,    2, 0x04 /* Private */,
      30,    0,  272,    2, 0x04 /* Private */,
      31,    0,  273,    2, 0x04 /* Private */,
      32,    0,  274,    2, 0x06 /* Public */,
      33,    0,  275,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      34,    1,  276,    2, 0x02 /* Public */,
      36,    2,  279,    2, 0x02 /* Public */,
      39,    0,  284,    2, 0x02 /* Public */,
      40,    4,  285,    2, 0x02 /* Public */,
      41,    1,  294,    2, 0x02 /* Public */,
      43,    1,  297,    2, 0x02 /* Public */,
      44,    1,  300,    2, 0x02 /* Public */,
      46,    1,  303,    2, 0x02 /* Public */,
      47,    1,  306,    2, 0x02 /* Public */,
      48,    0,  309,    2, 0x02 /* Public */,
      49,    0,  310,    2, 0x02 /* Public */,
      50,    0,  311,    2, 0x02 /* Public */,
      51,    1,  312,    2, 0x02 /* Public */,
      53,    1,  315,    2, 0x02 /* Public */,
      55,    0,  318,    2, 0x02 /* Public */,
      56,    3,  319,    2, 0x02 /* Public */,
      58,    0,  326,    2, 0x02 /* Public */,
      59,    0,  327,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
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

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   37,   38,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Bool, QMetaType::Int,   42,
    QMetaType::Bool, QMetaType::Int,   42,
    QMetaType::Bool, QMetaType::Int,   45,
    QMetaType::Bool, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,   57,    5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      60, QMetaType::Bool, 0x00495001,
      61, QMetaType::Int, 0x00495001,
      62, QMetaType::Bool, 0x00495001,
      63, QMetaType::Bool, 0x00495001,
      64, QMetaType::Bool, 0x00495001,
      65, QMetaType::Bool, 0x00495001,
      66, QMetaType::Bool, 0x00495001,
      67, QMetaType::Bool, 0x00495001,
      68, QMetaType::Bool, 0x00495801,
      69, QMetaType::Bool, 0x00495801,
      70, QMetaType::Int, 0x00495801,
      71, QMetaType::Int, 0x00495801,
      72, QMetaType::Int, 0x00495801,
      73, QMetaType::QString, 0x00495801,
      74, QMetaType::UShort, 0x00495801,
      75, QMetaType::UShort, 0x00495801,
      76, QMetaType::Bool, 0x00495801,
      77, QMetaType::Bool, 0x00495801,
      78, QMetaType::Bool, 0x00495801,
      79, QMetaType::Bool, 0x00495903,
      80, QMetaType::QString, 0x00495801,
      81, QMetaType::QString, 0x00495801,
      82, QMetaType::Bool, 0x00495801,
      83, QMetaType::Int, 0x00495801,
      84, QMetaType::Int, 0x00495801,

 // properties: notify_signal_id
      25,
       2,
       3,
       4,
       5,
      26,
       6,
       7,
       8,
      12,
       9,
      10,
      11,
      13,
      14,
      15,
      17,
      16,
      18,
      19,
      20,
      21,
      22,
      23,
      24,

 // enums: name, alias, flags, count, data
      85,   85, 0x0,    1,  458,
      87,   87, 0x0,    2,  460,
      90,   90, 0x0,    2,  464,
      93,   93, 0x0,    2,  468,
      96,   96, 0x0,    8,  472,
     105,  105, 0x0,    9,  488,

 // enum data: key, value
      86, uint(SiYiCamera::CameraCommandTakePhoto),
      88, uint(SiYiCamera::CloseRecording),
      89, uint(SiYiCamera::OpenRecording),
      91, uint(SiYiCamera::AiModeOff),
      92, uint(SiYiCamera::AiModeOn),
      94, uint(SiYiCamera::LaserStateOff),
      95, uint(SiYiCamera::LaserStateOn),
      97, uint(SiYiCamera::CameraTypeR1),
      98, uint(SiYiCamera::CameraTypeZR10),
      99, uint(SiYiCamera::CameraTypeR1M),
     100, uint(SiYiCamera::CameraTypeA8),
     101, uint(SiYiCamera::CameraTypeA2),
     102, uint(SiYiCamera::CameraTypeZR30),
     103, uint(SiYiCamera::CameraTypeZT30),
     104, uint(SiYiCamera::CameraTypeZT6),
     106, uint(SiYiCamera::TipOptionTakePhotoSuccessfully),
     107, uint(SiYiCamera::TipOptionTakePhotoFailed),
     108, uint(SiYiCamera::TipOptionRecordVideoFailed),
     109, uint(SiYiCamera::TipOptionNotSupported4K),
     110, uint(SiYiCamera::TipOptionLaserNotInRange),
     111, uint(SiYiCamera::TipOptionSettingOK),
     112, uint(SiYiCamera::TipOptionSettingFailed),
     113, uint(SiYiCamera::TipOptionIsNotAiTrackingMode),
     114, uint(SiYiCamera::TipOptionStreamNotSupportedAiTracking),

       0        // eod
};

void SiYiCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SiYiCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->operationResultChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->aiInfoChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->zoomMultipleChanged(); break;
        case 3: _t->enableZoomChanged(); break;
        case 4: _t->enableFocusChanged(); break;
        case 5: _t->enablePhotoChanged(); break;
        case 6: _t->enableControlChanged(); break;
        case 7: _t->is4kChanged(); break;
        case 8: _t->enableLaserChanged(); break;
        case 9: _t->laserDistanceChanged(); break;
        case 10: _t->laserCoordsXChanged(); break;
        case 11: _t->laserCoordsYChanged(); break;
        case 12: _t->laserStateOnChanged(); break;
        case 13: _t->cookedLaserDistanceChanged(); break;
        case 14: _t->resolutionWChanged(); break;
        case 15: _t->resolutionHChanged(); break;
        case 16: _t->aiModeOnChanged(); break;
        case 17: _t->enableAiChanged(); break;
        case 18: _t->isTrackingChanged(); break;
        case 19: _t->using1080pChanged(); break;
        case 20: _t->cookedLongitudeChanged(); break;
        case 21: _t->cookedLatitudeChanged(); break;
        case 22: _t->laserStateHasResponseChanged(); break;
        case 23: _t->mainStreamSplitModeChanged(); break;
        case 24: _t->subStreamSplitModeChanged(); break;
        case 25: _t->isRecordingChanged(); break;
        case 26: _t->enableVideoChanged(); break;
        case 27: _t->analyzeIp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: { bool _r = _t->turn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->resetPostion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->autoFocus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->zoom((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->focus((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->sendRecodingCommand((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->emitOperationResultChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->getLaserCoords(); break;
        case 37: _t->getLaserDistance(); break;
        case 38: _t->getLaserState(); break;
        case 39: _t->setLaserState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->setAiModel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->getAiModel(); break;
        case 42: _t->setTrackingTarget((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 43: _t->getTrackingState(); break;
        case 44: _t->getSplitMode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SiYiCamera::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::operationResultChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::aiInfoChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::zoomMultipleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::enableZoomChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::enableFocusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::enablePhotoChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::enableControlChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::is4kChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::enableLaserChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::laserDistanceChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::laserCoordsXChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::laserCoordsYChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::laserStateOnChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::cookedLaserDistanceChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::resolutionWChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::resolutionHChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::aiModeOnChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::enableAiChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::isTrackingChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::using1080pChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::cookedLongitudeChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::cookedLatitudeChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::laserStateHasResponseChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::mainStreamSplitModeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::subStreamSplitModeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::isRecordingChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (SiYiCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiCamera::enableVideoChanged)) {
                *result = 26;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SiYiCamera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRecording(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->zoomMultiple(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->enableZoom(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enableFocus(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enablePhoto(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->enableVideo(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->enableControl(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->is4k(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->enableLaser(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->laserStateOn(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->laserDistance(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->laserCoordsX(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->laserCoordsY(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->cookedLaserDistance(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->resolutionW(); break;
        case 15: *reinterpret_cast< quint16*>(_v) = _t->resolutionH(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->enableAi(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->aiModeOn(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->isTracking(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->using1080p(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->cookedLongitude(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->cookedLatitude(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->laserStateHasResponse(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->mainStreamSplitMode(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->subStreamSplitMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SiYiCamera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 19: _t->setUsing1080p(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SiYiCamera::staticMetaObject = { {
    QMetaObject::SuperData::link<SiYiTcpClient::staticMetaObject>(),
    qt_meta_stringdata_SiYiCamera.data,
    qt_meta_data_SiYiCamera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SiYiCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SiYiCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SiYiCamera.stringdata0))
        return static_cast<void*>(this);
    return SiYiTcpClient::qt_metacast(_clname);
}

int SiYiCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SiYiTcpClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 45;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 25;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SiYiCamera::operationResultChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SiYiCamera::aiInfoChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SiYiCamera::zoomMultipleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SiYiCamera::enableZoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SiYiCamera::enableFocusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SiYiCamera::enablePhotoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SiYiCamera::enableControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SiYiCamera::is4kChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SiYiCamera::enableLaserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SiYiCamera::laserDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void SiYiCamera::laserCoordsXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void SiYiCamera::laserCoordsYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void SiYiCamera::laserStateOnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void SiYiCamera::cookedLaserDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void SiYiCamera::resolutionWChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void SiYiCamera::resolutionHChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void SiYiCamera::aiModeOnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void SiYiCamera::enableAiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void SiYiCamera::isTrackingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void SiYiCamera::using1080pChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void SiYiCamera::cookedLongitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void SiYiCamera::cookedLatitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void SiYiCamera::laserStateHasResponseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void SiYiCamera::mainStreamSplitModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void SiYiCamera::subStreamSplitModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void SiYiCamera::isRecordingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void SiYiCamera::enableVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
