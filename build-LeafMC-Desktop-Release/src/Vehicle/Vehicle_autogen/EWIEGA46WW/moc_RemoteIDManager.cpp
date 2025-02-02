/****************************************************************************
** Meta object code from reading C++ file 'RemoteIDManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/RemoteIDManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemoteIDManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RemoteIDManager_t {
    QByteArrayData data[27];
    char stringdata0[413];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteIDManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteIDManager_t qt_meta_stringdata_RemoteIDManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RemoteIDManager"
QT_MOC_LITERAL(1, 16, 20), // "armStatusGoodChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "armStatusErrorChanged"
QT_MOC_LITERAL(4, 60, 16), // "commsGoodChanged"
QT_MOC_LITERAL(5, 77, 17), // "gcsGPSGoodChanged"
QT_MOC_LITERAL(6, 95, 18), // "basicIDGoodChanged"
QT_MOC_LITERAL(7, 114, 24), // "emergencyDeclaredChanged"
QT_MOC_LITERAL(8, 139, 21), // "operatorIDGoodChanged"
QT_MOC_LITERAL(9, 161, 12), // "_odidTimeout"
QT_MOC_LITERAL(10, 174, 13), // "_sendMessages"
QT_MOC_LITERAL(11, 188, 26), // "_updateLastGCSPositionInfo"
QT_MOC_LITERAL(12, 215, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(13, 232, 6), // "update"
QT_MOC_LITERAL(14, 239, 16), // "_checkGCSBasicID"
QT_MOC_LITERAL(15, 256, 15), // "checkOperatorID"
QT_MOC_LITERAL(16, 272, 10), // "operatorID"
QT_MOC_LITERAL(17, 283, 13), // "setOperatorID"
QT_MOC_LITERAL(18, 297, 12), // "setEmergency"
QT_MOC_LITERAL(19, 310, 7), // "declare"
QT_MOC_LITERAL(20, 318, 13), // "armStatusGood"
QT_MOC_LITERAL(21, 332, 14), // "armStatusError"
QT_MOC_LITERAL(22, 347, 9), // "commsGood"
QT_MOC_LITERAL(23, 357, 10), // "gcsGPSGood"
QT_MOC_LITERAL(24, 368, 11), // "basicIDGood"
QT_MOC_LITERAL(25, 380, 17), // "emergencyDeclared"
QT_MOC_LITERAL(26, 398, 14) // "operatorIDGood"

    },
    "RemoteIDManager\0armStatusGoodChanged\0"
    "\0armStatusErrorChanged\0commsGoodChanged\0"
    "gcsGPSGoodChanged\0basicIDGoodChanged\0"
    "emergencyDeclaredChanged\0operatorIDGoodChanged\0"
    "_odidTimeout\0_sendMessages\0"
    "_updateLastGCSPositionInfo\0QGeoPositionInfo\0"
    "update\0_checkGCSBasicID\0checkOperatorID\0"
    "operatorID\0setOperatorID\0setEmergency\0"
    "declare\0armStatusGood\0armStatusError\0"
    "commsGood\0gcsGPSGood\0basicIDGood\0"
    "emergencyDeclared\0operatorIDGood"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteIDManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       7,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    1,   97,    2, 0x02 /* Public */,
      17,    0,  100,    2, 0x02 /* Public */,
      18,    1,  101,    2, 0x02 /* Public */,

 // signals: parameters
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
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::QString, 0x00495001,
      22, QMetaType::Bool, 0x00495001,
      23, QMetaType::Bool, 0x00495001,
      24, QMetaType::Bool, 0x00495001,
      25, QMetaType::Bool, 0x00495001,
      26, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void RemoteIDManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoteIDManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->armStatusGoodChanged(); break;
        case 1: _t->armStatusErrorChanged(); break;
        case 2: _t->commsGoodChanged(); break;
        case 3: _t->gcsGPSGoodChanged(); break;
        case 4: _t->basicIDGoodChanged(); break;
        case 5: _t->emergencyDeclaredChanged(); break;
        case 6: _t->operatorIDGoodChanged(); break;
        case 7: _t->_odidTimeout(); break;
        case 8: _t->_sendMessages(); break;
        case 9: _t->_updateLastGCSPositionInfo((*reinterpret_cast< QGeoPositionInfo(*)>(_a[1]))); break;
        case 10: _t->_checkGCSBasicID(); break;
        case 11: _t->checkOperatorID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setOperatorID(); break;
        case 13: _t->setEmergency((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoPositionInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoteIDManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteIDManager::armStatusGoodChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteIDManager::armStatusErrorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteIDManager::commsGoodChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteIDManager::gcsGPSGoodChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteIDManager::basicIDGoodChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteIDManager::emergencyDeclaredChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteIDManager::operatorIDGoodChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RemoteIDManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->armStatusGood(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->armStatusError(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->commsGood(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->gcsGPSGood(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->basicIDGood(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->emergencyDeclared(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->operatorIDGood(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RemoteIDManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RemoteIDManager.data,
    qt_meta_data_RemoteIDManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemoteIDManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteIDManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteIDManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RemoteIDManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
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
void RemoteIDManager::armStatusGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RemoteIDManager::armStatusErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RemoteIDManager::commsGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RemoteIDManager::gcsGPSGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void RemoteIDManager::basicIDGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void RemoteIDManager::emergencyDeclaredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void RemoteIDManager::operatorIDGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
