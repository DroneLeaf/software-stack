/****************************************************************************
** Meta object code from reading C++ file 'LinkConfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/comm/LinkConfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkConfiguration_t {
    QByteArrayData data[22];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkConfiguration_t qt_meta_stringdata_LinkConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LinkConfiguration"
QT_MOC_LITERAL(1, 18, 11), // "nameChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "name"
QT_MOC_LITERAL(4, 36, 14), // "dynamicChanged"
QT_MOC_LITERAL(5, 51, 18), // "autoConnectChanged"
QT_MOC_LITERAL(6, 70, 18), // "highLatencyChanged"
QT_MOC_LITERAL(7, 89, 11), // "linkChanged"
QT_MOC_LITERAL(8, 101, 4), // "link"
QT_MOC_LITERAL(9, 106, 14), // "LinkInterface*"
QT_MOC_LITERAL(10, 121, 8), // "linkType"
QT_MOC_LITERAL(11, 130, 8), // "LinkType"
QT_MOC_LITERAL(12, 139, 7), // "dynamic"
QT_MOC_LITERAL(13, 147, 11), // "autoConnect"
QT_MOC_LITERAL(14, 159, 11), // "settingsURL"
QT_MOC_LITERAL(15, 171, 13), // "settingsTitle"
QT_MOC_LITERAL(16, 185, 11), // "highLatency"
QT_MOC_LITERAL(17, 197, 10), // "TypeSerial"
QT_MOC_LITERAL(18, 208, 7), // "TypeUdp"
QT_MOC_LITERAL(19, 216, 7), // "TypeTcp"
QT_MOC_LITERAL(20, 224, 13), // "TypeLogReplay"
QT_MOC_LITERAL(21, 238, 8) // "TypeLast"

    },
    "LinkConfiguration\0nameChanged\0\0name\0"
    "dynamicChanged\0autoConnectChanged\0"
    "highLatencyChanged\0linkChanged\0link\0"
    "LinkInterface*\0linkType\0LinkType\0"
    "dynamic\0autoConnect\0settingsURL\0"
    "settingsTitle\0highLatency\0TypeSerial\0"
    "TypeUdp\0TypeTcp\0TypeLogReplay\0TypeLast"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   46, // properties
       1,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    0,   43,    2, 0x06 /* Public */,
       6,    0,   44,    2, 0x06 /* Public */,
       7,    0,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       8, 0x80000000 | 9, 0x00495009,
      10, 0x80000000 | 11, 0x00095409,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::QString, 0x00095401,
      15, QMetaType::QString, 0x00095401,
      16, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       4,
       0,
       1,
       2,
       0,
       0,
       3,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    5,   83,

 // enum data: key, value
      17, uint(LinkConfiguration::TypeSerial),
      18, uint(LinkConfiguration::TypeUdp),
      19, uint(LinkConfiguration::TypeTcp),
      20, uint(LinkConfiguration::TypeLogReplay),
      21, uint(LinkConfiguration::TypeLast),

       0        // eod
};

void LinkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->dynamicChanged(); break;
        case 2: _t->autoConnectChanged(); break;
        case 3: _t->highLatencyChanged(); break;
        case 4: _t->linkChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkConfiguration::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkConfiguration::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkConfiguration::dynamicChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LinkConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkConfiguration::autoConnectChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LinkConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkConfiguration::highLatencyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LinkConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkConfiguration::linkChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LinkConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< LinkInterface**>(_v) = _t->link(); break;
        case 2: *reinterpret_cast< LinkType*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isDynamic(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isAutoConnect(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->settingsURL(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->settingsTitle(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isHighLatency(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LinkConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDynamic(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setAutoConnect(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setHighLatency(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LinkConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LinkConfiguration.data,
    qt_meta_data_LinkConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LinkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkConfiguration.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LinkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void LinkConfiguration::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkConfiguration::dynamicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LinkConfiguration::autoConnectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LinkConfiguration::highLatencyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LinkConfiguration::linkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
