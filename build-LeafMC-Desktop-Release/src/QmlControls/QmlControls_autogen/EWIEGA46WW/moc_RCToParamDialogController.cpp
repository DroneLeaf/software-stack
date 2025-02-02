/****************************************************************************
** Meta object code from reading C++ file 'RCToParamDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QmlControls/RCToParamDialogController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RCToParamDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RCToParamDialogController_t {
    QByteArrayData data[13];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RCToParamDialogController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RCToParamDialogController_t qt_meta_stringdata_RCToParamDialogController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "RCToParamDialogController"
QT_MOC_LITERAL(1, 26, 17), // "tuningFactChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "Fact*"
QT_MOC_LITERAL(4, 51, 4), // "fact"
QT_MOC_LITERAL(5, 56, 12), // "readyChanged"
QT_MOC_LITERAL(6, 69, 5), // "ready"
QT_MOC_LITERAL(7, 75, 17), // "_parameterUpdated"
QT_MOC_LITERAL(8, 93, 10), // "tuningFact"
QT_MOC_LITERAL(9, 104, 5), // "scale"
QT_MOC_LITERAL(10, 110, 6), // "center"
QT_MOC_LITERAL(11, 117, 3), // "min"
QT_MOC_LITERAL(12, 121, 3) // "max"

    },
    "RCToParamDialogController\0tuningFactChanged\0"
    "\0Fact*\0fact\0readyChanged\0ready\0"
    "_parameterUpdated\0tuningFact\0scale\0"
    "center\0min\0max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RCToParamDialogController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   36, // properties
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
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::Bool, 0x00495003,
       9, 0x80000000 | 3, 0x00095409,
      10, 0x80000000 | 3, 0x00095409,
      11, 0x80000000 | 3, 0x00095409,
      12, 0x80000000 | 3, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       0,
       0,

       0        // eod
};

void RCToParamDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RCToParamDialogController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tuningFactChanged((*reinterpret_cast< Fact*(*)>(_a[1]))); break;
        case 1: _t->readyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->_parameterUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RCToParamDialogController::*)(Fact * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCToParamDialogController::tuningFactChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RCToParamDialogController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCToParamDialogController::readyChanged)) {
                *result = 1;
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
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RCToParamDialogController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->tuningFact(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->_ready; break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->scale(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->center(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->min(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->max(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RCToParamDialogController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTuningFact(*reinterpret_cast< Fact**>(_v)); break;
        case 1:
            if (_t->_ready != *reinterpret_cast< bool*>(_v)) {
                _t->_ready = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->readyChanged(_t->_ready);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RCToParamDialogController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RCToParamDialogController.data,
    qt_meta_data_RCToParamDialogController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RCToParamDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RCToParamDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RCToParamDialogController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RCToParamDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RCToParamDialogController::tuningFactChanged(Fact * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RCToParamDialogController::readyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
