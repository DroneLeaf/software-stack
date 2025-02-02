/****************************************************************************
** Meta object code from reading C++ file 'Mixer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../LeafMC/src/Vehicle/Actuators/Mixer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Mixer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mixer__ConfigParameter_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mixer__ConfigParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mixer__ConfigParameter_t qt_meta_stringdata_Mixer__ConfigParameter = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Mixer::ConfigParameter"
QT_MOC_LITERAL(1, 23, 5), // "label"
QT_MOC_LITERAL(2, 29, 4), // "fact"
QT_MOC_LITERAL(3, 34, 5), // "Fact*"
QT_MOC_LITERAL(4, 40, 8) // "advanced"

    },
    "Mixer::ConfigParameter\0label\0fact\0"
    "Fact*\0advanced"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mixer__ConfigParameter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, 0x80000000 | 3, 0x00095409,
       4, QMetaType::Bool, 0x00095401,

       0        // eod
};

void Mixer::ConfigParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        case 2: *reinterpret_cast< bool*>(_v) = _t->advanced(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject Mixer::ConfigParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mixer__ConfigParameter.data,
    qt_meta_data_Mixer__ConfigParameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mixer::ConfigParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ConfigParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mixer__ConfigParameter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::ConfigParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_Mixer__ChannelConfig_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mixer__ChannelConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mixer__ChannelConfig_t qt_meta_stringdata_Mixer__ChannelConfig = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Mixer::ChannelConfig"
QT_MOC_LITERAL(1, 21, 14), // "visibleChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 22), // "instanceVisibleChanged"
QT_MOC_LITERAL(4, 60, 5), // "label"
QT_MOC_LITERAL(5, 66, 7), // "visible"
QT_MOC_LITERAL(6, 74, 8) // "advanced"

    },
    "Mixer::ChannelConfig\0visibleChanged\0"
    "\0instanceVisibleChanged\0label\0visible\0"
    "advanced"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mixer__ChannelConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::Bool, 0x00495001,
       6, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void Mixer::ChannelConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        case 1: _t->instanceVisibleChanged(); break;
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
        case 1: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->advanced(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Mixer::ChannelConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mixer__ChannelConfig.data,
    qt_meta_data_Mixer__ChannelConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mixer::ChannelConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ChannelConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mixer__ChannelConfig.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::ChannelConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Mixer::ChannelConfig::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Mixer__ChannelConfigVirtualAxis_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mixer__ChannelConfigVirtualAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mixer__ChannelConfigVirtualAxis_t qt_meta_stringdata_Mixer__ChannelConfigVirtualAxis = {
    {
QT_MOC_LITERAL(0, 0, 31) // "Mixer::ChannelConfigVirtualAxis"

    },
    "Mixer::ChannelConfigVirtualAxis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mixer__ChannelConfigVirtualAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Mixer::ChannelConfigVirtualAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Mixer::ChannelConfigVirtualAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<ChannelConfig::staticMetaObject>(),
    qt_meta_stringdata_Mixer__ChannelConfigVirtualAxis.data,
    qt_meta_data_Mixer__ChannelConfigVirtualAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mixer::ChannelConfigVirtualAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ChannelConfigVirtualAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mixer__ChannelConfigVirtualAxis.stringdata0))
        return static_cast<void*>(this);
    return ChannelConfig::qt_metacast(_clname);
}

int Mixer::ChannelConfigVirtualAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChannelConfig::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Mixer__ChannelConfigInstance_t {
    QByteArrayData data[10];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mixer__ChannelConfigInstance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mixer__ChannelConfigInstance_t qt_meta_stringdata_Mixer__ChannelConfigInstance = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Mixer::ChannelConfigInstance"
QT_MOC_LITERAL(1, 29, 14), // "visibleChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 60, 6), // "config"
QT_MOC_LITERAL(5, 67, 14), // "ChannelConfig*"
QT_MOC_LITERAL(6, 82, 4), // "fact"
QT_MOC_LITERAL(7, 87, 5), // "Fact*"
QT_MOC_LITERAL(8, 93, 7), // "visible"
QT_MOC_LITERAL(9, 101, 7) // "enabled"

    },
    "Mixer::ChannelConfigInstance\0"
    "visibleChanged\0\0enabledChanged\0config\0"
    "ChannelConfig*\0fact\0Fact*\0visible\0"
    "enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mixer__ChannelConfigInstance[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   26, // properties
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
       4, 0x80000000 | 5, 0x00095409,
       6, 0x80000000 | 7, 0x00095409,
       8, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,

       0        // eod
};

void Mixer::ChannelConfigInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelConfigInstance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        case 1: _t->enabledChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChannelConfigInstance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelConfigInstance::visibleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChannelConfigInstance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelConfigInstance::enabledChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
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
        case 2: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Mixer::ChannelConfigInstance::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mixer__ChannelConfigInstance.data,
    qt_meta_data_Mixer__ChannelConfigInstance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mixer::ChannelConfigInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ChannelConfigInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mixer__ChannelConfigInstance.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::ChannelConfigInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Mixer::ChannelConfigInstance::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mixer::ChannelConfigInstance::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_Mixer__ChannelConfigInstanceVirtualAxis_t {
    QByteArrayData data[7];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mixer__ChannelConfigInstanceVirtualAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mixer__ChannelConfigInstanceVirtualAxis_t qt_meta_stringdata_Mixer__ChannelConfigInstanceVirtualAxis = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Mixer::ChannelConfigInstanceV..."
QT_MOC_LITERAL(1, 40, 15), // "setFactFromAxes"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 11), // "keepVisible"
QT_MOC_LITERAL(4, 69, 15), // "setAxesFromFact"
QT_MOC_LITERAL(5, 85, 18), // "axisVisibleChanged"
QT_MOC_LITERAL(6, 104, 17) // "axisEnableChanged"

    },
    "Mixer::ChannelConfigInstanceVirtualAxis\0"
    "setFactFromAxes\0\0keepVisible\0"
    "setAxesFromFact\0axisVisibleChanged\0"
    "axisEnableChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mixer__ChannelConfigInstanceVirtualAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       1,    0,   42,    2, 0x28 /* Private | MethodCloned */,
       4,    0,   43,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Mixer::ChannelConfigInstanceVirtualAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelConfigInstanceVirtualAxis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFactFromAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setFactFromAxes(); break;
        case 2: _t->setAxesFromFact(); break;
        case 3: _t->axisVisibleChanged(); break;
        case 4: _t->axisEnableChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mixer::ChannelConfigInstanceVirtualAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<ChannelConfigInstance::staticMetaObject>(),
    qt_meta_stringdata_Mixer__ChannelConfigInstanceVirtualAxis.data,
    qt_meta_data_Mixer__ChannelConfigInstanceVirtualAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mixer::ChannelConfigInstanceVirtualAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ChannelConfigInstanceVirtualAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mixer__ChannelConfigInstanceVirtualAxis.stringdata0))
        return static_cast<void*>(this);
    return ChannelConfigInstance::qt_metacast(_clname);
}

int Mixer::ChannelConfigInstanceVirtualAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChannelConfigInstance::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_Mixer__MixerChannel_t {
    QByteArrayData data[8];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mixer__MixerChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mixer__MixerChannel_t qt_meta_stringdata_Mixer__MixerChannel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Mixer::MixerChannel"
QT_MOC_LITERAL(1, 20, 22), // "configInstancesChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 9), // "applyRule"
QT_MOC_LITERAL(4, 54, 13), // "noConstraints"
QT_MOC_LITERAL(5, 68, 5), // "label"
QT_MOC_LITERAL(6, 74, 15), // "configInstances"
QT_MOC_LITERAL(7, 90, 19) // "QmlObjectListModel*"

    },
    "Mixer::MixerChannel\0configInstancesChanged\0"
    "\0applyRule\0noConstraints\0label\0"
    "configInstances\0QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mixer__MixerChannel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       3,    0,   33,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095401,
       6, 0x80000000 | 7, 0x00495009,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void Mixer::MixerChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configInstancesChanged(); break;
        case 1: _t->applyRule((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->applyRule(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerChannel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannel::configInstancesChanged)) {
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
        auto *_t = static_cast<MixerChannel *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject Mixer::MixerChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mixer__MixerChannel.data,
    qt_meta_data_Mixer__MixerChannel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mixer::MixerChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::MixerChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mixer__MixerChannel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::MixerChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Mixer::MixerChannel::configInstancesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Mixer__MixerConfigGroup_t {
    QByteArrayData data[11];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mixer__MixerConfigGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mixer__MixerConfigGroup_t qt_meta_stringdata_Mixer__MixerConfigGroup = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Mixer::MixerConfigGroup"
QT_MOC_LITERAL(1, 24, 15), // "channelsChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "channelConfigsChanged"
QT_MOC_LITERAL(4, 63, 5), // "label"
QT_MOC_LITERAL(5, 69, 8), // "channels"
QT_MOC_LITERAL(6, 78, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(7, 98, 14), // "channelConfigs"
QT_MOC_LITERAL(8, 113, 10), // "countParam"
QT_MOC_LITERAL(9, 124, 16), // "ConfigParameter*"
QT_MOC_LITERAL(10, 141, 12) // "configParams"

    },
    "Mixer::MixerConfigGroup\0channelsChanged\0"
    "\0channelConfigsChanged\0label\0channels\0"
    "QmlObjectListModel*\0channelConfigs\0"
    "countParam\0ConfigParameter*\0configParams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mixer__MixerConfigGroup[] = {

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

void Mixer::MixerConfigGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerConfigGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelsChanged(); break;
        case 1: _t->channelConfigsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerConfigGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerConfigGroup::channelsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MixerConfigGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerConfigGroup::channelConfigsChanged)) {
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
        auto *_t = static_cast<MixerConfigGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->channels(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->channelConfigs(); break;
        case 3: *reinterpret_cast< ConfigParameter**>(_v) = _t->countParam(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->configParams(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Mixer::MixerConfigGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mixer__MixerConfigGroup.data,
    qt_meta_data_Mixer__MixerConfigGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mixer::MixerConfigGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::MixerConfigGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mixer__MixerConfigGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::MixerConfigGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Mixer::MixerConfigGroup::channelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mixer::MixerConfigGroup::channelConfigsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_Mixer__Mixers_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mixer__Mixers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mixer__Mixers_t qt_meta_stringdata_Mixer__Mixers = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Mixer::Mixers"
QT_MOC_LITERAL(1, 14, 13), // "groupsChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "paramChanged"
QT_MOC_LITERAL(4, 42, 20), // "geometryParamChanged"
QT_MOC_LITERAL(5, 63, 6), // "update"
QT_MOC_LITERAL(6, 70, 6), // "groups"
QT_MOC_LITERAL(7, 77, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(8, 97, 5), // "title"
QT_MOC_LITERAL(9, 103, 7) // "helpUrl"

    },
    "Mixer::Mixers\0groupsChanged\0\0paramChanged\0"
    "geometryParamChanged\0update\0groups\0"
    "QmlObjectListModel*\0title\0helpUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mixer__Mixers[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00495009,
       8, QMetaType::QString, 0x00495001,
       9, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void Mixer::Mixers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mixers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupsChanged(); break;
        case 1: _t->paramChanged(); break;
        case 2: _t->geometryParamChanged(); break;
        case 3: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Mixers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mixers::groupsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Mixers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mixers::paramChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Mixers::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mixers::geometryParamChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Mixers *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->groups(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->helpUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Mixer::Mixers::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mixer__Mixers.data,
    qt_meta_data_Mixer__Mixers,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mixer::Mixers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::Mixers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mixer__Mixers.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::Mixers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void Mixer::Mixers::groupsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mixer::Mixers::paramChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Mixer::Mixers::geometryParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
