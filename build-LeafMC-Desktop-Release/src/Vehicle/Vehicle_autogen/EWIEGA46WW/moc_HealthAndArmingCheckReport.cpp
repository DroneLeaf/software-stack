/****************************************************************************
** Meta object code from reading C++ file 'HealthAndArmingCheckReport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/HealthAndArmingCheckReport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HealthAndArmingCheckReport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HealthAndArmingCheckProblem_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HealthAndArmingCheckProblem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HealthAndArmingCheckProblem_t qt_meta_stringdata_HealthAndArmingCheckProblem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "HealthAndArmingCheckProblem"
QT_MOC_LITERAL(1, 28, 15), // "expandedChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "message"
QT_MOC_LITERAL(4, 53, 11), // "description"
QT_MOC_LITERAL(5, 65, 8), // "severity"
QT_MOC_LITERAL(6, 74, 8) // "expanded"

    },
    "HealthAndArmingCheckProblem\0expandedChanged\0"
    "\0message\0description\0severity\0expanded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HealthAndArmingCheckProblem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void HealthAndArmingCheckProblem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HealthAndArmingCheckProblem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expandedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HealthAndArmingCheckProblem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HealthAndArmingCheckProblem::expandedChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HealthAndArmingCheckProblem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->severity(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->expanded(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HealthAndArmingCheckProblem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setExpanded(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HealthAndArmingCheckProblem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HealthAndArmingCheckProblem.data,
    qt_meta_data_HealthAndArmingCheckProblem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HealthAndArmingCheckProblem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HealthAndArmingCheckProblem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HealthAndArmingCheckProblem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HealthAndArmingCheckProblem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void HealthAndArmingCheckProblem::expandedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_HealthAndArmingCheckReport_t {
    QByteArrayData data[11];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HealthAndArmingCheckReport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HealthAndArmingCheckReport_t qt_meta_stringdata_HealthAndArmingCheckReport = {
    {
QT_MOC_LITERAL(0, 0, 26), // "HealthAndArmingCheckReport"
QT_MOC_LITERAL(1, 27, 7), // "updated"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "supported"
QT_MOC_LITERAL(4, 46, 6), // "canArm"
QT_MOC_LITERAL(5, 53, 10), // "canTakeoff"
QT_MOC_LITERAL(6, 64, 15), // "canStartMission"
QT_MOC_LITERAL(7, 80, 19), // "hasWarningsOrErrors"
QT_MOC_LITERAL(8, 100, 8), // "gpsState"
QT_MOC_LITERAL(9, 109, 22), // "problemsForCurrentMode"
QT_MOC_LITERAL(10, 132, 19) // "QmlObjectListModel*"

    },
    "HealthAndArmingCheckReport\0updated\0\0"
    "supported\0canArm\0canTakeoff\0canStartMission\0"
    "hasWarningsOrErrors\0gpsState\0"
    "problemsForCurrentMode\0QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HealthAndArmingCheckReport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,
       4, QMetaType::Bool, 0x00495001,
       5, QMetaType::Bool, 0x00495001,
       6, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
       8, QMetaType::QString, 0x00495001,
       9, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void HealthAndArmingCheckReport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HealthAndArmingCheckReport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HealthAndArmingCheckReport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HealthAndArmingCheckReport::updated)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HealthAndArmingCheckReport *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->supported(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canArm(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canTakeoff(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canStartMission(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasWarningsOrErrors(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->gpsState(); break;
        case 6: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->problemsForCurrentMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject HealthAndArmingCheckReport::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HealthAndArmingCheckReport.data,
    qt_meta_data_HealthAndArmingCheckReport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HealthAndArmingCheckReport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HealthAndArmingCheckReport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HealthAndArmingCheckReport.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HealthAndArmingCheckReport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void HealthAndArmingCheckReport::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
