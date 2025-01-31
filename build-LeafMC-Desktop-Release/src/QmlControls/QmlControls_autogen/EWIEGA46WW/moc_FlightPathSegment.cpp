/****************************************************************************
** Meta object code from reading C++ file 'FlightPathSegment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QmlControls/FlightPathSegment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlightPathSegment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightPathSegment_t {
    QByteArrayData data[42];
    char stringdata0[737];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPathSegment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPathSegment_t qt_meta_stringdata_FlightPathSegment = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FlightPathSegment"
QT_MOC_LITERAL(1, 18, 18), // "coordinate1Changed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 53, 10), // "coordinate"
QT_MOC_LITERAL(5, 64, 18), // "coordinate2Changed"
QT_MOC_LITERAL(6, 83, 20), // "coord1AMSLAltChanged"
QT_MOC_LITERAL(7, 104, 20), // "coord2AMSLAltChanged"
QT_MOC_LITERAL(8, 125, 20), // "specialVisualChanged"
QT_MOC_LITERAL(9, 146, 13), // "specialVisual"
QT_MOC_LITERAL(10, 160, 25), // "amslTerrainHeightsChanged"
QT_MOC_LITERAL(11, 186, 22), // "distanceBetweenChanged"
QT_MOC_LITERAL(12, 209, 15), // "distanceBetween"
QT_MOC_LITERAL(13, 225, 27), // "finalDistanceBetweenChanged"
QT_MOC_LITERAL(14, 253, 20), // "finalDistanceBetween"
QT_MOC_LITERAL(15, 274, 20), // "totalDistanceChanged"
QT_MOC_LITERAL(16, 295, 13), // "totalDistance"
QT_MOC_LITERAL(17, 309, 23), // "terrainCollisionChanged"
QT_MOC_LITERAL(18, 333, 16), // "terrainCollision"
QT_MOC_LITERAL(19, 350, 14), // "setCoordinate1"
QT_MOC_LITERAL(20, 365, 14), // "setCoordinate2"
QT_MOC_LITERAL(21, 380, 16), // "setCoord1AMSLAlt"
QT_MOC_LITERAL(22, 397, 3), // "alt"
QT_MOC_LITERAL(23, 401, 16), // "setCoord2AMSLAlt"
QT_MOC_LITERAL(24, 418, 21), // "_sendTerrainPathQuery"
QT_MOC_LITERAL(25, 440, 20), // "_terrainDataReceived"
QT_MOC_LITERAL(26, 461, 7), // "success"
QT_MOC_LITERAL(27, 469, 34), // "TerrainPathQuery::PathHeightI..."
QT_MOC_LITERAL(28, 504, 14), // "pathHeightInfo"
QT_MOC_LITERAL(29, 519, 20), // "_updateTotalDistance"
QT_MOC_LITERAL(30, 540, 23), // "_updateTerrainCollision"
QT_MOC_LITERAL(31, 564, 11), // "coordinate1"
QT_MOC_LITERAL(32, 576, 11), // "coordinate2"
QT_MOC_LITERAL(33, 588, 13), // "coord1AMSLAlt"
QT_MOC_LITERAL(34, 602, 13), // "coord2AMSLAlt"
QT_MOC_LITERAL(35, 616, 18), // "amslTerrainHeights"
QT_MOC_LITERAL(36, 635, 11), // "segmentType"
QT_MOC_LITERAL(37, 647, 11), // "SegmentType"
QT_MOC_LITERAL(38, 659, 18), // "SegmentTypeTakeoff"
QT_MOC_LITERAL(39, 678, 18), // "SegmentTypeGeneric"
QT_MOC_LITERAL(40, 697, 15), // "SegmentTypeLand"
QT_MOC_LITERAL(41, 713, 23) // "SegmentTypeTerrainFrame"

    },
    "FlightPathSegment\0coordinate1Changed\0"
    "\0QGeoCoordinate\0coordinate\0"
    "coordinate2Changed\0coord1AMSLAltChanged\0"
    "coord2AMSLAltChanged\0specialVisualChanged\0"
    "specialVisual\0amslTerrainHeightsChanged\0"
    "distanceBetweenChanged\0distanceBetween\0"
    "finalDistanceBetweenChanged\0"
    "finalDistanceBetween\0totalDistanceChanged\0"
    "totalDistance\0terrainCollisionChanged\0"
    "terrainCollision\0setCoordinate1\0"
    "setCoordinate2\0setCoord1AMSLAlt\0alt\0"
    "setCoord2AMSLAlt\0_sendTerrainPathQuery\0"
    "_terrainDataReceived\0success\0"
    "TerrainPathQuery::PathHeightInfo_t\0"
    "pathHeightInfo\0_updateTotalDistance\0"
    "_updateTerrainCollision\0coordinate1\0"
    "coordinate2\0coord1AMSLAlt\0coord2AMSLAlt\0"
    "amslTerrainHeights\0segmentType\0"
    "SegmentType\0SegmentTypeTakeoff\0"
    "SegmentTypeGeneric\0SegmentTypeLand\0"
    "SegmentTypeTerrainFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPathSegment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      11,  148, // properties
       1,  192, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       5,    1,  107,    2, 0x06 /* Public */,
       6,    0,  110,    2, 0x06 /* Public */,
       7,    0,  111,    2, 0x06 /* Public */,
       8,    1,  112,    2, 0x06 /* Public */,
      10,    0,  115,    2, 0x06 /* Public */,
      11,    1,  116,    2, 0x06 /* Public */,
      13,    1,  119,    2, 0x06 /* Public */,
      15,    1,  122,    2, 0x06 /* Public */,
      17,    1,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  128,    2, 0x0a /* Public */,
      20,    1,  131,    2, 0x0a /* Public */,
      21,    1,  134,    2, 0x0a /* Public */,
      23,    1,  137,    2, 0x0a /* Public */,
      24,    0,  140,    2, 0x08 /* Private */,
      25,    2,  141,    2, 0x08 /* Private */,
      29,    0,  146,    2, 0x08 /* Private */,
      30,    0,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Bool,   18,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 27,   26,   28,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, 0x80000000 | 3, 0x0049500b,
      32, 0x80000000 | 3, 0x0049500b,
      33, QMetaType::Double, 0x00495003,
      34, QMetaType::Double, 0x00495003,
       9, QMetaType::Bool, 0x00495103,
      35, QMetaType::QVariantList, 0x00495003,
      12, QMetaType::Double, 0x00495003,
      14, QMetaType::Double, 0x00495003,
      16, QMetaType::Double, 0x00495003,
      18, QMetaType::Bool, 0x00495003,
      36, 0x80000000 | 37, 0x00095409,

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
       0,

 // enums: name, alias, flags, count, data
      37,   37, 0x0,    4,  197,

 // enum data: key, value
      38, uint(FlightPathSegment::SegmentTypeTakeoff),
      39, uint(FlightPathSegment::SegmentTypeGeneric),
      40, uint(FlightPathSegment::SegmentTypeLand),
      41, uint(FlightPathSegment::SegmentTypeTerrainFrame),

       0        // eod
};

