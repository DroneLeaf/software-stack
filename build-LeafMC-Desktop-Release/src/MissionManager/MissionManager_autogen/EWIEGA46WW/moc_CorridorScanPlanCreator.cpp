/****************************************************************************
** Meta object code from reading C++ file 'CorridorScanPlanCreator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/CorridorScanPlanCreator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CorridorScanPlanCreator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CorridorScanPlanCreator_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CorridorScanPlanCreator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CorridorScanPlanCreator_t qt_meta_stringdata_CorridorScanPlanCreator = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CorridorScanPlanCreator"
QT_MOC_LITERAL(1, 24, 10), // "createPlan"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 51, 14) // "mapCenterCoord"

    },
    "CorridorScanPlanCreator\0createPlan\0\0"
    "QGeoCoordinate\0mapCenterCoord"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CorridorScanPlanCreator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void CorridorScanPlanCreator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CorridorScanPlanCreator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createPlan((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CorridorScanPlanCreator::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanCreator::staticMetaObject>(),
    qt_meta_stringdata_CorridorScanPlanCreator.data,
    qt_meta_data_CorridorScanPlanCreator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CorridorScanPlanCreator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorridorScanPlanCreator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CorridorScanPlanCreator.stringdata0))
        return static_cast<void*>(this);
    return PlanCreator::qt_metacast(_clname);
}

int CorridorScanPlanCreator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanCreator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
