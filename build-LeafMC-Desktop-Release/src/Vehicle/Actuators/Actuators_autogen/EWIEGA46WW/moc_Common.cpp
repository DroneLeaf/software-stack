/****************************************************************************
** Meta object code from reading C++ file 'Common.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../LeafMC/src/Vehicle/Actuators/Common.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Common.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FactBitset_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FactBitset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FactBitset_t qt_meta_stringdata_FactBitset = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FactBitset"
QT_MOC_LITERAL(1, 11, 20), // "onIntegerFactChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17) // "onThisFactChanged"

    },
    "FactBitset\0onIntegerFactChanged\0\0"
    "onThisFactChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FactBitset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FactBitset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactBitset *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onIntegerFactChanged(); break;
        case 1: _t->onThisFactChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FactBitset::staticMetaObject = { {
    QMetaObject::SuperData::link<Fact::staticMetaObject>(),
    qt_meta_stringdata_FactBitset.data,
    qt_meta_data_FactBitset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FactBitset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactBitset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FactBitset.stringdata0))
        return static_cast<void*>(this);
    return Fact::qt_metacast(_clname);
}

int FactBitset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Fact::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_FactFloatAsBool_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FactFloatAsBool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FactFloatAsBool_t qt_meta_stringdata_FactFloatAsBool = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FactFloatAsBool"
QT_MOC_LITERAL(1, 16, 18), // "onFloatFactChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17) // "onThisFactChanged"

    },
    "FactFloatAsBool\0onFloatFactChanged\0\0"
    "onThisFactChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FactFloatAsBool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FactFloatAsBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactFloatAsBool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onFloatFactChanged(); break;
        case 1: _t->onThisFactChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FactFloatAsBool::staticMetaObject = { {
    QMetaObject::SuperData::link<Fact::staticMetaObject>(),
    qt_meta_stringdata_FactFloatAsBool.data,
    qt_meta_data_FactFloatAsBool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FactFloatAsBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactFloatAsBool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FactFloatAsBool.stringdata0))
        return static_cast<void*>(this);
    return Fact::qt_metacast(_clname);
}

int FactFloatAsBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Fact::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
