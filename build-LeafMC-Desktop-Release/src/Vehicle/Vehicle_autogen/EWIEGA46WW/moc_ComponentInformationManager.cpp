/****************************************************************************
** Meta object code from reading C++ file 'ComponentInformationManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/Vehicle/ComponentInformationManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComponentInformationManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RequestMetaDataTypeStateMachine_t {
    QByteArrayData data[14];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RequestMetaDataTypeStateMachine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RequestMetaDataTypeStateMachine_t qt_meta_stringdata_RequestMetaDataTypeStateMachine = {
    {
QT_MOC_LITERAL(0, 0, 31), // "RequestMetaDataTypeStateMachine"
QT_MOC_LITERAL(1, 32, 20), // "_ftpDownloadComplete"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "file"
QT_MOC_LITERAL(4, 59, 8), // "errorMsg"
QT_MOC_LITERAL(5, 68, 20), // "_ftpDownloadProgress"
QT_MOC_LITERAL(6, 89, 8), // "progress"
QT_MOC_LITERAL(7, 98, 21), // "_httpDownloadComplete"
QT_MOC_LITERAL(8, 120, 10), // "remoteFile"
QT_MOC_LITERAL(9, 131, 9), // "localFile"
QT_MOC_LITERAL(10, 141, 27), // "_downloadCompleteJsonWorker"
QT_MOC_LITERAL(11, 169, 12), // "jsonFileName"
QT_MOC_LITERAL(12, 182, 31), // "_downloadAndTranslationComplete"
QT_MOC_LITERAL(13, 214, 22) // "translatedJsonTempFile"

    },
    "RequestMetaDataTypeStateMachine\0"
    "_ftpDownloadComplete\0\0file\0errorMsg\0"
    "_ftpDownloadProgress\0progress\0"
    "_httpDownloadComplete\0remoteFile\0"
    "localFile\0_downloadCompleteJsonWorker\0"
    "jsonFileName\0_downloadAndTranslationComplete\0"
    "translatedJsonTempFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RequestMetaDataTypeStateMachine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       5,    1,   44,    2, 0x08 /* Private */,
       7,    3,   47,    2, 0x08 /* Private */,
      10,    1,   54,    2, 0x08 /* Private */,
      12,    2,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,    4,
    QMetaType::QString, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,    4,

       0        // eod
};

void RequestMetaDataTypeStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RequestMetaDataTypeStateMachine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_ftpDownloadComplete((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->_ftpDownloadProgress((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->_httpDownloadComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: { QString _r = _t->_downloadCompleteJsonWorker((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->_downloadAndTranslationComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RequestMetaDataTypeStateMachine::staticMetaObject = { {
    QMetaObject::SuperData::link<StateMachine::staticMetaObject>(),
    qt_meta_stringdata_RequestMetaDataTypeStateMachine.data,
    qt_meta_data_RequestMetaDataTypeStateMachine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RequestMetaDataTypeStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RequestMetaDataTypeStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RequestMetaDataTypeStateMachine.stringdata0))
        return static_cast<void*>(this);
    return StateMachine::qt_metacast(_clname);
}

int RequestMetaDataTypeStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StateMachine::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_ComponentInformationManager_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComponentInformationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComponentInformationManager_t qt_meta_stringdata_ComponentInformationManager = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ComponentInformationManager"
QT_MOC_LITERAL(1, 28, 14), // "progressUpdate"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8) // "progress"

    },
    "ComponentInformationManager\0progressUpdate\0"
    "\0progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComponentInformationManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

       0        // eod
};

void ComponentInformationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComponentInformationManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressUpdate((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComponentInformationManager::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentInformationManager::progressUpdate)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ComponentInformationManager::staticMetaObject = { {
    QMetaObject::SuperData::link<StateMachine::staticMetaObject>(),
    qt_meta_stringdata_ComponentInformationManager.data,
    qt_meta_data_ComponentInformationManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComponentInformationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComponentInformationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComponentInformationManager.stringdata0))
        return static_cast<void*>(this);
    return StateMachine::qt_metacast(_clname);
}

int ComponentInformationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StateMachine::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ComponentInformationManager::progressUpdate(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
