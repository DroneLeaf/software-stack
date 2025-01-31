/****************************************************************************
** Meta object code from reading C++ file 'TransectStyleComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/TransectStyleComplexItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransectStyleComplexItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransectStyleComplexItem_t {
    QByteArrayData data[44];
    char stringdata0[859];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransectStyleComplexItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransectStyleComplexItem_t qt_meta_stringdata_TransectStyleComplexItem = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TransectStyleComplexItem"
QT_MOC_LITERAL(1, 25, 18), // "cameraShotsChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 23), // "timeBetweenShotsChanged"
QT_MOC_LITERAL(4, 69, 27), // "visualTransectPointsChanged"
QT_MOC_LITERAL(5, 97, 18), // "coveredAreaChanged"
QT_MOC_LITERAL(6, 116, 31), // "_updateFlightPathSegmentsSignal"
QT_MOC_LITERAL(7, 148, 9), // "_setDirty"
QT_MOC_LITERAL(8, 158, 11), // "_setIfDirty"
QT_MOC_LITERAL(9, 170, 5), // "dirty"
QT_MOC_LITERAL(10, 176, 26), // "_updateCoordinateAltitudes"
QT_MOC_LITERAL(11, 203, 20), // "_polyPathTerrainData"
QT_MOC_LITERAL(12, 224, 7), // "success"
QT_MOC_LITERAL(13, 232, 41), // "QList<TerrainPathQuery::PathH..."
QT_MOC_LITERAL(14, 274, 16), // "rgPathHeightInfo"
QT_MOC_LITERAL(15, 291, 28), // "_missionItemCoordTerrainData"
QT_MOC_LITERAL(16, 320, 13), // "QList<double>"
QT_MOC_LITERAL(17, 334, 7), // "heights"
QT_MOC_LITERAL(18, 342, 17), // "_rebuildTransects"
QT_MOC_LITERAL(19, 360, 35), // "_reallyQueryTransectsPathHeig..."
QT_MOC_LITERAL(20, 396, 29), // "_handleHoverAndCaptureEnabled"
QT_MOC_LITERAL(21, 426, 7), // "enabled"
QT_MOC_LITERAL(22, 434, 41), // "_updateFlightPathSegmentsDont..."
QT_MOC_LITERAL(23, 476, 31), // "_segmentTerrainCollisionChanged"
QT_MOC_LITERAL(24, 508, 16), // "terrainCollision"
QT_MOC_LITERAL(25, 525, 20), // "_distanceModeChanged"
QT_MOC_LITERAL(26, 546, 12), // "distanceMode"
QT_MOC_LITERAL(27, 559, 17), // "surveyAreaPolygon"
QT_MOC_LITERAL(28, 577, 14), // "QGCMapPolygon*"
QT_MOC_LITERAL(29, 592, 10), // "cameraCalc"
QT_MOC_LITERAL(30, 603, 11), // "CameraCalc*"
QT_MOC_LITERAL(31, 615, 18), // "turnAroundDistance"
QT_MOC_LITERAL(32, 634, 5), // "Fact*"
QT_MOC_LITERAL(33, 640, 25), // "cameraTriggerInTurnAround"
QT_MOC_LITERAL(34, 666, 15), // "hoverAndCapture"
QT_MOC_LITERAL(35, 682, 14), // "refly90Degrees"
QT_MOC_LITERAL(36, 697, 11), // "cameraShots"
QT_MOC_LITERAL(37, 709, 16), // "timeBetweenShots"
QT_MOC_LITERAL(38, 726, 11), // "coveredArea"
QT_MOC_LITERAL(39, 738, 22), // "hoverAndCaptureAllowed"
QT_MOC_LITERAL(40, 761, 20), // "visualTransectPoints"
QT_MOC_LITERAL(41, 782, 22), // "terrainAdjustTolerance"
QT_MOC_LITERAL(42, 805, 27), // "terrainAdjustMaxDescentRate"
QT_MOC_LITERAL(43, 833, 25) // "terrainAdjustMaxClimbRate"

    },
    "TransectStyleComplexItem\0cameraShotsChanged\0"
    "\0timeBetweenShotsChanged\0"
    "visualTransectPointsChanged\0"
    "coveredAreaChanged\0_updateFlightPathSegmentsSignal\0"
    "_setDirty\0_setIfDirty\0dirty\0"
    "_updateCoordinateAltitudes\0"
    "_polyPathTerrainData\0success\0"
    "QList<TerrainPathQuery::PathHeightInfo_t>\0"
    "rgPathHeightInfo\0_missionItemCoordTerrainData\0"
    "QList<double>\0heights\0_rebuildTransects\0"
    "_reallyQueryTransectsPathHeightInfo\0"
    "_handleHoverAndCaptureEnabled\0enabled\0"
    "_updateFlightPathSegmentsDontCallDirectly\0"
    "_segmentTerrainCollisionChanged\0"
    "terrainCollision\0_distanceModeChanged\0"
    "distanceMode\0surveyAreaPolygon\0"
    "QGCMapPolygon*\0cameraCalc\0CameraCalc*\0"
    "turnAroundDistance\0Fact*\0"
    "cameraTriggerInTurnAround\0hoverAndCapture\0"
    "refly90Degrees\0cameraShots\0timeBetweenShots\0"
    "coveredArea\0hoverAndCaptureAllowed\0"
    "visualTransectPoints\0terrainAdjustTolerance\0"
    "terrainAdjustMaxDescentRate\0"
    "terrainAdjustMaxClimbRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransectStyleComplexItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      14,  126, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   99,    2, 0x09 /* Protected */,
       8,    1,  100,    2, 0x09 /* Protected */,
      10,    0,  103,    2, 0x09 /* Protected */,
      11,    2,  104,    2, 0x09 /* Protected */,
      15,    2,  109,    2, 0x09 /* Protected */,
      18,    0,  114,    2, 0x09 /* Protected */,
      19,    0,  115,    2, 0x08 /* Private */,
      20,    1,  116,    2, 0x08 /* Private */,
      22,    0,  119,    2, 0x08 /* Private */,
      23,    1,  120,    2, 0x08 /* Private */,
      25,    1,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 13,   12,   14,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 16,   12,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Int,   26,

 // properties: name, type, flags
      27, 0x80000000 | 28, 0x00095409,
      29, 0x80000000 | 30, 0x00095409,
      31, 0x80000000 | 32, 0x00095409,
      33, 0x80000000 | 32, 0x00095409,
      34, 0x80000000 | 32, 0x00095409,
      35, 0x80000000 | 32, 0x00095409,
      36, QMetaType::Int, 0x00495001,
      37, QMetaType::Double, 0x00495001,
      38, QMetaType::Double, 0x00495001,
      39, QMetaType::Bool, 0x00095401,
      40, QMetaType::QVariantList, 0x00495001,
      41, 0x80000000 | 32, 0x00095409,
      42, 0x80000000 | 32, 0x00095409,
      43, 0x80000000 | 32, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       3,
       0,
       2,
       0,
       0,
       0,

       0        // eod
};

void TransectStyleComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransectStyleComplexItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraShotsChanged(); break;
        case 1: _t->timeBetweenShotsChanged(); break;
        case 2: _t->visualTransectPointsChanged(); break;
        case 3: _t->coveredAreaChanged(); break;
        case 4: _t->_updateFlightPathSegmentsSignal(); break;
        case 5: _t->_setDirty(); break;
        case 6: _t->_setIfDirty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->_updateCoordinateAltitudes(); break;
        case 8: _t->_polyPathTerrainData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<TerrainPathQuery::PathHeightInfo_t>(*)>(_a[2]))); break;
        case 9: _t->_missionItemCoordTerrainData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2]))); break;
        case 10: _t->_rebuildTransects(); break;
        case 11: _t->_reallyQueryTransectsPathHeightInfo(); break;
        case 12: _t->_handleHoverAndCaptureEnabled((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 13: _t->_updateFlightPathSegmentsDontCallDirectly(); break;
        case 14: _t->_segmentTerrainCollisionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->_distanceModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<TerrainPathQuery::PathHeightInfo_t> >(); break;
            }
            break;
        case 9:
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
            using _t = void (TransectStyleComplexItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransectStyleComplexItem::cameraShotsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransectStyleComplexItem::timeBetweenShotsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransectStyleComplexItem::visualTransectPointsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransectStyleComplexItem::coveredAreaChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransectStyleComplexItem::_updateFlightPathSegmentsSignal)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CameraCalc* >(); break;
        case 13:
        case 12:
        case 11:
        case 5:
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapPolygon* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TransectStyleComplexItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGCMapPolygon**>(_v) = _t->surveyAreaPolygon(); break;
        case 1: *reinterpret_cast< CameraCalc**>(_v) = _t->cameraCalc(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->turnAroundDistance(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->cameraTriggerInTurnAround(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->hoverAndCapture(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->refly90Degrees(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->cameraShots(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->timeBetweenShots(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->coveredArea(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hoverAndCaptureAllowed(); break;
        case 10: *reinterpret_cast< QVariantList*>(_v) = _t->visualTransectPoints(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->terrainAdjustTolerance(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->terrainAdjustMaxDescentRate(); break;
        case 13: *reinterpret_cast< Fact**>(_v) = _t->terrainAdjustMaxClimbRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TransectStyleComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ComplexMissionItem::staticMetaObject>(),
    qt_meta_stringdata_TransectStyleComplexItem.data,
    qt_meta_data_TransectStyleComplexItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransectStyleComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransectStyleComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransectStyleComplexItem.stringdata0))
        return static_cast<void*>(this);
    return ComplexMissionItem::qt_metacast(_clname);
}

int TransectStyleComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComplexMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TransectStyleComplexItem::cameraShotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TransectStyleComplexItem::timeBetweenShotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TransectStyleComplexItem::visualTransectPointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TransectStyleComplexItem::coveredAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TransectStyleComplexItem::_updateFlightPathSegmentsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
