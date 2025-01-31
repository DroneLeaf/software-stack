/****************************************************************************
** Meta object code from reading C++ file 'VehicleLinkManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/VehicleLinkManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleLinkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleLinkManager_t {
    QByteArrayData data[19];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleLinkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleLinkManager_t qt_meta_stringdata_VehicleLinkManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VehicleLinkManager"
QT_MOC_LITERAL(1, 19, 18), // "primaryLinkChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "allLinksRemoved"
QT_MOC_LITERAL(4, 55, 8), // "Vehicle*"
QT_MOC_LITERAL(5, 64, 7), // "vehicle"
QT_MOC_LITERAL(6, 72, 24), // "communicationLostChanged"
QT_MOC_LITERAL(7, 97, 17), // "communicationLost"
QT_MOC_LITERAL(8, 115, 31), // "communicationLostEnabledChanged"
QT_MOC_LITERAL(9, 147, 24), // "communicationLostEnabled"
QT_MOC_LITERAL(10, 172, 16), // "linkNamesChanged"
QT_MOC_LITERAL(11, 189, 19), // "linkStatusesChanged"
QT_MOC_LITERAL(12, 209, 21), // "autoDisconnectChanged"
QT_MOC_LITERAL(13, 231, 14), // "autoDisconnect"
QT_MOC_LITERAL(14, 246, 14), // "_commLostCheck"
QT_MOC_LITERAL(15, 261, 20), // "primaryLinkIsPX4Flow"
QT_MOC_LITERAL(16, 282, 15), // "primaryLinkName"
QT_MOC_LITERAL(17, 298, 9), // "linkNames"
QT_MOC_LITERAL(18, 308, 12) // "linkStatuses"

    },
    "VehicleLinkManager\0primaryLinkChanged\0"
    "\0allLinksRemoved\0Vehicle*\0vehicle\0"
    "communicationLostChanged\0communicationLost\0"
    "communicationLostEnabledChanged\0"
    "communicationLostEnabled\0linkNamesChanged\0"
    "linkStatusesChanged\0autoDisconnectChanged\0"
    "autoDisconnect\0_commLostCheck\0"
    "primaryLinkIsPX4Flow\0primaryLinkName\0"
    "linkNames\0linkStatuses"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleLinkManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,
      10,    0,   64,    2, 0x06 /* Public */,
      11,    0,   65,    2, 0x06 /* Public */,
      12,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495001,
      16, QMetaType::QString, 0x00495003,
      17, QMetaType::QStringList, 0x00495001,
      18, QMetaType::QStringList, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       4,
       5,
       2,
       3,
       6,

       0        // eod
};

void VehicleLinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleLinkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->primaryLinkChanged(); break;
        case 1: _t->allLinksRemoved((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 2: _t->communicationLostChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->communicationLostEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->linkNamesChanged(); break;
        case 5: _t->linkStatusesChanged(); break;
        case 6: _t->autoDisconnectChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->_commLostCheck(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleLinkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleLinkManager::primaryLinkChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)(Vehicle * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleLinkManager::allLinksRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleLinkManager::communicationLostChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleLinkManager::communicationLostEnabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleLinkManager::linkNamesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleLinkManager::linkStatusesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleLinkManager::autoDisconnectChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleLinkManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->primaryLinkIsPX4Flow(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->primaryLinkName(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->linkNames(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->linkStatuses(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->communicationLost(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->communicationLostEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->_autoDisconnect; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VehicleLinkManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPrimaryLinkByName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setCommunicationLostEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6:
            if (_t->_autoDisconnect != *reinterpret_cast< bool*>(_v)) {
                _t->_autoDisconnect = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->autoDisconnectChanged(_t->_autoDisconnect);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VehicleLinkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VehicleLinkManager.data,
    qt_meta_data_VehicleLinkManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VehicleLinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleLinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleLinkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VehicleLinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void VehicleLinkManager::primaryLinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VehicleLinkManager::allLinksRemoved(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VehicleLinkManager::communicationLostChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VehicleLinkManager::communicationLostEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VehicleLinkManager::linkNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VehicleLinkManager::linkStatusesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VehicleLinkManager::autoDisconnectChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
