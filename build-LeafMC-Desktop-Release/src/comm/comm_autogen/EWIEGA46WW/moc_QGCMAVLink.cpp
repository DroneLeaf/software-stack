/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/comm/QGCMAVLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMAVLink_t {
    QByteArrayData data[16];
    char stringdata0[460];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMAVLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMAVLink_t qt_meta_stringdata_QGCMAVLink = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGCMAVLink"
QT_MOC_LITERAL(1, 11, 20), // "MAV_BATTERY_FUNCTION"
QT_MOC_LITERAL(2, 32, 28), // "MAV_BATTERY_FUNCTION_UNKNOWN"
QT_MOC_LITERAL(3, 61, 24), // "MAV_BATTERY_FUNCTION_ALL"
QT_MOC_LITERAL(4, 86, 31), // "MAV_BATTERY_FUNCTION_PROPULSION"
QT_MOC_LITERAL(5, 118, 29), // "MAV_BATTERY_FUNCTION_AVIONICS"
QT_MOC_LITERAL(6, 148, 24), // "MAV_BATTERY_TYPE_PAYLOAD"
QT_MOC_LITERAL(7, 173, 24), // "MAV_BATTERY_CHARGE_STATE"
QT_MOC_LITERAL(8, 198, 34), // "MAV_BATTERY_CHARGE_STATE_UNDE..."
QT_MOC_LITERAL(9, 233, 27), // "MAV_BATTERY_CHARGE_STATE_OK"
QT_MOC_LITERAL(10, 261, 28), // "MAV_BATTERY_CHARGE_STATE_LOW"
QT_MOC_LITERAL(11, 290, 33), // "MAV_BATTERY_CHARGE_STATE_CRIT..."
QT_MOC_LITERAL(12, 324, 34), // "MAV_BATTERY_CHARGE_STATE_EMER..."
QT_MOC_LITERAL(13, 359, 31), // "MAV_BATTERY_CHARGE_STATE_FAILED"
QT_MOC_LITERAL(14, 391, 34), // "MAV_BATTERY_CHARGE_STATE_UNHE..."
QT_MOC_LITERAL(15, 426, 33) // "MAV_BATTERY_CHARGE_STATE_CHAR..."

    },
    "QGCMAVLink\0MAV_BATTERY_FUNCTION\0"
    "MAV_BATTERY_FUNCTION_UNKNOWN\0"
    "MAV_BATTERY_FUNCTION_ALL\0"
    "MAV_BATTERY_FUNCTION_PROPULSION\0"
    "MAV_BATTERY_FUNCTION_AVIONICS\0"
    "MAV_BATTERY_TYPE_PAYLOAD\0"
    "MAV_BATTERY_CHARGE_STATE\0"
    "MAV_BATTERY_CHARGE_STATE_UNDEFINED\0"
    "MAV_BATTERY_CHARGE_STATE_OK\0"
    "MAV_BATTERY_CHARGE_STATE_LOW\0"
    "MAV_BATTERY_CHARGE_STATE_CRITICAL\0"
    "MAV_BATTERY_CHARGE_STATE_EMERGENCY\0"
    "MAV_BATTERY_CHARGE_STATE_FAILED\0"
    "MAV_BATTERY_CHARGE_STATE_UNHEALTHY\0"
    "MAV_BATTERY_CHARGE_STATE_CHARGING"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMAVLink[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   24,
       7,    7, 0x0,    8,   34,

 // enum data: key, value
       2, uint(QGCMAVLink::MAV_BATTERY_FUNCTION_UNKNOWN),
       3, uint(QGCMAVLink::MAV_BATTERY_FUNCTION_ALL),
       4, uint(QGCMAVLink::MAV_BATTERY_FUNCTION_PROPULSION),
       5, uint(QGCMAVLink::MAV_BATTERY_FUNCTION_AVIONICS),
       6, uint(QGCMAVLink::MAV_BATTERY_TYPE_PAYLOAD),
       8, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_UNDEFINED),
       9, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_OK),
      10, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_LOW),
      11, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_CRITICAL),
      12, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_EMERGENCY),
      13, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_FAILED),
      14, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_UNHEALTHY),
      15, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_CHARGING),

       0        // eod
};

void QGCMAVLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QGCMAVLink::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCMAVLink.data,
    qt_meta_data_QGCMAVLink,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCMAVLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLink.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMAVLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
