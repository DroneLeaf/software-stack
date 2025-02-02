/****************************************************************************
** Meta object code from reading C++ file 'TerrainProfile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QmlControls/TerrainProfile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainProfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TerrainProfile_t {
    QByteArrayData data[15];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainProfile_t qt_meta_stringdata_TerrainProfile = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TerrainProfile"
QT_MOC_LITERAL(1, 15, 24), // "missionControllerChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "visibleWidthChanged"
QT_MOC_LITERAL(4, 61, 21), // "pixelsPerMeterChanged"
QT_MOC_LITERAL(5, 83, 17), // "minAMSLAltChanged"
QT_MOC_LITERAL(6, 101, 17), // "maxAMSLAltChanged"
QT_MOC_LITERAL(7, 119, 13), // "_updateSignal"
QT_MOC_LITERAL(8, 133, 15), // "_newVisualItems"
QT_MOC_LITERAL(9, 149, 12), // "visibleWidth"
QT_MOC_LITERAL(10, 162, 17), // "missionController"
QT_MOC_LITERAL(11, 180, 18), // "MissionController*"
QT_MOC_LITERAL(12, 199, 14), // "pixelsPerMeter"
QT_MOC_LITERAL(13, 214, 10), // "minAMSLAlt"
QT_MOC_LITERAL(14, 225, 10) // "maxAMSLAlt"

    },
    "TerrainProfile\0missionControllerChanged\0"
    "\0visibleWidthChanged\0pixelsPerMeterChanged\0"
    "minAMSLAltChanged\0maxAMSLAltChanged\0"
    "_updateSignal\0_newVisualItems\0"
    "visibleWidth\0missionController\0"
    "MissionController*\0pixelsPerMeter\0"
    "minAMSLAlt\0maxAMSLAlt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainProfile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Double, 0x00495003,
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::Double, 0x00495003,
      13, QMetaType::Double, 0x00495003,
      14, QMetaType::Double, 0x00495003,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       4,

       0        // eod
};

void TerrainProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainProfile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->missionControllerChanged(); break;
        case 1: _t->visibleWidthChanged(); break;
        case 2: _t->pixelsPerMeterChanged(); break;
        case 3: _t->minAMSLAltChanged(); break;
        case 4: _t->maxAMSLAltChanged(); break;
        case 5: _t->_updateSignal(); break;
        case 6: _t->_newVisualItems(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainProfile::missionControllerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainProfile::visibleWidthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainProfile::pixelsPerMeterChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainProfile::minAMSLAltChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainProfile::maxAMSLAltChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerrainProfile::_updateSignal)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TerrainProfile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->_visibleWidth; break;
        case 1: *reinterpret_cast< MissionController**>(_v) = _t->missionController(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->_pixelsPerMeter; break;
        case 3: *reinterpret_cast< double*>(_v) = _t->_minAMSLAlt; break;
        case 4: *reinterpret_cast< double*>(_v) = _t->_maxAMSLAlt; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TerrainProfile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_visibleWidth != *reinterpret_cast< double*>(_v)) {
                _t->_visibleWidth = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->visibleWidthChanged();
            }
            break;
        case 1: _t->setMissionController(*reinterpret_cast< MissionController**>(_v)); break;
        case 2:
            if (_t->_pixelsPerMeter != *reinterpret_cast< double*>(_v)) {
                _t->_pixelsPerMeter = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->pixelsPerMeterChanged();
            }
            break;
        case 3:
            if (_t->_minAMSLAlt != *reinterpret_cast< double*>(_v)) {
                _t->_minAMSLAlt = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->minAMSLAltChanged();
            }
            break;
        case 4:
            if (_t->_maxAMSLAlt != *reinterpret_cast< double*>(_v)) {
                _t->_maxAMSLAlt = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->maxAMSLAltChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TerrainProfile::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_TerrainProfile.data,
    qt_meta_data_TerrainProfile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainProfile.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int TerrainProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TerrainProfile::missionControllerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TerrainProfile::visibleWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TerrainProfile::pixelsPerMeterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TerrainProfile::minAMSLAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TerrainProfile::maxAMSLAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TerrainProfile::_updateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
