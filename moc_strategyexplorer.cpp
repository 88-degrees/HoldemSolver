/****************************************************************************
** Meta object code from reading C++ file 'strategyexplorer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "strategyexplorer.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'strategyexplorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StrategyExplorer_t {
    const uint offsetsAndSize[42];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_StrategyExplorer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_StrategyExplorer_t qt_meta_stringdata_StrategyExplorer = {
    {
QT_MOC_LITERAL(0, 16), // "StrategyExplorer"
QT_MOC_LITERAL(17, 13), // "item_expanded"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 11), // "QModelIndex"
QT_MOC_LITERAL(44, 5), // "index"
QT_MOC_LITERAL(50, 12), // "item_clicked"
QT_MOC_LITERAL(63, 17), // "selection_changed"
QT_MOC_LITERAL(81, 14), // "QItemSelection"
QT_MOC_LITERAL(96, 8), // "selected"
QT_MOC_LITERAL(105, 10), // "deselected"
QT_MOC_LITERAL(116, 34), // "on_turnCardBox_currentIndexCh..."
QT_MOC_LITERAL(151, 35), // "on_riverCardBox_currentIndexC..."
QT_MOC_LITERAL(187, 13), // "update_second"
QT_MOC_LITERAL(201, 16), // "onMouseMoveEvent"
QT_MOC_LITERAL(218, 1), // "i"
QT_MOC_LITERAL(220, 1), // "j"
QT_MOC_LITERAL(222, 29), // "on_strategyModeButtom_clicked"
QT_MOC_LITERAL(252, 24), // "on_ipRangeButtom_clicked"
QT_MOC_LITERAL(277, 25), // "on_oopRangeButtom_clicked"
QT_MOC_LITERAL(303, 23), // "on_evModeButtom_clicked"
QT_MOC_LITERAL(327, 27) // "on_evOnlyModeButtom_clicked"

    },
    "StrategyExplorer\0item_expanded\0\0"
    "QModelIndex\0index\0item_clicked\0"
    "selection_changed\0QItemSelection\0"
    "selected\0deselected\0"
    "on_turnCardBox_currentIndexChanged\0"
    "on_riverCardBox_currentIndexChanged\0"
    "update_second\0onMouseMoveEvent\0i\0j\0"
    "on_strategyModeButtom_clicked\0"
    "on_ipRangeButtom_clicked\0"
    "on_oopRangeButtom_clicked\0"
    "on_evModeButtom_clicked\0"
    "on_evOnlyModeButtom_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StrategyExplorer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x0a,    1 /* Public */,
       5,    1,   89,    2, 0x0a,    3 /* Public */,
       6,    2,   92,    2, 0x0a,    5 /* Public */,
      10,    1,   97,    2, 0x08,    8 /* Private */,
      11,    1,  100,    2, 0x08,   10 /* Private */,
      12,    0,  103,    2, 0x08,   12 /* Private */,
      13,    2,  104,    2, 0x08,   13 /* Private */,
      16,    0,  109,    2, 0x08,   16 /* Private */,
      17,    0,  110,    2, 0x08,   17 /* Private */,
      18,    0,  111,    2, 0x08,   18 /* Private */,
      19,    0,  112,    2, 0x08,   19 /* Private */,
      20,    0,  113,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StrategyExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StrategyExplorer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->item_expanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->item_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->selection_changed((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->on_turnCardBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_riverCardBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->update_second(); break;
        case 6: _t->onMouseMoveEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_strategyModeButtom_clicked(); break;
        case 8: _t->on_ipRangeButtom_clicked(); break;
        case 9: _t->on_oopRangeButtom_clicked(); break;
        case 10: _t->on_evModeButtom_clicked(); break;
        case 11: _t->on_evOnlyModeButtom_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject StrategyExplorer::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_StrategyExplorer.offsetsAndSize,
    qt_meta_data_StrategyExplorer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_StrategyExplorer_t
, QtPrivate::TypeAndForceComplete<StrategyExplorer, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>, QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *StrategyExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StrategyExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StrategyExplorer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StrategyExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
