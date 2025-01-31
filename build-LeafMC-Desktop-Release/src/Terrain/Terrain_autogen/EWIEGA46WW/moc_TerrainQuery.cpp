/****************************************************************************
** Meta object code from reading C++ file 'TerrainQuery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Terrain/TerrainQuery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainQuery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TerrainQueryInterface_t {
    QByteArrayData data[14];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainQueryInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainQueryInterface_t qt_meta_stringdata_TerrainQueryInterface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TerrainQueryInterface"
QT_MOC_LITERAL(1, 22, 25), // "coordinateHeightsReceived"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 7), // "success"
QT_MOC_LITERAL(4, 57, 13), // "QList<double>"
QT_MOC_LITERAL(5, 71, 7), // "heights"
QT_MOC_LITERAL(6, 79, 19), // "pathHeightsReceived"
QT_MOC_LITERAL(7, 99, 15), // "distanceBetween"
QT_MOC_LITERAL(8, 115, 20), // "finalDistanceBetween"
QT_MOC_LITERAL(9, 136, 21), // "carpetHeightsReceived"
QT_MOC_LITERAL(10, 158, 9), // "minHeight"
QT_MOC_LITERAL(11, 168, 9), // "maxHeight"
QT_MOC_LITERAL(12, 178, 21), // "QList<QList<double> >"
QT_MOC_LITERAL(13, 200, 6) // "carpet"

    },
    "TerrainQueryInterface\0coordinateHeightsReceived\0"
    "\0success\0QList<double>\0heights\0"
    "pathHeightsReceived\0distanceBetween\0"
    "finalDistanceBetween\0carpetHeightsReceived\0"
    "minHeight\0maxHeight\0QList<QList<double> >\0"
    "carpet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainQueryInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    4,   34,    2, 0x06 /* Public */,
       9,    4,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double, 0x80000000 | 4,    3,    7,    8,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double, 0x80000000 | 12,    3,   10,   11,   13,

       0        // eod
};

void TerrainQueryInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainQueryInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateHeightsReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2]))); break;
        case 1: _t->pathHeightsReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< const QList<double>(*)>(_a[4]))); break;
        case 2: _t->carpetHeightsReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< const QList<QList<double> >(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<double> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainQueryInterface::*)(bool , QList<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainQueryInterface::coordinateHeightsReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TerrainQueryInterface::*)(bool , double , double , const QList<double> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainQueryInterface::pathHeightsReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TerrainQueryInterface::*)(bool , double , double , const QList<QList<double>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainQueryInterface::carpetHeightsReceived)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainQueryInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TerrainQueryInterface.data,
    qt_meta_data_TerrainQueryInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainQueryInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainQueryInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainQueryInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainQueryInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TerrainQueryInterface::coordinateHeightsReceived(bool _t1, QList<double> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TerrainQueryInterface::pathHeightsReceived(bool _t1, double _t2, double _t3, const QList<double> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TerrainQueryInterface::carpetHeightsReceived(bool _t1, double _t2, double _t3, const QList<QList<double>> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_TerrainAirMapQuery_t {
    QByteArrayData data[9];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainAirMapQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainAirMapQuery_t qt_meta_stringdata_TerrainAirMapQuery = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TerrainAirMapQuery"
QT_MOC_LITERAL(1, 19, 13), // "_requestError"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(4, 62, 4), // "code"
QT_MOC_LITERAL(5, 67, 16), // "_requestFinished"
QT_MOC_LITERAL(6, 84, 10), // "_sslErrors"
QT_MOC_LITERAL(7, 95, 16), // "QList<QSslError>"
QT_MOC_LITERAL(8, 112, 6) // "errors"

    },
    "TerrainAirMapQuery\0_requestError\0\0"
    "QNetworkReply::NetworkError\0code\0"
    "_requestFinished\0_sslErrors\0"
    "QList<QSslError>\0errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainAirMapQuery[] = {

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
       6,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void TerrainAirMapQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainAirMapQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_requestError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->_requestFinished(); break;
        case 2: _t->_sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainAirMapQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<TerrainQueryInterface::staticMetaObject>(),
    qt_meta_stringdata_TerrainAirMapQuery.data,
    qt_meta_data_TerrainAirMapQuery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainAirMapQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainAirMapQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainAirMapQuery.stringdata0))
        return static_cast<void*>(this);
    return TerrainQueryInterface::qt_metacast(_clname);
}

int TerrainAirMapQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TerrainQueryInterface::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_TerrainOfflineAirMapQuery_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainOfflineAirMapQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainOfflineAirMapQuery_t qt_meta_stringdata_TerrainOfflineAirMapQuery = {
    {
QT_MOC_LITERAL(0, 0, 25) // "TerrainOfflineAirMapQuery"

    },
    "TerrainOfflineAirMapQuery"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainOfflineAirMapQuery[] = {

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

void TerrainOfflineAirMapQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TerrainOfflineAirMapQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<TerrainQueryInterface::staticMetaObject>(),
    qt_meta_stringdata_TerrainOfflineAirMapQuery.data,
    qt_meta_data_TerrainOfflineAirMapQuery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainOfflineAirMapQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainOfflineAirMapQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainOfflineAirMapQuery.stringdata0))
        return static_cast<void*>(this);
    return TerrainQueryInterface::qt_metacast(_clname);
}

int TerrainOfflineAirMapQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TerrainQueryInterface::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TerrainTileManager_t {
    QByteArrayData data[6];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainTileManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainTileManager_t qt_meta_stringdata_TerrainTileManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TerrainTileManager"
QT_MOC_LITERAL(1, 19, 12), // "_terrainDone"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "responseBytes"
QT_MOC_LITERAL(4, 47, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 75, 5) // "error"

    },
    "TerrainTileManager\0_terrainDone\0\0"
    "responseBytes\0QNetworkReply::NetworkError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainTileManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 4,    3,    5,

       0        // eod
};

void TerrainTileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainTileManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_terrainDone((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainTileManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TerrainTileManager.data,
    qt_meta_data_TerrainTileManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainTileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainTileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainTileManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainTileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_TerrainAtCoordinateBatchManager_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainAtCoordinateBatchManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainAtCoordinateBatchManager_t qt_meta_stringdata_TerrainAtCoordinateBatchManager = {
    {
QT_MOC_LITERAL(0, 0, 31), // "TerrainAtCoordinateBatchManager"
QT_MOC_LITERAL(1, 32, 14), // "_sendNextBatch"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "_queryObjectDestroyed"
QT_MOC_LITERAL(4, 70, 17), // "elevationProvider"
QT_MOC_LITERAL(5, 88, 18), // "_coordinateHeights"
QT_MOC_LITERAL(6, 107, 7), // "success"
QT_MOC_LITERAL(7, 115, 13), // "QList<double>"
QT_MOC_LITERAL(8, 129, 7) // "heights"

    },
    "TerrainAtCoordinateBatchManager\0"
    "_sendNextBatch\0\0_queryObjectDestroyed\0"
    "elevationProvider\0_coordinateHeights\0"
    "success\0QList<double>\0heights"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainAtCoordinateBatchManager[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    2,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    4,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7,    6,    8,

       0        // eod
};

void TerrainAtCoordinateBatchManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainAtCoordinateBatchManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_sendNextBatch(); break;
        case 1: _t->_queryObjectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->_coordinateHeights((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainAtCoordinateBatchManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TerrainAtCoordinateBatchManager.data,
    qt_meta_data_TerrainAtCoordinateBatchManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainAtCoordinateBatchManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainAtCoordinateBatchManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainAtCoordinateBatchManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainAtCoordinateBatchManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_TerrainAtCoordinateQuery_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainAtCoordinateQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainAtCoordinateQuery_t qt_meta_stringdata_TerrainAtCoordinateQuery = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TerrainAtCoordinateQuery"
QT_MOC_LITERAL(1, 25, 19), // "terrainDataReceived"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "success"
QT_MOC_LITERAL(4, 54, 13), // "QList<double>"
QT_MOC_LITERAL(5, 68, 7) // "heights"

    },
    "TerrainAtCoordinateQuery\0terrainDataReceived\0"
    "\0success\0QList<double>\0heights"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainAtCoordinateQuery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

       0        // eod
};

void TerrainAtCoordinateQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainAtCoordinateQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->terrainDataReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainAtCoordinateQuery::*)(bool , QList<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainAtCoordinateQuery::terrainDataReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainAtCoordinateQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TerrainAtCoordinateQuery.data,
    qt_meta_data_TerrainAtCoordinateQuery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainAtCoordinateQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainAtCoordinateQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainAtCoordinateQuery.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainAtCoordinateQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TerrainAtCoordinateQuery::terrainDataReceived(bool _t1, QList<double> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TerrainPathQuery_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainPathQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainPathQuery_t qt_meta_stringdata_TerrainPathQuery = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TerrainPathQuery"
QT_MOC_LITERAL(1, 17, 19), // "terrainDataReceived"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "success"
QT_MOC_LITERAL(4, 46, 16), // "PathHeightInfo_t"
QT_MOC_LITERAL(5, 63, 14), // "pathHeightInfo"
QT_MOC_LITERAL(6, 78, 12), // "_pathHeights"
QT_MOC_LITERAL(7, 91, 15), // "distanceBetween"
QT_MOC_LITERAL(8, 107, 20), // "finalDistanceBetween"
QT_MOC_LITERAL(9, 128, 13), // "QList<double>"
QT_MOC_LITERAL(10, 142, 7) // "heights"

    },
    "TerrainPathQuery\0terrainDataReceived\0"
    "\0success\0PathHeightInfo_t\0pathHeightInfo\0"
    "_pathHeights\0distanceBetween\0"
    "finalDistanceBetween\0QList<double>\0"
    "heights"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainPathQuery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    4,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double, 0x80000000 | 9,    3,    7,    8,   10,

       0        // eod
};

void TerrainPathQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainPathQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->terrainDataReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const PathHeightInfo_t(*)>(_a[2]))); break;
        case 1: _t->_pathHeights((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< const QList<double>(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainPathQuery::*)(bool , const PathHeightInfo_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainPathQuery::terrainDataReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainPathQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TerrainPathQuery.data,
    qt_meta_data_TerrainPathQuery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainPathQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainPathQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainPathQuery.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainPathQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TerrainPathQuery::terrainDataReceived(bool _t1, const PathHeightInfo_t & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TerrainPolyPathQuery_t {
    QByteArrayData data[9];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainPolyPathQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainPolyPathQuery_t qt_meta_stringdata_TerrainPolyPathQuery = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TerrainPolyPathQuery"
QT_MOC_LITERAL(1, 21, 19), // "terrainDataReceived"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "success"
QT_MOC_LITERAL(4, 50, 41), // "QList<TerrainPathQuery::PathH..."
QT_MOC_LITERAL(5, 92, 16), // "rgPathHeightInfo"
QT_MOC_LITERAL(6, 109, 20), // "_terrainDataReceived"
QT_MOC_LITERAL(7, 130, 34), // "TerrainPathQuery::PathHeightI..."
QT_MOC_LITERAL(8, 165, 14) // "pathHeightInfo"

    },
    "TerrainPolyPathQuery\0terrainDataReceived\0"
    "\0success\0QList<TerrainPathQuery::PathHeightInfo_t>\0"
    "rgPathHeightInfo\0_terrainDataReceived\0"
    "TerrainPathQuery::PathHeightInfo_t\0"
    "pathHeightInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainPolyPathQuery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7,    3,    8,

       0        // eod
};

void TerrainPolyPathQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainPolyPathQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->terrainDataReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<TerrainPathQuery::PathHeightInfo_t>(*)>(_a[2]))); break;
        case 1: _t->_terrainDataReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const TerrainPathQuery::PathHeightInfo_t(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<TerrainPathQuery::PathHeightInfo_t> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TerrainPathQuery::PathHeightInfo_t >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainPolyPathQuery::*)(bool , const QList<TerrainPathQuery::PathHeightInfo_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainPolyPathQuery::terrainDataReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainPolyPathQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TerrainPolyPathQuery.data,
    qt_meta_data_TerrainPolyPathQuery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainPolyPathQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainPolyPathQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainPolyPathQuery.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainPolyPathQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TerrainPolyPathQuery::terrainDataReceived(bool _t1, const QList<TerrainPathQuery::PathHeightInfo_t> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
