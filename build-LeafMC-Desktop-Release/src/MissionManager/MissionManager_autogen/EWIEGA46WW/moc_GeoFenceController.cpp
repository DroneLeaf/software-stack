/****************************************************************************
** Meta object code from reading C++ file 'GeoFenceController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/GeoFenceController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GeoFenceController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeoFenceController_t {
    QByteArrayData data[39];
    char stringdata0[628];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeoFenceController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeoFenceController_t qt_meta_stringdata_GeoFenceController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GeoFenceController"
QT_MOC_LITERAL(1, 19, 24), // "breachReturnPointChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 60, 17), // "breachReturnPoint"
QT_MOC_LITERAL(5, 78, 16), // "editorQmlChanged"
QT_MOC_LITERAL(6, 95, 9), // "editorQml"
QT_MOC_LITERAL(7, 105, 12), // "loadComplete"
QT_MOC_LITERAL(8, 118, 25), // "paramCircularFenceChanged"
QT_MOC_LITERAL(9, 144, 20), // "_polygonDirtyChanged"
QT_MOC_LITERAL(10, 165, 5), // "dirty"
QT_MOC_LITERAL(11, 171, 9), // "_setDirty"
QT_MOC_LITERAL(12, 181, 20), // "_setFenceFromManager"
QT_MOC_LITERAL(13, 202, 22), // "QList<QGCFencePolygon>"
QT_MOC_LITERAL(14, 225, 8), // "polygons"
QT_MOC_LITERAL(15, 234, 21), // "QList<QGCFenceCircle>"
QT_MOC_LITERAL(16, 256, 7), // "circles"
QT_MOC_LITERAL(17, 264, 26), // "_setReturnPointFromManager"
QT_MOC_LITERAL(18, 291, 20), // "_managerLoadComplete"
QT_MOC_LITERAL(19, 312, 20), // "_updateContainsItems"
QT_MOC_LITERAL(20, 333, 20), // "_managerSendComplete"
QT_MOC_LITERAL(21, 354, 5), // "error"
QT_MOC_LITERAL(22, 360, 25), // "_managerRemoveAllComplete"
QT_MOC_LITERAL(23, 386, 16), // "_parametersReady"
QT_MOC_LITERAL(24, 403, 22), // "_managerVehicleChanged"
QT_MOC_LITERAL(25, 426, 8), // "Vehicle*"
QT_MOC_LITERAL(26, 435, 14), // "managerVehicle"
QT_MOC_LITERAL(27, 450, 19), // "addInclusionPolygon"
QT_MOC_LITERAL(28, 470, 7), // "topLeft"
QT_MOC_LITERAL(29, 478, 11), // "bottomRight"
QT_MOC_LITERAL(30, 490, 18), // "addInclusionCircle"
QT_MOC_LITERAL(31, 509, 13), // "deletePolygon"
QT_MOC_LITERAL(32, 523, 5), // "index"
QT_MOC_LITERAL(33, 529, 12), // "deleteCircle"
QT_MOC_LITERAL(34, 542, 19), // "clearAllInteractive"
QT_MOC_LITERAL(35, 562, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(36, 582, 20), // "breachReturnAltitude"
QT_MOC_LITERAL(37, 603, 5), // "Fact*"
QT_MOC_LITERAL(38, 609, 18) // "paramCircularFence"

    },
    "GeoFenceController\0breachReturnPointChanged\0"
    "\0QGeoCoordinate\0breachReturnPoint\0"
    "editorQmlChanged\0editorQml\0loadComplete\0"
    "paramCircularFenceChanged\0"
    "_polygonDirtyChanged\0dirty\0_setDirty\0"
    "_setFenceFromManager\0QList<QGCFencePolygon>\0"
    "polygons\0QList<QGCFenceCircle>\0circles\0"
    "_setReturnPointFromManager\0"
    "_managerLoadComplete\0_updateContainsItems\0"
    "_managerSendComplete\0error\0"
    "_managerRemoveAllComplete\0_parametersReady\0"
    "_managerVehicleChanged\0Vehicle*\0"
    "managerVehicle\0addInclusionPolygon\0"
    "topLeft\0bottomRight\0addInclusionCircle\0"
    "deletePolygon\0index\0deleteCircle\0"
    "clearAllInteractive\0QmlObjectListModel*\0"
    "breachReturnAltitude\0Fact*\0"
    "paramCircularFence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeoFenceController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       5,  158, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       5,    1,  112,    2, 0x06 /* Public */,
       7,    0,  115,    2, 0x06 /* Public */,
       8,    0,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  117,    2, 0x08 /* Private */,
      11,    0,  120,    2, 0x08 /* Private */,
      12,    2,  121,    2, 0x08 /* Private */,
      17,    1,  126,    2, 0x08 /* Private */,
      18,    0,  129,    2, 0x08 /* Private */,
      19,    0,  130,    2, 0x08 /* Private */,
      20,    1,  131,    2, 0x08 /* Private */,
      22,    1,  134,    2, 0x08 /* Private */,
      23,    0,  137,    2, 0x08 /* Private */,
      24,    1,  138,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      27,    2,  141,    2, 0x02 /* Public */,
      30,    2,  146,    2, 0x02 /* Public */,
      31,    1,  151,    2, 0x02 /* Public */,
      33,    1,  154,    2, 0x02 /* Public */,
      34,    0,  157,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   28,   29,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   28,   29,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 35, 0x00095409,
      16, 0x80000000 | 35, 0x00095409,
       4, 0x80000000 | 3, 0x0049510b,
      36, 0x80000000 | 37, 0x00095409,
      38, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       3,

       0        // eod
};

void GeoFenceController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeoFenceController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->breachReturnPointChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->editorQmlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loadComplete(); break;
        case 3: _t->paramCircularFenceChanged(); break;
        case 4: _t->_polygonDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->_setDirty(); break;
        case 6: _t->_setFenceFromManager((*reinterpret_cast< const QList<QGCFencePolygon>(*)>(_a[1])),(*reinterpret_cast< const QList<QGCFenceCircle>(*)>(_a[2]))); break;
        case 7: _t->_setReturnPointFromManager((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 8: _t->_managerLoadComplete(); break;
        case 9: _t->_updateContainsItems(); break;
        case 10: _t->_managerSendComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->_managerRemoveAllComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->_parametersReady(); break;
        case 13: _t->_managerVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 14: _t->addInclusionPolygon((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< QGeoCoordinate(*)>(_a[2]))); break;
        case 15: _t->addInclusionCircle((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< QGeoCoordinate(*)>(_a[2]))); break;
        case 16: _t->deletePolygon((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->deleteCircle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->clearAllInteractive(); break;
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
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeoFenceController::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoFenceController::breachReturnPointChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeoFenceController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoFenceController::editorQmlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GeoFenceController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoFenceController::loadComplete)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GeoFenceController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoFenceController::paramCircularFenceChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GeoFenceController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->polygons(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->circles(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->breachReturnPoint(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->breachReturnAltitude(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->paramCircularFence(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GeoFenceController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setBreachReturnPoint(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GeoFenceController::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanElementController::staticMetaObject>(),
    qt_meta_stringdata_GeoFenceController.data,
    qt_meta_data_GeoFenceController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeoFenceController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoFenceController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeoFenceController.stringdata0))
        return static_cast<void*>(this);
    return PlanElementController::qt_metacast(_clname);
}

int GeoFenceController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanElementController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
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
void GeoFenceController::breachReturnPointChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GeoFenceController::editorQmlChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GeoFenceController::loadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GeoFenceController::paramCircularFenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