void FlightPathSegment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightPathSegment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinate1Changed((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->coordinate2Changed((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 2: _t->coord1AMSLAltChanged(); break;
        case 3: _t->coord2AMSLAltChanged(); break;
        case 4: _t->specialVisualChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->amslTerrainHeightsChanged(); break;
        case 6: _t->distanceBetweenChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->finalDistanceBetweenChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->totalDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->terrainCollisionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setCoordinate1((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 11: _t->setCoordinate2((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 12: _t->setCoord1AMSLAlt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->setCoord2AMSLAlt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->_sendTerrainPathQuery(); break;
        case 15: _t->_terrainDataReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const TerrainPathQuery::PathHeightInfo_t(*)>(_a[2]))); break;
        case 16: _t->_updateTotalDistance(); break;
        case 17: _t->_updateTerrainCollision(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 15:
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
            using _t = void (FlightPathSegment::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::coordinate1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::coordinate2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::coord1AMSLAltChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::coord2AMSLAltChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::specialVisualChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::amslTerrainHeightsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::distanceBetweenChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::finalDistanceBetweenChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::totalDistanceChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPathSegment::terrainCollisionChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightPathSegment *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->_coord1; break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->_coord2; break;
        case 2: *reinterpret_cast< double*>(_v) = _t->_coord1AMSLAlt; break;
        case 3: *reinterpret_cast< double*>(_v) = _t->_coord2AMSLAlt; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->specialVisual(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->_amslTerrainHeights; break;
        case 6: *reinterpret_cast< double*>(_v) = _t->_distanceBetween; break;
        case 7: *reinterpret_cast< double*>(_v) = _t->_finalDistanceBetween; break;
        case 8: *reinterpret_cast< double*>(_v) = _t->_totalDistance; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->_terrainCollision; break;
        case 10: *reinterpret_cast< SegmentType*>(_v) = _t->_segmentType; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightPathSegment *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_coord1 != *reinterpret_cast< QGeoCoordinate*>(_v)) {
                _t->_coord1 = *reinterpret_cast< QGeoCoordinate*>(_v);
                Q_EMIT _t->coordinate1Changed(_t->_coord1);
            }
            break;
        case 1:
            if (_t->_coord2 != *reinterpret_cast< QGeoCoordinate*>(_v)) {
                _t->_coord2 = *reinterpret_cast< QGeoCoordinate*>(_v);
                Q_EMIT _t->coordinate2Changed(_t->_coord2);
            }
            break;
        case 2:
            if (_t->_coord1AMSLAlt != *reinterpret_cast< double*>(_v)) {
                _t->_coord1AMSLAlt = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->coord1AMSLAltChanged();
            }
            break;
        case 3:
            if (_t->_coord2AMSLAlt != *reinterpret_cast< double*>(_v)) {
                _t->_coord2AMSLAlt = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->coord2AMSLAltChanged();
            }
            break;
        case 4: _t->setSpecialVisual(*reinterpret_cast< bool*>(_v)); break;
        case 5:
            if (_t->_amslTerrainHeights != *reinterpret_cast< QVariantList*>(_v)) {
                _t->_amslTerrainHeights = *reinterpret_cast< QVariantList*>(_v);
                Q_EMIT _t->amslTerrainHeightsChanged();
            }
            break;
        case 6:
            if (_t->_distanceBetween != *reinterpret_cast< double*>(_v)) {
                _t->_distanceBetween = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->distanceBetweenChanged(_t->_distanceBetween);
            }
            break;
        case 7:
            if (_t->_finalDistanceBetween != *reinterpret_cast< double*>(_v)) {
                _t->_finalDistanceBetween = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->finalDistanceBetweenChanged(_t->_finalDistanceBetween);
            }
            break;
        case 8:
            if (_t->_totalDistance != *reinterpret_cast< double*>(_v)) {
                _t->_totalDistance = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->totalDistanceChanged(_t->_totalDistance);
            }
            break;
        case 9:
            if (_t->_terrainCollision != *reinterpret_cast< bool*>(_v)) {
                _t->_terrainCollision = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->terrainCollisionChanged(_t->_terrainCollision);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FlightPathSegment::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FlightPathSegment.data,
    qt_meta_data_FlightPathSegment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightPathSegment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPathSegment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPathSegment.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightPathSegment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightPathSegment::coordinate1Changed(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightPathSegment::coordinate2Changed(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightPathSegment::coord1AMSLAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FlightPathSegment::coord2AMSLAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FlightPathSegment::specialVisualChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightPathSegment::amslTerrainHeightsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FlightPathSegment::distanceBetweenChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightPathSegment::finalDistanceBetweenChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightPathSegment::totalDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightPathSegment::terrainCollisionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
