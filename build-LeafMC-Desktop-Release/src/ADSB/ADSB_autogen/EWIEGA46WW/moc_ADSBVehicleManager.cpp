/****************************************************************************
** Meta object code from reading C++ file 'ADSBVehicleManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/ADSB/ADSBVehicleManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ADSBVehicleManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ADSBTCPLink_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ADSBTCPLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ADSBTCPLink_t qt_meta_stringdata_ADSBTCPLink = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ADSBTCPLink"
QT_MOC_LITERAL(1, 12, 17), // "adsbVehicleUpdate"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 30), // "ADSBVehicle::ADSBVehicleInfo_t"
QT_MOC_LITERAL(4, 62, 11), // "vehicleInfo"
QT_MOC_LITERAL(5, 74, 5), // "error"
QT_MOC_LITERAL(6, 80, 8), // "errorMsg"
QT_MOC_LITERAL(7, 89, 10) // "_readBytes"

    },
    "ADSBTCPLink\0adsbVehicleUpdate\0\0"
    "ADSBVehicle::ADSBVehicleInfo_t\0"
    "vehicleInfo\0error\0errorMsg\0_readBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ADSBTCPLink[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ADSBTCPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ADSBTCPLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adsbVehicleUpdate((*reinterpret_cast< const ADSBVehicle::ADSBVehicleInfo_t(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->_readBytes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ADSBVehicle::ADSBVehicleInfo_t >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ADSBTCPLink::*)(const ADSBVehicle::ADSBVehicleInfo_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBTCPLink::adsbVehicleUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ADSBTCPLink::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBTCPLink::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ADSBTCPLink::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ADSBTCPLink.data,
    qt_meta_data_ADSBTCPLink,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ADSBTCPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADSBTCPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ADSBTCPLink.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ADSBTCPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ADSBTCPLink::adsbVehicleUpdate(const ADSBVehicle::ADSBVehicleInfo_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ADSBTCPLink::error(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ADSBVehicleManager_t {
    QByteArrayData data[10];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ADSBVehicleManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ADSBVehicleManager_t qt_meta_stringdata_ADSBVehicleManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ADSBVehicleManager"
QT_MOC_LITERAL(1, 19, 17), // "adsbVehicleUpdate"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 30), // "ADSBVehicle::ADSBVehicleInfo_t"
QT_MOC_LITERAL(4, 69, 11), // "vehicleInfo"
QT_MOC_LITERAL(5, 81, 9), // "_tcpError"
QT_MOC_LITERAL(6, 91, 8), // "errorMsg"
QT_MOC_LITERAL(7, 100, 21), // "_cleanupStaleVehicles"
QT_MOC_LITERAL(8, 122, 12), // "adsbVehicles"
QT_MOC_LITERAL(9, 135, 19) // "QmlObjectListModel*"

    },
    "ADSBVehicleManager\0adsbVehicleUpdate\0"
    "\0ADSBVehicle::ADSBVehicleInfo_t\0"
    "vehicleInfo\0_tcpError\0errorMsg\0"
    "_cleanupStaleVehicles\0adsbVehicles\0"
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ADSBVehicleManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095409,

       0        // eod
};

void ADSBVehicleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ADSBVehicleManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adsbVehicleUpdate((*reinterpret_cast< const ADSBVehicle::ADSBVehicleInfo_t(*)>(_a[1]))); break;
        case 1: _t->_tcpError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->_cleanupStaleVehicles(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ADSBVehicle::ADSBVehicleInfo_t >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ADSBVehicleManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->adsbVehicles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ADSBVehicleManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_ADSBVehicleManager.data,
    qt_meta_data_ADSBVehicleManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ADSBVehicleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADSBVehicleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ADSBVehicleManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int ADSBVehicleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
