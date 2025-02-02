/****************************************************************************
** Meta object code from reading C++ file 'QGCMapEngineManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/QtLocationPlugin/QMLControl/QGCMapEngineManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapEngineManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapEngineManager_t {
    QByteArrayData data[87];
    char stringdata0[1096];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapEngineManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapEngineManager_t qt_meta_stringdata_QGCMapEngineManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGCMapEngineManager"
QT_MOC_LITERAL(1, 20, 16), // "tileCountChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "tileSizeChanged"
QT_MOC_LITERAL(4, 54, 15), // "tileSetsChanged"
QT_MOC_LITERAL(5, 70, 18), // "maxMemCacheChanged"
QT_MOC_LITERAL(6, 89, 19), // "maxDiskCacheChanged"
QT_MOC_LITERAL(7, 109, 19), // "errorMessageChanged"
QT_MOC_LITERAL(8, 129, 21), // "fetchElevationChanged"
QT_MOC_LITERAL(9, 151, 20), // "freeDiskSpaceChanged"
QT_MOC_LITERAL(10, 172, 20), // "selectedCountChanged"
QT_MOC_LITERAL(11, 193, 21), // "actionProgressChanged"
QT_MOC_LITERAL(12, 215, 19), // "importActionChanged"
QT_MOC_LITERAL(13, 235, 20), // "importReplaceChanged"
QT_MOC_LITERAL(14, 256, 9), // "taskError"
QT_MOC_LITERAL(15, 266, 20), // "QGCMapTask::TaskType"
QT_MOC_LITERAL(16, 287, 4), // "type"
QT_MOC_LITERAL(17, 292, 5), // "error"
QT_MOC_LITERAL(18, 298, 13), // "_tileSetSaved"
QT_MOC_LITERAL(19, 312, 17), // "QGCCachedTileSet*"
QT_MOC_LITERAL(20, 330, 3), // "set"
QT_MOC_LITERAL(21, 334, 15), // "_tileSetFetched"
QT_MOC_LITERAL(22, 350, 8), // "tileSets"
QT_MOC_LITERAL(23, 359, 15), // "_tileSetDeleted"
QT_MOC_LITERAL(24, 375, 5), // "setID"
QT_MOC_LITERAL(25, 381, 13), // "_updateTotals"
QT_MOC_LITERAL(26, 395, 10), // "totaltiles"
QT_MOC_LITERAL(27, 406, 9), // "totalsize"
QT_MOC_LITERAL(28, 416, 12), // "defaulttiles"
QT_MOC_LITERAL(29, 429, 11), // "defaultsize"
QT_MOC_LITERAL(30, 441, 15), // "_resetCompleted"
QT_MOC_LITERAL(31, 457, 16), // "_actionCompleted"
QT_MOC_LITERAL(32, 474, 22), // "_actionProgressHandler"
QT_MOC_LITERAL(33, 497, 10), // "percentage"
QT_MOC_LITERAL(34, 508, 12), // "loadTileSets"
QT_MOC_LITERAL(35, 521, 20), // "updateForCurrentView"
QT_MOC_LITERAL(36, 542, 4), // "lon0"
QT_MOC_LITERAL(37, 547, 4), // "lat0"
QT_MOC_LITERAL(38, 552, 4), // "lon1"
QT_MOC_LITERAL(39, 557, 4), // "lat1"
QT_MOC_LITERAL(40, 562, 7), // "minZoom"
QT_MOC_LITERAL(41, 570, 7), // "maxZoom"
QT_MOC_LITERAL(42, 578, 7), // "mapName"
QT_MOC_LITERAL(43, 586, 13), // "startDownload"
QT_MOC_LITERAL(44, 600, 4), // "name"
QT_MOC_LITERAL(45, 605, 7), // "mapType"
QT_MOC_LITERAL(46, 613, 11), // "saveSetting"
QT_MOC_LITERAL(47, 625, 3), // "key"
QT_MOC_LITERAL(48, 629, 5), // "value"
QT_MOC_LITERAL(49, 635, 11), // "loadSetting"
QT_MOC_LITERAL(50, 647, 12), // "defaultValue"
QT_MOC_LITERAL(51, 660, 13), // "deleteTileSet"
QT_MOC_LITERAL(52, 674, 7), // "tileSet"
QT_MOC_LITERAL(53, 682, 13), // "renameTileSet"
QT_MOC_LITERAL(54, 696, 7), // "newName"
QT_MOC_LITERAL(55, 704, 13), // "getUniqueName"
QT_MOC_LITERAL(56, 718, 8), // "findName"
QT_MOC_LITERAL(57, 727, 9), // "selectAll"
QT_MOC_LITERAL(58, 737, 10), // "selectNone"
QT_MOC_LITERAL(59, 748, 10), // "exportSets"
QT_MOC_LITERAL(60, 759, 4), // "path"
QT_MOC_LITERAL(61, 764, 10), // "importSets"
QT_MOC_LITERAL(62, 775, 11), // "resetAction"
QT_MOC_LITERAL(63, 787, 11), // "mapTypeList"
QT_MOC_LITERAL(64, 799, 8), // "provider"
QT_MOC_LITERAL(65, 808, 9), // "tileCount"
QT_MOC_LITERAL(66, 818, 12), // "tileCountStr"
QT_MOC_LITERAL(67, 831, 8), // "tileSize"
QT_MOC_LITERAL(68, 840, 11), // "tileSizeStr"
QT_MOC_LITERAL(69, 852, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(70, 872, 7), // "mapList"
QT_MOC_LITERAL(71, 880, 15), // "mapProviderList"
QT_MOC_LITERAL(72, 896, 11), // "maxMemCache"
QT_MOC_LITERAL(73, 908, 12), // "maxDiskCache"
QT_MOC_LITERAL(74, 921, 12), // "errorMessage"
QT_MOC_LITERAL(75, 934, 14), // "fetchElevation"
QT_MOC_LITERAL(76, 949, 13), // "freeDiskSpace"
QT_MOC_LITERAL(77, 963, 9), // "diskSpace"
QT_MOC_LITERAL(78, 973, 13), // "selectedCount"
QT_MOC_LITERAL(79, 987, 14), // "actionProgress"
QT_MOC_LITERAL(80, 1002, 12), // "importAction"
QT_MOC_LITERAL(81, 1015, 12), // "ImportAction"
QT_MOC_LITERAL(82, 1028, 13), // "importReplace"
QT_MOC_LITERAL(83, 1042, 10), // "ActionNone"
QT_MOC_LITERAL(84, 1053, 15), // "ActionImporting"
QT_MOC_LITERAL(85, 1069, 15), // "ActionExporting"
QT_MOC_LITERAL(86, 1085, 10) // "ActionDone"

    },
    "QGCMapEngineManager\0tileCountChanged\0"
    "\0tileSizeChanged\0tileSetsChanged\0"
    "maxMemCacheChanged\0maxDiskCacheChanged\0"
    "errorMessageChanged\0fetchElevationChanged\0"
    "freeDiskSpaceChanged\0selectedCountChanged\0"
    "actionProgressChanged\0importActionChanged\0"
    "importReplaceChanged\0taskError\0"
    "QGCMapTask::TaskType\0type\0error\0"
    "_tileSetSaved\0QGCCachedTileSet*\0set\0"
    "_tileSetFetched\0tileSets\0_tileSetDeleted\0"
    "setID\0_updateTotals\0totaltiles\0totalsize\0"
    "defaulttiles\0defaultsize\0_resetCompleted\0"
    "_actionCompleted\0_actionProgressHandler\0"
    "percentage\0loadTileSets\0updateForCurrentView\0"
    "lon0\0lat0\0lon1\0lat1\0minZoom\0maxZoom\0"
    "mapName\0startDownload\0name\0mapType\0"
    "saveSetting\0key\0value\0loadSetting\0"
    "defaultValue\0deleteTileSet\0tileSet\0"
    "renameTileSet\0newName\0getUniqueName\0"
    "findName\0selectAll\0selectNone\0exportSets\0"
    "path\0importSets\0resetAction\0mapTypeList\0"
    "provider\0tileCount\0tileCountStr\0"
    "tileSize\0tileSizeStr\0QmlObjectListModel*\0"
    "mapList\0mapProviderList\0maxMemCache\0"
    "maxDiskCache\0errorMessage\0fetchElevation\0"
    "freeDiskSpace\0diskSpace\0selectedCount\0"
    "actionProgress\0importAction\0ImportAction\0"
    "importReplace\0ActionNone\0ActionImporting\0"
    "ActionExporting\0ActionDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapEngineManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
      17,  296, // properties
       1,  364, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  199,    2, 0x06 /* Public */,
       3,    0,  200,    2, 0x06 /* Public */,
       4,    0,  201,    2, 0x06 /* Public */,
       5,    0,  202,    2, 0x06 /* Public */,
       6,    0,  203,    2, 0x06 /* Public */,
       7,    0,  204,    2, 0x06 /* Public */,
       8,    0,  205,    2, 0x06 /* Public */,
       9,    0,  206,    2, 0x06 /* Public */,
      10,    0,  207,    2, 0x06 /* Public */,
      11,    0,  208,    2, 0x06 /* Public */,
      12,    0,  209,    2, 0x06 /* Public */,
      13,    0,  210,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,  211,    2, 0x0a /* Public */,
      18,    1,  216,    2, 0x08 /* Private */,
      21,    1,  219,    2, 0x08 /* Private */,
      23,    1,  222,    2, 0x08 /* Private */,
      25,    4,  225,    2, 0x08 /* Private */,
      30,    0,  234,    2, 0x08 /* Private */,
      31,    0,  235,    2, 0x08 /* Private */,
      32,    1,  236,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      34,    0,  239,    2, 0x02 /* Public */,
      35,    7,  240,    2, 0x02 /* Public */,
      43,    2,  255,    2, 0x02 /* Public */,
      46,    2,  260,    2, 0x02 /* Public */,
      49,    2,  265,    2, 0x02 /* Public */,
      51,    1,  270,    2, 0x02 /* Public */,
      53,    2,  273,    2, 0x02 /* Public */,
      55,    0,  278,    2, 0x02 /* Public */,
      56,    1,  279,    2, 0x02 /* Public */,
      57,    0,  282,    2, 0x02 /* Public */,
      58,    0,  283,    2, 0x02 /* Public */,
      59,    1,  284,    2, 0x02 /* Public */,
      59,    0,  287,    2, 0x22 /* Public | MethodCloned */,
      61,    1,  288,    2, 0x02 /* Public */,
      61,    0,  291,    2, 0x22 /* Public | MethodCloned */,
      62,    0,  292,    2, 0x02 /* Public */,
      63,    1,  293,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15, QMetaType::QString,   16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   22,
    QMetaType::Void, QMetaType::ULongLong,   24,
    QMetaType::Void, QMetaType::UInt, QMetaType::ULongLong, QMetaType::UInt, QMetaType::ULongLong,   26,   27,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QString,   36,   37,   38,   39,   40,   41,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   44,   45,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,   48,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   47,   50,
    QMetaType::Void, 0x80000000 | 19,   52,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   52,   54,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   60,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   60,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::QStringList, QMetaType::QString,   64,

 // properties: name, type, flags
      65, QMetaType::ULongLong, 0x00495001,
      66, QMetaType::QString, 0x00495001,
      67, QMetaType::ULongLong, 0x00495001,
      68, QMetaType::QString, 0x00495001,
      22, 0x80000000 | 69, 0x00495009,
      70, QMetaType::QStringList, 0x00095401,
      71, QMetaType::QStringList, 0x00095401,
      72, QMetaType::UInt, 0x00495103,
      73, QMetaType::UInt, 0x00495103,
      74, QMetaType::QString, 0x00495001,
      75, QMetaType::Bool, 0x00495103,
      76, QMetaType::UInt, 0x00495001,
      77, QMetaType::UInt, 0x00095401,
      78, QMetaType::Int, 0x00495001,
      79, QMetaType::Int, 0x00495001,
      80, 0x80000000 | 81, 0x0049510b,
      82, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       1,
       2,
       0,
       0,
       3,
       4,
       5,
       6,
       7,
       0,
       8,
       9,
      10,
      11,

 // enums: name, alias, flags, count, data
      81,   81, 0x0,    4,  369,

 // enum data: key, value
      83, uint(QGCMapEngineManager::ActionNone),
      84, uint(QGCMapEngineManager::ActionImporting),
      85, uint(QGCMapEngineManager::ActionExporting),
      86, uint(QGCMapEngineManager::ActionDone),

       0        // eod
};

void QGCMapEngineManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMapEngineManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileCountChanged(); break;
        case 1: _t->tileSizeChanged(); break;
        case 2: _t->tileSetsChanged(); break;
        case 3: _t->maxMemCacheChanged(); break;
        case 4: _t->maxDiskCacheChanged(); break;
        case 5: _t->errorMessageChanged(); break;
        case 6: _t->fetchElevationChanged(); break;
        case 7: _t->freeDiskSpaceChanged(); break;
        case 8: _t->selectedCountChanged(); break;
        case 9: _t->actionProgressChanged(); break;
        case 10: _t->importActionChanged(); break;
        case 11: _t->importReplaceChanged(); break;
        case 12: _t->taskError((*reinterpret_cast< QGCMapTask::TaskType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->_tileSetSaved((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1]))); break;
        case 14: _t->_tileSetFetched((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1]))); break;
        case 15: _t->_tileSetDeleted((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 16: _t->_updateTotals((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 17: _t->_resetCompleted(); break;
        case 18: _t->_actionCompleted(); break;
        case 19: _t->_actionProgressHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->loadTileSets(); break;
        case 21: _t->updateForCurrentView((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 22: _t->startDownload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->saveSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: { QString _r = _t->loadSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->deleteTileSet((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1]))); break;
        case 26: _t->renameTileSet((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: { QString _r = _t->getUniqueName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->findName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->selectAll(); break;
        case 30: _t->selectNone(); break;
        case 31: { bool _r = _t->exportSets((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->exportSets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->importSets((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->importSets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->resetAction(); break;
        case 36: { QStringList _r = _t->mapTypeList((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCachedTileSet* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCachedTileSet* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCachedTileSet* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCachedTileSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileSetsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::maxMemCacheChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::maxDiskCacheChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::errorMessageChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::fetchElevationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::freeDiskSpaceChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::selectedCountChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::actionProgressChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::importActionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCMapEngineManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::importReplaceChanged)) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMapEngineManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint64*>(_v) = _t->tileCount(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->tileCountStr(); break;
        case 2: *reinterpret_cast< quint64*>(_v) = _t->tileSize(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->tileSizeStr(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->tileSets(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->mapList(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->mapProviderList(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->maxMemCache(); break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->maxDiskCache(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->fetchElevation(); break;
        case 11: *reinterpret_cast< quint32*>(_v) = _t->freeDiskSpace(); break;
        case 12: *reinterpret_cast< quint32*>(_v) = _t->diskSpace(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->selectedCount(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->actionProgress(); break;
        case 15: *reinterpret_cast< ImportAction*>(_v) = _t->importAction(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->importReplace(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMapEngineManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setMaxMemCache(*reinterpret_cast< quint32*>(_v)); break;
        case 8: _t->setMaxDiskCache(*reinterpret_cast< quint32*>(_v)); break;
        case 10: _t->setFetchElevation(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setImportAction(*reinterpret_cast< ImportAction*>(_v)); break;
        case 16: _t->setImportReplace(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCMapEngineManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_QGCMapEngineManager.data,
    qt_meta_data_QGCMapEngineManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCMapEngineManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapEngineManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapEngineManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGCMapEngineManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCMapEngineManager::tileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMapEngineManager::tileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMapEngineManager::tileSetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCMapEngineManager::maxMemCacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMapEngineManager::maxDiskCacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCMapEngineManager::errorMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCMapEngineManager::fetchElevationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCMapEngineManager::freeDiskSpaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCMapEngineManager::selectedCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCMapEngineManager::actionProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCMapEngineManager::importActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCMapEngineManager::importReplaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
