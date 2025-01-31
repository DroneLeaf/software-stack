/****************************************************************************
** Meta object code from reading C++ file 'FactPanelController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../LeafMC/src/FactSystem/FactControls/FactPanelController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FactPanelController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FactPanelController_t {
    QByteArrayData data[14];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FactPanelController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FactPanelController_t qt_meta_stringdata_FactPanelController = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FactPanelController"
QT_MOC_LITERAL(1, 20, 26), // "missingParametersAvailable"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 26), // "_checkForMissingParameters"
QT_MOC_LITERAL(4, 75, 16), // "getParameterFact"
QT_MOC_LITERAL(5, 92, 5), // "Fact*"
QT_MOC_LITERAL(6, 98, 11), // "componentId"
QT_MOC_LITERAL(7, 110, 4), // "name"
QT_MOC_LITERAL(8, 115, 13), // "reportMissing"
QT_MOC_LITERAL(9, 129, 15), // "parameterExists"
QT_MOC_LITERAL(10, 145, 20), // "getMissingParameters"
QT_MOC_LITERAL(11, 166, 7), // "rgNames"
QT_MOC_LITERAL(12, 174, 7), // "vehicle"
QT_MOC_LITERAL(13, 182, 8) // "Vehicle*"

    },
    "FactPanelController\0missingParametersAvailable\0"
    "\0_checkForMissingParameters\0"
    "getParameterFact\0Fact*\0componentId\0"
    "name\0reportMissing\0parameterExists\0"
    "getMissingParameters\0rgNames\0vehicle\0"
    "Vehicle*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FactPanelController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       4,    3,   46,    2, 0x02 /* Public */,
       4,    2,   53,    2, 0x22 /* Public | MethodCloned */,
       9,    2,   58,    2, 0x02 /* Public */,
      10,    1,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 5, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    6,    7,    8,
    0x80000000 | 5, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QStringList,   11,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x00095409,

       0        // eod
};

void FactPanelController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactPanelController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->missingParametersAvailable(); break;
        case 1: _t->_checkForMissingParameters(); break;
        case 2: { Fact* _r = _t->getParameterFact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 3: { Fact* _r = _t->getParameterFact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->parameterExists((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->getMissingParameters((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FactPanelController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FactPanelController::missingParametersAvailable)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FactPanelController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Vehicle**>(_v) = _t->_vehicle; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FactPanelController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FactPanelController.data,
    qt_meta_data_FactPanelController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FactPanelController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactPanelController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FactPanelController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FactPanelController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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

// SIGNAL 0
void FactPanelController::missingParametersAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
