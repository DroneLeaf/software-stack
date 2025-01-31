/****************************************************************************
** Meta object code from reading C++ file 'PlanMasterController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../LeafMC/src/MissionManager/PlanMasterController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlanMasterController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlanMasterController_t {
    QByteArrayData data[56];
    char stringdata0[953];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlanMasterController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlanMasterController_t qt_meta_stringdata_PlanMasterController = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PlanMasterController"
QT_MOC_LITERAL(1, 21, 20), // "containsItemsChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "containsItems"
QT_MOC_LITERAL(4, 57, 21), // "syncInProgressChanged"
QT_MOC_LITERAL(5, 79, 12), // "dirtyChanged"
QT_MOC_LITERAL(6, 92, 5), // "dirty"
QT_MOC_LITERAL(7, 98, 14), // "offlineChanged"
QT_MOC_LITERAL(8, 113, 14), // "offlineEditing"
QT_MOC_LITERAL(9, 128, 22), // "currentPlanFileChanged"
QT_MOC_LITERAL(10, 151, 19), // "planCreatorsChanged"
QT_MOC_LITERAL(11, 171, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(12, 191, 12), // "planCreators"
QT_MOC_LITERAL(13, 204, 21), // "managerVehicleChanged"
QT_MOC_LITERAL(14, 226, 8), // "Vehicle*"
QT_MOC_LITERAL(15, 235, 14), // "managerVehicle"
QT_MOC_LITERAL(16, 250, 33), // "promptForPlanUsageOnVehicleCh..."
QT_MOC_LITERAL(17, 284, 21), // "_activeVehicleChanged"
QT_MOC_LITERAL(18, 306, 13), // "activeVehicle"
QT_MOC_LITERAL(19, 320, 20), // "_loadMissionComplete"
QT_MOC_LITERAL(20, 341, 21), // "_loadGeoFenceComplete"
QT_MOC_LITERAL(21, 363, 24), // "_loadRallyPointsComplete"
QT_MOC_LITERAL(22, 388, 20), // "_sendMissionComplete"
QT_MOC_LITERAL(23, 409, 21), // "_sendGeoFenceComplete"
QT_MOC_LITERAL(24, 431, 24), // "_sendRallyPointsComplete"
QT_MOC_LITERAL(25, 456, 23), // "_updatePlanCreatorsList"
QT_MOC_LITERAL(26, 480, 5), // "start"
QT_MOC_LITERAL(27, 486, 24), // "startStaticActiveVehicle"
QT_MOC_LITERAL(28, 511, 7), // "vehicle"
QT_MOC_LITERAL(29, 519, 23), // "deleteWhenSendCompleted"
QT_MOC_LITERAL(30, 543, 17), // "readyForSaveState"
QT_MOC_LITERAL(31, 561, 26), // "showPlanFromManagerVehicle"
QT_MOC_LITERAL(32, 588, 15), // "loadFromVehicle"
QT_MOC_LITERAL(33, 604, 13), // "sendToVehicle"
QT_MOC_LITERAL(34, 618, 12), // "loadFromFile"
QT_MOC_LITERAL(35, 631, 8), // "filename"
QT_MOC_LITERAL(36, 640, 13), // "saveToCurrent"
QT_MOC_LITERAL(37, 654, 10), // "saveToFile"
QT_MOC_LITERAL(38, 665, 9), // "saveToKml"
QT_MOC_LITERAL(39, 675, 9), // "removeAll"
QT_MOC_LITERAL(40, 685, 20), // "removeAllFromVehicle"
QT_MOC_LITERAL(41, 706, 7), // "flyView"
QT_MOC_LITERAL(42, 714, 17), // "controllerVehicle"
QT_MOC_LITERAL(43, 732, 17), // "missionController"
QT_MOC_LITERAL(44, 750, 18), // "MissionController*"
QT_MOC_LITERAL(45, 769, 18), // "geoFenceController"
QT_MOC_LITERAL(46, 788, 19), // "GeoFenceController*"
QT_MOC_LITERAL(47, 808, 20), // "rallyPointController"
QT_MOC_LITERAL(48, 829, 21), // "RallyPointController*"
QT_MOC_LITERAL(49, 851, 7), // "offline"
QT_MOC_LITERAL(50, 859, 14), // "syncInProgress"
QT_MOC_LITERAL(51, 874, 13), // "fileExtension"
QT_MOC_LITERAL(52, 888, 16), // "kmlFileExtension"
QT_MOC_LITERAL(53, 905, 15), // "currentPlanFile"
QT_MOC_LITERAL(54, 921, 15), // "loadNameFilters"
QT_MOC_LITERAL(55, 937, 15) // "saveNameFilters"

    },
    "PlanMasterController\0containsItemsChanged\0"
    "\0containsItems\0syncInProgressChanged\0"
    "dirtyChanged\0dirty\0offlineChanged\0"
    "offlineEditing\0currentPlanFileChanged\0"
    "planCreatorsChanged\0QmlObjectListModel*\0"
    "planCreators\0managerVehicleChanged\0"
    "Vehicle*\0managerVehicle\0"
    "promptForPlanUsageOnVehicleChange\0"
    "_activeVehicleChanged\0activeVehicle\0"
    "_loadMissionComplete\0_loadGeoFenceComplete\0"
    "_loadRallyPointsComplete\0_sendMissionComplete\0"
    "_sendGeoFenceComplete\0_sendRallyPointsComplete\0"
    "_updatePlanCreatorsList\0start\0"
    "startStaticActiveVehicle\0vehicle\0"
    "deleteWhenSendCompleted\0readyForSaveState\0"
    "showPlanFromManagerVehicle\0loadFromVehicle\0"
    "sendToVehicle\0loadFromFile\0filename\0"
    "saveToCurrent\0saveToFile\0saveToKml\0"
    "removeAll\0removeAllFromVehicle\0flyView\0"
    "controllerVehicle\0missionController\0"
    "MissionController*\0geoFenceController\0"
    "GeoFenceController*\0rallyPointController\0"
    "RallyPointController*\0offline\0"
    "syncInProgress\0fileExtension\0"
    "kmlFileExtension\0currentPlanFile\0"
    "loadNameFilters\0saveNameFilters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlanMasterController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      16,  212, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  159,    2, 0x06 /* Public */,
       4,    0,  162,    2, 0x06 /* Public */,
       5,    1,  163,    2, 0x06 /* Public */,
       7,    1,  166,    2, 0x06 /* Public */,
       9,    0,  169,    2, 0x06 /* Public */,
      10,    1,  170,    2, 0x06 /* Public */,
      13,    1,  173,    2, 0x06 /* Public */,
      16,    0,  176,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  177,    2, 0x08 /* Private */,
      19,    0,  180,    2, 0x08 /* Private */,
      20,    0,  181,    2, 0x08 /* Private */,
      21,    0,  182,    2, 0x08 /* Private */,
      22,    0,  183,    2, 0x08 /* Private */,
      23,    0,  184,    2, 0x08 /* Private */,
      24,    0,  185,    2, 0x08 /* Private */,
      25,    0,  186,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      26,    0,  187,    2, 0x02 /* Public */,
      27,    2,  188,    2, 0x02 /* Public */,
      27,    1,  193,    2, 0x22 /* Public | MethodCloned */,
      30,    0,  196,    2, 0x02 /* Public */,
      31,    0,  197,    2, 0x02 /* Public */,
      32,    0,  198,    2, 0x02 /* Public */,
      33,    0,  199,    2, 0x02 /* Public */,
      34,    1,  200,    2, 0x02 /* Public */,
      36,    0,  203,    2, 0x02 /* Public */,
      37,    1,  204,    2, 0x02 /* Public */,
      38,    1,  207,    2, 0x02 /* Public */,
      39,    0,  210,    2, 0x02 /* Public */,
      40,    0,  211,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   28,   29,
    QMetaType::Void, 0x80000000 | 14,   28,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      41, QMetaType::Bool, 0x00095003,
      42, 0x80000000 | 14, 0x00095409,
      15, 0x80000000 | 14, 0x00495009,
      43, 0x80000000 | 44, 0x00095409,
      45, 0x80000000 | 46, 0x00095409,
      47, 0x80000000 | 48, 0x00095409,
      49, QMetaType::Bool, 0x00495001,
       3, QMetaType::Bool, 0x00495001,
      50, QMetaType::Bool, 0x00495001,
       6, QMetaType::Bool, 0x00495103,
      51, QMetaType::QString, 0x00095401,
      52, QMetaType::QString, 0x00095401,
      53, QMetaType::QString, 0x00495001,
      54, QMetaType::QStringList, 0x00095401,
      55, QMetaType::QStringList, 0x00095401,
      12, 0x80000000 | 11, 0x0049500b,

 // properties: notify_signal_id
       0,
       0,
       6,
       0,
       0,
       0,
       3,
       0,
       1,
       2,
       0,
       0,
       4,
       0,
       0,
       5,

       0        // eod
};

