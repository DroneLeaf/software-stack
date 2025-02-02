/****************************************************************************
** Meta object code from reading C++ file 'QGeoServiceProviderPluginQGC.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QtLocationPlugin/QGeoServiceProviderPluginQGC.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGeoServiceProviderPluginQGC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoServiceProviderFactoryQGC_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoServiceProviderFactoryQGC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoServiceProviderFactoryQGC_t qt_meta_stringdata_QGeoServiceProviderFactoryQGC = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QGeoServiceProviderFactoryQGC"

    },
    "QGeoServiceProviderFactoryQGC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoServiceProviderFactoryQGC[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QGeoServiceProviderFactoryQGC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QGeoServiceProviderFactoryQGC::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGeoServiceProviderFactoryQGC.data,
    qt_meta_data_QGeoServiceProviderFactoryQGC,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGeoServiceProviderFactoryQGC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoServiceProviderFactoryQGC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoServiceProviderFactoryQGC.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGeoServiceProviderFactory"))
        return static_cast< QGeoServiceProviderFactory*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.geoservice.serviceproviderfactory/5.0"))
        return static_cast< QGeoServiceProviderFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoServiceProviderFactoryQGC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x37,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'q',  't',  '.',  'g',  'e',  'o', 
    's',  'e',  'r',  'v',  'i',  'c',  'e',  '.', 
    's',  'e',  'r',  'v',  'i',  'c',  'e',  'p', 
    'r',  'o',  'v',  'i',  'd',  'e',  'r',  'f', 
    'a',  'c',  't',  'o',  'r',  'y',  '/',  '5', 
    '.',  '0', 
    // "className"
    0x03,  0x78,  0x1d,  'Q',  'G',  'e',  'o',  'S', 
    'e',  'r',  'v',  'i',  'c',  'e',  'P',  'r', 
    'o',  'v',  'i',  'd',  'e',  'r',  'F',  'a', 
    'c',  't',  'o',  'r',  'y',  'Q',  'G',  'C', 
    // "MetaData"
    0x04,  0xa5,  0x6c,  'E',  'x',  'p',  'e',  'r', 
    'i',  'm',  'e',  'n',  't',  'a',  'l',  0xf4, 
    0x68,  'F',  'e',  'a',  't',  'u',  'r',  'e', 
    's',  0x83,  0x74,  'O',  'n',  'l',  'i',  'n', 
    'e',  'M',  'a',  'p',  'p',  'i',  'n',  'g', 
    'F',  'e',  'a',  't',  'u',  'r',  'e',  0x76, 
    'O',  'n',  'l',  'i',  'n',  'e',  'G',  'e', 
    'o',  'c',  'o',  'd',  'i',  'n',  'g',  'F', 
    'e',  'a',  't',  'u',  'r',  'e',  0x77,  'R', 
    'e',  'v',  'e',  'r',  's',  'e',  'G',  'e', 
    'o',  'c',  'o',  'd',  'i',  'n',  'g',  'F', 
    'e',  'a',  't',  'u',  'r',  'e',  0x64,  'K', 
    'e',  'y',  's',  0x81,  0x68,  'q',  'g',  'c', 
    '-',  'm',  'a',  'p',  's',  0x68,  'P',  'r', 
    'o',  'v',  'i',  'd',  'e',  'r',  0x6e,  'Q', 
    'G',  'r',  'o',  'u',  'n',  'd',  'C',  'o', 
    'n',  't',  'r',  'o',  'l',  0x67,  'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x18,  0x65, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QGeoServiceProviderFactoryQGC, QGeoServiceProviderFactoryQGC)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
