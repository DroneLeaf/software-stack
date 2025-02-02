/****************************************************************************
** Meta object code from reading C++ file 'QGCGeoBoundingCube.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QmlControls/QGCGeoBoundingCube.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCGeoBoundingCube.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCGeoBoundingCube_t {
    QByteArrayData data[15];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCGeoBoundingCube_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCGeoBoundingCube_t qt_meta_stringdata_QGCGeoBoundingCube = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGCGeoBoundingCube"
QT_MOC_LITERAL(1, 19, 5), // "reset"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "isValid"
QT_MOC_LITERAL(4, 34, 6), // "center"
QT_MOC_LITERAL(5, 41, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(6, 56, 9), // "polygon2D"
QT_MOC_LITERAL(7, 66, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(8, 88, 6), // "clipTo"
QT_MOC_LITERAL(9, 95, 5), // "width"
QT_MOC_LITERAL(10, 101, 6), // "height"
QT_MOC_LITERAL(11, 108, 4), // "area"
QT_MOC_LITERAL(12, 113, 6), // "radius"
QT_MOC_LITERAL(13, 120, 7), // "pointNW"
QT_MOC_LITERAL(14, 128, 7) // "pointSE"

    },
    "QGCGeoBoundingCube\0reset\0\0isValid\0"
    "center\0QGeoCoordinate\0polygon2D\0"
    "QList<QGeoCoordinate>\0clipTo\0width\0"
    "height\0area\0radius\0pointNW\0pointSE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCGeoBoundingCube[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x02 /* Public */,
       3,    0,   60,    2, 0x02 /* Public */,
       4,    0,   61,    2, 0x02 /* Public */,
       6,    1,   62,    2, 0x02 /* Public */,
       6,    0,   65,    2, 0x22 /* Public | MethodCloned */,
       9,    0,   66,    2, 0x02 /* Public */,
      10,    0,   67,    2, 0x02 /* Public */,
      11,    0,   68,    2, 0x02 /* Public */,
      12,    0,   69,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    0x80000000 | 5,
    0x80000000 | 7, QMetaType::Double,    8,
    0x80000000 | 7,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,

 // properties: name, type, flags
      13, 0x80000000 | 5, 0x00095409,
      14, 0x80000000 | 5, 0x00095409,

       0        // eod
};

void QGCGeoBoundingCube::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCGeoBoundingCube *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QGeoCoordinate _r = _t->center();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 3: { QList<QGeoCoordinate> _r = _t->polygon2D((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGeoCoordinate>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<QGeoCoordinate> _r = _t->polygon2D();
            if (_a[0]) *reinterpret_cast< QList<QGeoCoordinate>*>(_a[0]) = std::move(_r); }  break;
        case 5: { double _r = _t->width();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 6: { double _r = _t->height();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 7: { double _r = _t->area();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 8: { double _r = _t->radius();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
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
        auto *_t = static_cast<QGCGeoBoundingCube *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->pointNW; break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->pointSE; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCGeoBoundingCube::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCGeoBoundingCube.data,
    qt_meta_data_QGCGeoBoundingCube,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCGeoBoundingCube::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCGeoBoundingCube::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCGeoBoundingCube.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCGeoBoundingCube::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
