/****************************************************************************
** Meta object code from reading C++ file 'PositionManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/PositionManager/PositionManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PositionManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCPositionManager_t {
    QByteArrayData data[16];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCPositionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCPositionManager_t qt_meta_stringdata_QGCPositionManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGCPositionManager"
QT_MOC_LITERAL(1, 19, 18), // "gcsPositionChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 54, 11), // "gcsPosition"
QT_MOC_LITERAL(5, 66, 17), // "gcsHeadingChanged"
QT_MOC_LITERAL(6, 84, 10), // "gcsHeading"
QT_MOC_LITERAL(7, 95, 19), // "positionInfoUpdated"
QT_MOC_LITERAL(8, 115, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(9, 132, 6), // "update"
QT_MOC_LITERAL(10, 139, 36), // "gcsPositionHorizontalAccuracy..."
QT_MOC_LITERAL(11, 176, 16), // "_positionUpdated"
QT_MOC_LITERAL(12, 193, 6), // "_error"
QT_MOC_LITERAL(13, 200, 29), // "QGeoPositionInfoSource::Error"
QT_MOC_LITERAL(14, 230, 16), // "positioningError"
QT_MOC_LITERAL(15, 247, 29) // "gcsPositionHorizontalAccuracy"

    },
    "QGCPositionManager\0gcsPositionChanged\0"
    "\0QGeoCoordinate\0gcsPosition\0"
    "gcsHeadingChanged\0gcsHeading\0"
    "positionInfoUpdated\0QGeoPositionInfo\0"
    "update\0gcsPositionHorizontalAccuracyChanged\0"
    "_positionUpdated\0_error\0"
    "QGeoPositionInfoSource::Error\0"
    "positioningError\0gcsPositionHorizontalAccuracy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCPositionManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
      10,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   54,    2, 0x08 /* Private */,
      12,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 13,   14,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00495009,
       6, QMetaType::QReal, 0x00495001,
      15, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       3,

       0        // eod
};

void QGCPositionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCPositionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gcsPositionChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->gcsHeadingChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->positionInfoUpdated((*reinterpret_cast< QGeoPositionInfo(*)>(_a[1]))); break;
        case 3: _t->gcsPositionHorizontalAccuracyChanged(); break;
        case 4: _t->_positionUpdated((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 5: _t->_error((*reinterpret_cast< QGeoPositionInfoSource::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoPositionInfo >(); break;
            }
            break;
        case 4:
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
            using _t = void (QGCPositionManager::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCPositionManager::gcsPositionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCPositionManager::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCPositionManager::gcsHeadingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCPositionManager::*)(QGeoPositionInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCPositionManager::positionInfoUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCPositionManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCPositionManager::gcsPositionHorizontalAccuracyChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCPositionManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->gcsPosition(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->gcsHeading(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->gcsPositionHorizontalAccuracy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCPositionManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_QGCPositionManager.data,
    qt_meta_data_QGCPositionManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCPositionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCPositionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCPositionManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGCPositionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCPositionManager::gcsPositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCPositionManager::gcsHeadingChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCPositionManager::positionInfoUpdated(QGeoPositionInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCPositionManager::gcsPositionHorizontalAccuracyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
