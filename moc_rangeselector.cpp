/****************************************************************************
** Meta object code from reading C++ file 'rangeselector.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "rangeselector.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rangeselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RangeSelector_t {
    const uint offsetsAndSize[58];
    char stringdata0[411];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_RangeSelector_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_RangeSelector_t qt_meta_stringdata_RangeSelector = {
    {
QT_MOC_LITERAL(0, 13), // "RangeSelector"
QT_MOC_LITERAL(14, 12), // "confirm_text"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 7), // "content"
QT_MOC_LITERAL(36, 24), // "on_confirmButtom_clicked"
QT_MOC_LITERAL(61, 33), // "on_rangeNumberSlider_valueCha..."
QT_MOC_LITERAL(95, 5), // "value"
QT_MOC_LITERAL(101, 12), // "grid_pressed"
QT_MOC_LITERAL(114, 1), // "i"
QT_MOC_LITERAL(116, 1), // "j"
QT_MOC_LITERAL(118, 9), // "grid_area"
QT_MOC_LITERAL(128, 2), // "i1"
QT_MOC_LITERAL(131, 2), // "j1"
QT_MOC_LITERAL(134, 2), // "i2"
QT_MOC_LITERAL(137, 2), // "j2"
QT_MOC_LITERAL(140, 12), // "grid_release"
QT_MOC_LITERAL(153, 12), // "item_clicked"
QT_MOC_LITERAL(166, 11), // "QModelIndex"
QT_MOC_LITERAL(178, 13), // "update_second"
QT_MOC_LITERAL(192, 29), // "on_rangeNumberEdit_textEdited"
QT_MOC_LITERAL(222, 4), // "arg1"
QT_MOC_LITERAL(227, 27), // "on_clearRangeButtom_clicked"
QT_MOC_LITERAL(255, 23), // "on_textEdit_textChanged"
QT_MOC_LITERAL(279, 28), // "on_exportRangeButton_clicked"
QT_MOC_LITERAL(308, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(332, 28), // "on_importRangeButton_clicked"
QT_MOC_LITERAL(361, 32), // "on_openRangeFolderButton_clicked"
QT_MOC_LITERAL(394, 10), // "onExpanded"
QT_MOC_LITERAL(405, 5) // "index"

    },
    "RangeSelector\0confirm_text\0\0content\0"
    "on_confirmButtom_clicked\0"
    "on_rangeNumberSlider_valueChanged\0"
    "value\0grid_pressed\0i\0j\0grid_area\0i1\0"
    "j1\0i2\0j2\0grid_release\0item_clicked\0"
    "QModelIndex\0update_second\0"
    "on_rangeNumberEdit_textEdited\0arg1\0"
    "on_clearRangeButtom_clicked\0"
    "on_textEdit_textChanged\0"
    "on_exportRangeButton_clicked\0"
    "on_cancelButton_clicked\0"
    "on_importRangeButton_clicked\0"
    "on_openRangeFolderButton_clicked\0"
    "onExpanded\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RangeSelector[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  113,    2, 0x08,    3 /* Private */,
       5,    1,  114,    2, 0x08,    4 /* Private */,
       7,    2,  117,    2, 0x08,    6 /* Private */,
      10,    4,  122,    2, 0x08,    9 /* Private */,
      15,    2,  131,    2, 0x08,   14 /* Private */,
      16,    1,  136,    2, 0x08,   17 /* Private */,
      18,    0,  139,    2, 0x08,   19 /* Private */,
      19,    1,  140,    2, 0x08,   20 /* Private */,
      21,    0,  143,    2, 0x08,   22 /* Private */,
      22,    0,  144,    2, 0x08,   23 /* Private */,
      23,    0,  145,    2, 0x08,   24 /* Private */,
      24,    0,  146,    2, 0x08,   25 /* Private */,
      25,    0,  147,    2, 0x08,   26 /* Private */,
      26,    0,  148,    2, 0x08,   27 /* Private */,
      27,    1,  149,    2, 0x08,   28 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   28,

       0        // eod
};

void RangeSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RangeSelector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->confirm_text((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_confirmButtom_clicked(); break;
        case 2: _t->on_rangeNumberSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->grid_pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->grid_area((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->grid_release((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->item_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->update_second(); break;
        case 8: _t->on_rangeNumberEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_clearRangeButtom_clicked(); break;
        case 10: _t->on_textEdit_textChanged(); break;
        case 11: _t->on_exportRangeButton_clicked(); break;
        case 12: _t->on_cancelButton_clicked(); break;
        case 13: _t->on_importRangeButton_clicked(); break;
        case 14: _t->on_openRangeFolderButton_clicked(); break;
        case 15: _t->onExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RangeSelector::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RangeSelector::confirm_text)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RangeSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RangeSelector.offsetsAndSize,
    qt_meta_data_RangeSelector,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_RangeSelector_t
, QtPrivate::TypeAndForceComplete<RangeSelector, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>


>,
    nullptr
} };


const QMetaObject *RangeSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RangeSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RangeSelector.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RangeSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void RangeSelector::confirm_text(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
