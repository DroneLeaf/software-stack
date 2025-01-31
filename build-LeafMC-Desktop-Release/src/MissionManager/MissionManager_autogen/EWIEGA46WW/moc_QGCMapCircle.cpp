/****************************************************************************
** Meta object code from reading C++ file 'QGCMapCircle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/QGCMapCircle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapCircle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapCircle_t {
    QByteArrayData data[16];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapCircle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapCircle_t qt_meta_stringdata_QGCMapCircle = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QGCMapCircle"
QT_MOC_LITERAL(1, 13, 12), // "dirtyChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "dirty"
QT_MOC_LITERAL(4, 33, 13), // "centerChanged"
QT_MOC_LITERAL(5, 47, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(6, 62, 6), // "center"
QT_MOC_LITERAL(7, 69, 18), // "interactiveChanged"
QT_MOC_LITERAL(8, 88, 11), // "interactive"
QT_MOC_LITERAL(9, 100, 19), // "showRotationChanged"
QT_MOC_LITERAL(10, 120, 12), // "showRotation"
QT_MOC_LITERAL(11, 133, 24), // "clockwiseRotationChanged"
QT_MOC_LITERAL(12, 158, 17), // "clockwiseRotation"
QT_MOC_LITERAL(13, 176, 9), // "_setDirty"
QT_MOC_LITERAL(14, 186, 6), // "radius"
QT_MOC_LITERAL(15, 193, 5) // "Fact*"

    },
    "QGCMapCircle\0dirtyChanged\0\0dirty\0"
    "centerChanged\0QGeoCoordinate\0center\0"
    "interactiveChanged\0interactive\0"
    "showRotationChanged\0showRotation\0"
    "clockwiseRotationChanged\0clockwiseRotation\0"
    "_setDirty\0radius\0Fact*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapCircle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,
      11,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       6, 0x80000000 | 5, 0x0049510b,
      14, 0x80000000 | 15, 0x00095409,
       8, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,
       3,
       4,

       0        // eod
};

void QGCMapCircle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMapCircle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->centerChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 2: _t->interactiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showRotationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->clockwiseRotationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->_setDirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMapCircle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapCircle::dirtyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMapCircle::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapCircle::centerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMapCircle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapCircle::interactiveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMapCircle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapCircle::showRotationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCMapCircle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapCircle::clockwiseRotationChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMapCircle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->center(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->radius(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showRotation(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->clockwiseRotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMapCircle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 3: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowRotation(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setClockwiseRotation(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCMapCircle::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCMapCircle.data,
    qt_meta_data_QGCMapCircle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCMapCircle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapCircle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapCircle.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapCircle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QGCMapCircle::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapCircle::centerChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCMapCircle::interactiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCMapCircle::showRotationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGCMapCircle::clockwiseRotationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
