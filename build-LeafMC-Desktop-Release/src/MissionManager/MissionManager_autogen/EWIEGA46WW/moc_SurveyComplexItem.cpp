/****************************************************************************
** Meta object code from reading C++ file 'SurveyComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/SurveyComplexItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurveyComplexItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SurveyComplexItem_t {
    QByteArrayData data[14];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SurveyComplexItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SurveyComplexItem_t qt_meta_stringdata_SurveyComplexItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SurveyComplexItem"
QT_MOC_LITERAL(1, 18, 21), // "refly90DegreesChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "refly90Degrees"
QT_MOC_LITERAL(4, 56, 17), // "_updateWizardMode"
QT_MOC_LITERAL(5, 74, 23), // "_rebuildTransectsPhase1"
QT_MOC_LITERAL(6, 98, 18), // "_recalcCameraShots"
QT_MOC_LITERAL(7, 117, 16), // "rotateEntryPoint"
QT_MOC_LITERAL(8, 134, 9), // "gridAngle"
QT_MOC_LITERAL(9, 144, 5), // "Fact*"
QT_MOC_LITERAL(10, 150, 21), // "flyAlternateTransects"
QT_MOC_LITERAL(11, 172, 20), // "splitConcavePolygons"
QT_MOC_LITERAL(12, 193, 16), // "centerCoordinate"
QT_MOC_LITERAL(13, 210, 14) // "QGeoCoordinate"

    },
    "SurveyComplexItem\0refly90DegreesChanged\0"
    "\0refly90Degrees\0_updateWizardMode\0"
    "_rebuildTransectsPhase1\0_recalcCameraShots\0"
    "rotateEntryPoint\0gridAngle\0Fact*\0"
    "flyAlternateTransects\0splitConcavePolygons\0"
    "centerCoordinate\0QGeoCoordinate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SurveyComplexItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095409,
      10, 0x80000000 | 9, 0x00095409,
      11, 0x80000000 | 9, 0x00095409,
      12, 0x80000000 | 13, 0x0009510b,

       0        // eod
};

void SurveyComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SurveyComplexItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refly90DegreesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->_updateWizardMode(); break;
        case 2: _t->_rebuildTransectsPhase1(); break;
        case 3: _t->_recalcCameraShots(); break;
        case 4: _t->rotateEntryPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SurveyComplexItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SurveyComplexItem::refly90DegreesChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SurveyComplexItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->gridAngle(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->flyAlternateTransects(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->splitConcavePolygons(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->centerCoordinate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SurveyComplexItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setCenterCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SurveyComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<TransectStyleComplexItem::staticMetaObject>(),
    qt_meta_stringdata_SurveyComplexItem.data,
    qt_meta_data_SurveyComplexItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SurveyComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SurveyComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SurveyComplexItem.stringdata0))
        return static_cast<void*>(this);
    return TransectStyleComplexItem::qt_metacast(_clname);
}

int SurveyComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransectStyleComplexItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SurveyComplexItem::refly90DegreesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
