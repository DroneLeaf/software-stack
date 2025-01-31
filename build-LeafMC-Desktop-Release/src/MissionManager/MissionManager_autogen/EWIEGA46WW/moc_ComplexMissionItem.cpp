/****************************************************************************
** Meta object code from reading C++ file 'ComplexMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/ComplexMissionItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComplexMissionItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComplexMissionItem_t {
    QByteArrayData data[26];
    char stringdata0[441];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComplexMissionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComplexMissionItem_t qt_meta_stringdata_ComplexMissionItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ComplexMissionItem"
QT_MOC_LITERAL(1, 19, 22), // "complexDistanceChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "boundingCubeChanged"
QT_MOC_LITERAL(4, 63, 25), // "greatestDistanceToChanged"
QT_MOC_LITERAL(5, 89, 18), // "presetNamesChanged"
QT_MOC_LITERAL(6, 108, 19), // "isIncompleteChanged"
QT_MOC_LITERAL(7, 128, 22), // "minAMSLAltitudeChanged"
QT_MOC_LITERAL(8, 151, 22), // "maxAMSLAltitudeChanged"
QT_MOC_LITERAL(9, 174, 23), // "terrainCollisionChanged"
QT_MOC_LITERAL(10, 198, 16), // "terrainCollision"
QT_MOC_LITERAL(11, 215, 31), // "_segmentTerrainCollisionChanged"
QT_MOC_LITERAL(12, 247, 10), // "loadPreset"
QT_MOC_LITERAL(13, 258, 4), // "name"
QT_MOC_LITERAL(14, 263, 10), // "savePreset"
QT_MOC_LITERAL(15, 274, 12), // "deletePreset"
QT_MOC_LITERAL(16, 287, 11), // "patternName"
QT_MOC_LITERAL(17, 299, 15), // "complexDistance"
QT_MOC_LITERAL(18, 315, 16), // "presetsSupported"
QT_MOC_LITERAL(19, 332, 11), // "presetNames"
QT_MOC_LITERAL(20, 344, 12), // "isIncomplete"
QT_MOC_LITERAL(21, 357, 15), // "minAMSLAltitude"
QT_MOC_LITERAL(22, 373, 15), // "maxAMSLAltitude"
QT_MOC_LITERAL(23, 389, 12), // "isSingleItem"
QT_MOC_LITERAL(24, 402, 18), // "flightPathSegments"
QT_MOC_LITERAL(25, 421, 19) // "QmlObjectListModel*"

    },
    "ComplexMissionItem\0complexDistanceChanged\0"
    "\0boundingCubeChanged\0greatestDistanceToChanged\0"
    "presetNamesChanged\0isIncompleteChanged\0"
    "minAMSLAltitudeChanged\0maxAMSLAltitudeChanged\0"
    "terrainCollisionChanged\0terrainCollision\0"
    "_segmentTerrainCollisionChanged\0"
    "loadPreset\0name\0savePreset\0deletePreset\0"
    "patternName\0complexDistance\0"
    "presetsSupported\0presetNames\0isIncomplete\0"
    "minAMSLAltitude\0maxAMSLAltitude\0"
    "isSingleItem\0flightPathSegments\0"
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComplexMissionItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      10,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    1,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   84,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   87,    2, 0x02 /* Public */,
      14,    1,   90,    2, 0x02 /* Public */,
      15,    1,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095401,
      17, QMetaType::Double, 0x00495001,
      18, QMetaType::Bool, 0x00095401,
      19, QMetaType::QStringList, 0x00495001,
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::Double, 0x00495001,
      22, QMetaType::Double, 0x00495001,
      23, QMetaType::Bool, 0x00095401,
      24, 0x80000000 | 25, 0x00095409,
      10, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       3,
       4,
       5,
       6,
       0,
       0,
       7,

       0        // eod
};

void ComplexMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComplexMissionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->complexDistanceChanged(); break;
        case 1: _t->boundingCubeChanged(); break;
        case 2: _t->greatestDistanceToChanged(); break;
        case 3: _t->presetNamesChanged(); break;
        case 4: _t->isIncompleteChanged(); break;
        case 5: _t->minAMSLAltitudeChanged(); break;
        case 6: _t->maxAMSLAltitudeChanged(); break;
        case 7: _t->terrainCollisionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->_segmentTerrainCollisionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->loadPreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->savePreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->deletePreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComplexMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::complexDistanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::boundingCubeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::greatestDistanceToChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::presetNamesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::isIncompleteChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::minAMSLAltitudeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::maxAMSLAltitudeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::terrainCollisionChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ComplexMissionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->patternName(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->complexDistance(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->presetsSupported(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->presetNames(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isIncomplete(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->minAMSLAltitude(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->maxAMSLAltitude(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isSingleItem(); break;
        case 8: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->flightPathSegments(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->terrainCollision(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ComplexMissionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<VisualMissionItem::staticMetaObject>(),
    qt_meta_stringdata_ComplexMissionItem.data,
    qt_meta_data_ComplexMissionItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComplexMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComplexMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComplexMissionItem.stringdata0))
        return static_cast<void*>(this);
    return VisualMissionItem::qt_metacast(_clname);
}

int ComplexMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisualMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ComplexMissionItem::complexDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ComplexMissionItem::boundingCubeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ComplexMissionItem::greatestDistanceToChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ComplexMissionItem::presetNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ComplexMissionItem::isIncompleteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ComplexMissionItem::minAMSLAltitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ComplexMissionItem::maxAMSLAltitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ComplexMissionItem::terrainCollisionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
