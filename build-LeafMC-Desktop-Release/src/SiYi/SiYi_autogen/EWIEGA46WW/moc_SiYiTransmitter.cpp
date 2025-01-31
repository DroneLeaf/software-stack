/****************************************************************************
** Meta object code from reading C++ file 'SiYiTransmitter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/SiYi/SiYiTransmitter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SiYiTransmitter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SiYiTransmitter_t {
    QByteArrayData data[22];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SiYiTransmitter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SiYiTransmitter_t qt_meta_stringdata_SiYiTransmitter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SiYiTransmitter"
QT_MOC_LITERAL(1, 16, 20), // "signalQualityChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "inactiveTimeChanged"
QT_MOC_LITERAL(4, 58, 15), // "upStreamChanged"
QT_MOC_LITERAL(5, 74, 17), // "downStreamChanged"
QT_MOC_LITERAL(6, 92, 17), // "txBanWidthChanged"
QT_MOC_LITERAL(7, 110, 17), // "rxBanWidthChanged"
QT_MOC_LITERAL(8, 128, 11), // "rssiChanged"
QT_MOC_LITERAL(9, 140, 11), // "freqChanged"
QT_MOC_LITERAL(10, 152, 14), // "channelChanged"
QT_MOC_LITERAL(11, 167, 14), // "versionChanged"
QT_MOC_LITERAL(12, 182, 13), // "signalQuality"
QT_MOC_LITERAL(13, 196, 12), // "inactiveTime"
QT_MOC_LITERAL(14, 209, 8), // "upStream"
QT_MOC_LITERAL(15, 218, 10), // "downStream"
QT_MOC_LITERAL(16, 229, 10), // "txBanWidth"
QT_MOC_LITERAL(17, 240, 10), // "rxBanWidth"
QT_MOC_LITERAL(18, 251, 4), // "rssi"
QT_MOC_LITERAL(19, 256, 4), // "freq"
QT_MOC_LITERAL(20, 261, 7), // "channel"
QT_MOC_LITERAL(21, 269, 7) // "version"

    },
    "SiYiTransmitter\0signalQualityChanged\0"
    "\0inactiveTimeChanged\0upStreamChanged\0"
    "downStreamChanged\0txBanWidthChanged\0"
    "rxBanWidthChanged\0rssiChanged\0freqChanged\0"
    "channelChanged\0versionChanged\0"
    "signalQuality\0inactiveTime\0upStream\0"
    "downStream\0txBanWidth\0rxBanWidth\0rssi\0"
    "freq\0channel\0version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SiYiTransmitter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x04 /* Private */,
       3,    0,   65,    2, 0x04 /* Private */,
       4,    0,   66,    2, 0x04 /* Private */,
       5,    0,   67,    2, 0x04 /* Private */,
       6,    0,   68,    2, 0x04 /* Private */,
       7,    0,   69,    2, 0x04 /* Private */,
       8,    0,   70,    2, 0x04 /* Private */,
       9,    0,   71,    2, 0x04 /* Private */,
      10,    0,   72,    2, 0x04 /* Private */,
      11,    0,   73,    2, 0x04 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::Int, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::Int, 0x00495001,
      16, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495001,
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::Int, 0x00495001,
      20, QMetaType::Int, 0x00495001,
      21, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void SiYiTransmitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SiYiTransmitter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalQualityChanged(); break;
        case 1: _t->inactiveTimeChanged(); break;
        case 2: _t->upStreamChanged(); break;
        case 3: _t->downStreamChanged(); break;
        case 4: _t->txBanWidthChanged(); break;
        case 5: _t->rxBanWidthChanged(); break;
        case 6: _t->rssiChanged(); break;
        case 7: _t->freqChanged(); break;
        case 8: _t->channelChanged(); break;
        case 9: _t->versionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::signalQualityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::inactiveTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::upStreamChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::downStreamChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::txBanWidthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::rxBanWidthChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::rssiChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::freqChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::channelChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SiYiTransmitter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SiYiTransmitter::versionChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SiYiTransmitter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->signalQuality(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->inactiveTime(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->upStream(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->downStream(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->txBanWidth(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->rxBanWidth(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->rssi(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->freq(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->channel(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SiYiTransmitter::staticMetaObject = { {
    QMetaObject::SuperData::link<SiYiTcpClient::staticMetaObject>(),
    qt_meta_stringdata_SiYiTransmitter.data,
    qt_meta_data_SiYiTransmitter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SiYiTransmitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SiYiTransmitter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SiYiTransmitter.stringdata0))
        return static_cast<void*>(this);
    return SiYiTcpClient::qt_metacast(_clname);
}

int SiYiTransmitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SiYiTcpClient::qt_metacall(_c, _id, _a);
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
void SiYiTransmitter::signalQualityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SiYiTransmitter::inactiveTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SiYiTransmitter::upStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SiYiTransmitter::downStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SiYiTransmitter::txBanWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SiYiTransmitter::rxBanWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SiYiTransmitter::rssiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SiYiTransmitter::freqChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SiYiTransmitter::channelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SiYiTransmitter::versionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
