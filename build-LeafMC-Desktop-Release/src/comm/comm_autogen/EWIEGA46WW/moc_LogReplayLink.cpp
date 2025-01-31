/****************************************************************************
** Meta object code from reading C++ file 'LogReplayLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/comm/LogReplayLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogReplayLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogReplayLinkConfiguration_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogReplayLinkConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogReplayLinkConfiguration_t qt_meta_stringdata_LogReplayLinkConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 26), // "LogReplayLinkConfiguration"
QT_MOC_LITERAL(1, 27, 15), // "fileNameChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8) // "fileName"

    },
    "LogReplayLinkConfiguration\0fileNameChanged\0"
    "\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogReplayLinkConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void LogReplayLinkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogReplayLinkConfiguration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLinkConfiguration::fileNameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->logFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LogReplayLinkConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkConfiguration::staticMetaObject>(),
    qt_meta_stringdata_LogReplayLinkConfiguration.data,
    qt_meta_data_LogReplayLinkConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogReplayLinkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogReplayLinkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogReplayLinkConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int LogReplayLinkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LogReplayLinkConfiguration::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LogReplayLink_t {
    QByteArrayData data[22];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogReplayLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogReplayLink_t qt_meta_stringdata_LogReplayLink = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LogReplayLink"
QT_MOC_LITERAL(1, 14, 12), // "logFileStats"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "logDurationSecs"
QT_MOC_LITERAL(4, 44, 15), // "playbackStarted"
QT_MOC_LITERAL(5, 60, 14), // "playbackPaused"
QT_MOC_LITERAL(6, 75, 13), // "playbackAtEnd"
QT_MOC_LITERAL(7, 89, 30), // "playbackPercentCompleteChanged"
QT_MOC_LITERAL(8, 120, 15), // "percentComplete"
QT_MOC_LITERAL(9, 136, 18), // "currentLogTimeSecs"
QT_MOC_LITERAL(10, 155, 4), // "secs"
QT_MOC_LITERAL(11, 160, 13), // "_playOnThread"
QT_MOC_LITERAL(12, 174, 14), // "_pauseOnThread"
QT_MOC_LITERAL(13, 189, 25), // "_setPlaybackSpeedOnThread"
QT_MOC_LITERAL(14, 215, 13), // "playbackSpeed"
QT_MOC_LITERAL(15, 229, 16), // "setPlaybackSpeed"
QT_MOC_LITERAL(16, 246, 11), // "_writeBytes"
QT_MOC_LITERAL(17, 258, 5), // "bytes"
QT_MOC_LITERAL(18, 264, 17), // "_readNextLogEntry"
QT_MOC_LITERAL(19, 282, 5), // "_play"
QT_MOC_LITERAL(20, 288, 6), // "_pause"
QT_MOC_LITERAL(21, 295, 17) // "_setPlaybackSpeed"

    },
    "LogReplayLink\0logFileStats\0\0logDurationSecs\0"
    "playbackStarted\0playbackPaused\0"
    "playbackAtEnd\0playbackPercentCompleteChanged\0"
    "percentComplete\0currentLogTimeSecs\0"
    "secs\0_playOnThread\0_pauseOnThread\0"
    "_setPlaybackSpeedOnThread\0playbackSpeed\0"
    "setPlaybackSpeed\0_writeBytes\0bytes\0"
    "_readNextLogEntry\0_play\0_pause\0"
    "_setPlaybackSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogReplayLink[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    0,   92,    2, 0x06 /* Public */,
       5,    0,   93,    2, 0x06 /* Public */,
       6,    0,   94,    2, 0x06 /* Public */,
       7,    1,   95,    2, 0x06 /* Public */,
       9,    1,   98,    2, 0x06 /* Public */,
      11,    0,  101,    2, 0x06 /* Public */,
      12,    0,  102,    2, 0x06 /* Public */,
      13,    1,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  106,    2, 0x0a /* Public */,
      16,    1,  109,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,
      20,    0,  114,    2, 0x08 /* Private */,
      21,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,   14,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   14,

       0        // eod
};

void LogReplayLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogReplayLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logFileStats((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->playbackStarted(); break;
        case 2: _t->playbackPaused(); break;
        case 3: _t->playbackAtEnd(); break;
        case 4: _t->playbackPercentCompleteChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->currentLogTimeSecs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->_playOnThread(); break;
        case 7: _t->_pauseOnThread(); break;
        case 8: _t->_setPlaybackSpeedOnThread((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setPlaybackSpeed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 10: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->_readNextLogEntry(); break;
        case 12: _t->_play(); break;
        case 13: _t->_pause(); break;
        case 14: _t->_setPlaybackSpeed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogReplayLink::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::logFileStats)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackPaused)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackAtEnd)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackPercentCompleteChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::currentLogTimeSecs)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::_playOnThread)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::_pauseOnThread)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LogReplayLink::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::_setPlaybackSpeedOnThread)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogReplayLink::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkInterface::staticMetaObject>(),
    qt_meta_stringdata_LogReplayLink.data,
    qt_meta_data_LogReplayLink,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogReplayLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogReplayLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogReplayLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int LogReplayLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void LogReplayLink::logFileStats(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogReplayLink::playbackStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogReplayLink::playbackPaused()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LogReplayLink::playbackAtEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LogReplayLink::playbackPercentCompleteChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LogReplayLink::currentLogTimeSecs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LogReplayLink::_playOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LogReplayLink::_pauseOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LogReplayLink::_setPlaybackSpeedOnThread(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_LogReplayLinkController_t {
    QByteArrayData data[24];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogReplayLinkController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogReplayLinkController_t qt_meta_stringdata_LogReplayLinkController = {
    {
QT_MOC_LITERAL(0, 0, 23), // "LogReplayLinkController"
QT_MOC_LITERAL(1, 24, 11), // "linkChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "LogReplayLink*"
QT_MOC_LITERAL(4, 52, 4), // "link"
QT_MOC_LITERAL(5, 57, 16), // "isPlayingChanged"
QT_MOC_LITERAL(6, 74, 9), // "isPlaying"
QT_MOC_LITERAL(7, 84, 22), // "percentCompleteChanged"
QT_MOC_LITERAL(8, 107, 15), // "percentComplete"
QT_MOC_LITERAL(9, 123, 19), // "playheadTimeChanged"
QT_MOC_LITERAL(10, 143, 12), // "playheadTime"
QT_MOC_LITERAL(11, 156, 16), // "totalTimeChanged"
QT_MOC_LITERAL(12, 173, 9), // "totalTime"
QT_MOC_LITERAL(13, 183, 20), // "playbackSpeedChanged"
QT_MOC_LITERAL(14, 204, 13), // "playbackSpeed"
QT_MOC_LITERAL(15, 218, 13), // "_logFileStats"
QT_MOC_LITERAL(16, 232, 15), // "logDurationSecs"
QT_MOC_LITERAL(17, 248, 16), // "_playbackStarted"
QT_MOC_LITERAL(18, 265, 15), // "_playbackPaused"
QT_MOC_LITERAL(19, 281, 14), // "_playbackAtEnd"
QT_MOC_LITERAL(20, 296, 31), // "_playbackPercentCompleteChanged"
QT_MOC_LITERAL(21, 328, 19), // "_currentLogTimeSecs"
QT_MOC_LITERAL(22, 348, 4), // "secs"
QT_MOC_LITERAL(23, 353, 17) // "_linkDisconnected"

    },
    "LogReplayLinkController\0linkChanged\0"
    "\0LogReplayLink*\0link\0isPlayingChanged\0"
    "isPlaying\0percentCompleteChanged\0"
    "percentComplete\0playheadTimeChanged\0"
    "playheadTime\0totalTimeChanged\0totalTime\0"
    "playbackSpeedChanged\0playbackSpeed\0"
    "_logFileStats\0logDurationSecs\0"
    "_playbackStarted\0_playbackPaused\0"
    "_playbackAtEnd\0_playbackPercentCompleteChanged\0"
    "_currentLogTimeSecs\0secs\0_linkDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogReplayLinkController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       7,    1,   85,    2, 0x06 /* Public */,
       9,    1,   88,    2, 0x06 /* Public */,
      11,    1,   91,    2, 0x06 /* Public */,
      13,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   97,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,
      19,    0,  102,    2, 0x08 /* Private */,
      20,    1,  103,    2, 0x08 /* Private */,
      21,    1,  106,    2, 0x08 /* Private */,
      23,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QReal,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::Bool, 0x00495103,
       8, QMetaType::QReal, 0x00495103,
      12, QMetaType::QString, 0x00495003,
      10, QMetaType::QString, 0x00495003,
      14, QMetaType::QReal, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       3,
       5,

       0        // eod
};

void LogReplayLinkController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogReplayLinkController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linkChanged((*reinterpret_cast< LogReplayLink*(*)>(_a[1]))); break;
        case 1: _t->isPlayingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->percentCompleteChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->playheadTimeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->totalTimeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->playbackSpeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->_logFileStats((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->_playbackStarted(); break;
        case 8: _t->_playbackPaused(); break;
        case 9: _t->_playbackAtEnd(); break;
        case 10: _t->_playbackPercentCompleteChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->_currentLogTimeSecs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->_linkDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LogReplayLink* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogReplayLinkController::*)(LogReplayLink * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLinkController::linkChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLinkController::isPlayingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLinkController::percentCompleteChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLinkController::playheadTimeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLinkController::totalTimeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LogReplayLinkController::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLinkController::playbackSpeedChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LogReplayLink* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LogReplayLinkController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LogReplayLink**>(_v) = _t->link(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPlaying(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->percentComplete(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_totalTime; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->_playheadTime; break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->_playbackSpeed; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LogReplayLinkController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLink(*reinterpret_cast< LogReplayLink**>(_v)); break;
        case 1: _t->setIsPlaying(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setPercentComplete(*reinterpret_cast< qreal*>(_v)); break;
        case 3:
            if (_t->_totalTime != *reinterpret_cast< QString*>(_v)) {
                _t->_totalTime = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->totalTimeChanged(_t->_totalTime);
            }
            break;
        case 4:
            if (_t->_playheadTime != *reinterpret_cast< QString*>(_v)) {
                _t->_playheadTime = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->playheadTimeChanged(_t->_playheadTime);
            }
            break;
        case 5:
            if (_t->_playbackSpeed != *reinterpret_cast< qreal*>(_v)) {
                _t->_playbackSpeed = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->playbackSpeedChanged(_t->_playbackSpeed);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LogReplayLinkController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LogReplayLinkController.data,
    qt_meta_data_LogReplayLinkController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogReplayLinkController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogReplayLinkController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogReplayLinkController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogReplayLinkController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
void LogReplayLinkController::linkChanged(LogReplayLink * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogReplayLinkController::isPlayingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LogReplayLinkController::percentCompleteChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LogReplayLinkController::playheadTimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LogReplayLinkController::totalTimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LogReplayLinkController::playbackSpeedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
