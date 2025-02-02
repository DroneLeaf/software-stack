/****************************************************************************
** Meta object code from reading C++ file 'QGCCameraControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Camera/QGCCameraControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCCameraControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCVideoStreamInfo_t {
    QByteArrayData data[10];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCVideoStreamInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCVideoStreamInfo_t qt_meta_stringdata_QGCVideoStreamInfo = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGCVideoStreamInfo"
QT_MOC_LITERAL(1, 19, 11), // "infoChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "uri"
QT_MOC_LITERAL(4, 36, 4), // "name"
QT_MOC_LITERAL(5, 41, 8), // "streamID"
QT_MOC_LITERAL(6, 50, 4), // "type"
QT_MOC_LITERAL(7, 55, 11), // "aspectRatio"
QT_MOC_LITERAL(8, 67, 4), // "hfov"
QT_MOC_LITERAL(9, 72, 9) // "isThermal"

    },
    "QGCVideoStreamInfo\0infoChanged\0\0uri\0"
    "name\0streamID\0type\0aspectRatio\0hfov\0"
    "isThermal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCVideoStreamInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495001,
       4, QMetaType::QString, 0x00495001,
       5, QMetaType::Int, 0x00495001,
       6, QMetaType::Int, 0x00495001,
       7, QMetaType::QReal, 0x00495001,
       8, QMetaType::QReal, 0x00495001,
       9, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QGCVideoStreamInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCVideoStreamInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCVideoStreamInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCVideoStreamInfo::infoChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCVideoStreamInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uri(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->streamID(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->type(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->aspectRatio(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->hfov(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isThermal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QGCVideoStreamInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCVideoStreamInfo.data,
    qt_meta_data_QGCVideoStreamInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCVideoStreamInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCVideoStreamInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCVideoStreamInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCVideoStreamInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCVideoStreamInfo::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QGCCameraControl_t {
    QByteArrayData data[163];
    char stringdata0[2465];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCameraControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCameraControl_t qt_meta_stringdata_QGCCameraControl = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGCCameraControl"
QT_MOC_LITERAL(1, 17, 11), // "infoChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "videoStatusChanged"
QT_MOC_LITERAL(4, 49, 18), // "photoStatusChanged"
QT_MOC_LITERAL(5, 68, 16), // "photoModeChanged"
QT_MOC_LITERAL(6, 85, 17), // "photoLapseChanged"
QT_MOC_LITERAL(7, 103, 22), // "photoLapseCountChanged"
QT_MOC_LITERAL(8, 126, 17), // "cameraModeChanged"
QT_MOC_LITERAL(9, 144, 21), // "activeSettingsChanged"
QT_MOC_LITERAL(10, 166, 18), // "storageFreeChanged"
QT_MOC_LITERAL(11, 185, 19), // "storageTotalChanged"
QT_MOC_LITERAL(12, 205, 23), // "batteryRemainingChanged"
QT_MOC_LITERAL(13, 229, 9), // "dataReady"
QT_MOC_LITERAL(14, 239, 4), // "data"
QT_MOC_LITERAL(15, 244, 15), // "parametersReady"
QT_MOC_LITERAL(16, 260, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(17, 277, 17), // "focusLevelChanged"
QT_MOC_LITERAL(18, 295, 14), // "streamsChanged"
QT_MOC_LITERAL(19, 310, 20), // "currentStreamChanged"
QT_MOC_LITERAL(20, 331, 20), // "thermalStreamChanged"
QT_MOC_LITERAL(21, 352, 17), // "autoStreamChanged"
QT_MOC_LITERAL(22, 370, 17), // "recordTimeChanged"
QT_MOC_LITERAL(23, 388, 19), // "streamLabelsChanged"
QT_MOC_LITERAL(24, 408, 22), // "trackingEnabledChanged"
QT_MOC_LITERAL(25, 431, 26), // "trackingImageStatusChanged"
QT_MOC_LITERAL(26, 458, 18), // "thermalModeChanged"
QT_MOC_LITERAL(27, 477, 21), // "thermalOpacityChanged"
QT_MOC_LITERAL(28, 499, 20), // "storageStatusChanged"
QT_MOC_LITERAL(29, 520, 14), // "_initWhenReady"
QT_MOC_LITERAL(30, 535, 22), // "_requestCameraSettings"
QT_MOC_LITERAL(31, 558, 21), // "_requestAllParameters"
QT_MOC_LITERAL(32, 580, 20), // "_requestParamUpdates"
QT_MOC_LITERAL(33, 601, 21), // "_requestCaptureStatus"
QT_MOC_LITERAL(34, 623, 19), // "_requestStorageInfo"
QT_MOC_LITERAL(35, 643, 17), // "_downloadFinished"
QT_MOC_LITERAL(36, 661, 17), // "_mavCommandResult"
QT_MOC_LITERAL(37, 679, 9), // "vehicleId"
QT_MOC_LITERAL(38, 689, 9), // "component"
QT_MOC_LITERAL(39, 699, 7), // "command"
QT_MOC_LITERAL(40, 707, 6), // "result"
QT_MOC_LITERAL(41, 714, 20), // "noReponseFromVehicle"
QT_MOC_LITERAL(42, 735, 10), // "_dataReady"
QT_MOC_LITERAL(43, 746, 10), // "_paramDone"
QT_MOC_LITERAL(44, 757, 18), // "_streamInfoTimeout"
QT_MOC_LITERAL(45, 776, 20), // "_streamStatusTimeout"
QT_MOC_LITERAL(46, 797, 16), // "_recTimerHandler"
QT_MOC_LITERAL(47, 814, 21), // "_checkForVideoStreams"
QT_MOC_LITERAL(48, 836, 12), // "setVideoMode"
QT_MOC_LITERAL(49, 849, 12), // "setPhotoMode"
QT_MOC_LITERAL(50, 862, 10), // "toggleMode"
QT_MOC_LITERAL(51, 873, 9), // "takePhoto"
QT_MOC_LITERAL(52, 883, 13), // "stopTakePhoto"
QT_MOC_LITERAL(53, 897, 10), // "startVideo"
QT_MOC_LITERAL(54, 908, 9), // "stopVideo"
QT_MOC_LITERAL(55, 918, 11), // "toggleVideo"
QT_MOC_LITERAL(56, 930, 13), // "resetSettings"
QT_MOC_LITERAL(57, 944, 10), // "formatCard"
QT_MOC_LITERAL(58, 955, 2), // "id"
QT_MOC_LITERAL(59, 958, 8), // "stepZoom"
QT_MOC_LITERAL(60, 967, 9), // "direction"
QT_MOC_LITERAL(61, 977, 9), // "startZoom"
QT_MOC_LITERAL(62, 987, 8), // "stopZoom"
QT_MOC_LITERAL(63, 996, 10), // "stopStream"
QT_MOC_LITERAL(64, 1007, 12), // "resumeStream"
QT_MOC_LITERAL(65, 1020, 13), // "startTracking"
QT_MOC_LITERAL(66, 1034, 3), // "rec"
QT_MOC_LITERAL(67, 1038, 5), // "point"
QT_MOC_LITERAL(68, 1044, 6), // "radius"
QT_MOC_LITERAL(69, 1051, 12), // "stopTracking"
QT_MOC_LITERAL(70, 1064, 7), // "version"
QT_MOC_LITERAL(71, 1072, 9), // "modelName"
QT_MOC_LITERAL(72, 1082, 6), // "vendor"
QT_MOC_LITERAL(73, 1089, 15), // "firmwareVersion"
QT_MOC_LITERAL(74, 1105, 11), // "focalLength"
QT_MOC_LITERAL(75, 1117, 10), // "sensorSize"
QT_MOC_LITERAL(76, 1128, 10), // "resolution"
QT_MOC_LITERAL(77, 1139, 13), // "capturesVideo"
QT_MOC_LITERAL(78, 1153, 14), // "capturesPhotos"
QT_MOC_LITERAL(79, 1168, 8), // "hasModes"
QT_MOC_LITERAL(80, 1177, 7), // "hasZoom"
QT_MOC_LITERAL(81, 1185, 8), // "hasFocus"
QT_MOC_LITERAL(82, 1194, 14), // "hasVideoStream"
QT_MOC_LITERAL(83, 1209, 11), // "hasTracking"
QT_MOC_LITERAL(84, 1221, 17), // "photosInVideoMode"
QT_MOC_LITERAL(85, 1239, 16), // "videoInPhotoMode"
QT_MOC_LITERAL(86, 1256, 7), // "isBasic"
QT_MOC_LITERAL(87, 1264, 11), // "storageFree"
QT_MOC_LITERAL(88, 1276, 14), // "storageFreeStr"
QT_MOC_LITERAL(89, 1291, 12), // "storageTotal"
QT_MOC_LITERAL(90, 1304, 16), // "batteryRemaining"
QT_MOC_LITERAL(91, 1321, 19), // "batteryRemainingStr"
QT_MOC_LITERAL(92, 1341, 13), // "paramComplete"
QT_MOC_LITERAL(93, 1355, 9), // "zoomLevel"
QT_MOC_LITERAL(94, 1365, 10), // "focusLevel"
QT_MOC_LITERAL(95, 1376, 12), // "exposureMode"
QT_MOC_LITERAL(96, 1389, 5), // "Fact*"
QT_MOC_LITERAL(97, 1395, 2), // "ev"
QT_MOC_LITERAL(98, 1398, 3), // "iso"
QT_MOC_LITERAL(99, 1402, 12), // "shutterSpeed"
QT_MOC_LITERAL(100, 1415, 8), // "aperture"
QT_MOC_LITERAL(101, 1424, 2), // "wb"
QT_MOC_LITERAL(102, 1427, 4), // "mode"
QT_MOC_LITERAL(103, 1432, 14), // "activeSettings"
QT_MOC_LITERAL(104, 1447, 11), // "videoStatus"
QT_MOC_LITERAL(105, 1459, 11), // "VideoStatus"
QT_MOC_LITERAL(106, 1471, 11), // "photoStatus"
QT_MOC_LITERAL(107, 1483, 11), // "PhotoStatus"
QT_MOC_LITERAL(108, 1495, 10), // "cameraMode"
QT_MOC_LITERAL(109, 1506, 10), // "CameraMode"
QT_MOC_LITERAL(110, 1517, 13), // "storageStatus"
QT_MOC_LITERAL(111, 1531, 13), // "StorageStatus"
QT_MOC_LITERAL(112, 1545, 10), // "photoLapse"
QT_MOC_LITERAL(113, 1556, 15), // "photoLapseCount"
QT_MOC_LITERAL(114, 1572, 9), // "photoMode"
QT_MOC_LITERAL(115, 1582, 9), // "PhotoMode"
QT_MOC_LITERAL(116, 1592, 13), // "currentStream"
QT_MOC_LITERAL(117, 1606, 10), // "autoStream"
QT_MOC_LITERAL(118, 1617, 7), // "streams"
QT_MOC_LITERAL(119, 1625, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(120, 1645, 21), // "currentStreamInstance"
QT_MOC_LITERAL(121, 1667, 19), // "QGCVideoStreamInfo*"
QT_MOC_LITERAL(122, 1687, 21), // "thermalStreamInstance"
QT_MOC_LITERAL(123, 1709, 10), // "recordTime"
QT_MOC_LITERAL(124, 1720, 13), // "recordTimeStr"
QT_MOC_LITERAL(125, 1734, 12), // "streamLabels"
QT_MOC_LITERAL(126, 1747, 11), // "thermalMode"
QT_MOC_LITERAL(127, 1759, 15), // "ThermalViewMode"
QT_MOC_LITERAL(128, 1775, 14), // "thermalOpacity"
QT_MOC_LITERAL(129, 1790, 15), // "trackingEnabled"
QT_MOC_LITERAL(130, 1806, 14), // "trackingStatus"
QT_MOC_LITERAL(131, 1821, 14), // "TrackingStatus"
QT_MOC_LITERAL(132, 1836, 19), // "trackingImageStatus"
QT_MOC_LITERAL(133, 1856, 17), // "trackingImageRect"
QT_MOC_LITERAL(134, 1874, 18), // "CAM_MODE_UNDEFINED"
QT_MOC_LITERAL(135, 1893, 14), // "CAM_MODE_PHOTO"
QT_MOC_LITERAL(136, 1908, 14), // "CAM_MODE_VIDEO"
QT_MOC_LITERAL(137, 1923, 15), // "CAM_MODE_SURVEY"
QT_MOC_LITERAL(138, 1939, 28), // "VIDEO_CAPTURE_STATUS_STOPPED"
QT_MOC_LITERAL(139, 1968, 28), // "VIDEO_CAPTURE_STATUS_RUNNING"
QT_MOC_LITERAL(140, 1997, 25), // "VIDEO_CAPTURE_STATUS_LAST"
QT_MOC_LITERAL(141, 2023, 30), // "VIDEO_CAPTURE_STATUS_UNDEFINED"
QT_MOC_LITERAL(142, 2054, 18), // "PHOTO_CAPTURE_IDLE"
QT_MOC_LITERAL(143, 2073, 25), // "PHOTO_CAPTURE_IN_PROGRESS"
QT_MOC_LITERAL(144, 2099, 27), // "PHOTO_CAPTURE_INTERVAL_IDLE"
QT_MOC_LITERAL(145, 2127, 34), // "PHOTO_CAPTURE_INTERVAL_IN_PRO..."
QT_MOC_LITERAL(146, 2162, 18), // "PHOTO_CAPTURE_LAST"
QT_MOC_LITERAL(147, 2181, 30), // "PHOTO_CAPTURE_STATUS_UNDEFINED"
QT_MOC_LITERAL(148, 2212, 20), // "PHOTO_CAPTURE_SINGLE"
QT_MOC_LITERAL(149, 2233, 23), // "PHOTO_CAPTURE_TIMELAPSE"
QT_MOC_LITERAL(150, 2257, 13), // "STORAGE_EMPTY"
QT_MOC_LITERAL(151, 2271, 19), // "STORAGE_UNFORMATTED"
QT_MOC_LITERAL(152, 2291, 13), // "STORAGE_READY"
QT_MOC_LITERAL(153, 2305, 21), // "STORAGE_NOT_SUPPORTED"
QT_MOC_LITERAL(154, 2327, 11), // "THERMAL_OFF"
QT_MOC_LITERAL(155, 2339, 13), // "THERMAL_BLEND"
QT_MOC_LITERAL(156, 2353, 12), // "THERMAL_FULL"
QT_MOC_LITERAL(157, 2366, 11), // "THERMAL_PIP"
QT_MOC_LITERAL(158, 2378, 16), // "TRACKING_UNKNOWN"
QT_MOC_LITERAL(159, 2395, 18), // "TRACKING_SUPPORTED"
QT_MOC_LITERAL(160, 2414, 16), // "TRACKING_ENABLED"
QT_MOC_LITERAL(161, 2431, 18), // "TRACKING_RECTANGLE"
QT_MOC_LITERAL(162, 2450, 14) // "TRACKING_POINT"

    },
    "QGCCameraControl\0infoChanged\0\0"
    "videoStatusChanged\0photoStatusChanged\0"
    "photoModeChanged\0photoLapseChanged\0"
    "photoLapseCountChanged\0cameraModeChanged\0"
    "activeSettingsChanged\0storageFreeChanged\0"
    "storageTotalChanged\0batteryRemainingChanged\0"
    "dataReady\0data\0parametersReady\0"
    "zoomLevelChanged\0focusLevelChanged\0"
    "streamsChanged\0currentStreamChanged\0"
    "thermalStreamChanged\0autoStreamChanged\0"
    "recordTimeChanged\0streamLabelsChanged\0"
    "trackingEnabledChanged\0"
    "trackingImageStatusChanged\0"
    "thermalModeChanged\0thermalOpacityChanged\0"
    "storageStatusChanged\0_initWhenReady\0"
    "_requestCameraSettings\0_requestAllParameters\0"
    "_requestParamUpdates\0_requestCaptureStatus\0"
    "_requestStorageInfo\0_downloadFinished\0"
    "_mavCommandResult\0vehicleId\0component\0"
    "command\0result\0noReponseFromVehicle\0"
    "_dataReady\0_paramDone\0_streamInfoTimeout\0"
    "_streamStatusTimeout\0_recTimerHandler\0"
    "_checkForVideoStreams\0setVideoMode\0"
    "setPhotoMode\0toggleMode\0takePhoto\0"
    "stopTakePhoto\0startVideo\0stopVideo\0"
    "toggleVideo\0resetSettings\0formatCard\0"
    "id\0stepZoom\0direction\0startZoom\0"
    "stopZoom\0stopStream\0resumeStream\0"
    "startTracking\0rec\0point\0radius\0"
    "stopTracking\0version\0modelName\0vendor\0"
    "firmwareVersion\0focalLength\0sensorSize\0"
    "resolution\0capturesVideo\0capturesPhotos\0"
    "hasModes\0hasZoom\0hasFocus\0hasVideoStream\0"
    "hasTracking\0photosInVideoMode\0"
    "videoInPhotoMode\0isBasic\0storageFree\0"
    "storageFreeStr\0storageTotal\0"
    "batteryRemaining\0batteryRemainingStr\0"
    "paramComplete\0zoomLevel\0focusLevel\0"
    "exposureMode\0Fact*\0ev\0iso\0shutterSpeed\0"
    "aperture\0wb\0mode\0activeSettings\0"
    "videoStatus\0VideoStatus\0photoStatus\0"
    "PhotoStatus\0cameraMode\0CameraMode\0"
    "storageStatus\0StorageStatus\0photoLapse\0"
    "photoLapseCount\0photoMode\0PhotoMode\0"
    "currentStream\0autoStream\0streams\0"
    "QmlObjectListModel*\0currentStreamInstance\0"
    "QGCVideoStreamInfo*\0thermalStreamInstance\0"
    "recordTime\0recordTimeStr\0streamLabels\0"
    "thermalMode\0ThermalViewMode\0thermalOpacity\0"
    "trackingEnabled\0trackingStatus\0"
    "TrackingStatus\0trackingImageStatus\0"
    "trackingImageRect\0CAM_MODE_UNDEFINED\0"
    "CAM_MODE_PHOTO\0CAM_MODE_VIDEO\0"
    "CAM_MODE_SURVEY\0VIDEO_CAPTURE_STATUS_STOPPED\0"
    "VIDEO_CAPTURE_STATUS_RUNNING\0"
    "VIDEO_CAPTURE_STATUS_LAST\0"
    "VIDEO_CAPTURE_STATUS_UNDEFINED\0"
    "PHOTO_CAPTURE_IDLE\0PHOTO_CAPTURE_IN_PROGRESS\0"
    "PHOTO_CAPTURE_INTERVAL_IDLE\0"
    "PHOTO_CAPTURE_INTERVAL_IN_PROGRESS\0"
    "PHOTO_CAPTURE_LAST\0PHOTO_CAPTURE_STATUS_UNDEFINED\0"
    "PHOTO_CAPTURE_SINGLE\0PHOTO_CAPTURE_TIMELAPSE\0"
    "STORAGE_EMPTY\0STORAGE_UNFORMATTED\0"
    "STORAGE_READY\0STORAGE_NOT_SUPPORTED\0"
    "THERMAL_OFF\0THERMAL_BLEND\0THERMAL_FULL\0"
    "THERMAL_PIP\0TRACKING_UNKNOWN\0"
    "TRACKING_SUPPORTED\0TRACKING_ENABLED\0"
    "TRACKING_RECTANGLE\0TRACKING_POINT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCameraControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
      54,  394, // properties
       7,  610, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  309,    2, 0x06 /* Public */,
       3,    0,  310,    2, 0x06 /* Public */,
       4,    0,  311,    2, 0x06 /* Public */,
       5,    0,  312,    2, 0x06 /* Public */,
       6,    0,  313,    2, 0x06 /* Public */,
       7,    0,  314,    2, 0x06 /* Public */,
       8,    0,  315,    2, 0x06 /* Public */,
       9,    0,  316,    2, 0x06 /* Public */,
      10,    0,  317,    2, 0x06 /* Public */,
      11,    0,  318,    2, 0x06 /* Public */,
      12,    0,  319,    2, 0x06 /* Public */,
      13,    1,  320,    2, 0x06 /* Public */,
      15,    0,  323,    2, 0x06 /* Public */,
      16,    0,  324,    2, 0x06 /* Public */,
      17,    0,  325,    2, 0x06 /* Public */,
      18,    0,  326,    2, 0x06 /* Public */,
      19,    0,  327,    2, 0x06 /* Public */,
      20,    0,  328,    2, 0x06 /* Public */,
      21,    0,  329,    2, 0x06 /* Public */,
      22,    0,  330,    2, 0x06 /* Public */,
      23,    0,  331,    2, 0x06 /* Public */,
      24,    0,  332,    2, 0x06 /* Public */,
      25,    0,  333,    2, 0x06 /* Public */,
      26,    0,  334,    2, 0x06 /* Public */,
      27,    0,  335,    2, 0x06 /* Public */,
      28,    0,  336,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    0,  337,    2, 0x09 /* Protected */,
      30,    0,  338,    2, 0x09 /* Protected */,
      31,    0,  339,    2, 0x09 /* Protected */,
      32,    0,  340,    2, 0x09 /* Protected */,
      33,    0,  341,    2, 0x09 /* Protected */,
      34,    0,  342,    2, 0x09 /* Protected */,
      35,    0,  343,    2, 0x09 /* Protected */,
      36,    5,  344,    2, 0x09 /* Protected */,
      42,    1,  355,    2, 0x09 /* Protected */,
      43,    0,  358,    2, 0x09 /* Protected */,
      44,    0,  359,    2, 0x09 /* Protected */,
      45,    0,  360,    2, 0x09 /* Protected */,
      46,    0,  361,    2, 0x09 /* Protected */,
      47,    0,  362,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      48,    0,  363,    2, 0x02 /* Public */,
      49,    0,  364,    2, 0x02 /* Public */,
      50,    0,  365,    2, 0x02 /* Public */,
      51,    0,  366,    2, 0x02 /* Public */,
      52,    0,  367,    2, 0x02 /* Public */,
      53,    0,  368,    2, 0x02 /* Public */,
      54,    0,  369,    2, 0x02 /* Public */,
      55,    0,  370,    2, 0x02 /* Public */,
      56,    0,  371,    2, 0x02 /* Public */,
      57,    1,  372,    2, 0x02 /* Public */,
      57,    0,  375,    2, 0x22 /* Public | MethodCloned */,
      59,    1,  376,    2, 0x02 /* Public */,
      61,    1,  379,    2, 0x02 /* Public */,
      62,    0,  382,    2, 0x02 /* Public */,
      63,    0,  383,    2, 0x02 /* Public */,
      64,    0,  384,    2, 0x02 /* Public */,
      65,    1,  385,    2, 0x02 /* Public */,
      65,    2,  388,    2, 0x02 /* Public */,
      69,    0,  393,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   14,
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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   37,   38,   39,   40,   41,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,   66,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Double,   67,   68,
    QMetaType::Void,

 // properties: name, type, flags
      70, QMetaType::Int, 0x00495001,
      71, QMetaType::QString, 0x00495001,
      72, QMetaType::QString, 0x00495001,
      73, QMetaType::QString, 0x00495001,
      74, QMetaType::QReal, 0x00495001,
      75, QMetaType::QSizeF, 0x00495001,
      76, QMetaType::QSize, 0x00495001,
      77, QMetaType::Bool, 0x00495001,
      78, QMetaType::Bool, 0x00495001,
      79, QMetaType::Bool, 0x00495001,
      80, QMetaType::Bool, 0x00495001,
      81, QMetaType::Bool, 0x00495001,
      82, QMetaType::Bool, 0x00495001,
      83, QMetaType::Bool, 0x00495001,
      84, QMetaType::Bool, 0x00495001,
      85, QMetaType::Bool, 0x00495001,
      86, QMetaType::Bool, 0x00495001,
      87, QMetaType::UInt, 0x00495001,
      88, QMetaType::QString, 0x00495001,
      89, QMetaType::UInt, 0x00495001,
      90, QMetaType::Int, 0x00495001,
      91, QMetaType::QString, 0x00495001,
      92, QMetaType::Bool, 0x00495001,
      93, QMetaType::QReal, 0x00495103,
      94, QMetaType::QReal, 0x00495103,
      95, 0x80000000 | 96, 0x00495009,
      97, 0x80000000 | 96, 0x00495009,
      98, 0x80000000 | 96, 0x00495009,
      99, 0x80000000 | 96, 0x00495009,
     100, 0x80000000 | 96, 0x00495009,
     101, 0x80000000 | 96, 0x00495009,
     102, 0x80000000 | 96, 0x00495009,
     103, QMetaType::QStringList, 0x00495001,
     104, 0x80000000 | 105, 0x00495009,
     106, 0x80000000 | 107, 0x00495009,
     108, 0x80000000 | 109, 0x0049510b,
     110, 0x80000000 | 111, 0x00495009,
     112, QMetaType::QReal, 0x00495103,
     113, QMetaType::Int, 0x00495103,
     114, 0x80000000 | 115, 0x0049510b,
     116, QMetaType::Int, 0x00495103,
     117, QMetaType::Bool, 0x00495001,
     118, 0x80000000 | 119, 0x00495009,
     120, 0x80000000 | 121, 0x00495009,
     122, 0x80000000 | 121, 0x00495009,
     123, QMetaType::UInt, 0x00495001,
     124, QMetaType::QString, 0x00495001,
     125, QMetaType::QStringList, 0x00495001,
     126, 0x80000000 | 127, 0x0049510b,
     128, QMetaType::Double, 0x00495103,
     129, QMetaType::Bool, 0x00495103,
     130, 0x80000000 | 131, 0x00095409,
     132, QMetaType::Bool, 0x00495001,
     133, QMetaType::QRectF, 0x00495001,

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
       8,
       8,
       9,
      10,
      10,
      12,
      13,
      14,
      12,
      12,
      12,
      12,
      12,
      12,
      12,
       7,
       1,
       2,
       6,
      25,
       4,
       5,
       3,
      16,
      18,
      15,
      16,
      17,
      19,
      19,
      20,
      23,
      24,
      21,
       0,
      22,
      22,

 // enums: name, alias, flags, count, data
     109,  109, 0x0,    4,  645,
     105,  105, 0x0,    4,  653,
     107,  107, 0x0,    6,  661,
     115,  115, 0x0,    2,  673,
     111,  111, 0x0,    4,  677,
     127,  127, 0x0,    4,  685,
     131,  131, 0x0,    5,  693,

 // enum data: key, value
     134, uint(QGCCameraControl::CAM_MODE_UNDEFINED),
     135, uint(QGCCameraControl::CAM_MODE_PHOTO),
     136, uint(QGCCameraControl::CAM_MODE_VIDEO),
     137, uint(QGCCameraControl::CAM_MODE_SURVEY),
     138, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_STOPPED),
     139, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_RUNNING),
     140, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_LAST),
     141, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_UNDEFINED),
     142, uint(QGCCameraControl::PHOTO_CAPTURE_IDLE),
     143, uint(QGCCameraControl::PHOTO_CAPTURE_IN_PROGRESS),
     144, uint(QGCCameraControl::PHOTO_CAPTURE_INTERVAL_IDLE),
     145, uint(QGCCameraControl::PHOTO_CAPTURE_INTERVAL_IN_PROGRESS),
     146, uint(QGCCameraControl::PHOTO_CAPTURE_LAST),
     147, uint(QGCCameraControl::PHOTO_CAPTURE_STATUS_UNDEFINED),
     148, uint(QGCCameraControl::PHOTO_CAPTURE_SINGLE),
     149, uint(QGCCameraControl::PHOTO_CAPTURE_TIMELAPSE),
     150, uint(QGCCameraControl::STORAGE_EMPTY),
     151, uint(QGCCameraControl::STORAGE_UNFORMATTED),
     152, uint(QGCCameraControl::STORAGE_READY),
     153, uint(QGCCameraControl::STORAGE_NOT_SUPPORTED),
     154, uint(QGCCameraControl::THERMAL_OFF),
     155, uint(QGCCameraControl::THERMAL_BLEND),
     156, uint(QGCCameraControl::THERMAL_FULL),
     157, uint(QGCCameraControl::THERMAL_PIP),
     158, uint(QGCCameraControl::TRACKING_UNKNOWN),
     159, uint(QGCCameraControl::TRACKING_SUPPORTED),
     160, uint(QGCCameraControl::TRACKING_ENABLED),
     161, uint(QGCCameraControl::TRACKING_RECTANGLE),
     162, uint(QGCCameraControl::TRACKING_POINT),

       0        // eod
};

void QGCCameraControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        case 1: _t->videoStatusChanged(); break;
        case 2: _t->photoStatusChanged(); break;
        case 3: _t->photoModeChanged(); break;
        case 4: _t->photoLapseChanged(); break;
        case 5: _t->photoLapseCountChanged(); break;
        case 6: _t->cameraModeChanged(); break;
        case 7: _t->activeSettingsChanged(); break;
        case 8: _t->storageFreeChanged(); break;
        case 9: _t->storageTotalChanged(); break;
        case 10: _t->batteryRemainingChanged(); break;
        case 11: _t->dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 12: _t->parametersReady(); break;
        case 13: _t->zoomLevelChanged(); break;
        case 14: _t->focusLevelChanged(); break;
        case 15: _t->streamsChanged(); break;
        case 16: _t->currentStreamChanged(); break;
        case 17: _t->thermalStreamChanged(); break;
        case 18: _t->autoStreamChanged(); break;
        case 19: _t->recordTimeChanged(); break;
        case 20: _t->streamLabelsChanged(); break;
        case 21: _t->trackingEnabledChanged(); break;
        case 22: _t->trackingImageStatusChanged(); break;
        case 23: _t->thermalModeChanged(); break;
        case 24: _t->thermalOpacityChanged(); break;
        case 25: _t->storageStatusChanged(); break;
        case 26: _t->_initWhenReady(); break;
        case 27: _t->_requestCameraSettings(); break;
        case 28: _t->_requestAllParameters(); break;
        case 29: _t->_requestParamUpdates(); break;
        case 30: _t->_requestCaptureStatus(); break;
        case 31: _t->_requestStorageInfo(); break;
        case 32: _t->_downloadFinished(); break;
        case 33: _t->_mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 34: _t->_dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 35: _t->_paramDone(); break;
        case 36: _t->_streamInfoTimeout(); break;
        case 37: _t->_streamStatusTimeout(); break;
        case 38: _t->_recTimerHandler(); break;
        case 39: _t->_checkForVideoStreams(); break;
        case 40: _t->setVideoMode(); break;
        case 41: _t->setPhotoMode(); break;
        case 42: _t->toggleMode(); break;
        case 43: { bool _r = _t->takePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->stopTakePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->startVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->stopVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->toggleVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->resetSettings(); break;
        case 49: _t->formatCard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->formatCard(); break;
        case 51: _t->stepZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->startZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->stopZoom(); break;
        case 54: _t->stopStream(); break;
        case 55: _t->resumeStream(); break;
        case 56: _t->startTracking((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 57: _t->startTracking((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 58: _t->stopTracking(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::infoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::videoStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoLapseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoLapseCountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::cameraModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::activeSettingsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageFreeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageTotalChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::batteryRemainingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::dataReady)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::parametersReady)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::zoomLevelChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::focusLevelChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::streamsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::currentStreamChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::thermalStreamChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::autoStreamChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::recordTimeChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::streamLabelsChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::trackingEnabledChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::trackingImageStatusChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::thermalModeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::thermalOpacityChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageStatusChanged)) {
                *result = 25;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 44:
        case 43:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCVideoStreamInfo* >(); break;
        case 42:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->version(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->modelName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->vendor(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->firmwareVersion(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->focalLength(); break;
        case 5: *reinterpret_cast< QSizeF*>(_v) = _t->sensorSize(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->capturesVideo(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->capturesPhotos(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasModes(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->hasZoom(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->hasFocus(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasVideoStream(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->hasTracking(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->photosInVideoMode(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->videoInPhotoMode(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isBasic(); break;
        case 17: *reinterpret_cast< quint32*>(_v) = _t->storageFree(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->storageFreeStr(); break;
        case 19: *reinterpret_cast< quint32*>(_v) = _t->storageTotal(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->batteryRemaining(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->batteryRemainingStr(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->paramComplete(); break;
        case 23: *reinterpret_cast< qreal*>(_v) = _t->zoomLevel(); break;
        case 24: *reinterpret_cast< qreal*>(_v) = _t->focusLevel(); break;
        case 25: *reinterpret_cast< Fact**>(_v) = _t->exposureMode(); break;
        case 26: *reinterpret_cast< Fact**>(_v) = _t->ev(); break;
        case 27: *reinterpret_cast< Fact**>(_v) = _t->iso(); break;
        case 28: *reinterpret_cast< Fact**>(_v) = _t->shutterSpeed(); break;
        case 29: *reinterpret_cast< Fact**>(_v) = _t->aperture(); break;
        case 30: *reinterpret_cast< Fact**>(_v) = _t->wb(); break;
        case 31: *reinterpret_cast< Fact**>(_v) = _t->mode(); break;
        case 32: *reinterpret_cast< QStringList*>(_v) = _t->activeSettings(); break;
        case 33: *reinterpret_cast< VideoStatus*>(_v) = _t->videoStatus(); break;
        case 34: *reinterpret_cast< PhotoStatus*>(_v) = _t->photoStatus(); break;
        case 35: *reinterpret_cast< CameraMode*>(_v) = _t->cameraMode(); break;
        case 36: *reinterpret_cast< StorageStatus*>(_v) = _t->storageStatus(); break;
        case 37: *reinterpret_cast< qreal*>(_v) = _t->photoLapse(); break;
        case 38: *reinterpret_cast< int*>(_v) = _t->photoLapseCount(); break;
        case 39: *reinterpret_cast< PhotoMode*>(_v) = _t->photoMode(); break;
        case 40: *reinterpret_cast< int*>(_v) = _t->currentStream(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->autoStream(); break;
        case 42: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->streams(); break;
        case 43: *reinterpret_cast< QGCVideoStreamInfo**>(_v) = _t->currentStreamInstance(); break;
        case 44: *reinterpret_cast< QGCVideoStreamInfo**>(_v) = _t->thermalStreamInstance(); break;
        case 45: *reinterpret_cast< quint32*>(_v) = _t->recordTime(); break;
        case 46: *reinterpret_cast< QString*>(_v) = _t->recordTimeStr(); break;
        case 47: *reinterpret_cast< QStringList*>(_v) = _t->streamLabels(); break;
        case 48: *reinterpret_cast< ThermalViewMode*>(_v) = _t->thermalMode(); break;
        case 49: *reinterpret_cast< double*>(_v) = _t->thermalOpacity(); break;
        case 50: *reinterpret_cast< bool*>(_v) = _t->trackingEnabled(); break;
        case 51: *reinterpret_cast< TrackingStatus*>(_v) = _t->trackingStatus(); break;
        case 52: *reinterpret_cast< bool*>(_v) = _t->trackingImageStatus(); break;
        case 53: *reinterpret_cast< QRectF*>(_v) = _t->trackingImageRect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 23: _t->setZoomLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 24: _t->setFocusLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 35: _t->setCameraMode(*reinterpret_cast< CameraMode*>(_v)); break;
        case 37: _t->setPhotoLapse(*reinterpret_cast< qreal*>(_v)); break;
        case 38: _t->setPhotoLapseCount(*reinterpret_cast< int*>(_v)); break;
        case 39: _t->setPhotoMode(*reinterpret_cast< PhotoMode*>(_v)); break;
        case 40: _t->setCurrentStream(*reinterpret_cast< int*>(_v)); break;
        case 48: _t->setThermalMode(*reinterpret_cast< ThermalViewMode*>(_v)); break;
        case 49: _t->setThermalOpacity(*reinterpret_cast< double*>(_v)); break;
        case 50: _t->setTrackingEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCCameraControl::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_QGCCameraControl.data,
    qt_meta_data_QGCCameraControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCCameraControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCameraControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCameraControl.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int QGCCameraControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 59;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 54;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 54;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 54;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 54;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 54;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCCameraControl::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCameraControl::videoStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCameraControl::photoStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCCameraControl::photoModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCCameraControl::photoLapseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCCameraControl::photoLapseCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCCameraControl::cameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCCameraControl::activeSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCCameraControl::storageFreeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCCameraControl::storageTotalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCCameraControl::batteryRemainingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCCameraControl::dataReady(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QGCCameraControl::parametersReady()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QGCCameraControl::zoomLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QGCCameraControl::focusLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QGCCameraControl::streamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QGCCameraControl::currentStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QGCCameraControl::thermalStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QGCCameraControl::autoStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QGCCameraControl::recordTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QGCCameraControl::streamLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void QGCCameraControl::trackingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QGCCameraControl::trackingImageStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void QGCCameraControl::thermalModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void QGCCameraControl::thermalOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void QGCCameraControl::storageStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
