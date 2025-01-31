/****************************************************************************
** Meta object code from reading C++ file 'UASInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/uas/UASInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASInterface_t {
    QByteArrayData data[56];
    char stringdata0[624];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASInterface_t qt_meta_stringdata_UASInterface = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UASInterface"
QT_MOC_LITERAL(1, 13, 9), // "connected"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "disconnected"
QT_MOC_LITERAL(4, 37, 14), // "batteryChanged"
QT_MOC_LITERAL(5, 52, 13), // "UASInterface*"
QT_MOC_LITERAL(6, 66, 3), // "uas"
QT_MOC_LITERAL(7, 70, 7), // "voltage"
QT_MOC_LITERAL(8, 78, 7), // "current"
QT_MOC_LITERAL(9, 86, 7), // "percent"
QT_MOC_LITERAL(10, 94, 7), // "seconds"
QT_MOC_LITERAL(11, 102, 13), // "statusChanged"
QT_MOC_LITERAL(12, 116, 6), // "status"
QT_MOC_LITERAL(13, 123, 12), // "imageStarted"
QT_MOC_LITERAL(14, 136, 5), // "imgid"
QT_MOC_LITERAL(15, 142, 5), // "width"
QT_MOC_LITERAL(16, 148, 6), // "height"
QT_MOC_LITERAL(17, 155, 5), // "depth"
QT_MOC_LITERAL(18, 161, 8), // "channels"
QT_MOC_LITERAL(19, 170, 17), // "imageDataReceived"
QT_MOC_LITERAL(20, 188, 20), // "const unsigned char*"
QT_MOC_LITERAL(21, 209, 9), // "imageData"
QT_MOC_LITERAL(22, 219, 6), // "length"
QT_MOC_LITERAL(23, 226, 10), // "startIndex"
QT_MOC_LITERAL(24, 237, 24), // "opticalFlowStatusChanged"
QT_MOC_LITERAL(25, 262, 9), // "supported"
QT_MOC_LITERAL(26, 272, 7), // "enabled"
QT_MOC_LITERAL(27, 280, 2), // "ok"
QT_MOC_LITERAL(28, 283, 31), // "visionLocalizationStatusChanged"
QT_MOC_LITERAL(29, 315, 27), // "distanceSensorStatusChanged"
QT_MOC_LITERAL(30, 343, 17), // "gyroStatusChanged"
QT_MOC_LITERAL(31, 361, 18), // "accelStatusChanged"
QT_MOC_LITERAL(32, 380, 22), // "magSensorStatusChanged"
QT_MOC_LITERAL(33, 403, 17), // "baroStatusChanged"
QT_MOC_LITERAL(34, 421, 21), // "airspeedStatusChanged"
QT_MOC_LITERAL(35, 443, 11), // "nameChanged"
QT_MOC_LITERAL(36, 455, 7), // "newName"
QT_MOC_LITERAL(37, 463, 18), // "systemSpecsChanged"
QT_MOC_LITERAL(38, 482, 5), // "uasId"
QT_MOC_LITERAL(39, 488, 8), // "logEntry"
QT_MOC_LITERAL(40, 497, 8), // "uint32_t"
QT_MOC_LITERAL(41, 506, 8), // "time_utc"
QT_MOC_LITERAL(42, 515, 4), // "size"
QT_MOC_LITERAL(43, 520, 8), // "uint16_t"
QT_MOC_LITERAL(44, 529, 2), // "id"
QT_MOC_LITERAL(45, 532, 8), // "num_logs"
QT_MOC_LITERAL(46, 541, 12), // "last_log_num"
QT_MOC_LITERAL(47, 554, 7), // "logData"
QT_MOC_LITERAL(48, 562, 3), // "ofs"
QT_MOC_LITERAL(49, 566, 7), // "uint8_t"
QT_MOC_LITERAL(50, 574, 5), // "count"
QT_MOC_LITERAL(51, 580, 14), // "const uint8_t*"
QT_MOC_LITERAL(52, 595, 4), // "data"
QT_MOC_LITERAL(53, 600, 6), // "pairRX"
QT_MOC_LITERAL(54, 607, 6), // "rxType"
QT_MOC_LITERAL(55, 614, 9) // "rxSubType"

    },
    "UASInterface\0connected\0\0disconnected\0"
    "batteryChanged\0UASInterface*\0uas\0"
    "voltage\0current\0percent\0seconds\0"
    "statusChanged\0status\0imageStarted\0"
    "imgid\0width\0height\0depth\0channels\0"
    "imageDataReceived\0const unsigned char*\0"
    "imageData\0length\0startIndex\0"
    "opticalFlowStatusChanged\0supported\0"
    "enabled\0ok\0visionLocalizationStatusChanged\0"
    "distanceSensorStatusChanged\0"
    "gyroStatusChanged\0accelStatusChanged\0"
    "magSensorStatusChanged\0baroStatusChanged\0"
    "airspeedStatusChanged\0nameChanged\0"
    "newName\0systemSpecsChanged\0uasId\0"
    "logEntry\0uint32_t\0time_utc\0size\0"
    "uint16_t\0id\0num_logs\0last_log_num\0"
    "logData\0ofs\0uint8_t\0count\0const uint8_t*\0"
    "data\0pairRX\0rxType\0rxSubType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    5,  111,    2, 0x06 /* Public */,
      11,    2,  122,    2, 0x06 /* Public */,
      13,    5,  127,    2, 0x06 /* Public */,
      19,    4,  138,    2, 0x06 /* Public */,
      24,    3,  147,    2, 0x06 /* Public */,
      28,    3,  154,    2, 0x06 /* Public */,
      29,    3,  161,    2, 0x06 /* Public */,
      30,    3,  168,    2, 0x06 /* Public */,
      31,    3,  175,    2, 0x06 /* Public */,
      32,    3,  182,    2, 0x06 /* Public */,
      33,    3,  189,    2, 0x06 /* Public */,
      34,    3,  196,    2, 0x06 /* Public */,
      35,    1,  203,    2, 0x06 /* Public */,
      37,    1,  206,    2, 0x06 /* Public */,
      39,    6,  209,    2, 0x06 /* Public */,
      47,    5,  222,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      53,    2,  233,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    6,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20, QMetaType::Int, QMetaType::Int,   14,   21,   22,   23,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 40, 0x80000000 | 40, 0x80000000 | 43, 0x80000000 | 43, 0x80000000 | 43,    6,   41,   42,   44,   45,   46,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 40, 0x80000000 | 43, 0x80000000 | 49, 0x80000000 | 51,    6,   48,   44,   50,   52,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   54,   55,

       0        // eod
};

void UASInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UASInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->batteryChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->statusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->imageStarted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 5: _t->imageDataReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->opticalFlowStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->visionLocalizationStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->distanceSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->gyroStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->accelStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: _t->magSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->baroStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->airspeedStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 14: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->systemSpecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->logEntry((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint16_t(*)>(_a[5])),(*reinterpret_cast< uint16_t(*)>(_a[6]))); break;
        case 17: _t->logData((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4])),(*reinterpret_cast< const uint8_t*(*)>(_a[5]))); break;
        case 18: _t->pairRX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UASInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(UASInterface * , double , double , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::batteryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(UASInterface * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::statusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::imageStarted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(int , const unsigned char * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::imageDataReceived)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::opticalFlowStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::visionLocalizationStatusChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::distanceSensorStatusChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::gyroStatusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::accelStatusChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::magSensorStatusChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::baroStatusChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::airspeedStatusChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::nameChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::systemSpecsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(UASInterface * , uint32_t , uint32_t , uint16_t , uint16_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::logEntry)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (UASInterface::*)(UASInterface * , uint32_t , uint16_t , uint8_t , const uint8_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::logData)) {
                *result = 17;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UASInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UASInterface.data,
    qt_meta_data_UASInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UASInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UASInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void UASInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UASInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UASInterface::batteryChanged(UASInterface * _t1, double _t2, double _t3, double _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASInterface::statusChanged(UASInterface * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UASInterface::imageStarted(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASInterface::imageDataReceived(int _t1, const unsigned char * _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASInterface::opticalFlowStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASInterface::visionLocalizationStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UASInterface::distanceSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UASInterface::gyroStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void UASInterface::accelStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UASInterface::magSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UASInterface::baroStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UASInterface::airspeedStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void UASInterface::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UASInterface::systemSpecsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void UASInterface::logEntry(UASInterface * _t1, uint32_t _t2, uint32_t _t3, uint16_t _t4, uint16_t _t5, uint16_t _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void UASInterface::logData(UASInterface * _t1, uint32_t _t2, uint16_t _t3, uint8_t _t4, const uint8_t * _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
