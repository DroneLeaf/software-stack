/****************************************************************************
** Meta object code from reading C++ file 'GstVideoReceiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/VideoReceiver/GstVideoReceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GstVideoReceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Worker_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Worker_t qt_meta_stringdata_Worker = {
    {
QT_MOC_LITERAL(0, 0, 6) // "Worker"

    },
    "Worker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Worker[] = {

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

void Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Worker::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Worker.data,
    qt_meta_data_Worker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Worker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GstVideoReceiver_t {
    QByteArrayData data[19];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GstVideoReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GstVideoReceiver_t qt_meta_stringdata_GstVideoReceiver = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GstVideoReceiver"
QT_MOC_LITERAL(1, 17, 5), // "start"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "uri"
QT_MOC_LITERAL(4, 28, 7), // "timeout"
QT_MOC_LITERAL(5, 36, 6), // "buffer"
QT_MOC_LITERAL(6, 43, 4), // "stop"
QT_MOC_LITERAL(7, 48, 13), // "startDecoding"
QT_MOC_LITERAL(8, 62, 4), // "sink"
QT_MOC_LITERAL(9, 67, 12), // "stopDecoding"
QT_MOC_LITERAL(10, 80, 14), // "startRecording"
QT_MOC_LITERAL(11, 95, 9), // "videoFile"
QT_MOC_LITERAL(12, 105, 11), // "FILE_FORMAT"
QT_MOC_LITERAL(13, 117, 6), // "format"
QT_MOC_LITERAL(14, 124, 13), // "stopRecording"
QT_MOC_LITERAL(15, 138, 14), // "takeScreenshot"
QT_MOC_LITERAL(16, 153, 9), // "imageFile"
QT_MOC_LITERAL(17, 163, 9), // "_watchdog"
QT_MOC_LITERAL(18, 173, 10) // "_handleEOS"

    },
    "GstVideoReceiver\0start\0\0uri\0timeout\0"
    "buffer\0stop\0startDecoding\0sink\0"
    "stopDecoding\0startRecording\0videoFile\0"
    "FILE_FORMAT\0format\0stopRecording\0"
    "takeScreenshot\0imageFile\0_watchdog\0"
    "_handleEOS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GstVideoReceiver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x0a /* Public */,
       1,    2,   71,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   76,    2, 0x0a /* Public */,
       7,    1,   77,    2, 0x0a /* Public */,
       9,    0,   80,    2, 0x0a /* Public */,
      10,    2,   81,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      15,    1,   87,    2, 0x0a /* Public */,
      17,    0,   90,    2, 0x09 /* Protected */,
      18,    0,   91,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::VoidStar,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,   11,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GstVideoReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GstVideoReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->stop(); break;
        case 3: _t->startDecoding((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 4: _t->stopDecoding(); break;
        case 5: _t->startRecording((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< FILE_FORMAT(*)>(_a[2]))); break;
        case 6: _t->stopRecording(); break;
        case 7: _t->takeScreenshot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->_watchdog(); break;
        case 9: _t->_handleEOS(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GstVideoReceiver::staticMetaObject = { {
    QMetaObject::SuperData::link<VideoReceiver::staticMetaObject>(),
    qt_meta_stringdata_GstVideoReceiver.data,
    qt_meta_data_GstVideoReceiver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GstVideoReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GstVideoReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GstVideoReceiver.stringdata0))
        return static_cast<void*>(this);
    return VideoReceiver::qt_metacast(_clname);
}

int GstVideoReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VideoReceiver::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
