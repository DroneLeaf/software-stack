/****************************************************************************
** Meta object code from reading C++ file 'EditPositionDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QmlControls/EditPositionDialogController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditPositionDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditPositionDialogController_t {
    QByteArrayData data[18];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditPositionDialogController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditPositionDialogController_t qt_meta_stringdata_EditPositionDialogController = {
    {
QT_MOC_LITERAL(0, 0, 28), // "EditPositionDialogController"
QT_MOC_LITERAL(1, 29, 17), // "coordinateChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 63, 10), // "coordinate"
QT_MOC_LITERAL(5, 74, 10), // "initValues"
QT_MOC_LITERAL(6, 85, 10), // "setFromGeo"
QT_MOC_LITERAL(7, 96, 10), // "setFromUTM"
QT_MOC_LITERAL(8, 107, 11), // "setFromMGRS"
QT_MOC_LITERAL(9, 119, 14), // "setFromVehicle"
QT_MOC_LITERAL(10, 134, 8), // "latitude"
QT_MOC_LITERAL(11, 143, 5), // "Fact*"
QT_MOC_LITERAL(12, 149, 9), // "longitude"
QT_MOC_LITERAL(13, 159, 4), // "zone"
QT_MOC_LITERAL(14, 164, 10), // "hemisphere"
QT_MOC_LITERAL(15, 175, 7), // "easting"
QT_MOC_LITERAL(16, 183, 8), // "northing"
QT_MOC_LITERAL(17, 192, 4) // "mgrs"

    },
    "EditPositionDialogController\0"
    "coordinateChanged\0\0QGeoCoordinate\0"
    "coordinate\0initValues\0setFromGeo\0"
    "setFromUTM\0setFromMGRS\0setFromVehicle\0"
    "latitude\0Fact*\0longitude\0zone\0hemisphere\0"
    "easting\0northing\0mgrs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditPositionDialogController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       8,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x02 /* Public */,
       6,    0,   48,    2, 0x02 /* Public */,
       7,    0,   49,    2, 0x02 /* Public */,
       8,    0,   50,    2, 0x02 /* Public */,
       9,    0,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
      10, 0x80000000 | 11, 0x00095409,
      12, 0x80000000 | 11, 0x00095409,
      13, 0x80000000 | 11, 0x00095409,
      14, 0x80000000 | 11, 0x00095409,
      15, 0x80000000 | 11, 0x00095409,
      16, 0x80000000 | 11, 0x00095409,
      17, 0x80000000 | 11, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void EditPositionDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditPositionDialogController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->initValues(); break;
        case 2: _t->setFromGeo(); break;
        case 3: _t->setFromUTM(); break;
        case 4: _t->setFromMGRS(); break;
        case 5: _t->setFromVehicle(); break;
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditPositionDialogController::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditPositionDialogController::coordinateChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EditPositionDialogController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->latitude(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->longitude(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->zone(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->hemisphere(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->easting(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->northing(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->mgrs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EditPositionDialogController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject EditPositionDialogController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EditPositionDialogController.data,
    qt_meta_data_EditPositionDialogController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditPositionDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditPositionDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditPositionDialogController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EditPositionDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EditPositionDialogController::coordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
