/****************************************************************************
** Meta object code from reading C++ file 'APMFlightModesComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/AutoPilotPlugins/APM/APMFlightModesComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMFlightModesComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMFlightModesComponentController_t {
    QByteArrayData data[31];
    char stringdata0[595];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMFlightModesComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMFlightModesComponentController_t qt_meta_stringdata_APMFlightModesComponentController = {
    {
QT_MOC_LITERAL(0, 0, 33), // "APMFlightModesComponentContro..."
QT_MOC_LITERAL(1, 34, 23), // "activeFlightModeChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 16), // "activeFlightMode"
QT_MOC_LITERAL(4, 76, 27), // "channelOptionEnabledChanged"
QT_MOC_LITERAL(5, 104, 17), // "simpleModeChanged"
QT_MOC_LITERAL(6, 122, 10), // "simpleMode"
QT_MOC_LITERAL(7, 133, 24), // "simpleModeEnabledChanged"
QT_MOC_LITERAL(8, 158, 29), // "superSimpleModeEnabledChanged"
QT_MOC_LITERAL(9, 188, 18), // "_rcChannelsChanged"
QT_MOC_LITERAL(10, 207, 12), // "channelCount"
QT_MOC_LITERAL(11, 220, 28), // "int[Vehicle::cMaxRcChannels]"
QT_MOC_LITERAL(12, 249, 9), // "pwmValues"
QT_MOC_LITERAL(13, 259, 33), // "_updateSimpleParamsFromSimple..."
QT_MOC_LITERAL(14, 293, 23), // "_setupSimpleModeEnabled"
QT_MOC_LITERAL(15, 317, 13), // "setSimpleMode"
QT_MOC_LITERAL(16, 331, 12), // "fltModeIndex"
QT_MOC_LITERAL(17, 344, 7), // "enabled"
QT_MOC_LITERAL(18, 352, 18), // "setSuperSimpleMode"
QT_MOC_LITERAL(19, 371, 15), // "modeParamPrefix"
QT_MOC_LITERAL(20, 387, 16), // "modeChannelParam"
QT_MOC_LITERAL(21, 404, 20), // "channelOptionEnabled"
QT_MOC_LITERAL(22, 425, 20), // "simpleModesSupported"
QT_MOC_LITERAL(23, 446, 15), // "simpleModeNames"
QT_MOC_LITERAL(24, 462, 17), // "simpleModeEnabled"
QT_MOC_LITERAL(25, 480, 22), // "superSimpleModeEnabled"
QT_MOC_LITERAL(26, 503, 16), // "SimpleModeValues"
QT_MOC_LITERAL(27, 520, 18), // "SimpleModeStandard"
QT_MOC_LITERAL(28, 539, 16), // "SimpleModeSimple"
QT_MOC_LITERAL(29, 556, 21), // "SimpleModeSuperSimple"
QT_MOC_LITERAL(30, 578, 16) // "SimpleModeCustom"

    },
    "APMFlightModesComponentController\0"
    "activeFlightModeChanged\0\0activeFlightMode\0"
    "channelOptionEnabledChanged\0"
    "simpleModeChanged\0simpleMode\0"
    "simpleModeEnabledChanged\0"
    "superSimpleModeEnabledChanged\0"
    "_rcChannelsChanged\0channelCount\0"
    "int[Vehicle::cMaxRcChannels]\0pwmValues\0"
    "_updateSimpleParamsFromSimpleMode\0"
    "_setupSimpleModeEnabled\0setSimpleMode\0"
    "fltModeIndex\0enabled\0setSuperSimpleMode\0"
    "modeParamPrefix\0modeChannelParam\0"
    "channelOptionEnabled\0simpleModesSupported\0"
    "simpleModeNames\0simpleModeEnabled\0"
    "superSimpleModeEnabled\0SimpleModeValues\0"
    "SimpleModeStandard\0SimpleModeSimple\0"
    "SimpleModeSuperSimple\0SimpleModeCustom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMFlightModesComponentController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   90, // properties
       1,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       7,    0,   71,    2, 0x06 /* Public */,
       8,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   73,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    2,   80,    2, 0x02 /* Public */,
      18,    2,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,   10,   12,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00095401,
      20, QMetaType::QString, 0x00095401,
       3, QMetaType::Int, 0x00495001,
      10, QMetaType::Int, 0x00095401,
      21, QMetaType::QVariantList, 0x00495001,
      22, QMetaType::Bool, 0x00095401,
      23, QMetaType::QStringList, 0x00095401,
       6, QMetaType::Int, 0x00495003,
      24, QMetaType::QVariantList, 0x00495003,
      25, QMetaType::QVariantList, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       2,
       3,
       4,

 // enums: name, alias, flags, count, data
      26,   26, 0x0,    4,  135,

 // enum data: key, value
      27, uint(APMFlightModesComponentController::SimpleModeStandard),
      28, uint(APMFlightModesComponentController::SimpleModeSimple),
      29, uint(APMFlightModesComponentController::SimpleModeSuperSimple),
      30, uint(APMFlightModesComponentController::SimpleModeCustom),

       0        // eod
};

void APMFlightModesComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMFlightModesComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeFlightModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->channelOptionEnabledChanged(); break;
        case 2: _t->simpleModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->simpleModeEnabledChanged(); break;
        case 4: _t->superSimpleModeEnabledChanged(); break;
        case 5: _t->_rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[Vehicle::cMaxRcChannels]>(_a[2]))); break;
        case 6: _t->_updateSimpleParamsFromSimpleMode(); break;
        case 7: _t->_setupSimpleModeEnabled(); break;
        case 8: _t->setSimpleMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->setSuperSimpleMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (APMFlightModesComponentController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFlightModesComponentController::activeFlightModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (APMFlightModesComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFlightModesComponentController::channelOptionEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (APMFlightModesComponentController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFlightModesComponentController::simpleModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (APMFlightModesComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFlightModesComponentController::simpleModeEnabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (APMFlightModesComponentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFlightModesComponentController::superSimpleModeEnabledChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMFlightModesComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_modeParamPrefix; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_modeChannelParam; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->activeFlightMode(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_channelCount; break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->channelOptionEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_simpleModesSupported; break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->_simpleModeNames; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->_simpleMode; break;
        case 8: *reinterpret_cast< QVariantList*>(_v) = _t->_simpleModeEnabled; break;
        case 9: *reinterpret_cast< QVariantList*>(_v) = _t->_superSimpleModeEnabled; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<APMFlightModesComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 7:
            if (_t->_simpleMode != *reinterpret_cast< int*>(_v)) {
                _t->_simpleMode = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->simpleModeChanged(_t->_simpleMode);
            }
            break;
        case 8:
            if (_t->_simpleModeEnabled != *reinterpret_cast< QVariantList*>(_v)) {
                _t->_simpleModeEnabled = *reinterpret_cast< QVariantList*>(_v);
                Q_EMIT _t->simpleModeEnabledChanged();
            }
            break;
        case 9:
            if (_t->_superSimpleModeEnabled != *reinterpret_cast< QVariantList*>(_v)) {
                _t->_superSimpleModeEnabled = *reinterpret_cast< QVariantList*>(_v);
                Q_EMIT _t->superSimpleModeEnabledChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject APMFlightModesComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_APMFlightModesComponentController.data,
    qt_meta_data_APMFlightModesComponentController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *APMFlightModesComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFlightModesComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMFlightModesComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMFlightModesComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void APMFlightModesComponentController::activeFlightModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void APMFlightModesComponentController::channelOptionEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void APMFlightModesComponentController::simpleModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void APMFlightModesComponentController::simpleModeEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void APMFlightModesComponentController::superSimpleModeEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
