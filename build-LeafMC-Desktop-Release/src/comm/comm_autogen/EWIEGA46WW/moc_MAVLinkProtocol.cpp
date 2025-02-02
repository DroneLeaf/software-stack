/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/comm/MAVLinkProtocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkProtocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MAVLinkProtocol_t {
    QByteArrayData data[47];
    char stringdata0[587];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkProtocol_t qt_meta_stringdata_MAVLinkProtocol = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MAVLinkProtocol"
QT_MOC_LITERAL(1, 16, 20), // "vehicleHeartbeatInfo"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 53, 4), // "link"
QT_MOC_LITERAL(5, 58, 9), // "vehicleId"
QT_MOC_LITERAL(6, 68, 11), // "componentId"
QT_MOC_LITERAL(7, 80, 19), // "vehicleFirmwareType"
QT_MOC_LITERAL(8, 100, 11), // "vehicleType"
QT_MOC_LITERAL(9, 112, 15), // "messageReceived"
QT_MOC_LITERAL(10, 128, 17), // "mavlink_message_t"
QT_MOC_LITERAL(11, 146, 7), // "message"
QT_MOC_LITERAL(12, 154, 19), // "versionCheckChanged"
QT_MOC_LITERAL(13, 174, 7), // "enabled"
QT_MOC_LITERAL(14, 182, 21), // "protocolStatusMessage"
QT_MOC_LITERAL(15, 204, 5), // "title"
QT_MOC_LITERAL(16, 210, 15), // "systemIdChanged"
QT_MOC_LITERAL(17, 226, 8), // "systemId"
QT_MOC_LITERAL(18, 235, 20), // "mavlinkMessageStatus"
QT_MOC_LITERAL(19, 256, 5), // "uasId"
QT_MOC_LITERAL(20, 262, 8), // "uint64_t"
QT_MOC_LITERAL(21, 271, 9), // "totalSent"
QT_MOC_LITERAL(22, 281, 13), // "totalReceived"
QT_MOC_LITERAL(23, 295, 9), // "totalLoss"
QT_MOC_LITERAL(24, 305, 11), // "lossPercent"
QT_MOC_LITERAL(25, 317, 18), // "radioStatusChanged"
QT_MOC_LITERAL(26, 336, 8), // "rxerrors"
QT_MOC_LITERAL(27, 345, 5), // "fixed"
QT_MOC_LITERAL(28, 351, 4), // "rssi"
QT_MOC_LITERAL(29, 356, 7), // "remrssi"
QT_MOC_LITERAL(30, 364, 5), // "txbuf"
QT_MOC_LITERAL(31, 370, 5), // "noise"
QT_MOC_LITERAL(32, 376, 8), // "remnoise"
QT_MOC_LITERAL(33, 385, 16), // "saveTelemetryLog"
QT_MOC_LITERAL(34, 402, 11), // "tempLogfile"
QT_MOC_LITERAL(35, 414, 22), // "checkTelemetrySavePath"
QT_MOC_LITERAL(36, 437, 12), // "receiveBytes"
QT_MOC_LITERAL(37, 450, 1), // "b"
QT_MOC_LITERAL(38, 452, 12), // "logSentBytes"
QT_MOC_LITERAL(39, 465, 11), // "setSystemId"
QT_MOC_LITERAL(40, 477, 2), // "id"
QT_MOC_LITERAL(41, 480, 18), // "enableVersionCheck"
QT_MOC_LITERAL(42, 499, 12), // "loadSettings"
QT_MOC_LITERAL(43, 512, 13), // "storeSettings"
QT_MOC_LITERAL(44, 526, 18), // "deleteTempLogFiles"
QT_MOC_LITERAL(45, 545, 20), // "checkForLostLogFiles"
QT_MOC_LITERAL(46, 566, 20) // "_vehicleCountChanged"

    },
    "MAVLinkProtocol\0vehicleHeartbeatInfo\0"
    "\0LinkInterface*\0link\0vehicleId\0"
    "componentId\0vehicleFirmwareType\0"
    "vehicleType\0messageReceived\0"
    "mavlink_message_t\0message\0versionCheckChanged\0"
    "enabled\0protocolStatusMessage\0title\0"
    "systemIdChanged\0systemId\0mavlinkMessageStatus\0"
    "uasId\0uint64_t\0totalSent\0totalReceived\0"
    "totalLoss\0lossPercent\0radioStatusChanged\0"
    "rxerrors\0fixed\0rssi\0remrssi\0txbuf\0"
    "noise\0remnoise\0saveTelemetryLog\0"
    "tempLogfile\0checkTelemetrySavePath\0"
    "receiveBytes\0b\0logSentBytes\0setSystemId\0"
    "id\0enableVersionCheck\0loadSettings\0"
    "storeSettings\0deleteTempLogFiles\0"
    "checkForLostLogFiles\0_vehicleCountChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkProtocol[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  104,    2, 0x06 /* Public */,
       9,    2,  115,    2, 0x06 /* Public */,
      12,    1,  120,    2, 0x06 /* Public */,
      14,    2,  123,    2, 0x06 /* Public */,
      16,    1,  128,    2, 0x06 /* Public */,
      18,    5,  131,    2, 0x06 /* Public */,
      25,    8,  142,    2, 0x06 /* Public */,
      33,    1,  159,    2, 0x06 /* Public */,
      35,    0,  162,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      36,    2,  163,    2, 0x0a /* Public */,
      38,    2,  168,    2, 0x0a /* Public */,
      39,    1,  173,    2, 0x0a /* Public */,
      41,    1,  176,    2, 0x0a /* Public */,
      42,    0,  179,    2, 0x0a /* Public */,
      43,    0,  180,    2, 0x0a /* Public */,
      44,    0,  181,    2, 0x0a /* Public */,
      45,    0,  182,    2, 0x0a /* Public */,
      46,    0,  183,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 10,    4,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   11,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20, 0x80000000 | 20, 0x80000000 | 20, QMetaType::Float,   19,   21,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    4,   26,   27,   28,   29,   30,   31,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,   37,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,   37,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MAVLinkProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vehicleHeartbeatInfo((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 2: _t->versionCheckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->protocolStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->systemIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mavlinkMessageStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint64_t(*)>(_a[2])),(*reinterpret_cast< uint64_t(*)>(_a[3])),(*reinterpret_cast< uint64_t(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 6: _t->radioStatusChanged((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7])),(*reinterpret_cast< uint(*)>(_a[8]))); break;
        case 7: _t->saveTelemetryLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->checkTelemetrySavePath(); break;
        case 9: _t->receiveBytes((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 10: _t->logSentBytes((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 11: _t->setSystemId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->enableVersionCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->loadSettings(); break;
        case 14: _t->storeSettings(); break;
        case 15: _t->deleteTempLogFiles(); break;
        case 16: _t->checkForLostLogFiles(); break;
        case 17: _t->_vehicleCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 10:
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
            using _t = void (MAVLinkProtocol::*)(LinkInterface * , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::vehicleHeartbeatInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(LinkInterface * , mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::messageReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::versionCheckChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::protocolStatusMessage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::systemIdChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(int , uint64_t , uint64_t , uint64_t , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::mavlinkMessageStatus)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(LinkInterface * , unsigned  , unsigned  , int , int , unsigned  , unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::radioStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::saveTelemetryLog)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MAVLinkProtocol::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::checkTelemetrySavePath)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MAVLinkProtocol::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_MAVLinkProtocol.data,
    qt_meta_data_MAVLinkProtocol,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MAVLinkProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkProtocol.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MAVLinkProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkProtocol::vehicleHeartbeatInfo(LinkInterface * _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkProtocol::messageReceived(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MAVLinkProtocol::versionCheckChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MAVLinkProtocol::protocolStatusMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MAVLinkProtocol::systemIdChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MAVLinkProtocol::mavlinkMessageStatus(int _t1, uint64_t _t2, uint64_t _t3, uint64_t _t4, float _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MAVLinkProtocol::radioStatusChanged(LinkInterface * _t1, unsigned  _t2, unsigned  _t3, int _t4, int _t5, unsigned  _t6, unsigned  _t7, unsigned  _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MAVLinkProtocol::saveTelemetryLog(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MAVLinkProtocol::checkTelemetrySavePath()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