void PlanMasterController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlanMasterController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->containsItemsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->syncInProgressChanged(); break;
        case 2: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->offlineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->currentPlanFileChanged(); break;
        case 5: _t->planCreatorsChanged((*reinterpret_cast< QmlObjectListModel*(*)>(_a[1]))); break;
        case 6: _t->managerVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 7: _t->promptForPlanUsageOnVehicleChange(); break;
        case 8: _t->_activeVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 9: _t->_loadMissionComplete(); break;
        case 10: _t->_loadGeoFenceComplete(); break;
        case 11: _t->_loadRallyPointsComplete(); break;
        case 12: _t->_sendMissionComplete(); break;
        case 13: _t->_sendGeoFenceComplete(); break;
        case 14: _t->_sendRallyPointsComplete(); break;
        case 15: _t->_updatePlanCreatorsList(); break;
        case 16: _t->start(); break;
        case 17: _t->startStaticActiveVehicle((*reinterpret_cast< Vehicle*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->startStaticActiveVehicle((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 19: { int _r = _t->readyForSaveState();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->showPlanFromManagerVehicle(); break;
        case 21: _t->loadFromVehicle(); break;
        case 22: _t->sendToVehicle(); break;
        case 23: _t->loadFromFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->saveToCurrent(); break;
        case 25: _t->saveToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->saveToKml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->removeAll(); break;
        case 28: _t->removeAllFromVehicle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
            }
            break;
        case 6:
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
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlanMasterController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanMasterController::containsItemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanMasterController::syncInProgressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanMasterController::dirtyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanMasterController::offlineChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanMasterController::currentPlanFileChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)(QmlObjectListModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanMasterController::planCreatorsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)(Vehicle * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanMasterController::managerVehicleChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanMasterController::promptForPlanUsageOnVehicleChange)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GeoFenceController* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MissionController* >(); break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RallyPointController* >(); break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlanMasterController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->_flyView; break;
        case 1: *reinterpret_cast< Vehicle**>(_v) = _t->controllerVehicle(); break;
        case 2: *reinterpret_cast< Vehicle**>(_v) = _t->managerVehicle(); break;
        case 3: *reinterpret_cast< MissionController**>(_v) = _t->missionController(); break;
        case 4: *reinterpret_cast< GeoFenceController**>(_v) = _t->geoFenceController(); break;
        case 5: *reinterpret_cast< RallyPointController**>(_v) = _t->rallyPointController(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->offline(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->containsItems(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->syncInProgress(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->fileExtension(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->kmlFileExtension(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->currentPlanFile(); break;
        case 13: *reinterpret_cast< QStringList*>(_v) = _t->loadNameFilters(); break;
        case 14: *reinterpret_cast< QStringList*>(_v) = _t->saveNameFilters(); break;
        case 15: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_planCreators; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlanMasterController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_flyView != *reinterpret_cast< bool*>(_v)) {
                _t->_flyView = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 9: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 15:
            if (_t->_planCreators != *reinterpret_cast< QmlObjectListModel**>(_v)) {
                _t->_planCreators = *reinterpret_cast< QmlObjectListModel**>(_v);
                Q_EMIT _t->planCreatorsChanged(_t->_planCreators);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PlanMasterController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlanMasterController.data,
    qt_meta_data_PlanMasterController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlanMasterController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanMasterController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlanMasterController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlanMasterController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PlanMasterController::containsItemsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlanMasterController::syncInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlanMasterController::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlanMasterController::offlineChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlanMasterController::currentPlanFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlanMasterController::planCreatorsChanged(QmlObjectListModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlanMasterController::managerVehicleChanged(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlanMasterController::promptForPlanUsageOnVehicleChange()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
