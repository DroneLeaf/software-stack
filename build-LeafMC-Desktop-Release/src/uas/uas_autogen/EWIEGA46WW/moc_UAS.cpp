/****************************************************************************
** Meta object code from reading C++ file 'UAS.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/uas/UAS.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UAS.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UAS_t {
    QByteArrayData data[13];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UAS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UAS_t qt_meta_stringdata_UAS = {
    {
QT_MOC_LITERAL(0, 0, 3), // "UAS"
QT_MOC_LITERAL(1, 4, 11), // "rollChanged"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 3), // "val"
QT_MOC_LITERAL(4, 21, 4), // "name"
QT_MOC_LITERAL(5, 26, 12), // "pitchChanged"
QT_MOC_LITERAL(6, 39, 10), // "yawChanged"
QT_MOC_LITERAL(7, 50, 6), // "pairRX"
QT_MOC_LITERAL(8, 57, 6), // "rxType"
QT_MOC_LITERAL(9, 64, 9), // "rxSubType"
QT_MOC_LITERAL(10, 74, 14), // "receiveMessage"
QT_MOC_LITERAL(11, 89, 17), // "mavlink_message_t"
QT_MOC_LITERAL(12, 107, 7) // "message"

    },
    "UAS\0rollChanged\0\0val\0name\0pitchChanged\0"
    "yawChanged\0pairRX\0rxType\0rxSubType\0"
    "receiveMessage\0mavlink_message_t\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UAS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   54,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void UAS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UAS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rollChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->pitchChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->yawChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->pairRX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->receiveMessage((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UAS::*)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::rollChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UAS::*)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::pitchChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UAS::*)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::yawChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UAS::staticMetaObject = { {
    QMetaObject::SuperData::link<UASInterface::staticMetaObject>(),
    qt_meta_stringdata_UAS.data,
    qt_meta_data_UAS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UAS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UAS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UAS.stringdata0))
        return static_cast<void*>(this);
    return UASInterface::qt_metacast(_clname);
}

int UAS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UASInterface::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void UAS::rollChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UAS::pitchChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UAS::yawChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
