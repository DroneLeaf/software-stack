/****************************************************************************
** Meta object code from reading C++ file 'QGCCameraManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Camera/QGCCameraManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCCameraManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCCameraManager_t {
    QByteArrayData data[31];
    char stringdata0[453];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCameraManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCameraManager_t qt_meta_stringdata_QGCCameraManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGCCameraManager"
QT_MOC_LITERAL(1, 17, 14), // "camerasChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "cameraLabelsChanged"
QT_MOC_LITERAL(4, 53, 20), // "currentCameraChanged"
QT_MOC_LITERAL(5, 74, 13), // "streamChanged"
QT_MOC_LITERAL(6, 88, 13), // "_vehicleReady"
QT_MOC_LITERAL(7, 102, 5), // "ready"
QT_MOC_LITERAL(8, 108, 23), // "_mavlinkMessageReceived"
QT_MOC_LITERAL(9, 132, 17), // "mavlink_message_t"
QT_MOC_LITERAL(10, 150, 7), // "message"
QT_MOC_LITERAL(11, 158, 22), // "_activeJoystickChanged"
QT_MOC_LITERAL(12, 181, 9), // "Joystick*"
QT_MOC_LITERAL(13, 191, 8), // "joystick"
QT_MOC_LITERAL(14, 200, 9), // "_stepZoom"
QT_MOC_LITERAL(15, 210, 9), // "direction"
QT_MOC_LITERAL(16, 220, 10), // "_startZoom"
QT_MOC_LITERAL(17, 231, 9), // "_stopZoom"
QT_MOC_LITERAL(18, 241, 11), // "_stepCamera"
QT_MOC_LITERAL(19, 253, 11), // "_stepStream"
QT_MOC_LITERAL(20, 265, 14), // "_cameraTimeout"
QT_MOC_LITERAL(21, 280, 14), // "_triggerCamera"
QT_MOC_LITERAL(22, 295, 20), // "_startVideoRecording"
QT_MOC_LITERAL(23, 316, 19), // "_stopVideoRecording"
QT_MOC_LITERAL(24, 336, 21), // "_toggleVideoRecording"
QT_MOC_LITERAL(25, 358, 7), // "cameras"
QT_MOC_LITERAL(26, 366, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(27, 386, 12), // "cameraLabels"
QT_MOC_LITERAL(28, 399, 21), // "currentCameraInstance"
QT_MOC_LITERAL(29, 421, 17), // "QGCCameraControl*"
QT_MOC_LITERAL(30, 439, 13) // "currentCamera"

    },
    "QGCCameraManager\0camerasChanged\0\0"
    "cameraLabelsChanged\0currentCameraChanged\0"
    "streamChanged\0_vehicleReady\0ready\0"
    "_mavlinkMessageReceived\0mavlink_message_t\0"
    "message\0_activeJoystickChanged\0Joystick*\0"
    "joystick\0_stepZoom\0direction\0_startZoom\0"
    "_stopZoom\0_stepCamera\0_stepStream\0"
    "_cameraTimeout\0_triggerCamera\0"
    "_startVideoRecording\0_stopVideoRecording\0"
    "_toggleVideoRecording\0cameras\0"
    "QmlObjectListModel*\0cameraLabels\0"
    "currentCameraInstance\0QGCCameraControl*\0"
    "currentCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCameraManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       4,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  103,    2, 0x09 /* Protected */,
       8,    1,  106,    2, 0x09 /* Protected */,
      11,    1,  109,    2, 0x09 /* Protected */,
      14,    1,  112,    2, 0x09 /* Protected */,
      16,    1,  115,    2, 0x09 /* Protected */,
      17,    0,  118,    2, 0x09 /* Protected */,
      18,    1,  119,    2, 0x09 /* Protected */,
      19,    1,  122,    2, 0x09 /* Protected */,
      20,    0,  125,    2, 0x09 /* Protected */,
      21,    0,  126,    2, 0x09 /* Protected */,
      22,    0,  127,    2, 0x09 /* Protected */,
      23,    0,  128,    2, 0x09 /* Protected */,
      24,    0,  129,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 26, 0x00495009,
      27, QMetaType::QStringList, 0x00495001,
      28, 0x80000000 | 29, 0x00495009,
      30, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       2,

       0        // eod
};

void QGCCameraManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCCameraManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->camerasChanged(); break;
        case 1: _t->cameraLabelsChanged(); break;
        case 2: _t->currentCameraChanged(); break;
        case 3: _t->streamChanged(); break;
        case 4: _t->_vehicleReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->_mavlinkMessageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        case 6: _t->_activeJoystickChanged((*reinterpret_cast< Joystick*(*)>(_a[1]))); break;
        case 7: _t->_stepZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->_startZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->_stopZoom(); break;
        case 10: _t->_stepCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->_stepStream((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->_cameraTimeout(); break;
        case 13: _t->_triggerCamera(); break;
        case 14: _t->_startVideoRecording(); break;
        case 15: _t->_stopVideoRecording(); break;
        case 16: _t->_toggleVideoRecording(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Joystick* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCCameraManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraManager::camerasChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCCameraManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraManager::cameraLabelsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCCameraManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraManager::currentCameraChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCCameraManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraManager::streamChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCameraControl* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCCameraManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->cameras(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->cameraLabels(); break;
        case 2: *reinterpret_cast< QGCCameraControl**>(_v) = _t->currentCameraInstance(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentCamera(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCCameraManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setCurrentCamera(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCCameraManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCCameraManager.data,
    qt_meta_data_QGCCameraManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCCameraManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCameraManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCameraManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCCameraManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCCameraManager::camerasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCameraManager::cameraLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCameraManager::currentCameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCCameraManager::streamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
