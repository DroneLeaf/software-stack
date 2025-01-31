/****************************************************************************
** Meta object code from reading C++ file 'ParameterManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/FactSystem/ParameterManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParameterManager_t {
    QByteArrayData data[17];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterManager_t qt_meta_stringdata_ParameterManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ParameterManager"
QT_MOC_LITERAL(1, 17, 22), // "parametersReadyChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "parametersReady"
QT_MOC_LITERAL(4, 57, 24), // "missingParametersChanged"
QT_MOC_LITERAL(5, 82, 17), // "missingParameters"
QT_MOC_LITERAL(6, 100, 19), // "loadProgressChanged"
QT_MOC_LITERAL(7, 120, 5), // "value"
QT_MOC_LITERAL(8, 126, 20), // "pendingWritesChanged"
QT_MOC_LITERAL(9, 147, 13), // "pendingWrites"
QT_MOC_LITERAL(10, 161, 9), // "factAdded"
QT_MOC_LITERAL(11, 171, 11), // "componentId"
QT_MOC_LITERAL(12, 183, 5), // "Fact*"
QT_MOC_LITERAL(13, 189, 4), // "fact"
QT_MOC_LITERAL(14, 194, 20), // "_factRawValueUpdated"
QT_MOC_LITERAL(15, 215, 8), // "rawValue"
QT_MOC_LITERAL(16, 224, 12) // "loadProgress"

    },
    "ParameterManager\0parametersReadyChanged\0"
    "\0parametersReady\0missingParametersChanged\0"
    "missingParameters\0loadProgressChanged\0"
    "value\0pendingWritesChanged\0pendingWrites\0"
    "factAdded\0componentId\0Fact*\0fact\0"
    "_factRawValueUpdated\0rawValue\0"
    "loadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
      10,    2,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,   15,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,
       5, QMetaType::Bool, 0x00495001,
      16, QMetaType::Double, 0x00495001,
       9, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void ParameterManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parametersReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->missingParametersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadProgressChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->pendingWritesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->factAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Fact*(*)>(_a[2]))); break;
        case 5: _t->_factRawValueUpdated((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterManager::parametersReadyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParameterManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterManager::missingParametersChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParameterManager::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterManager::loadProgressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParameterManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterManager::pendingWritesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParameterManager::*)(int , Fact * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterManager::factAdded)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->parametersReady(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->missingParameters(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->loadProgress(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->pendingWrites(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParameterManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ParameterManager.data,
    qt_meta_data_ParameterManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParameterManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
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
void ParameterManager::parametersReadyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParameterManager::missingParametersChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParameterManager::loadProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ParameterManager::pendingWritesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ParameterManager::factAdded(int _t1, Fact * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
