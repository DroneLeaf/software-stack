/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkInspectorController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/AnalyzeView/MAVLinkInspectorController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkInspectorController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMAVLinkMessageField_t {
    QByteArrayData data[13];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMAVLinkMessageField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMAVLinkMessageField_t qt_meta_stringdata_QGCMAVLinkMessageField = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QGCMAVLinkMessageField"
QT_MOC_LITERAL(1, 23, 13), // "seriesChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "selectableChanged"
QT_MOC_LITERAL(4, 56, 12), // "valueChanged"
QT_MOC_LITERAL(5, 69, 4), // "name"
QT_MOC_LITERAL(6, 74, 5), // "label"
QT_MOC_LITERAL(7, 80, 4), // "type"
QT_MOC_LITERAL(8, 85, 5), // "value"
QT_MOC_LITERAL(9, 91, 10), // "selectable"
QT_MOC_LITERAL(10, 102, 10), // "chartIndex"
QT_MOC_LITERAL(11, 113, 6), // "series"
QT_MOC_LITERAL(12, 120, 16) // "QAbstractSeries*"

    },
    "QGCMAVLinkMessageField\0seriesChanged\0"
    "\0selectableChanged\0valueChanged\0name\0"
    "label\0type\0value\0selectable\0chartIndex\0"
    "series\0QAbstractSeries*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMAVLinkMessageField[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QString, 0x00495001,
       9, QMetaType::Bool, 0x00495001,
      10, QMetaType::Int, 0x00095401,
      11, 0x80000000 | 12, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       2,
       1,
       0,
       0,

       0        // eod
};

