/****************************************************************************
** Meta object code from reading C++ file 'PX4FirmwareUpgradeThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/VehicleSetup/PX4FirmwareUpgradeThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4FirmwareUpgradeThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker_t {
    QByteArrayData data[31];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker_t qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PX4FirmwareUpgradeThreadWorker"
QT_MOC_LITERAL(1, 31, 14), // "updateProgress"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4), // "curr"
QT_MOC_LITERAL(4, 52, 5), // "total"
QT_MOC_LITERAL(5, 58, 10), // "foundBoard"
QT_MOC_LITERAL(6, 69, 12), // "firstAttempt"
QT_MOC_LITERAL(7, 82, 17), // "QGCSerialPortInfo"
QT_MOC_LITERAL(8, 100, 8), // "portInfo"
QT_MOC_LITERAL(9, 109, 4), // "type"
QT_MOC_LITERAL(10, 114, 9), // "boardName"
QT_MOC_LITERAL(11, 124, 12), // "noBoardFound"
QT_MOC_LITERAL(12, 137, 9), // "boardGone"
QT_MOC_LITERAL(13, 147, 14), // "foundBoardInfo"
QT_MOC_LITERAL(14, 162, 17), // "bootloaderVersion"
QT_MOC_LITERAL(15, 180, 7), // "boardID"
QT_MOC_LITERAL(16, 188, 9), // "flashSize"
QT_MOC_LITERAL(17, 198, 5), // "error"
QT_MOC_LITERAL(18, 204, 11), // "errorString"
QT_MOC_LITERAL(19, 216, 6), // "status"
QT_MOC_LITERAL(20, 223, 10), // "statusText"
QT_MOC_LITERAL(21, 234, 12), // "eraseStarted"
QT_MOC_LITERAL(22, 247, 13), // "eraseComplete"
QT_MOC_LITERAL(23, 261, 13), // "flashComplete"
QT_MOC_LITERAL(24, 275, 5), // "_init"
QT_MOC_LITERAL(25, 281, 19), // "_startFindBoardLoop"
QT_MOC_LITERAL(26, 301, 7), // "_reboot"
QT_MOC_LITERAL(27, 309, 6), // "_flash"
QT_MOC_LITERAL(28, 316, 14), // "_findBoardOnce"
QT_MOC_LITERAL(29, 331, 15), // "_updateProgress"
QT_MOC_LITERAL(30, 347, 7) // "_cancel"

    },
    "PX4FirmwareUpgradeThreadWorker\0"
    "updateProgress\0\0curr\0total\0foundBoard\0"
    "firstAttempt\0QGCSerialPortInfo\0portInfo\0"
    "type\0boardName\0noBoardFound\0boardGone\0"
    "foundBoardInfo\0bootloaderVersion\0"
    "boardID\0flashSize\0error\0errorString\0"
    "status\0statusText\0eraseStarted\0"
    "eraseComplete\0flashComplete\0_init\0"
    "_startFindBoardLoop\0_reboot\0_flash\0"
    "_findBoardOnce\0_updateProgress\0_cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PX4FirmwareUpgradeThreadWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,
       5,    4,  104,    2, 0x06 /* Public */,
      11,    0,  113,    2, 0x06 /* Public */,
      12,    0,  114,    2, 0x06 /* Public */,
      13,    3,  115,    2, 0x06 /* Public */,
      17,    1,  122,    2, 0x06 /* Public */,
      19,    1,  125,    2, 0x06 /* Public */,
      21,    0,  128,    2, 0x06 /* Public */,
      22,    0,  129,    2, 0x06 /* Public */,
      23,    0,  130,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  131,    2, 0x08 /* Private */,
      25,    0,  132,    2, 0x08 /* Private */,
      26,    0,  133,    2, 0x08 /* Private */,
      27,    0,  134,    2, 0x08 /* Private */,
      28,    0,  135,    2, 0x08 /* Private */,
      29,    2,  136,    2, 0x08 /* Private */,
      30,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7, QMetaType::Int, QMetaType::QString,    6,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void PX4FirmwareUpgradeThreadWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PX4FirmwareUpgradeThreadWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QGCSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->noBoardFound(); break;
        case 3: _t->boardGone(); break;
        case 4: _t->foundBoardInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->eraseStarted(); break;
        case 8: _t->eraseComplete(); break;
        case 9: _t->flashComplete(); break;
        case 10: _t->_init(); break;
        case 11: _t->_startFindBoardLoop(); break;
        case 12: _t->_reboot(); break;
        case 13: _t->_flash(); break;
        case 14: _t->_findBoardOnce(); break;
        case 15: _t->_updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->_cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::updateProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(bool , const QGCSerialPortInfo & , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::foundBoard)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::noBoardFound)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::boardGone)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::foundBoardInfo)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::error)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::status)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::eraseStarted)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::eraseComplete)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::flashComplete)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PX4FirmwareUpgradeThreadWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker.data,
    qt_meta_data_PX4FirmwareUpgradeThreadWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PX4FirmwareUpgradeThreadWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwareUpgradeThreadWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PX4FirmwareUpgradeThreadWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void PX4FirmwareUpgradeThreadWorker::updateProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PX4FirmwareUpgradeThreadWorker::foundBoard(bool _t1, const QGCSerialPortInfo & _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PX4FirmwareUpgradeThreadWorker::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PX4FirmwareUpgradeThreadWorker::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PX4FirmwareUpgradeThreadWorker::foundBoardInfo(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PX4FirmwareUpgradeThreadWorker::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PX4FirmwareUpgradeThreadWorker::status(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PX4FirmwareUpgradeThreadWorker::eraseStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PX4FirmwareUpgradeThreadWorker::eraseComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PX4FirmwareUpgradeThreadWorker::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
struct qt_meta_stringdata_PX4FirmwareUpgradeThreadController_t {
    QByteArrayData data[40];
    char stringdata0[491];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PX4FirmwareUpgradeThreadController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PX4FirmwareUpgradeThreadController_t qt_meta_stringdata_PX4FirmwareUpgradeThreadController = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PX4FirmwareUpgradeThreadContr..."
QT_MOC_LITERAL(1, 35, 10), // "foundBoard"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "firstAttempt"
QT_MOC_LITERAL(4, 60, 17), // "QGCSerialPortInfo"
QT_MOC_LITERAL(5, 78, 8), // "portInfo"
QT_MOC_LITERAL(6, 87, 9), // "boardType"
QT_MOC_LITERAL(7, 97, 9), // "boardName"
QT_MOC_LITERAL(8, 107, 12), // "noBoardFound"
QT_MOC_LITERAL(9, 120, 9), // "boardGone"
QT_MOC_LITERAL(10, 130, 14), // "foundBoardInfo"
QT_MOC_LITERAL(11, 145, 17), // "bootloaderVersion"
QT_MOC_LITERAL(12, 163, 7), // "boardID"
QT_MOC_LITERAL(13, 171, 9), // "flashSize"
QT_MOC_LITERAL(14, 181, 5), // "error"
QT_MOC_LITERAL(15, 187, 11), // "errorString"
QT_MOC_LITERAL(16, 199, 6), // "status"
QT_MOC_LITERAL(17, 206, 12), // "eraseStarted"
QT_MOC_LITERAL(18, 219, 13), // "eraseComplete"
QT_MOC_LITERAL(19, 233, 13), // "flashComplete"
QT_MOC_LITERAL(20, 247, 14), // "updateProgress"
QT_MOC_LITERAL(21, 262, 4), // "curr"
QT_MOC_LITERAL(22, 267, 5), // "total"
QT_MOC_LITERAL(23, 273, 17), // "_initThreadWorker"
QT_MOC_LITERAL(24, 291, 27), // "_startFindBoardLoopOnThread"
QT_MOC_LITERAL(25, 319, 15), // "_rebootOnThread"
QT_MOC_LITERAL(26, 335, 14), // "_flashOnThread"
QT_MOC_LITERAL(27, 350, 7), // "_cancel"
QT_MOC_LITERAL(28, 358, 11), // "_foundBoard"
QT_MOC_LITERAL(29, 370, 4), // "type"
QT_MOC_LITERAL(30, 375, 4), // "name"
QT_MOC_LITERAL(31, 380, 13), // "_noBoardFound"
QT_MOC_LITERAL(32, 394, 10), // "_boardGone"
QT_MOC_LITERAL(33, 405, 15), // "_foundBoardInfo"
QT_MOC_LITERAL(34, 421, 6), // "_error"
QT_MOC_LITERAL(35, 428, 7), // "_status"
QT_MOC_LITERAL(36, 436, 10), // "statusText"
QT_MOC_LITERAL(37, 447, 13), // "_eraseStarted"
QT_MOC_LITERAL(38, 461, 14), // "_eraseComplete"
QT_MOC_LITERAL(39, 476, 14) // "_flashComplete"

    },
    "PX4FirmwareUpgradeThreadController\0"
    "foundBoard\0\0firstAttempt\0QGCSerialPortInfo\0"
    "portInfo\0boardType\0boardName\0noBoardFound\0"
    "boardGone\0foundBoardInfo\0bootloaderVersion\0"
    "boardID\0flashSize\0error\0errorString\0"
    "status\0eraseStarted\0eraseComplete\0"
    "flashComplete\0updateProgress\0curr\0"
    "total\0_initThreadWorker\0"
    "_startFindBoardLoopOnThread\0_rebootOnThread\0"
    "_flashOnThread\0_cancel\0_foundBoard\0"
    "type\0name\0_noBoardFound\0_boardGone\0"
    "_foundBoardInfo\0_error\0_status\0"
    "statusText\0_eraseStarted\0_eraseComplete\0"
    "_flashComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PX4FirmwareUpgradeThreadController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  134,    2, 0x06 /* Public */,
       8,    0,  143,    2, 0x06 /* Public */,
       9,    0,  144,    2, 0x06 /* Public */,
      10,    3,  145,    2, 0x06 /* Public */,
      14,    1,  152,    2, 0x06 /* Public */,
      16,    1,  155,    2, 0x06 /* Public */,
      17,    0,  158,    2, 0x06 /* Public */,
      18,    0,  159,    2, 0x06 /* Public */,
      19,    0,  160,    2, 0x06 /* Public */,
      20,    2,  161,    2, 0x06 /* Public */,
      23,    0,  166,    2, 0x06 /* Public */,
      24,    0,  167,    2, 0x06 /* Public */,
      25,    0,  168,    2, 0x06 /* Public */,
      26,    0,  169,    2, 0x06 /* Public */,
      27,    0,  170,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    4,  171,    2, 0x08 /* Private */,
      31,    0,  180,    2, 0x08 /* Private */,
      32,    0,  181,    2, 0x08 /* Private */,
      33,    3,  182,    2, 0x08 /* Private */,
      34,    1,  189,    2, 0x08 /* Private */,
      35,    1,  192,    2, 0x08 /* Private */,
      37,    0,  195,    2, 0x08 /* Private */,
      38,    0,  196,    2, 0x08 /* Private */,
      39,    0,  197,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4, QMetaType::Int, QMetaType::QString,    3,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4, QMetaType::Int, QMetaType::QString,    3,    5,   29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PX4FirmwareUpgradeThreadController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PX4FirmwareUpgradeThreadController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QGCSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->noBoardFound(); break;
        case 2: _t->boardGone(); break;
        case 3: _t->foundBoardInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->eraseStarted(); break;
        case 7: _t->eraseComplete(); break;
        case 8: _t->flashComplete(); break;
        case 9: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->_initThreadWorker(); break;
        case 11: _t->_startFindBoardLoopOnThread(); break;
        case 12: _t->_rebootOnThread(); break;
        case 13: _t->_flashOnThread(); break;
        case 14: _t->_cancel(); break;
        case 15: _t->_foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QGCSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 16: _t->_noBoardFound(); break;
        case 17: _t->_boardGone(); break;
        case 18: _t->_foundBoardInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->_status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->_eraseStarted(); break;
        case 22: _t->_eraseComplete(); break;
        case 23: _t->_flashComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(bool , const QGCSerialPortInfo & , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::foundBoard)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::noBoardFound)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::boardGone)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::foundBoardInfo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::error)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::status)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::eraseStarted)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::eraseComplete)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::flashComplete)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::updateProgress)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_initThreadWorker)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_startFindBoardLoopOnThread)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_rebootOnThread)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_flashOnThread)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PX4FirmwareUpgradeThreadController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_cancel)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PX4FirmwareUpgradeThreadController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PX4FirmwareUpgradeThreadController.data,
    qt_meta_data_PX4FirmwareUpgradeThreadController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PX4FirmwareUpgradeThreadController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwareUpgradeThreadController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PX4FirmwareUpgradeThreadController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PX4FirmwareUpgradeThreadController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void PX4FirmwareUpgradeThreadController::foundBoard(bool _t1, const QGCSerialPortInfo & _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PX4FirmwareUpgradeThreadController::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PX4FirmwareUpgradeThreadController::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PX4FirmwareUpgradeThreadController::foundBoardInfo(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PX4FirmwareUpgradeThreadController::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PX4FirmwareUpgradeThreadController::status(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PX4FirmwareUpgradeThreadController::eraseStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PX4FirmwareUpgradeThreadController::eraseComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PX4FirmwareUpgradeThreadController::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PX4FirmwareUpgradeThreadController::updateProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PX4FirmwareUpgradeThreadController::_initThreadWorker()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void PX4FirmwareUpgradeThreadController::_startFindBoardLoopOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PX4FirmwareUpgradeThreadController::_rebootOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PX4FirmwareUpgradeThreadController::_flashOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PX4FirmwareUpgradeThreadController::_cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
