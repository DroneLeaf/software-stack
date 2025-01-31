/****************************************************************************
** Meta object code from reading C++ file 'ActuatorOutputs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../LeafMC/src/Vehicle/Actuators/ActuatorOutputs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActuatorOutputs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActuatorOutputs__ConfigParameter_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorOutputs__ConfigParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorOutputs__ConfigParameter_t qt_meta_stringdata_ActuatorOutputs__ConfigParameter = {
    {
QT_MOC_LITERAL(0, 0, 32), // "ActuatorOutputs::ConfigParameter"
QT_MOC_LITERAL(1, 33, 5), // "label"
QT_MOC_LITERAL(2, 39, 4), // "fact"
QT_MOC_LITERAL(3, 44, 5) // "Fact*"

    },
    "ActuatorOutputs::ConfigParameter\0label\0"
    "fact\0Fact*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorOutputs__ConfigParameter[] = {

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
       2, 0x80000000 | 3, 0x00095409,

       0        // eod
};

void ActuatorOutputs::ConfigParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ConfigParameter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->fact(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorOutputs::ConfigParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorOutputs__ConfigParameter.data,
    qt_meta_data_ActuatorOutputs__ConfigParameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorOutputs::ConfigParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ConfigParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorOutputs__ConfigParameter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ConfigParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ActuatorOutputs__ChannelConfig_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorOutputs__ChannelConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorOutputs__ChannelConfig_t qt_meta_stringdata_ActuatorOutputs__ChannelConfig = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ActuatorOutputs::ChannelConfig"
QT_MOC_LITERAL(1, 31, 14), // "visibleChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "label"
QT_MOC_LITERAL(4, 53, 8), // "advanced"
QT_MOC_LITERAL(5, 62, 7) // "visible"

    },
    "ActuatorOutputs::ChannelConfig\0"
    "visibleChanged\0\0label\0advanced\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorOutputs__ChannelConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::Bool, 0x00095401,
       5, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void ActuatorOutputs::ChannelConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChannelConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelConfig::visibleChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChannelConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->advanced(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorOutputs::ChannelConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorOutputs__ChannelConfig.data,
    qt_meta_data_ActuatorOutputs__ChannelConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorOutputs::ChannelConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ChannelConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorOutputs__ChannelConfig.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ChannelConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void ActuatorOutputs::ChannelConfig::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ActuatorOutputs__ChannelConfigInstance_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorOutputs__ChannelConfigInstance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorOutputs__ChannelConfigInstance_t qt_meta_stringdata_ActuatorOutputs__ChannelConfigInstance = {
    {
QT_MOC_LITERAL(0, 0, 38), // "ActuatorOutputs::ChannelConfi..."
QT_MOC_LITERAL(1, 39, 6), // "config"
QT_MOC_LITERAL(2, 46, 14), // "ChannelConfig*"
QT_MOC_LITERAL(3, 61, 4), // "fact"
QT_MOC_LITERAL(4, 66, 5) // "Fact*"

    },
    "ActuatorOutputs::ChannelConfigInstance\0"
    "config\0ChannelConfig*\0fact\0Fact*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorOutputs__ChannelConfigInstance[] = {

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
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void ActuatorOutputs::ChannelConfigInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelConfig* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChannelConfigInstance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ChannelConfig**>(_v) = _t->channelConfig(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->fact(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorOutputs::ChannelConfigInstance::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorOutputs__ChannelConfigInstance.data,
    qt_meta_data_ActuatorOutputs__ChannelConfigInstance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorOutputs::ChannelConfigInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ChannelConfigInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorOutputs__ChannelConfigInstance.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ChannelConfigInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ActuatorOutputs__ActuatorOutputChannel_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorOutputs__ActuatorOutputChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorOutputs__ActuatorOutputChannel_t qt_meta_stringdata_ActuatorOutputs__ActuatorOutputChannel = {
    {
QT_MOC_LITERAL(0, 0, 38), // "ActuatorOutputs::ActuatorOutp..."
QT_MOC_LITERAL(1, 39, 22), // "configInstancesChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 5), // "label"
QT_MOC_LITERAL(4, 69, 15), // "configInstances"
QT_MOC_LITERAL(5, 85, 19) // "QmlObjectListModel*"

    },
    "ActuatorOutputs::ActuatorOutputChannel\0"
    "configInstancesChanged\0\0label\0"
    "configInstances\0QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorOutputs__ActuatorOutputChannel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,
       4, 0x80000000 | 5, 0x00495009,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void ActuatorOutputs::ActuatorOutputChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorOutputChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configInstancesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorOutputChannel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorOutputChannel::configInstancesChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorOutputChannel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->configInstances(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ActuatorOutputs::ActuatorOutputChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorOutputs__ActuatorOutputChannel.data,
    qt_meta_data_ActuatorOutputs__ActuatorOutputChannel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorOutputs::ActuatorOutputChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ActuatorOutputChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorOutputs__ActuatorOutputChannel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ActuatorOutputChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void ActuatorOutputs::ActuatorOutputChannel::configInstancesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ActuatorOutputs__ActuatorOutputSubgroup_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorOutputs__ActuatorOutputSubgroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorOutputs__ActuatorOutputSubgroup_t qt_meta_stringdata_ActuatorOutputs__ActuatorOutputSubgroup = {
    {
QT_MOC_LITERAL(0, 0, 39), // "ActuatorOutputs::ActuatorOutp..."
QT_MOC_LITERAL(1, 40, 15), // "channelsChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 21), // "channelConfigsChanged"
QT_MOC_LITERAL(4, 79, 5), // "label"
QT_MOC_LITERAL(5, 85, 8), // "channels"
QT_MOC_LITERAL(6, 94, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(7, 114, 14), // "channelConfigs"
QT_MOC_LITERAL(8, 129, 12), // "primaryParam"
QT_MOC_LITERAL(9, 142, 16), // "ConfigParameter*"
QT_MOC_LITERAL(10, 159, 12) // "configParams"

    },
    "ActuatorOutputs::ActuatorOutputSubgroup\0"
    "channelsChanged\0\0channelConfigsChanged\0"
    "label\0channels\0QmlObjectListModel*\0"
    "channelConfigs\0primaryParam\0"
    "ConfigParameter*\0configParams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorOutputs__ActuatorOutputSubgroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095401,
       5, 0x80000000 | 6, 0x00495009,
       7, 0x80000000 | 6, 0x00495009,
       8, 0x80000000 | 9, 0x00095409,
      10, 0x80000000 | 6, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,
       0,

       0        // eod
};

void ActuatorOutputs::ActuatorOutputSubgroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorOutputSubgroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelsChanged(); break;
        case 1: _t->channelConfigsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorOutputSubgroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorOutputSubgroup::channelsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorOutputSubgroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorOutputSubgroup::channelConfigsChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConfigParameter* >(); break;
        case 4:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorOutputSubgroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->channels(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->channelConfigs(); break;
        case 3: *reinterpret_cast< ConfigParameter**>(_v) = _t->primaryParam(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->configParams(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ActuatorOutputs::ActuatorOutputSubgroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorOutputs__ActuatorOutputSubgroup.data,
    qt_meta_data_ActuatorOutputs__ActuatorOutputSubgroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorOutputs::ActuatorOutputSubgroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ActuatorOutputSubgroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorOutputs__ActuatorOutputSubgroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ActuatorOutputSubgroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ActuatorOutputs::ActuatorOutputSubgroup::channelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActuatorOutputs::ActuatorOutputSubgroup::channelConfigsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_ActuatorOutputs__ActuatorOutput_t {
    QByteArrayData data[13];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorOutputs__ActuatorOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorOutputs__ActuatorOutput_t qt_meta_stringdata_ActuatorOutputs__ActuatorOutput = {
    {
QT_MOC_LITERAL(0, 0, 31), // "ActuatorOutputs::ActuatorOutput"
QT_MOC_LITERAL(1, 32, 16), // "subgroupsChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 20), // "groupsVisibleChanged"
QT_MOC_LITERAL(4, 71, 12), // "notesChanged"
QT_MOC_LITERAL(5, 84, 5), // "label"
QT_MOC_LITERAL(6, 90, 13), // "groupsVisible"
QT_MOC_LITERAL(7, 104, 9), // "subgroups"
QT_MOC_LITERAL(8, 114, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(9, 134, 11), // "enableParam"
QT_MOC_LITERAL(10, 146, 16), // "ConfigParameter*"
QT_MOC_LITERAL(11, 163, 12), // "configParams"
QT_MOC_LITERAL(12, 176, 5) // "notes"

    },
    "ActuatorOutputs::ActuatorOutput\0"
    "subgroupsChanged\0\0groupsVisibleChanged\0"
    "notesChanged\0label\0groupsVisible\0"
    "subgroups\0QmlObjectListModel*\0enableParam\0"
    "ConfigParameter*\0configParams\0notes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorOutputs__ActuatorOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::Bool, 0x00495001,
       7, 0x80000000 | 8, 0x00495009,
       9, 0x80000000 | 10, 0x00095409,
      11, 0x80000000 | 8, 0x00095409,
      12, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       0,
       2,

       0        // eod
};

void ActuatorOutputs::ActuatorOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subgroupsChanged(); break;
        case 1: _t->groupsVisibleChanged(); break;
        case 2: _t->notesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorOutput::subgroupsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorOutput::groupsVisibleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActuatorOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorOutput::notesChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConfigParameter* >(); break;
        case 4:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->groupsVisible(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->subgroups(); break;
        case 3: *reinterpret_cast< ConfigParameter**>(_v) = _t->enableParam(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->configParams(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->notes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ActuatorOutputs::ActuatorOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorOutputs__ActuatorOutput.data,
    qt_meta_data_ActuatorOutputs__ActuatorOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorOutputs::ActuatorOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ActuatorOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorOutputs__ActuatorOutput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ActuatorOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void ActuatorOutputs::ActuatorOutput::subgroupsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActuatorOutputs::ActuatorOutput::groupsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ActuatorOutputs::ActuatorOutput::notesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
