/****************************************************************************
** Meta object code from reading C++ file 'FirmwareUpgradeController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/VehicleSetup/FirmwareUpgradeController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirmwareUpgradeController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FirmwareUpgradeController_t {
    QByteArrayData data[91];
    char stringdata0[1437];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirmwareUpgradeController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirmwareUpgradeController_t qt_meta_stringdata_FirmwareUpgradeController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FirmwareUpgradeController"
QT_MOC_LITERAL(1, 26, 10), // "boardFound"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "showFirmwareSelectDlg"
QT_MOC_LITERAL(4, 60, 12), // "noBoardFound"
QT_MOC_LITERAL(5, 73, 9), // "boardGone"
QT_MOC_LITERAL(6, 83, 13), // "flashComplete"
QT_MOC_LITERAL(7, 97, 14), // "flashCancelled"
QT_MOC_LITERAL(8, 112, 5), // "error"
QT_MOC_LITERAL(9, 118, 32), // "selectedFirmwareBuildTypeChanged"
QT_MOC_LITERAL(10, 151, 19), // "FirmwareBuildType_t"
QT_MOC_LITERAL(11, 171, 12), // "firmwareType"
QT_MOC_LITERAL(12, 184, 23), // "apmFirmwareNamesChanged"
QT_MOC_LITERAL(13, 208, 23), // "px4StableVersionChanged"
QT_MOC_LITERAL(14, 232, 16), // "px4StableVersion"
QT_MOC_LITERAL(15, 249, 21), // "px4BetaVersionChanged"
QT_MOC_LITERAL(16, 271, 14), // "px4BetaVersion"
QT_MOC_LITERAL(17, 286, 30), // "downloadingFirmwareListChanged"
QT_MOC_LITERAL(18, 317, 23), // "downloadingFirmwareList"
QT_MOC_LITERAL(19, 341, 25), // "_firmwareDownloadProgress"
QT_MOC_LITERAL(20, 367, 4), // "curr"
QT_MOC_LITERAL(21, 372, 5), // "total"
QT_MOC_LITERAL(22, 378, 25), // "_firmwareDownloadComplete"
QT_MOC_LITERAL(23, 404, 10), // "remoteFile"
QT_MOC_LITERAL(24, 415, 9), // "localFile"
QT_MOC_LITERAL(25, 425, 8), // "errorMsg"
QT_MOC_LITERAL(26, 434, 11), // "_foundBoard"
QT_MOC_LITERAL(27, 446, 12), // "firstAttempt"
QT_MOC_LITERAL(28, 459, 15), // "QSerialPortInfo"
QT_MOC_LITERAL(29, 475, 8), // "portInfo"
QT_MOC_LITERAL(30, 484, 9), // "boardType"
QT_MOC_LITERAL(31, 494, 9), // "boardName"
QT_MOC_LITERAL(32, 504, 13), // "_noBoardFound"
QT_MOC_LITERAL(33, 518, 10), // "_boardGone"
QT_MOC_LITERAL(34, 529, 15), // "_foundBoardInfo"
QT_MOC_LITERAL(35, 545, 17), // "bootloaderVersion"
QT_MOC_LITERAL(36, 563, 7), // "boardID"
QT_MOC_LITERAL(37, 571, 9), // "flashSize"
QT_MOC_LITERAL(38, 581, 6), // "_error"
QT_MOC_LITERAL(39, 588, 11), // "errorString"
QT_MOC_LITERAL(40, 600, 7), // "_status"
QT_MOC_LITERAL(41, 608, 12), // "statusString"
QT_MOC_LITERAL(42, 621, 21), // "_bootloaderSyncFailed"
QT_MOC_LITERAL(43, 643, 14), // "_flashComplete"
QT_MOC_LITERAL(44, 658, 15), // "_updateProgress"
QT_MOC_LITERAL(45, 674, 13), // "_eraseStarted"
QT_MOC_LITERAL(46, 688, 14), // "_eraseComplete"
QT_MOC_LITERAL(47, 703, 18), // "_eraseProgressTick"
QT_MOC_LITERAL(48, 722, 34), // "_px4ReleasesGithubDownloadCom..."
QT_MOC_LITERAL(49, 757, 34), // "_ardupilotManifestDownloadCom..."
QT_MOC_LITERAL(50, 792, 22), // "_buildAPMFirmwareNames"
QT_MOC_LITERAL(51, 815, 16), // "startBoardSearch"
QT_MOC_LITERAL(52, 832, 6), // "cancel"
QT_MOC_LITERAL(53, 839, 5), // "flash"
QT_MOC_LITERAL(54, 845, 20), // "AutoPilotStackType_t"
QT_MOC_LITERAL(55, 866, 9), // "stackType"
QT_MOC_LITERAL(56, 876, 21), // "FirmwareVehicleType_t"
QT_MOC_LITERAL(57, 898, 11), // "vehicleType"
QT_MOC_LITERAL(58, 910, 16), // "flashFirmwareUrl"
QT_MOC_LITERAL(59, 927, 11), // "firmwareUrl"
QT_MOC_LITERAL(60, 939, 23), // "flashSingleFirmwareMode"
QT_MOC_LITERAL(61, 963, 37), // "vehicleTypeFromFirmwareSelect..."
QT_MOC_LITERAL(62, 1001, 5), // "index"
QT_MOC_LITERAL(63, 1007, 19), // "availableBoardsName"
QT_MOC_LITERAL(64, 1027, 9), // "boardPort"
QT_MOC_LITERAL(65, 1037, 16), // "boardDescription"
QT_MOC_LITERAL(66, 1054, 12), // "pixhawkBoard"
QT_MOC_LITERAL(67, 1067, 12), // "px4FlowBoard"
QT_MOC_LITERAL(68, 1080, 25), // "selectedFirmwareBuildType"
QT_MOC_LITERAL(69, 1106, 16), // "apmFirmwareNames"
QT_MOC_LITERAL(70, 1123, 25), // "apmFirmwareNamesBestIndex"
QT_MOC_LITERAL(71, 1149, 15), // "apmFirmwareUrls"
QT_MOC_LITERAL(72, 1165, 9), // "statusLog"
QT_MOC_LITERAL(73, 1175, 11), // "QQuickItem*"
QT_MOC_LITERAL(74, 1187, 11), // "progressBar"
QT_MOC_LITERAL(75, 1199, 17), // "AutoPilotStackPX4"
QT_MOC_LITERAL(76, 1217, 17), // "AutoPilotStackAPM"
QT_MOC_LITERAL(77, 1235, 10), // "PX4FlowPX4"
QT_MOC_LITERAL(78, 1246, 10), // "PX4FlowAPM"
QT_MOC_LITERAL(79, 1257, 8), // "SiKRadio"
QT_MOC_LITERAL(80, 1266, 18), // "SingleFirmwareMode"
QT_MOC_LITERAL(81, 1285, 14), // "StableFirmware"
QT_MOC_LITERAL(82, 1300, 12), // "BetaFirmware"
QT_MOC_LITERAL(83, 1313, 17), // "DeveloperFirmware"
QT_MOC_LITERAL(84, 1331, 14), // "CustomFirmware"
QT_MOC_LITERAL(85, 1346, 14), // "CopterFirmware"
QT_MOC_LITERAL(86, 1361, 12), // "HeliFirmware"
QT_MOC_LITERAL(87, 1374, 13), // "PlaneFirmware"
QT_MOC_LITERAL(88, 1388, 13), // "RoverFirmware"
QT_MOC_LITERAL(89, 1402, 11), // "SubFirmware"
QT_MOC_LITERAL(90, 1414, 22) // "DefaultVehicleFirmware"

    },
    "FirmwareUpgradeController\0boardFound\0"
    "\0showFirmwareSelectDlg\0noBoardFound\0"
    "boardGone\0flashComplete\0flashCancelled\0"
    "error\0selectedFirmwareBuildTypeChanged\0"
    "FirmwareBuildType_t\0firmwareType\0"
    "apmFirmwareNamesChanged\0px4StableVersionChanged\0"
    "px4StableVersion\0px4BetaVersionChanged\0"
    "px4BetaVersion\0downloadingFirmwareListChanged\0"
    "downloadingFirmwareList\0"
    "_firmwareDownloadProgress\0curr\0total\0"
    "_firmwareDownloadComplete\0remoteFile\0"
    "localFile\0errorMsg\0_foundBoard\0"
    "firstAttempt\0QSerialPortInfo\0portInfo\0"
    "boardType\0boardName\0_noBoardFound\0"
    "_boardGone\0_foundBoardInfo\0bootloaderVersion\0"
    "boardID\0flashSize\0_error\0errorString\0"
    "_status\0statusString\0_bootloaderSyncFailed\0"
    "_flashComplete\0_updateProgress\0"
    "_eraseStarted\0_eraseComplete\0"
    "_eraseProgressTick\0"
    "_px4ReleasesGithubDownloadComplete\0"
    "_ardupilotManifestDownloadComplete\0"
    "_buildAPMFirmwareNames\0startBoardSearch\0"
    "cancel\0flash\0AutoPilotStackType_t\0"
    "stackType\0FirmwareVehicleType_t\0"
    "vehicleType\0flashFirmwareUrl\0firmwareUrl\0"
    "flashSingleFirmwareMode\0"
    "vehicleTypeFromFirmwareSelectionIndex\0"
    "index\0availableBoardsName\0boardPort\0"
    "boardDescription\0pixhawkBoard\0"
    "px4FlowBoard\0selectedFirmwareBuildType\0"
    "apmFirmwareNames\0apmFirmwareNamesBestIndex\0"
    "apmFirmwareUrls\0statusLog\0QQuickItem*\0"
    "progressBar\0AutoPilotStackPX4\0"
    "AutoPilotStackAPM\0PX4FlowPX4\0PX4FlowAPM\0"
    "SiKRadio\0SingleFirmwareMode\0StableFirmware\0"
    "BetaFirmware\0DeveloperFirmware\0"
    "CustomFirmware\0CopterFirmware\0"
    "HeliFirmware\0PlaneFirmware\0RoverFirmware\0"
    "SubFirmware\0DefaultVehicleFirmware"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirmwareUpgradeController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
      14,  312, // properties
       3,  368, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  204,    2, 0x06 /* Public */,
       3,    0,  205,    2, 0x06 /* Public */,
       4,    0,  206,    2, 0x06 /* Public */,
       5,    0,  207,    2, 0x06 /* Public */,
       6,    0,  208,    2, 0x06 /* Public */,
       7,    0,  209,    2, 0x06 /* Public */,
       8,    0,  210,    2, 0x06 /* Public */,
       9,    1,  211,    2, 0x06 /* Public */,
      12,    0,  214,    2, 0x06 /* Public */,
      13,    1,  215,    2, 0x06 /* Public */,
      15,    1,  218,    2, 0x06 /* Public */,
      17,    1,  221,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    2,  224,    2, 0x08 /* Private */,
      22,    3,  229,    2, 0x08 /* Private */,
      26,    4,  236,    2, 0x08 /* Private */,
      32,    0,  245,    2, 0x08 /* Private */,
      33,    0,  246,    2, 0x08 /* Private */,
      34,    3,  247,    2, 0x08 /* Private */,
      38,    1,  254,    2, 0x08 /* Private */,
      40,    1,  257,    2, 0x08 /* Private */,
      42,    0,  260,    2, 0x08 /* Private */,
      43,    0,  261,    2, 0x08 /* Private */,
      44,    2,  262,    2, 0x08 /* Private */,
      45,    0,  267,    2, 0x08 /* Private */,
      46,    0,  268,    2, 0x08 /* Private */,
      47,    0,  269,    2, 0x08 /* Private */,
      48,    3,  270,    2, 0x08 /* Private */,
      49,    3,  277,    2, 0x08 /* Private */,
      50,    0,  284,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      51,    0,  285,    2, 0x02 /* Public */,
      52,    0,  286,    2, 0x02 /* Public */,
      53,    3,  287,    2, 0x02 /* Public */,
      53,    2,  294,    2, 0x22 /* Public | MethodCloned */,
      53,    1,  299,    2, 0x22 /* Public | MethodCloned */,
      58,    1,  302,    2, 0x02 /* Public */,
      60,    1,  305,    2, 0x02 /* Public */,
      61,    1,  308,    2, 0x02 /* Public */,
      63,    0,  311,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   18,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 28, QMetaType::Int, QMetaType::QString,   27,   29,   30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   35,   36,   37,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 54, 0x80000000 | 10, 0x80000000 | 56,   55,   11,   57,
    QMetaType::Void, 0x80000000 | 54, 0x80000000 | 10,   55,   11,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, 0x80000000 | 10,   11,
    0x80000000 | 56, QMetaType::Int,   62,
    QMetaType::QStringList,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495003,
      64, QMetaType::QString, 0x00495001,
      65, QMetaType::QString, 0x00495001,
      30, QMetaType::QString, 0x00495003,
      66, QMetaType::Bool, 0x00495001,
      67, QMetaType::Bool, 0x00495001,
      68, 0x80000000 | 10, 0x0049510b,
      69, QMetaType::QStringList, 0x00495003,
      70, QMetaType::Int, 0x00495003,
      71, QMetaType::QStringList, 0x00495003,
      14, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495001,
      72, 0x80000000 | 73, 0x0009510b,
      74, 0x80000000 | 73, 0x0009510b,

 // properties: notify_signal_id
      11,
       0,
       0,
       0,
       0,
       0,
       7,
       8,
       8,
       8,
       9,
      10,
       0,
       0,

 // enums: name, alias, flags, count, data
      54,   54, 0x0,    6,  383,
      10,   10, 0x0,    4,  395,
      56,   56, 0x0,    6,  403,

 // enum data: key, value
      75, uint(FirmwareUpgradeController::AutoPilotStackPX4),
      76, uint(FirmwareUpgradeController::AutoPilotStackAPM),
      77, uint(FirmwareUpgradeController::PX4FlowPX4),
      78, uint(FirmwareUpgradeController::PX4FlowAPM),
      79, uint(FirmwareUpgradeController::SiKRadio),
      80, uint(FirmwareUpgradeController::SingleFirmwareMode),
      81, uint(FirmwareUpgradeController::StableFirmware),
      82, uint(FirmwareUpgradeController::BetaFirmware),
      83, uint(FirmwareUpgradeController::DeveloperFirmware),
      84, uint(FirmwareUpgradeController::CustomFirmware),
      85, uint(FirmwareUpgradeController::CopterFirmware),
      86, uint(FirmwareUpgradeController::HeliFirmware),
      87, uint(FirmwareUpgradeController::PlaneFirmware),
      88, uint(FirmwareUpgradeController::RoverFirmware),
      89, uint(FirmwareUpgradeController::SubFirmware),
      90, uint(FirmwareUpgradeController::DefaultVehicleFirmware),

       0        // eod
};

