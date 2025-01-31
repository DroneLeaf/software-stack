/****************************************************************************
** Meta object code from reading C++ file 'PlanElementController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/PlanElementController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlanElementController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlanElementController_t {
    QByteArrayData data[14];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlanElementController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlanElementController_t qt_meta_stringdata_PlanElementController = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PlanElementController"
QT_MOC_LITERAL(1, 22, 16), // "supportedChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "supported"
QT_MOC_LITERAL(4, 50, 20), // "containsItemsChanged"
QT_MOC_LITERAL(5, 71, 13), // "containsItems"
QT_MOC_LITERAL(6, 85, 21), // "syncInProgressChanged"
QT_MOC_LITERAL(7, 107, 14), // "syncInProgress"
QT_MOC_LITERAL(8, 122, 12), // "dirtyChanged"
QT_MOC_LITERAL(9, 135, 5), // "dirty"
QT_MOC_LITERAL(10, 141, 12), // "sendComplete"
QT_MOC_LITERAL(11, 154, 17), // "removeAllComplete"
QT_MOC_LITERAL(12, 172, 16), // "masterController"
QT_MOC_LITERAL(13, 189, 21) // "PlanMasterController*"

    },
    "PlanElementController\0supportedChanged\0"
    "\0supported\0containsItemsChanged\0"
    "containsItems\0syncInProgressChanged\0"
    "syncInProgress\0dirtyChanged\0dirty\0"
    "sendComplete\0removeAllComplete\0"
    "masterController\0PlanMasterController*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlanElementController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
      10,    0,   56,    2, 0x06 /* Public */,
      11,    0,   57,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x00095409,
       3, QMetaType::Bool, 0x00495001,
       5, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,

       0        // eod
};

void PlanElementController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlanElementController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->supportedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->containsItemsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->syncInProgressChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sendComplete(); break;
        case 5: _t->removeAllComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlanElementController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanElementController::supportedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanElementController::containsItemsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanElementController::syncInProgressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanElementController::dirtyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanElementController::sendComplete)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanElementController::removeAllComplete)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlanElementController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PlanMasterController**>(_v) = _t->masterController(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->supported(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->containsItems(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->syncInProgress(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlanElementController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PlanElementController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlanElementController.data,
    qt_meta_data_PlanElementController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlanElementController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanElementController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlanElementController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlanElementController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PlanElementController::supportedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlanElementController::containsItemsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlanElementController::syncInProgressChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlanElementController::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlanElementController::sendComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlanElementController::removeAllComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
