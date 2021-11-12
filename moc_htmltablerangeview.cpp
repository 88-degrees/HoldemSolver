/****************************************************************************
** Meta object code from reading C++ file 'htmltablerangeview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "include/ui/htmltablerangeview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htmltablerangeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HtmlTableRangeView_t {
    const uint offsetsAndSize[22];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_HtmlTableRangeView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_HtmlTableRangeView_t qt_meta_stringdata_HtmlTableRangeView = {
    {
QT_MOC_LITERAL(0, 18), // "HtmlTableRangeView"
QT_MOC_LITERAL(19, 17), // "view_item_pressed"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 1), // "i"
QT_MOC_LITERAL(40, 1), // "j"
QT_MOC_LITERAL(42, 14), // "view_item_area"
QT_MOC_LITERAL(57, 2), // "i1"
QT_MOC_LITERAL(60, 2), // "j1"
QT_MOC_LITERAL(63, 2), // "i2"
QT_MOC_LITERAL(66, 2), // "j2"
QT_MOC_LITERAL(69, 12) // "item_release"

    },
    "HtmlTableRangeView\0view_item_pressed\0"
    "\0i\0j\0view_item_area\0i1\0j1\0i2\0j2\0"
    "item_release"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HtmlTableRangeView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,
       5,    4,   37,    2, 0x06,    4 /* Public */,
      10,    2,   46,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void HtmlTableRangeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HtmlTableRangeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->view_item_pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->view_item_area((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->item_release((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HtmlTableRangeView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HtmlTableRangeView::view_item_pressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HtmlTableRangeView::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HtmlTableRangeView::view_item_area)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HtmlTableRangeView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HtmlTableRangeView::item_release)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject HtmlTableRangeView::staticMetaObject = { {
    QMetaObject::SuperData::link<HtmlTableView::staticMetaObject>(),
    qt_meta_stringdata_HtmlTableRangeView.offsetsAndSize,
    qt_meta_data_HtmlTableRangeView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_HtmlTableRangeView_t
, QtPrivate::TypeAndForceComplete<HtmlTableRangeView, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *HtmlTableRangeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HtmlTableRangeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HtmlTableRangeView.stringdata0))
        return static_cast<void*>(this);
    return HtmlTableView::qt_metacast(_clname);
}

int HtmlTableRangeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HtmlTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HtmlTableRangeView::view_item_pressed(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HtmlTableRangeView::view_item_area(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HtmlTableRangeView::item_release(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
