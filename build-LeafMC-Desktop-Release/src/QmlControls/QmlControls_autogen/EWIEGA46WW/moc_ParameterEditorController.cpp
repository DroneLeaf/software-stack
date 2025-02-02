/****************************************************************************
** Meta object code from reading C++ file 'ParameterEditorController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QmlControls/ParameterEditorController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterEditorController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParameterEditorGroup_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterEditorGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterEditorGroup_t qt_meta_stringdata_ParameterEditorGroup = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ParameterEditorGroup"
QT_MOC_LITERAL(1, 21, 4), // "name"
QT_MOC_LITERAL(2, 26, 5), // "facts"
QT_MOC_LITERAL(3, 32, 19) // "QmlObjectListModel*"

    },
    "ParameterEditorGroup\0name\0facts\0"
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterEditorGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, 0x80000000 | 3, 0x00095409,

       0        // eod
};

void ParameterEditorGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name; break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->getFacts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject ParameterEditorGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ParameterEditorGroup.data,
    qt_meta_data_ParameterEditorGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParameterEditorGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterEditorGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterEditorGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_ParameterEditorCategory_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterEditorCategory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterEditorCategory_t qt_meta_stringdata_ParameterEditorCategory = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ParameterEditorCategory"
QT_MOC_LITERAL(1, 24, 4), // "name"
QT_MOC_LITERAL(2, 29, 6), // "groups"
QT_MOC_LITERAL(3, 36, 19) // "QmlObjectListModel*"

    },
    "ParameterEditorCategory\0name\0groups\0"
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterEditorCategory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, 0x80000000 | 3, 0x00095409,

       0        // eod
};

void ParameterEditorCategory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorCategory *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name; break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->getGroups(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject ParameterEditorCategory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ParameterEditorCategory.data,
    qt_meta_data_ParameterEditorCategory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParameterEditorCategory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorCategory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterEditorCategory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterEditorCategory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_ParameterEditorDiff_t {
    QByteArrayData data[10];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterEditorDiff_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterEditorDiff_t qt_meta_stringdata_ParameterEditorDiff = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ParameterEditorDiff"
QT_MOC_LITERAL(1, 20, 11), // "loadChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "load"
QT_MOC_LITERAL(4, 38, 11), // "componentId"
QT_MOC_LITERAL(5, 50, 4), // "name"
QT_MOC_LITERAL(6, 55, 9), // "fileValue"
QT_MOC_LITERAL(7, 65, 12), // "vehicleValue"
QT_MOC_LITERAL(8, 78, 14), // "noVehicleValue"
QT_MOC_LITERAL(9, 93, 5) // "units"

    },
    "ParameterEditorDiff\0loadChanged\0\0load\0"
    "componentId\0name\0fileValue\0vehicleValue\0"
    "noVehicleValue\0units"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterEditorDiff[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::QString, 0x00095401,
       3, QMetaType::Bool, 0x00495003,

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

void ParameterEditorDiff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterEditorDiff *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterEditorDiff::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorDiff::loadChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorDiff *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->componentId; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->fileValue; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->vehicleValue; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->noVehicleValue; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->units; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->load; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParameterEditorDiff *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6:
            if (_t->load != *reinterpret_cast< bool*>(_v)) {
                _t->load = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->loadChanged(_t->load);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParameterEditorDiff::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ParameterEditorDiff.data,
    qt_meta_data_ParameterEditorDiff,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParameterEditorDiff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorDiff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterEditorDiff.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterEditorDiff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ParameterEditorDiff::loadChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ParameterEditorController_t {
    QByteArrayData data[39];
    char stringdata0[627];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterEditorController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterEditorController_t qt_meta_stringdata_ParameterEditorController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ParameterEditorController"
QT_MOC_LITERAL(1, 26, 17), // "searchTextChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "searchText"
QT_MOC_LITERAL(4, 56, 22), // "currentCategoryChanged"
QT_MOC_LITERAL(5, 79, 19), // "currentGroupChanged"
QT_MOC_LITERAL(6, 99, 23), // "showModifiedOnlyChanged"
QT_MOC_LITERAL(7, 123, 23), // "diffOtherVehicleChanged"
QT_MOC_LITERAL(8, 147, 16), // "diffOtherVehicle"
QT_MOC_LITERAL(9, 164, 29), // "diffMultipleComponentsChanged"
QT_MOC_LITERAL(10, 194, 22), // "diffMultipleComponents"
QT_MOC_LITERAL(11, 217, 17), // "parametersChanged"
QT_MOC_LITERAL(12, 235, 23), // "_currentCategoryChanged"
QT_MOC_LITERAL(13, 259, 20), // "_currentGroupChanged"
QT_MOC_LITERAL(14, 280, 18), // "_searchTextChanged"
QT_MOC_LITERAL(15, 299, 11), // "_buildLists"
QT_MOC_LITERAL(16, 311, 23), // "_buildListsForComponent"
QT_MOC_LITERAL(17, 335, 6), // "compId"
QT_MOC_LITERAL(18, 342, 10), // "_factAdded"
QT_MOC_LITERAL(19, 353, 5), // "Fact*"
QT_MOC_LITERAL(20, 359, 4), // "fact"
QT_MOC_LITERAL(21, 364, 16), // "searchParameters"
QT_MOC_LITERAL(22, 381, 12), // "searchInName"
QT_MOC_LITERAL(23, 394, 20), // "searchInDescriptions"
QT_MOC_LITERAL(24, 415, 10), // "saveToFile"
QT_MOC_LITERAL(25, 426, 8), // "filename"
QT_MOC_LITERAL(26, 435, 17), // "buildDiffFromFile"
QT_MOC_LITERAL(27, 453, 9), // "clearDiff"
QT_MOC_LITERAL(28, 463, 8), // "sendDiff"
QT_MOC_LITERAL(29, 472, 7), // "refresh"
QT_MOC_LITERAL(30, 480, 18), // "resetAllToDefaults"
QT_MOC_LITERAL(31, 499, 30), // "resetAllToVehicleConfiguration"
QT_MOC_LITERAL(32, 530, 10), // "categories"
QT_MOC_LITERAL(33, 541, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(34, 561, 15), // "currentCategory"
QT_MOC_LITERAL(35, 577, 12), // "currentGroup"
QT_MOC_LITERAL(36, 590, 10), // "parameters"
QT_MOC_LITERAL(37, 601, 16), // "showModifiedOnly"
QT_MOC_LITERAL(38, 618, 8) // "diffList"

    },
    "ParameterEditorController\0searchTextChanged\0"
    "\0searchText\0currentCategoryChanged\0"
    "currentGroupChanged\0showModifiedOnlyChanged\0"
    "diffOtherVehicleChanged\0diffOtherVehicle\0"
    "diffMultipleComponentsChanged\0"
    "diffMultipleComponents\0parametersChanged\0"
    "_currentCategoryChanged\0_currentGroupChanged\0"
    "_searchTextChanged\0_buildLists\0"
    "_buildListsForComponent\0compId\0"
    "_factAdded\0Fact*\0fact\0searchParameters\0"
    "searchInName\0searchInDescriptions\0"
    "saveToFile\0filename\0buildDiffFromFile\0"
    "clearDiff\0sendDiff\0refresh\0"
    "resetAllToDefaults\0resetAllToVehicleConfiguration\0"
    "categories\0QmlObjectListModel*\0"
    "currentCategory\0currentGroup\0parameters\0"
    "showModifiedOnly\0diffList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterEditorController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       9,  180, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       4,    0,  132,    2, 0x06 /* Public */,
       5,    0,  133,    2, 0x06 /* Public */,
       6,    0,  134,    2, 0x06 /* Public */,
       7,    1,  135,    2, 0x06 /* Public */,
       9,    1,  138,    2, 0x06 /* Public */,
      11,    0,  141,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  142,    2, 0x08 /* Private */,
      13,    0,  143,    2, 0x08 /* Private */,
      14,    0,  144,    2, 0x08 /* Private */,
      15,    0,  145,    2, 0x08 /* Private */,
      16,    1,  146,    2, 0x08 /* Private */,
      18,    2,  149,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      21,    3,  154,    2, 0x02 /* Public */,
      21,    2,  161,    2, 0x22 /* Public | MethodCloned */,
      21,    1,  166,    2, 0x22 /* Public | MethodCloned */,
      24,    1,  169,    2, 0x02 /* Public */,
      26,    1,  172,    2, 0x02 /* Public */,
      27,    0,  175,    2, 0x02 /* Public */,
      28,    0,  176,    2, 0x02 /* Public */,
      29,    0,  177,    2, 0x02 /* Public */,
      30,    0,  178,    2, 0x02 /* Public */,
      31,    0,  179,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 19,   17,   20,

 // methods: parameters
    QMetaType::QStringList, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    3,   22,   23,
    QMetaType::QStringList, QMetaType::QString, QMetaType::Bool,    3,   22,
    QMetaType::QStringList, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Bool, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,
      32, 0x80000000 | 33, 0x00095409,
      34, QMetaType::QObjectStar, 0x00495103,
      35, QMetaType::QObjectStar, 0x00495103,
      36, 0x80000000 | 33, 0x0049500b,
      37, QMetaType::Bool, 0x00495003,
       8, QMetaType::Bool, 0x00495003,
      10, QMetaType::Bool, 0x00495003,
      38, 0x80000000 | 33, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       6,
       3,
       4,
       5,
       0,

       0        // eod
};

void ParameterEditorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->currentCategoryChanged(); break;
        case 2: _t->currentGroupChanged(); break;
        case 3: _t->showModifiedOnlyChanged(); break;
        case 4: _t->diffOtherVehicleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->diffMultipleComponentsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->parametersChanged(); break;
        case 7: _t->_currentCategoryChanged(); break;
        case 8: _t->_currentGroupChanged(); break;
        case 9: _t->_searchTextChanged(); break;
        case 10: _t->_buildLists(); break;
        case 11: _t->_buildListsForComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->_factAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Fact*(*)>(_a[2]))); break;
        case 13: { QStringList _r = _t->searchParameters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 14: { QStringList _r = _t->searchParameters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 15: { QStringList _r = _t->searchParameters((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->saveToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: { bool _r = _t->buildDiffFromFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->clearDiff(); break;
        case 19: _t->sendDiff(); break;
        case 20: _t->refresh(); break;
        case 21: _t->resetAllToDefaults(); break;
        case 22: _t->resetAllToVehicleConfiguration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterEditorController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::searchTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::currentCategoryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::currentGroupChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::showModifiedOnlyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::diffOtherVehicleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::diffMultipleComponentsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::parametersChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
        case 4:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_searchText; break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->categories(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->currentCategory(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->currentGroup(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_parameters; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_showModifiedOnly; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->_diffOtherVehicle; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->_diffMultipleComponents; break;
        case 8: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->diffList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_searchText != *reinterpret_cast< QString*>(_v)) {
                _t->_searchText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->searchTextChanged(_t->_searchText);
            }
            break;
        case 2: _t->setCurrentCategory(*reinterpret_cast< QObject**>(_v)); break;
        case 3: _t->setCurrentGroup(*reinterpret_cast< QObject**>(_v)); break;
        case 4:
            if (_t->_parameters != *reinterpret_cast< QmlObjectListModel**>(_v)) {
                _t->_parameters = *reinterpret_cast< QmlObjectListModel**>(_v);
                Q_EMIT _t->parametersChanged();
            }
            break;
        case 5:
            if (_t->_showModifiedOnly != *reinterpret_cast< bool*>(_v)) {
                _t->_showModifiedOnly = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->showModifiedOnlyChanged();
            }
            break;
        case 6:
            if (_t->_diffOtherVehicle != *reinterpret_cast< bool*>(_v)) {
                _t->_diffOtherVehicle = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->diffOtherVehicleChanged(_t->_diffOtherVehicle);
            }
            break;
        case 7:
            if (_t->_diffMultipleComponents != *reinterpret_cast< bool*>(_v)) {
                _t->_diffMultipleComponents = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->diffMultipleComponentsChanged(_t->_diffMultipleComponents);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParameterEditorController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_ParameterEditorController.data,
    qt_meta_data_ParameterEditorController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParameterEditorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterEditorController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int ParameterEditorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ParameterEditorController::searchTextChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParameterEditorController::currentCategoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ParameterEditorController::currentGroupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ParameterEditorController::showModifiedOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ParameterEditorController::diffOtherVehicleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ParameterEditorController::diffMultipleComponentsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ParameterEditorController::parametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
