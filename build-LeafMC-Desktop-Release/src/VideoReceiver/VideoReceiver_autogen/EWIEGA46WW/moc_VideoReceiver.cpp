/****************************************************************************
** Meta object code from reading C++ file 'VideoReceiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/VideoReceiver/VideoReceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoReceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoReceiver_t {
    QByteArrayData data[38];
    char stringdata0[507];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoReceiver_t qt_meta_stringdata_VideoReceiver = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VideoReceiver"
QT_MOC_LITERAL(1, 14, 7), // "timeout"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "streamingChanged"
QT_MOC_LITERAL(4, 40, 6), // "active"
QT_MOC_LITERAL(5, 47, 15), // "decodingChanged"
QT_MOC_LITERAL(6, 63, 16), // "recordingChanged"
QT_MOC_LITERAL(7, 80, 16), // "recordingStarted"
QT_MOC_LITERAL(8, 97, 16), // "videoSizeChanged"
QT_MOC_LITERAL(9, 114, 4), // "size"
QT_MOC_LITERAL(10, 119, 15), // "onStartComplete"
QT_MOC_LITERAL(11, 135, 6), // "STATUS"
QT_MOC_LITERAL(12, 142, 6), // "status"
QT_MOC_LITERAL(13, 149, 14), // "onStopComplete"
QT_MOC_LITERAL(14, 164, 23), // "onStartDecodingComplete"
QT_MOC_LITERAL(15, 188, 22), // "onStopDecodingComplete"
QT_MOC_LITERAL(16, 211, 24), // "onStartRecordingComplete"
QT_MOC_LITERAL(17, 236, 23), // "onStopRecordingComplete"
QT_MOC_LITERAL(18, 260, 24), // "onTakeScreenshotComplete"
QT_MOC_LITERAL(19, 285, 5), // "start"
QT_MOC_LITERAL(20, 291, 3), // "uri"
QT_MOC_LITERAL(21, 295, 6), // "buffer"
QT_MOC_LITERAL(22, 302, 4), // "stop"
QT_MOC_LITERAL(23, 307, 13), // "startDecoding"
QT_MOC_LITERAL(24, 321, 4), // "sink"
QT_MOC_LITERAL(25, 326, 12), // "stopDecoding"
QT_MOC_LITERAL(26, 339, 14), // "startRecording"
QT_MOC_LITERAL(27, 354, 9), // "videoFile"
QT_MOC_LITERAL(28, 364, 11), // "FILE_FORMAT"
QT_MOC_LITERAL(29, 376, 6), // "format"
QT_MOC_LITERAL(30, 383, 13), // "stopRecording"
QT_MOC_LITERAL(31, 397, 14), // "takeScreenshot"
QT_MOC_LITERAL(32, 412, 9), // "imageFile"
QT_MOC_LITERAL(33, 422, 9), // "STATUS_OK"
QT_MOC_LITERAL(34, 432, 11), // "STATUS_FAIL"
QT_MOC_LITERAL(35, 444, 20), // "STATUS_INVALID_STATE"
QT_MOC_LITERAL(36, 465, 18), // "STATUS_INVALID_URL"
QT_MOC_LITERAL(37, 484, 22) // "STATUS_NOT_IMPLEMENTED"

    },
    "VideoReceiver\0timeout\0\0streamingChanged\0"
    "active\0decodingChanged\0recordingChanged\0"
    "recordingStarted\0videoSizeChanged\0"
    "size\0onStartComplete\0STATUS\0status\0"
    "onStopComplete\0onStartDecodingComplete\0"
    "onStopDecodingComplete\0onStartRecordingComplete\0"
    "onStopRecordingComplete\0"
    "onTakeScreenshotComplete\0start\0uri\0"
    "buffer\0stop\0startDecoding\0sink\0"
    "stopDecoding\0startRecording\0videoFile\0"
    "FILE_FORMAT\0format\0stopRecording\0"
    "takeScreenshot\0imageFile\0STATUS_OK\0"
    "STATUS_FAIL\0STATUS_INVALID_STATE\0"
    "STATUS_INVALID_URL\0STATUS_NOT_IMPLEMENTED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoReceiver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       1,  180, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    1,  120,    2, 0x06 /* Public */,
       5,    1,  123,    2, 0x06 /* Public */,
       6,    1,  126,    2, 0x06 /* Public */,
       7,    0,  129,    2, 0x06 /* Public */,
       8,    1,  130,    2, 0x06 /* Public */,
      10,    1,  133,    2, 0x06 /* Public */,
      13,    1,  136,    2, 0x06 /* Public */,
      14,    1,  139,    2, 0x06 /* Public */,
      15,    1,  142,    2, 0x06 /* Public */,
      16,    1,  145,    2, 0x06 /* Public */,
      17,    1,  148,    2, 0x06 /* Public */,
      18,    1,  151,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    3,  154,    2, 0x0a /* Public */,
      19,    2,  161,    2, 0x2a /* Public | MethodCloned */,
      22,    0,  166,    2, 0x0a /* Public */,
      23,    1,  167,    2, 0x0a /* Public */,
      25,    0,  170,    2, 0x0a /* Public */,
      26,    2,  171,    2, 0x0a /* Public */,
      30,    0,  176,    2, 0x0a /* Public */,
      31,    1,  177,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Int,   20,    1,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,   20,    1,
    QMetaType::Void,
    QMetaType::Void, QMetaType::VoidStar,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 28,   27,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    5,  185,

 // enum data: key, value
      33, uint(VideoReceiver::STATUS_OK),
      34, uint(VideoReceiver::STATUS_FAIL),
      35, uint(VideoReceiver::STATUS_INVALID_STATE),
      36, uint(VideoReceiver::STATUS_INVALID_URL),
      37, uint(VideoReceiver::STATUS_NOT_IMPLEMENTED),

       0        // eod
};

void VideoReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeout(); break;
        case 1: _t->streamingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->decodingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->recordingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->recordingStarted(); break;
        case 5: _t->videoSizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 6: _t->onStartComplete((*reinterpret_cast< STATUS(*)>(_a[1]))); break;
        case 7: _t->onStopComplete((*reinterpret_cast< STATUS(*)>(_a[1]))); break;
        case 8: _t->onStartDecodingComplete((*reinterpret_cast< STATUS(*)>(_a[1]))); break;
        case 9: _t->onStopDecodingComplete((*reinterpret_cast< STATUS(*)>(_a[1]))); break;
        case 10: _t->onStartRecordingComplete((*reinterpret_cast< STATUS(*)>(_a[1]))); break;
        case 11: _t->onStopRecordingComplete((*reinterpret_cast< STATUS(*)>(_a[1]))); break;
        case 12: _t->onTakeScreenshotComplete((*reinterpret_cast< STATUS(*)>(_a[1]))); break;
        case 13: _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 15: _t->stop(); break;
        case 16: _t->startDecoding((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 17: _t->stopDecoding(); break;
        case 18: _t->startRecording((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< FILE_FORMAT(*)>(_a[2]))); break;
        case 19: _t->stopRecording(); break;
        case 20: _t->takeScreenshot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::timeout)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::streamingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::decodingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::recordingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::recordingStarted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::videoSizeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::onStartComplete)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::onStopComplete)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::onStartDecodingComplete)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::onStopDecodingComplete)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::onStartRecordingComplete)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::onStopRecordingComplete)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)(STATUS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::onTakeScreenshotComplete)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoReceiver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VideoReceiver.data,
    qt_meta_data_VideoReceiver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoReceiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void VideoReceiver::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoReceiver::streamingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VideoReceiver::decodingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoReceiver::recordingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VideoReceiver::recordingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VideoReceiver::videoSizeChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VideoReceiver::onStartComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VideoReceiver::onStopComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void VideoReceiver::onStartDecodingComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VideoReceiver::onStopDecodingComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void VideoReceiver::onStartRecordingComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void VideoReceiver::onStopRecordingComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void VideoReceiver::onTakeScreenshotComplete(STATUS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
