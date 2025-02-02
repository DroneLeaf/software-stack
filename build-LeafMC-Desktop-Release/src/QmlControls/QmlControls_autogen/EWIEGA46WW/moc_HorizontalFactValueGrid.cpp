/****************************************************************************
** Meta object code from reading C++ file 'HorizontalFactValueGrid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QmlControls/HorizontalFactValueGrid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HorizontalFactValueGrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HorizontalFactValueGrid_t {
    QByteArrayData data[3];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HorizontalFactValueGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HorizontalFactValueGrid_t qt_meta_stringdata_HorizontalFactValueGrid = {
    {
QT_MOC_LITERAL(0, 0, 23), // "HorizontalFactValueGrid"
QT_MOC_LITERAL(1, 24, 32), // "telemetryBarDefaultSettingsGroup"
QT_MOC_LITERAL(2, 57, 29) // "telemetryBarUserSettingsGroup"

    },
    "HorizontalFactValueGrid\0"
    "telemetryBarDefaultSettingsGroup\0"
    "telemetryBarUserSettingsGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HorizontalFactValueGrid[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,

       0        // eod
};

void HorizontalFactValueGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HorizontalFactValueGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->telemetryBarDefaultSettingsGroup; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->telemetryBarUserSettingsGroup; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HorizontalFactValueGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<FactValueGrid::staticMetaObject>(),
    qt_meta_stringdata_HorizontalFactValueGrid.data,
    qt_meta_data_HorizontalFactValueGrid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HorizontalFactValueGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HorizontalFactValueGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HorizontalFactValueGrid.stringdata0))
        return static_cast<void*>(this);
    return FactValueGrid::qt_metacast(_clname);
}

int HorizontalFactValueGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactValueGrid::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
