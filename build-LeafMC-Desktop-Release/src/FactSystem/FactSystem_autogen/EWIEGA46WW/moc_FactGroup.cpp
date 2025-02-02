/****************************************************************************
** Meta object code from reading C++ file 'FactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/FactSystem/FactGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FactGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FactGroup_t {
    QByteArrayData data[17];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FactGroup_t qt_meta_stringdata_FactGroup = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FactGroup"
QT_MOC_LITERAL(1, 10, 16), // "factNamesChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "factGroupNamesChanged"
QT_MOC_LITERAL(4, 50, 25), // "telemetryAvailableChanged"
QT_MOC_LITERAL(5, 76, 18), // "telemetryAvailable"
QT_MOC_LITERAL(6, 95, 16), // "_updateAllValues"
QT_MOC_LITERAL(7, 112, 10), // "factExists"
QT_MOC_LITERAL(8, 123, 4), // "name"
QT_MOC_LITERAL(9, 128, 7), // "getFact"
QT_MOC_LITERAL(10, 136, 5), // "Fact*"
QT_MOC_LITERAL(11, 142, 12), // "getFactGroup"
QT_MOC_LITERAL(12, 155, 10), // "FactGroup*"
QT_MOC_LITERAL(13, 166, 14), // "setLiveUpdates"
QT_MOC_LITERAL(14, 181, 11), // "liveUpdates"
QT_MOC_LITERAL(15, 193, 9), // "factNames"
QT_MOC_LITERAL(16, 203, 14) // "factGroupNames"

    },
    "FactGroup\0factNamesChanged\0\0"
    "factGroupNamesChanged\0telemetryAvailableChanged\0"
    "telemetryAvailable\0_updateAllValues\0"
    "factExists\0name\0getFact\0Fact*\0"
    "getFactGroup\0FactGroup*\0setLiveUpdates\0"
    "liveUpdates\0factNames\0factGroupNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FactGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   59,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   60,    2, 0x02 /* Public */,
       9,    1,   63,    2, 0x02 /* Public */,
      11,    1,   66,    2, 0x02 /* Public */,
      13,    1,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    8,
    0x80000000 | 10, QMetaType::QString,    8,
    0x80000000 | 12, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
      15, QMetaType::QStringList, 0x00495001,
      16, QMetaType::QStringList, 0x00495001,
       5, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void FactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->factNamesChanged(); break;
        case 1: _t->factGroupNamesChanged(); break;
        case 2: _t->telemetryAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->_updateAllValues(); break;
        case 4: { bool _r = _t->factExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { Fact* _r = _t->getFact((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 6: { FactGroup* _r = _t->getFactGroup((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FactGroup**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setLiveUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FactGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FactGroup::factNamesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FactGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FactGroup::factGroupNamesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FactGroup::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FactGroup::telemetryAvailableChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->factNames(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->factGroupNames(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->telemetryAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FactGroup.data,
    qt_meta_data_FactGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FactGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void FactGroup::factNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FactGroup::factGroupNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FactGroup::telemetryAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
