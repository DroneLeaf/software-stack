/****************************************************************************
** Meta object code from reading C++ file 'APMAirframeComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/AutoPilotPlugins/APM/APMAirframeComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMAirframeComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMAirframeComponentController_t {
    QByteArrayData data[11];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMAirframeComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMAirframeComponentController_t qt_meta_stringdata_APMAirframeComponentController = {
    {
QT_MOC_LITERAL(0, 0, 30), // "APMAirframeComponentController"
QT_MOC_LITERAL(1, 31, 27), // "_githubJsonDownloadComplete"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 10), // "remoteFile"
QT_MOC_LITERAL(4, 71, 9), // "localFile"
QT_MOC_LITERAL(5, 81, 8), // "errorMsg"
QT_MOC_LITERAL(6, 90, 26), // "_paramFileDownloadComplete"
QT_MOC_LITERAL(7, 117, 14), // "loadParameters"
QT_MOC_LITERAL(8, 132, 9), // "paramFile"
QT_MOC_LITERAL(9, 142, 15), // "frameClassModel"
QT_MOC_LITERAL(10, 158, 19) // "QmlObjectListModel*"

    },
    "APMAirframeComponentController\0"
    "_githubJsonDownloadComplete\0\0remoteFile\0"
    "localFile\0errorMsg\0_paramFileDownloadComplete\0"
    "loadParameters\0paramFile\0frameClassModel\0"
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMAirframeComponentController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x08 /* Private */,
       6,    3,   36,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   43,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    8,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00095409,

       0        // eod
};

void APMAirframeComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMAirframeComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_githubJsonDownloadComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->_paramFileDownloadComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->loadParameters((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMAirframeComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_frameClassModel; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject APMAirframeComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_APMAirframeComponentController.data,
    qt_meta_data_APMAirframeComponentController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *APMAirframeComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMAirframeComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMAirframeComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMAirframeComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_APMFrameClass_t {
    QByteArrayData data[13];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMFrameClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMFrameClass_t qt_meta_stringdata_APMFrameClass = {
    {
QT_MOC_LITERAL(0, 0, 13), // "APMFrameClass"
QT_MOC_LITERAL(1, 14, 20), // "imageResourceChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "frameTypeChanged"
QT_MOC_LITERAL(4, 53, 4), // "name"
QT_MOC_LITERAL(5, 58, 10), // "frameClass"
QT_MOC_LITERAL(6, 69, 9), // "frameType"
QT_MOC_LITERAL(7, 79, 20), // "frameTypeEnumStrings"
QT_MOC_LITERAL(8, 100, 19), // "frameTypeEnumValues"
QT_MOC_LITERAL(9, 120, 16), // "defaultFrameType"
QT_MOC_LITERAL(10, 137, 13), // "imageResource"
QT_MOC_LITERAL(11, 151, 20), // "imageResourceDefault"
QT_MOC_LITERAL(12, 172, 18) // "frameTypeSupported"

    },
    "APMFrameClass\0imageResourceChanged\0\0"
    "frameTypeChanged\0name\0frameClass\0"
    "frameType\0frameTypeEnumStrings\0"
    "frameTypeEnumValues\0defaultFrameType\0"
    "imageResource\0imageResourceDefault\0"
    "frameTypeSupported"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMFrameClass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       9,   26, // properties
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
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::Int, 0x00495001,
       7, QMetaType::QStringList, 0x00095401,
       8, QMetaType::QVariantList, 0x00095401,
       9, QMetaType::Int, 0x00095401,
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void APMFrameClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMFrameClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageResourceChanged(); break;
        case 1: _t->frameTypeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (APMFrameClass::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFrameClass::imageResourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (APMFrameClass::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFrameClass::frameTypeChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMFrameClass *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_frameClass; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->frameType(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->_frameTypeEnumStrings; break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->_frameTypeEnumValues; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->_defaultFrameType; break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->imageResource(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->_imageResourceDefault; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->_frameTypeSupported; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject APMFrameClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_APMFrameClass.data,
    qt_meta_data_APMFrameClass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *APMFrameClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFrameClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMFrameClass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int APMFrameClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void APMFrameClass::imageResourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void APMFrameClass::frameTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
