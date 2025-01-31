/****************************************************************************
** Meta object code from reading C++ file 'TrajectoryPoints.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/TrajectoryPoints.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrajectoryPoints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrajectoryPoints_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrajectoryPoints_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrajectoryPoints_t qt_meta_stringdata_TrajectoryPoints = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TrajectoryPoints"
QT_MOC_LITERAL(1, 17, 10), // "pointAdded"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 44, 10), // "coordinate"
QT_MOC_LITERAL(5, 55, 15), // "updateLastPoint"
QT_MOC_LITERAL(6, 71, 13), // "pointsCleared"
QT_MOC_LITERAL(7, 85, 5), // "clear"
QT_MOC_LITERAL(8, 91, 25), // "_vehicleCoordinateChanged"
QT_MOC_LITERAL(9, 117, 4) // "list"

    },
    "TrajectoryPoints\0pointAdded\0\0"
    "QGeoCoordinate\0coordinate\0updateLastPoint\0"
    "pointsCleared\0clear\0_vehicleCoordinateChanged\0"
    "list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrajectoryPoints[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   55,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::QVariantList,

       0        // eod
};

void TrajectoryPoints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrajectoryPoints *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointAdded((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->updateLastPoint((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 2: _t->pointsCleared(); break;
        case 3: _t->clear(); break;
        case 4: _t->_vehicleCoordinateChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 5: { QVariantList _r = _t->list();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 4:
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
            using _t = void (TrajectoryPoints::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrajectoryPoints::pointAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrajectoryPoints::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrajectoryPoints::updateLastPoint)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrajectoryPoints::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrajectoryPoints::pointsCleared)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrajectoryPoints::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TrajectoryPoints.data,
    qt_meta_data_TrajectoryPoints,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrajectoryPoints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrajectoryPoints::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrajectoryPoints.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TrajectoryPoints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void TrajectoryPoints::pointAdded(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrajectoryPoints::updateLastPoint(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TrajectoryPoints::pointsCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