void QGCMAVLinkMessageField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMAVLinkMessageField *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seriesChanged(); break;
        case 1: _t->selectableChanged(); break;
        case 2: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMAVLinkMessageField::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkMessageField::seriesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessageField::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkMessageField::selectableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessageField::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkMessageField::valueChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMAVLinkMessageField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->chartIndex(); break;
        case 6: *reinterpret_cast< QAbstractSeries**>(_v) = _t->series(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCMAVLinkMessageField::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCMAVLinkMessageField.data,
    qt_meta_data_QGCMAVLinkMessageField,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCMAVLinkMessageField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkMessageField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkMessageField.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMAVLinkMessageField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCMAVLinkMessageField::seriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMAVLinkMessageField::selectableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMAVLinkMessageField::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QGCMAVLinkMessage_t {
    QByteArrayData data[15];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMAVLinkMessage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMAVLinkMessage_t qt_meta_stringdata_QGCMAVLinkMessage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGCMAVLinkMessage"
QT_MOC_LITERAL(1, 18, 12), // "countChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "freqChanged"
QT_MOC_LITERAL(4, 44, 20), // "fieldSelectedChanged"
QT_MOC_LITERAL(5, 65, 15), // "selectedChanged"
QT_MOC_LITERAL(6, 81, 2), // "id"
QT_MOC_LITERAL(7, 84, 3), // "cid"
QT_MOC_LITERAL(8, 88, 4), // "name"
QT_MOC_LITERAL(9, 93, 9), // "messageHz"
QT_MOC_LITERAL(10, 103, 5), // "count"
QT_MOC_LITERAL(11, 109, 6), // "fields"
QT_MOC_LITERAL(12, 116, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(13, 136, 13), // "fieldSelected"
QT_MOC_LITERAL(14, 150, 8) // "selected"

    },
    "QGCMAVLinkMessage\0countChanged\0\0"
    "freqChanged\0fieldSelectedChanged\0"
    "selectedChanged\0id\0cid\0name\0messageHz\0"
    "count\0fields\0QmlObjectListModel*\0"
    "fieldSelected\0selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMAVLinkMessage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       8,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::UInt, 0x00095401,
       7, QMetaType::UInt, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QReal, 0x00495001,
      10, QMetaType::ULongLong, 0x00495001,
      11, 0x80000000 | 12, 0x00095409,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       0,
       0,
       2,
       3,

       0        // eod
};

void QGCMAVLinkMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMAVLinkMessage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->freqChanged(); break;
        case 2: _t->fieldSelectedChanged(); break;
        case 3: _t->selectedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkMessage::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkMessage::freqChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkMessage::fieldSelectedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkMessage::selectedChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMAVLinkMessage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->cid(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->messageHz(); break;
        case 4: *reinterpret_cast< quint64*>(_v) = _t->count(); break;
        case 5: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->fields(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->fieldSelected(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCMAVLinkMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCMAVLinkMessage.data,
    qt_meta_data_QGCMAVLinkMessage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCMAVLinkMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkMessage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMAVLinkMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCMAVLinkMessage::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMAVLinkMessage::freqChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMAVLinkMessage::fieldSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCMAVLinkMessage::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QGCMAVLinkSystem_t {
    QByteArrayData data[11];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMAVLinkSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMAVLinkSystem_t qt_meta_stringdata_QGCMAVLinkSystem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGCMAVLinkSystem"
QT_MOC_LITERAL(1, 17, 14), // "compIDsChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "selectedChanged"
QT_MOC_LITERAL(4, 49, 2), // "id"
QT_MOC_LITERAL(5, 52, 8), // "messages"
QT_MOC_LITERAL(6, 61, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(7, 81, 7), // "compIDs"
QT_MOC_LITERAL(8, 89, 10), // "QList<int>"
QT_MOC_LITERAL(9, 100, 10), // "compIDsStr"
QT_MOC_LITERAL(10, 111, 8) // "selected"

    },
    "QGCMAVLinkSystem\0compIDsChanged\0\0"
    "selectedChanged\0id\0messages\0"
    "QmlObjectListModel*\0compIDs\0QList<int>\0"
    "compIDsStr\0selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMAVLinkSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::UChar, 0x00095401,
       5, 0x80000000 | 6, 0x00095409,
       7, 0x80000000 | 8, 0x00495009,
       9, QMetaType::QStringList, 0x00495001,
      10, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void QGCMAVLinkSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMAVLinkSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->compIDsChanged(); break;
        case 1: _t->selectedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMAVLinkSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkSystem::compIDsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkSystem::selectedChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMAVLinkSystem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint8*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->messages(); break;
        case 2: *reinterpret_cast< QList<int>*>(_v) = _t->compIDs(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->compIDsStr(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMAVLinkSystem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setSelected(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCMAVLinkSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCMAVLinkSystem.data,
    qt_meta_data_QGCMAVLinkSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCMAVLinkSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMAVLinkSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void QGCMAVLinkSystem::compIDsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMAVLinkSystem::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_MAVLinkChartController_t {
    QByteArrayData data[26];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkChartController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkChartController_t qt_meta_stringdata_MAVLinkChartController = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MAVLinkChartController"
QT_MOC_LITERAL(1, 23, 18), // "chartFieldsChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 16), // "rangeXMinChanged"
QT_MOC_LITERAL(4, 60, 16), // "rangeXMaxChanged"
QT_MOC_LITERAL(5, 77, 16), // "rangeYMinChanged"
QT_MOC_LITERAL(6, 94, 16), // "rangeYMaxChanged"
QT_MOC_LITERAL(7, 111, 18), // "rangeYIndexChanged"
QT_MOC_LITERAL(8, 130, 18), // "rangeXIndexChanged"
QT_MOC_LITERAL(9, 149, 14), // "_refreshSeries"
QT_MOC_LITERAL(10, 164, 9), // "addSeries"
QT_MOC_LITERAL(11, 174, 23), // "QGCMAVLinkMessageField*"
QT_MOC_LITERAL(12, 198, 5), // "field"
QT_MOC_LITERAL(13, 204, 16), // "QAbstractSeries*"
QT_MOC_LITERAL(14, 221, 6), // "series"
QT_MOC_LITERAL(15, 228, 9), // "delSeries"
QT_MOC_LITERAL(16, 238, 10), // "controller"
QT_MOC_LITERAL(17, 249, 27), // "MAVLinkInspectorController*"
QT_MOC_LITERAL(18, 277, 11), // "chartFields"
QT_MOC_LITERAL(19, 289, 9), // "rangeXMin"
QT_MOC_LITERAL(20, 299, 9), // "rangeXMax"
QT_MOC_LITERAL(21, 309, 9), // "rangeYMin"
QT_MOC_LITERAL(22, 319, 9), // "rangeYMax"
QT_MOC_LITERAL(23, 329, 10), // "chartIndex"
QT_MOC_LITERAL(24, 340, 11), // "rangeYIndex"
QT_MOC_LITERAL(25, 352, 11) // "rangeXIndex"

    },
    "MAVLinkChartController\0chartFieldsChanged\0"
    "\0rangeXMinChanged\0rangeXMaxChanged\0"
    "rangeYMinChanged\0rangeYMaxChanged\0"
    "rangeYIndexChanged\0rangeXIndexChanged\0"
    "_refreshSeries\0addSeries\0"
    "QGCMAVLinkMessageField*\0field\0"
    "QAbstractSeries*\0series\0delSeries\0"
    "controller\0MAVLinkInspectorController*\0"
    "chartFields\0rangeXMin\0rangeXMax\0"
    "rangeYMin\0rangeYMax\0chartIndex\0"
    "rangeYIndex\0rangeXIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkChartController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       8,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   76,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    2,   77,    2, 0x02 /* Public */,
      15,    1,   82,    2, 0x02 /* Public */,
      16,    0,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 11,   12,
    0x80000000 | 17,

 // properties: name, type, flags
      18, QMetaType::QVariantList, 0x00495001,
      19, QMetaType::QDateTime, 0x00495001,
      20, QMetaType::QDateTime, 0x00495001,
      21, QMetaType::QReal, 0x00495001,
      22, QMetaType::QReal, 0x00495001,
      23, QMetaType::Int, 0x00095401,
      24, QMetaType::UInt, 0x00495103,
      25, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       0,
       5,
       6,

       0        // eod
};

void MAVLinkChartController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkChartController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chartFieldsChanged(); break;
        case 1: _t->rangeXMinChanged(); break;
        case 2: _t->rangeXMaxChanged(); break;
        case 3: _t->rangeYMinChanged(); break;
        case 4: _t->rangeYMaxChanged(); break;
        case 5: _t->rangeYIndexChanged(); break;
        case 6: _t->rangeXIndexChanged(); break;
        case 7: _t->_refreshSeries(); break;
        case 8: _t->addSeries((*reinterpret_cast< QGCMAVLinkMessageField*(*)>(_a[1])),(*reinterpret_cast< QAbstractSeries*(*)>(_a[2]))); break;
        case 9: _t->delSeries((*reinterpret_cast< QGCMAVLinkMessageField*(*)>(_a[1]))); break;
        case 10: { MAVLinkInspectorController* _r = _t->controller();
            if (_a[0]) *reinterpret_cast< MAVLinkInspectorController**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMAVLinkMessageField* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMAVLinkMessageField* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MAVLinkChartController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkChartController::chartFieldsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkChartController::rangeXMinChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkChartController::rangeXMaxChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkChartController::rangeYMinChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkChartController::rangeYMaxChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkChartController::rangeYIndexChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkChartController::rangeXIndexChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MAVLinkChartController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->chartFields(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->rangeXMin(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->rangeXMax(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->rangeYMin(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->rangeYMax(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->chartIndex(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->rangeYIndex(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->rangeXIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MAVLinkChartController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setRangeYIndex(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setRangeXIndex(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MAVLinkChartController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MAVLinkChartController.data,
    qt_meta_data_MAVLinkChartController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MAVLinkChartController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkChartController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkChartController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MAVLinkChartController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MAVLinkChartController::chartFieldsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MAVLinkChartController::rangeXMinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MAVLinkChartController::rangeXMaxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MAVLinkChartController::rangeYMinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MAVLinkChartController::rangeYMaxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MAVLinkChartController::rangeYIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MAVLinkChartController::rangeXIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
struct qt_meta_stringdata_MAVLinkInspectorController_t {
    QByteArrayData data[32];
    char stringdata0[435];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkInspectorController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkInspectorController_t qt_meta_stringdata_MAVLinkInspectorController = {
    {
QT_MOC_LITERAL(0, 0, 26), // "MAVLinkInspectorController"
QT_MOC_LITERAL(1, 27, 14), // "systemsChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "chartsChanged"
QT_MOC_LITERAL(4, 57, 19), // "activeSystemChanged"
QT_MOC_LITERAL(5, 77, 17), // "timeScalesChanged"
QT_MOC_LITERAL(6, 95, 16), // "rangeListChanged"
QT_MOC_LITERAL(7, 112, 15), // "_receiveMessage"
QT_MOC_LITERAL(8, 128, 14), // "LinkInterface*"
QT_MOC_LITERAL(9, 143, 4), // "link"
QT_MOC_LITERAL(10, 148, 17), // "mavlink_message_t"
QT_MOC_LITERAL(11, 166, 7), // "message"
QT_MOC_LITERAL(12, 174, 13), // "_vehicleAdded"
QT_MOC_LITERAL(13, 188, 8), // "Vehicle*"
QT_MOC_LITERAL(14, 197, 7), // "vehicle"
QT_MOC_LITERAL(15, 205, 15), // "_vehicleRemoved"
QT_MOC_LITERAL(16, 221, 17), // "_setActiveVehicle"
QT_MOC_LITERAL(17, 239, 17), // "_refreshFrequency"
QT_MOC_LITERAL(18, 257, 11), // "createChart"
QT_MOC_LITERAL(19, 269, 23), // "MAVLinkChartController*"
QT_MOC_LITERAL(20, 293, 11), // "deleteChart"
QT_MOC_LITERAL(21, 305, 5), // "chart"
QT_MOC_LITERAL(22, 311, 15), // "setActiveSystem"
QT_MOC_LITERAL(23, 327, 8), // "systemId"
QT_MOC_LITERAL(24, 336, 11), // "systemNames"
QT_MOC_LITERAL(25, 348, 7), // "systems"
QT_MOC_LITERAL(26, 356, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(27, 376, 6), // "charts"
QT_MOC_LITERAL(28, 383, 12), // "activeSystem"
QT_MOC_LITERAL(29, 396, 17), // "QGCMAVLinkSystem*"
QT_MOC_LITERAL(30, 414, 10), // "timeScales"
QT_MOC_LITERAL(31, 425, 9) // "rangeList"

    },
    "MAVLinkInspectorController\0systemsChanged\0"
    "\0chartsChanged\0activeSystemChanged\0"
    "timeScalesChanged\0rangeListChanged\0"
    "_receiveMessage\0LinkInterface*\0link\0"
    "mavlink_message_t\0message\0_vehicleAdded\0"
    "Vehicle*\0vehicle\0_vehicleRemoved\0"
    "_setActiveVehicle\0_refreshFrequency\0"
    "createChart\0MAVLinkChartController*\0"
    "deleteChart\0chart\0setActiveSystem\0"
    "systemId\0systemNames\0systems\0"
    "QmlObjectListModel*\0charts\0activeSystem\0"
    "QGCMAVLinkSystem*\0timeScales\0rangeList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkInspectorController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   84,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      18,    0,   99,    2, 0x02 /* Public */,
      20,    1,  100,    2, 0x02 /* Public */,
      22,    1,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 19,
    QMetaType::Void, 0x80000000 | 19,   21,
    QMetaType::Void, QMetaType::Int,   23,

 // properties: name, type, flags
      24, QMetaType::QStringList, 0x00495001,
      25, 0x80000000 | 26, 0x00495009,
      27, 0x80000000 | 26, 0x00495009,
      28, 0x80000000 | 29, 0x00495009,
      30, QMetaType::QStringList, 0x00495001,
      31, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void MAVLinkInspectorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkInspectorController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->systemsChanged(); break;
        case 1: _t->chartsChanged(); break;
        case 2: _t->activeSystemChanged(); break;
        case 3: _t->timeScalesChanged(); break;
        case 4: _t->rangeListChanged(); break;
        case 5: _t->_receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 6: _t->_vehicleAdded((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 7: _t->_vehicleRemoved((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 8: _t->_setActiveVehicle((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 9: _t->_refreshFrequency(); break;
        case 10: { MAVLinkChartController* _r = _t->createChart();
            if (_a[0]) *reinterpret_cast< MAVLinkChartController**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->deleteChart((*reinterpret_cast< MAVLinkChartController*(*)>(_a[1]))); break;
        case 12: _t->setActiveSystem((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MAVLinkChartController* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkInspectorController::systemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkInspectorController::chartsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkInspectorController::activeSystemChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkInspectorController::timeScalesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkInspectorController::rangeListChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMAVLinkSystem* >(); break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MAVLinkInspectorController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->systemNames(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->systems(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->charts(); break;
        case 3: *reinterpret_cast< QGCMAVLinkSystem**>(_v) = _t->activeSystem(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->timeScales(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->rangeList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MAVLinkInspectorController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MAVLinkInspectorController.data,
    qt_meta_data_MAVLinkInspectorController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MAVLinkInspectorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkInspectorController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkInspectorController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MAVLinkInspectorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MAVLinkInspectorController::systemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MAVLinkInspectorController::chartsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MAVLinkInspectorController::activeSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MAVLinkInspectorController::timeScalesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MAVLinkInspectorController::rangeListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
