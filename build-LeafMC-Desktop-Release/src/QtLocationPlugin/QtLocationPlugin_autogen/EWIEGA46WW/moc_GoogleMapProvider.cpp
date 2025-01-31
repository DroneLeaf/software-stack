/****************************************************************************
** Meta object code from reading C++ file 'GoogleMapProvider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QtLocationPlugin/GoogleMapProvider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GoogleMapProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GoogleMapProvider_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleMapProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleMapProvider_t qt_meta_stringdata_GoogleMapProvider = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GoogleMapProvider"
QT_MOC_LITERAL(1, 18, 18), // "_networkReplyError"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(4, 66, 5), // "error"
QT_MOC_LITERAL(5, 72, 23), // "_googleVersionCompleted"
QT_MOC_LITERAL(6, 96, 15) // "_replyDestroyed"

    },
    "GoogleMapProvider\0_networkReplyError\0"
    "\0QNetworkReply::NetworkError\0error\0"
    "_googleVersionCompleted\0_replyDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleMapProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GoogleMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GoogleMapProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_networkReplyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->_googleVersionCompleted(); break;
        case 2: _t->_replyDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GoogleMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapProvider::staticMetaObject>(),
    qt_meta_stringdata_GoogleMapProvider.data,
    qt_meta_data_GoogleMapProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleMapProvider.stringdata0))
        return static_cast<void*>(this);
    return MapProvider::qt_metacast(_clname);
}

int GoogleMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_GoogleStreetMapProvider_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleStreetMapProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleStreetMapProvider_t qt_meta_stringdata_GoogleStreetMapProvider = {
    {
QT_MOC_LITERAL(0, 0, 23) // "GoogleStreetMapProvider"

    },
    "GoogleStreetMapProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleStreetMapProvider[] = {

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

void GoogleStreetMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GoogleStreetMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_GoogleStreetMapProvider.data,
    qt_meta_data_GoogleStreetMapProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleStreetMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleStreetMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleStreetMapProvider.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleStreetMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GoogleSatelliteMapProvider_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleSatelliteMapProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleSatelliteMapProvider_t qt_meta_stringdata_GoogleSatelliteMapProvider = {
    {
QT_MOC_LITERAL(0, 0, 26) // "GoogleSatelliteMapProvider"

    },
    "GoogleSatelliteMapProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleSatelliteMapProvider[] = {

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

void GoogleSatelliteMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GoogleSatelliteMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_GoogleSatelliteMapProvider.data,
    qt_meta_data_GoogleSatelliteMapProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleSatelliteMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleSatelliteMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleSatelliteMapProvider.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleSatelliteMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GoogleLabelsMapProvider_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleLabelsMapProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleLabelsMapProvider_t qt_meta_stringdata_GoogleLabelsMapProvider = {
    {
QT_MOC_LITERAL(0, 0, 23) // "GoogleLabelsMapProvider"

    },
    "GoogleLabelsMapProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleLabelsMapProvider[] = {

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

void GoogleLabelsMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GoogleLabelsMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_GoogleLabelsMapProvider.data,
    qt_meta_data_GoogleLabelsMapProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleLabelsMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleLabelsMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleLabelsMapProvider.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleLabelsMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GoogleTerrainMapProvider_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleTerrainMapProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleTerrainMapProvider_t qt_meta_stringdata_GoogleTerrainMapProvider = {
    {
QT_MOC_LITERAL(0, 0, 24) // "GoogleTerrainMapProvider"

    },
    "GoogleTerrainMapProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleTerrainMapProvider[] = {

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

void GoogleTerrainMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GoogleTerrainMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_GoogleTerrainMapProvider.data,
    qt_meta_data_GoogleTerrainMapProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleTerrainMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleTerrainMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleTerrainMapProvider.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleTerrainMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GoogleHybridMapProvider_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleHybridMapProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleHybridMapProvider_t qt_meta_stringdata_GoogleHybridMapProvider = {
    {
QT_MOC_LITERAL(0, 0, 23) // "GoogleHybridMapProvider"

    },
    "GoogleHybridMapProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleHybridMapProvider[] = {

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

void GoogleHybridMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GoogleHybridMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_GoogleHybridMapProvider.data,
    qt_meta_data_GoogleHybridMapProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleHybridMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleHybridMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleHybridMapProvider.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleHybridMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
