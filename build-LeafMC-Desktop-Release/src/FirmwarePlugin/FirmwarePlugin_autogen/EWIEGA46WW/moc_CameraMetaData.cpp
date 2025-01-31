/****************************************************************************
** Meta object code from reading C++ file 'CameraMetaData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/FirmwarePlugin/CameraMetaData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraMetaData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraMetaData_t {
    QByteArrayData data[13];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraMetaData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraMetaData_t qt_meta_stringdata_CameraMetaData = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CameraMetaData"
QT_MOC_LITERAL(1, 15, 13), // "canonicalName"
QT_MOC_LITERAL(2, 29, 24), // "deprecatedTranslatedName"
QT_MOC_LITERAL(3, 54, 5), // "brand"
QT_MOC_LITERAL(4, 60, 5), // "model"
QT_MOC_LITERAL(5, 66, 11), // "sensorWidth"
QT_MOC_LITERAL(6, 78, 12), // "sensorHeight"
QT_MOC_LITERAL(7, 91, 10), // "imageWidth"
QT_MOC_LITERAL(8, 102, 11), // "imageHeight"
QT_MOC_LITERAL(9, 114, 11), // "focalLength"
QT_MOC_LITERAL(10, 126, 9), // "landscape"
QT_MOC_LITERAL(11, 136, 16), // "fixedOrientation"
QT_MOC_LITERAL(12, 153, 18) // "minTriggerInterval"

    },
    "CameraMetaData\0canonicalName\0"
    "deprecatedTranslatedName\0brand\0model\0"
    "sensorWidth\0sensorHeight\0imageWidth\0"
    "imageHeight\0focalLength\0landscape\0"
    "fixedOrientation\0minTriggerInterval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraMetaData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::Double, 0x00095401,
       6, QMetaType::Double, 0x00095401,
       7, QMetaType::Double, 0x00095401,
       8, QMetaType::Double, 0x00095401,
       9, QMetaType::Double, 0x00095401,
      10, QMetaType::Bool, 0x00095401,
      11, QMetaType::Bool, 0x00095401,
      12, QMetaType::Double, 0x00095401,

       0        // eod
};

void CameraMetaData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraMetaData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->canonicalName; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->deprecatedTranslatedName; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->brand; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->model; break;
        case 4: *reinterpret_cast< double*>(_v) = _t->sensorWidth; break;
        case 5: *reinterpret_cast< double*>(_v) = _t->sensorHeight; break;
        case 6: *reinterpret_cast< double*>(_v) = _t->imageWidth; break;
        case 7: *reinterpret_cast< double*>(_v) = _t->imageHeight; break;
        case 8: *reinterpret_cast< double*>(_v) = _t->focalLength; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->landscape; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->fixedOrientation; break;
        case 11: *reinterpret_cast< double*>(_v) = _t->minTriggerInterval; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraMetaData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CameraMetaData.data,
    qt_meta_data_CameraMetaData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraMetaData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraMetaData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraMetaData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraMetaData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