void FirmwareUpgradeController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FirmwareUpgradeController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->boardFound(); break;
        case 1: _t->showFirmwareSelectDlg(); break;
        case 2: _t->noBoardFound(); break;
        case 3: _t->boardGone(); break;
        case 4: _t->flashComplete(); break;
        case 5: _t->flashCancelled(); break;
        case 6: _t->error(); break;
        case 7: _t->selectedFirmwareBuildTypeChanged((*reinterpret_cast< FirmwareBuildType_t(*)>(_a[1]))); break;
        case 8: _t->apmFirmwareNamesChanged(); break;
        case 9: _t->px4StableVersionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->px4BetaVersionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->downloadingFirmwareListChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->_firmwareDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 13: _t->_firmwareDownloadComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: _t->_foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 15: _t->_noBoardFound(); break;
        case 16: _t->_boardGone(); break;
        case 17: _t->_foundBoardInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->_status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->_bootloaderSyncFailed(); break;
        case 21: _t->_flashComplete(); break;
        case 22: _t->_updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->_eraseStarted(); break;
        case 24: _t->_eraseComplete(); break;
        case 25: _t->_eraseProgressTick(); break;
        case 26: _t->_px4ReleasesGithubDownloadComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 27: _t->_ardupilotManifestDownloadComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 28: _t->_buildAPMFirmwareNames(); break;
        case 29: _t->startBoardSearch(); break;
        case 30: _t->cancel(); break;
        case 31: _t->flash((*reinterpret_cast< AutoPilotStackType_t(*)>(_a[1])),(*reinterpret_cast< FirmwareBuildType_t(*)>(_a[2])),(*reinterpret_cast< FirmwareVehicleType_t(*)>(_a[3]))); break;
        case 32: _t->flash((*reinterpret_cast< AutoPilotStackType_t(*)>(_a[1])),(*reinterpret_cast< FirmwareBuildType_t(*)>(_a[2]))); break;
        case 33: _t->flash((*reinterpret_cast< AutoPilotStackType_t(*)>(_a[1]))); break;
        case 34: _t->flashFirmwareUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->flashSingleFirmwareMode((*reinterpret_cast< FirmwareBuildType_t(*)>(_a[1]))); break;
        case 36: { FirmwareVehicleType_t _r = _t->vehicleTypeFromFirmwareSelectionIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FirmwareVehicleType_t*>(_a[0]) = std::move(_r); }  break;
        case 37: { QStringList _r = _t->availableBoardsName();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::boardFound)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::showFirmwareSelectDlg)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::noBoardFound)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::boardGone)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::flashComplete)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::flashCancelled)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::error)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)(FirmwareBuildType_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::selectedFirmwareBuildTypeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::apmFirmwareNamesChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::px4StableVersionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::px4BetaVersionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::downloadingFirmwareListChanged)) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FirmwareUpgradeController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->_downloadingFirmwareList; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->boardPort(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->boardDescription(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_boardTypeName; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->pixhawkBoard(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->px4FlowBoard(); break;
        case 6: *reinterpret_cast< FirmwareBuildType_t*>(_v) = _t->selectedFirmwareBuildType(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->_apmFirmwareNames; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->_apmFirmwareNamesBestIndex; break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->_apmFirmwareUrls; break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->px4StableVersion(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->px4BetaVersion(); break;
        case 12: *reinterpret_cast< QQuickItem**>(_v) = _t->statusLog(); break;
        case 13: *reinterpret_cast< QQuickItem**>(_v) = _t->progressBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FirmwareUpgradeController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_downloadingFirmwareList != *reinterpret_cast< bool*>(_v)) {
                _t->_downloadingFirmwareList = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->downloadingFirmwareListChanged(_t->_downloadingFirmwareList);
            }
            break;
        case 3:
            if (_t->_boardTypeName != *reinterpret_cast< QString*>(_v)) {
                _t->_boardTypeName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->boardFound();
            }
            break;
        case 6: _t->setSelectedFirmwareBuildType(*reinterpret_cast< FirmwareBuildType_t*>(_v)); break;
        case 7:
            if (_t->_apmFirmwareNames != *reinterpret_cast< QStringList*>(_v)) {
                _t->_apmFirmwareNames = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT _t->apmFirmwareNamesChanged();
            }
            break;
        case 8:
            if (_t->_apmFirmwareNamesBestIndex != *reinterpret_cast< int*>(_v)) {
                _t->_apmFirmwareNamesBestIndex = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->apmFirmwareNamesChanged();
            }
            break;
        case 9:
            if (_t->_apmFirmwareUrls != *reinterpret_cast< QStringList*>(_v)) {
                _t->_apmFirmwareUrls = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT _t->apmFirmwareNamesChanged();
            }
            break;
        case 12: _t->setStatusLog(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 13: _t->setProgressBar(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FirmwareUpgradeController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FirmwareUpgradeController.data,
    qt_meta_data_FirmwareUpgradeController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FirmwareUpgradeController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwareUpgradeController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirmwareUpgradeController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FirmwareUpgradeController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FirmwareUpgradeController::boardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FirmwareUpgradeController::showFirmwareSelectDlg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FirmwareUpgradeController::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FirmwareUpgradeController::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FirmwareUpgradeController::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FirmwareUpgradeController::flashCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FirmwareUpgradeController::error()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FirmwareUpgradeController::selectedFirmwareBuildTypeChanged(FirmwareBuildType_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FirmwareUpgradeController::apmFirmwareNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void FirmwareUpgradeController::px4StableVersionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FirmwareUpgradeController::px4BetaVersionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FirmwareUpgradeController::downloadingFirmwareListChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
