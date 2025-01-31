/****************************************************************************
** Meta object code from reading C++ file 'QGCMapPolygon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/QGCMapPolygon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapPolygon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapPolygon_t {
    QByteArrayData data[52];
    char stringdata0[659];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapPolygon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapPolygon_t qt_meta_stringdata_QGCMapPolygon = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGCMapPolygon"
QT_MOC_LITERAL(1, 14, 12), // "countChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "count"
QT_MOC_LITERAL(4, 34, 11), // "pathChanged"
QT_MOC_LITERAL(5, 46, 12), // "dirtyChanged"
QT_MOC_LITERAL(6, 59, 5), // "dirty"
QT_MOC_LITERAL(7, 65, 7), // "cleared"
QT_MOC_LITERAL(8, 73, 13), // "centerChanged"
QT_MOC_LITERAL(9, 87, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(10, 102, 6), // "center"
QT_MOC_LITERAL(11, 109, 17), // "centerDragChanged"
QT_MOC_LITERAL(12, 127, 10), // "centerDrag"
QT_MOC_LITERAL(13, 138, 18), // "interactiveChanged"
QT_MOC_LITERAL(14, 157, 11), // "interactive"
QT_MOC_LITERAL(15, 169, 14), // "isValidChanged"
QT_MOC_LITERAL(16, 184, 14), // "isEmptyChanged"
QT_MOC_LITERAL(17, 199, 16), // "traceModeChanged"
QT_MOC_LITERAL(18, 216, 9), // "traceMode"
QT_MOC_LITERAL(19, 226, 19), // "showAltColorChanged"
QT_MOC_LITERAL(20, 246, 12), // "showAltColor"
QT_MOC_LITERAL(21, 259, 21), // "selectedVertexChanged"
QT_MOC_LITERAL(22, 281, 5), // "index"
QT_MOC_LITERAL(23, 287, 25), // "_polygonModelCountChanged"
QT_MOC_LITERAL(24, 313, 25), // "_polygonModelDirtyChanged"
QT_MOC_LITERAL(25, 339, 13), // "_updateCenter"
QT_MOC_LITERAL(26, 353, 5), // "clear"
QT_MOC_LITERAL(27, 359, 12), // "appendVertex"
QT_MOC_LITERAL(28, 372, 10), // "coordinate"
QT_MOC_LITERAL(29, 383, 12), // "removeVertex"
QT_MOC_LITERAL(30, 396, 11), // "vertexIndex"
QT_MOC_LITERAL(31, 408, 14), // "appendVertices"
QT_MOC_LITERAL(32, 423, 9), // "varCoords"
QT_MOC_LITERAL(33, 433, 12), // "adjustVertex"
QT_MOC_LITERAL(34, 446, 19), // "splitPolygonSegment"
QT_MOC_LITERAL(35, 466, 18), // "containsCoordinate"
QT_MOC_LITERAL(36, 485, 6), // "offset"
QT_MOC_LITERAL(37, 492, 8), // "distance"
QT_MOC_LITERAL(38, 501, 16), // "loadKMLOrSHPFile"
QT_MOC_LITERAL(39, 518, 4), // "file"
QT_MOC_LITERAL(40, 523, 16), // "vertexCoordinate"
QT_MOC_LITERAL(41, 540, 6), // "vertex"
QT_MOC_LITERAL(42, 547, 22), // "verifyClockwiseWinding"
QT_MOC_LITERAL(43, 570, 10), // "beginReset"
QT_MOC_LITERAL(44, 581, 8), // "endReset"
QT_MOC_LITERAL(45, 590, 4), // "path"
QT_MOC_LITERAL(46, 595, 4), // "area"
QT_MOC_LITERAL(47, 600, 9), // "pathModel"
QT_MOC_LITERAL(48, 610, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(49, 630, 7), // "isValid"
QT_MOC_LITERAL(50, 638, 5), // "empty"
QT_MOC_LITERAL(51, 644, 14) // "selectedVertex"

    },
    "QGCMapPolygon\0countChanged\0\0count\0"
    "pathChanged\0dirtyChanged\0dirty\0cleared\0"
    "centerChanged\0QGeoCoordinate\0center\0"
    "centerDragChanged\0centerDrag\0"
    "interactiveChanged\0interactive\0"
    "isValidChanged\0isEmptyChanged\0"
    "traceModeChanged\0traceMode\0"
    "showAltColorChanged\0showAltColor\0"
    "selectedVertexChanged\0index\0"
    "_polygonModelCountChanged\0"
    "_polygonModelDirtyChanged\0_updateCenter\0"
    "clear\0appendVertex\0coordinate\0"
    "removeVertex\0vertexIndex\0appendVertices\0"
    "varCoords\0adjustVertex\0splitPolygonSegment\0"
    "containsCoordinate\0offset\0distance\0"
    "loadKMLOrSHPFile\0file\0vertexCoordinate\0"
    "vertex\0verifyClockwiseWinding\0beginReset\0"
    "endReset\0path\0area\0pathModel\0"
    "QmlObjectListModel*\0isValid\0empty\0"
    "selectedVertex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapPolygon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
      13,  222, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,
       4,    0,  157,    2, 0x06 /* Public */,
       5,    1,  158,    2, 0x06 /* Public */,
       7,    0,  161,    2, 0x06 /* Public */,
       8,    1,  162,    2, 0x06 /* Public */,
      11,    1,  165,    2, 0x06 /* Public */,
      13,    1,  168,    2, 0x06 /* Public */,
      15,    0,  171,    2, 0x06 /* Public */,
      16,    0,  172,    2, 0x06 /* Public */,
      17,    1,  173,    2, 0x06 /* Public */,
      19,    1,  176,    2, 0x06 /* Public */,
      21,    1,  179,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,  182,    2, 0x08 /* Private */,
      24,    1,  185,    2, 0x08 /* Private */,
      25,    0,  188,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      26,    0,  189,    2, 0x02 /* Public */,
      27,    1,  190,    2, 0x02 /* Public */,
      29,    1,  193,    2, 0x02 /* Public */,
      31,    1,  196,    2, 0x02 /* Public */,
      33,    2,  199,    2, 0x02 /* Public */,
      34,    1,  204,    2, 0x02 /* Public */,
      35,    1,  207,    2, 0x02 /* Public */,
      36,    1,  210,    2, 0x02 /* Public */,
      38,    1,  213,    2, 0x02 /* Public */,
      40,    1,  216,    2, 0x02 /* Public */,
      42,    0,  219,    2, 0x02 /* Public */,
      43,    0,  220,    2, 0x02 /* Public */,
      44,    0,  221,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::QVariantList,   32,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,   30,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Bool, 0x80000000 | 9,   28,
    QMetaType::Void, QMetaType::Double,   37,
    QMetaType::Bool, QMetaType::QString,   39,
    0x80000000 | 9, QMetaType::Int,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
      45, QMetaType::QVariantList, 0x00495001,
      46, QMetaType::Double, 0x00495001,
      47, 0x80000000 | 48, 0x00095409,
       6, QMetaType::Bool, 0x00495103,
      10, 0x80000000 | 9, 0x0049510b,
      12, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495103,
      49, QMetaType::Bool, 0x00495001,
      50, QMetaType::Bool, 0x00495001,
      18, QMetaType::Bool, 0x00495103,
      20, QMetaType::Bool, 0x00495103,
      51, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       1,
       0,
       2,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,

       0        // eod
};

void QGCMapPolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMapPolygon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pathChanged(); break;
        case 2: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->cleared(); break;
        case 4: _t->centerChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 5: _t->centerDragChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->interactiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->isValidChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isEmptyChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->traceModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showAltColorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->selectedVertexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->_polygonModelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->_polygonModelDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->_updateCenter(); break;
        case 15: _t->clear(); break;
        case 16: _t->appendVertex((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 17: _t->removeVertex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->appendVertices((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 19: _t->adjustVertex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 20: _t->splitPolygonSegment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: { bool _r = _t->containsCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->offset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: { bool _r = _t->loadKMLOrSHPFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { QGeoCoordinate _r = _t->vertexCoordinate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->verifyClockwiseWinding(); break;
        case 26: _t->beginReset(); break;
        case 27: _t->endReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMapPolygon::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::pathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::dirtyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::cleared)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::centerChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::centerDragChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::interactiveChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = bool (QGCMapPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::isValidChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = bool (QGCMapPolygon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::isEmptyChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::traceModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::showAltColorChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::selectedVertexChanged)) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMapPolygon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->area(); break;
        case 3: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->qmlPathModel(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 5: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->center(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->centerDrag(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->empty(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->traceMode(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->showAltColor(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->selectedVertex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMapPolygon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 6: _t->setCenterDrag(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setTraceMode(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setShowAltColor(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->selectVertex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCMapPolygon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCMapPolygon.data,
    qt_meta_data_QGCMapPolygon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCMapPolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapPolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapPolygon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapPolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCMapPolygon::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapPolygon::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMapPolygon::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCMapPolygon::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMapPolygon::centerChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCMapPolygon::centerDragChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGCMapPolygon::interactiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
bool QGCMapPolygon::isValidChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
bool QGCMapPolygon::isEmptyChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}

// SIGNAL 9
void QGCMapPolygon::traceModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGCMapPolygon::showAltColorChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGCMapPolygon::selectedVertexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
