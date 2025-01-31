/****************************************************************************
** Meta object code from reading C++ file 'GimbalController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Gimbal/GimbalController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GimbalController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gimbal_t {
    QByteArrayData data[17];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gimbal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gimbal_t qt_meta_stringdata_Gimbal = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Gimbal"
QT_MOC_LITERAL(1, 7, 14), // "yawLockChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "retractedChanged"
QT_MOC_LITERAL(4, 40, 24), // "gimbalHaveControlChanged"
QT_MOC_LITERAL(5, 65, 30), // "gimbalOthersHaveControlChanged"
QT_MOC_LITERAL(6, 96, 12), // "absoluteRoll"
QT_MOC_LITERAL(7, 109, 5), // "Fact*"
QT_MOC_LITERAL(8, 115, 13), // "absolutePitch"
QT_MOC_LITERAL(9, 129, 7), // "bodyYaw"
QT_MOC_LITERAL(10, 137, 11), // "absoluteYaw"
QT_MOC_LITERAL(11, 149, 8), // "deviceId"
QT_MOC_LITERAL(12, 158, 13), // "managerCompid"
QT_MOC_LITERAL(13, 172, 7), // "yawLock"
QT_MOC_LITERAL(14, 180, 9), // "retracted"
QT_MOC_LITERAL(15, 190, 17), // "gimbalHaveControl"
QT_MOC_LITERAL(16, 208, 23) // "gimbalOthersHaveControl"

    },
    "Gimbal\0yawLockChanged\0\0retractedChanged\0"
    "gimbalHaveControlChanged\0"
    "gimbalOthersHaveControlChanged\0"
    "absoluteRoll\0Fact*\0absolutePitch\0"
    "bodyYaw\0absoluteYaw\0deviceId\0managerCompid\0"
    "yawLock\0retracted\0gimbalHaveControl\0"
    "gimbalOthersHaveControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gimbal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      10,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00095409,
       8, 0x80000000 | 7, 0x00095409,
       9, 0x80000000 | 7, 0x00095409,
      10, 0x80000000 | 7, 0x00095409,
      11, 0x80000000 | 7, 0x00095409,
      12, 0x80000000 | 7, 0x00095409,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::Bool, 0x00495001,
      16, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       2,
       3,

       0        // eod
};

void Gimbal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Gimbal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->yawLockChanged(); break;
        case 1: _t->retractedChanged(); break;
        case 2: _t->gimbalHaveControlChanged(); break;
        case 3: _t->gimbalOthersHaveControlChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Gimbal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gimbal::yawLockChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Gimbal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gimbal::retractedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Gimbal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gimbal::gimbalHaveControlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Gimbal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gimbal::gimbalOthersHaveControlChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Gimbal *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->absoluteRoll(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->absolutePitch(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->bodyYaw(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->absoluteYaw(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->deviceId(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->managerCompid(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->yawLock(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->retracted(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->gimbalHaveControl(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->gimbalOthersHaveControl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Gimbal::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_Gimbal.data,
    qt_meta_data_Gimbal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gimbal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gimbal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gimbal.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int Gimbal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Gimbal::yawLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Gimbal::retractedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Gimbal::gimbalHaveControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Gimbal::gimbalOthersHaveControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_GimbalController_t {
    QByteArrayData data[36];
    char stringdata0[488];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GimbalController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GimbalController_t qt_meta_stringdata_GimbalController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GimbalController"
QT_MOC_LITERAL(1, 17, 19), // "activeGimbalChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 29), // "showAcquireGimbalControlPopup"
QT_MOC_LITERAL(4, 68, 13), // "gimbalYawLock"
QT_MOC_LITERAL(5, 82, 7), // "yawLock"
QT_MOC_LITERAL(6, 90, 12), // "centerGimbal"
QT_MOC_LITERAL(7, 103, 15), // "gimbalPitchStep"
QT_MOC_LITERAL(8, 119, 9), // "direction"
QT_MOC_LITERAL(9, 129, 13), // "gimbalYawStep"
QT_MOC_LITERAL(10, 143, 23), // "_mavlinkMessageReceived"
QT_MOC_LITERAL(11, 167, 17), // "mavlink_message_t"
QT_MOC_LITERAL(12, 185, 7), // "message"
QT_MOC_LITERAL(13, 193, 21), // "gimbalOnScreenControl"
QT_MOC_LITERAL(14, 215, 6), // "panpct"
QT_MOC_LITERAL(15, 222, 7), // "tiltpct"
QT_MOC_LITERAL(16, 230, 13), // "clickAndPoint"
QT_MOC_LITERAL(17, 244, 12), // "clickAndDrag"
QT_MOC_LITERAL(18, 257, 11), // "rateControl"
QT_MOC_LITERAL(19, 269, 7), // "retract"
QT_MOC_LITERAL(20, 277, 7), // "neutral"
QT_MOC_LITERAL(21, 285, 7), // "yawlock"
QT_MOC_LITERAL(22, 293, 16), // "sendPitchBodyYaw"
QT_MOC_LITERAL(23, 310, 5), // "pitch"
QT_MOC_LITERAL(24, 316, 3), // "yaw"
QT_MOC_LITERAL(25, 320, 9), // "showError"
QT_MOC_LITERAL(26, 330, 20), // "sendPitchAbsoluteYaw"
QT_MOC_LITERAL(27, 351, 21), // "toggleGimbalRetracted"
QT_MOC_LITERAL(28, 373, 3), // "set"
QT_MOC_LITERAL(29, 377, 19), // "toggleGimbalYawLock"
QT_MOC_LITERAL(30, 397, 20), // "acquireGimbalControl"
QT_MOC_LITERAL(31, 418, 20), // "releaseGimbalControl"
QT_MOC_LITERAL(32, 439, 12), // "activeGimbal"
QT_MOC_LITERAL(33, 452, 7), // "Gimbal*"
QT_MOC_LITERAL(34, 460, 7), // "gimbals"
QT_MOC_LITERAL(35, 468, 19) // "QmlObjectListModel*"

    },
    "GimbalController\0activeGimbalChanged\0"
    "\0showAcquireGimbalControlPopup\0"
    "gimbalYawLock\0yawLock\0centerGimbal\0"
    "gimbalPitchStep\0direction\0gimbalYawStep\0"
    "_mavlinkMessageReceived\0mavlink_message_t\0"
    "message\0gimbalOnScreenControl\0panpct\0"
    "tiltpct\0clickAndPoint\0clickAndDrag\0"
    "rateControl\0retract\0neutral\0yawlock\0"
    "sendPitchBodyYaw\0pitch\0yaw\0showError\0"
    "sendPitchAbsoluteYaw\0toggleGimbalRetracted\0"
    "set\0toggleGimbalYawLock\0acquireGimbalControl\0"
    "releaseGimbalControl\0activeGimbal\0"
    "Gimbal*\0gimbals\0QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GimbalController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       2,  224, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    0,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  121,    2, 0x0a /* Public */,
       6,    0,  124,    2, 0x0a /* Public */,
       7,    1,  125,    2, 0x0a /* Public */,
       9,    1,  128,    2, 0x0a /* Public */,
      10,    1,  131,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    8,  134,    2, 0x02 /* Public */,
      13,    7,  151,    2, 0x22 /* Public | MethodCloned */,
      13,    6,  166,    2, 0x22 /* Public | MethodCloned */,
      13,    5,  179,    2, 0x22 /* Public | MethodCloned */,
      22,    3,  190,    2, 0x02 /* Public */,
      22,    2,  197,    2, 0x22 /* Public | MethodCloned */,
      26,    3,  202,    2, 0x02 /* Public */,
      26,    2,  209,    2, 0x22 /* Public | MethodCloned */,
      27,    1,  214,    2, 0x02 /* Public */,
      27,    0,  217,    2, 0x22 /* Public | MethodCloned */,
      29,    1,  218,    2, 0x02 /* Public */,
      29,    0,  221,    2, 0x22 /* Public | MethodCloned */,
      30,    0,  222,    2, 0x02 /* Public */,
      31,    0,  223,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 11,   12,

 // methods: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   14,   15,   16,   17,   18,   19,   20,   21,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   14,   15,   16,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   14,   15,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   23,   24,   25,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   23,   24,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   23,   24,   25,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   23,   24,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      32, 0x80000000 | 33, 0x0049510b,
      34, 0x80000000 | 35, 0x00095409,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void GimbalController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GimbalController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeGimbalChanged(); break;
        case 1: _t->showAcquireGimbalControlPopup(); break;
        case 2: _t->gimbalYawLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->centerGimbal(); break;
        case 4: _t->gimbalPitchStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->gimbalYawStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->_mavlinkMessageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        case 7: _t->gimbalOnScreenControl((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 8: _t->gimbalOnScreenControl((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 9: _t->gimbalOnScreenControl((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 10: _t->gimbalOnScreenControl((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 11: _t->sendPitchBodyYaw((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->sendPitchBodyYaw((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 13: _t->sendPitchAbsoluteYaw((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 14: _t->sendPitchAbsoluteYaw((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 15: _t->toggleGimbalRetracted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->toggleGimbalRetracted(); break;
        case 17: _t->toggleGimbalYawLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->toggleGimbalYawLock(); break;
        case 19: _t->acquireGimbalControl(); break;
        case 20: _t->releaseGimbalControl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GimbalController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GimbalController::activeGimbalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GimbalController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GimbalController::showAcquireGimbalControlPopup)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Gimbal* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GimbalController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Gimbal**>(_v) = _t->activeGimbal(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->gimbals(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GimbalController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActiveGimbal(*reinterpret_cast< Gimbal**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GimbalController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GimbalController.data,
    qt_meta_data_GimbalController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GimbalController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GimbalController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GimbalController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GimbalController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void GimbalController::activeGimbalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GimbalController::showAcquireGimbalControlPopup()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
