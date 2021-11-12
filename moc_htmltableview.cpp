/****************************************************************************
** Meta object code from reading C++ file 'htmltableview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "htmltableview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htmltableview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HtmlTableView_t {
    const uint offsetsAndSize[18];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_HtmlTableView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_HtmlTableView_t qt_meta_stringdata_HtmlTableView = {
    {
QT_MOC_LITERAL(0, 13), // "HtmlTableView"
QT_MOC_LITERAL(14, 13), // "linkActivated"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 4), // "link"
QT_MOC_LITERAL(34, 11), // "linkHovered"
QT_MOC_LITERAL(46, 13), // "linkUnhovered"
QT_MOC_LITERAL(60, 15), // "itemMouseChange"
QT_MOC_LITERAL(76, 1), // "i"
QT_MOC_LITERAL(78, 1) // "j"

    },
    "HtmlTableView\0linkActivated\0\0link\0"
    "linkHovered\0linkUnhovered\0itemMouseChange\0"
    "i\0j"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HtmlTableView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    1,   41,    2, 0x06,    3 /* Public */,
       5,    0,   44,    2, 0x06,    5 /* Public */,
       6,    2,   45,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void HtmlTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HtmlTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->linkHovered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->linkUnhovered(); break;
        case 3: _t->itemMouseChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HtmlTableView::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HtmlTableView::linkActivated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HtmlTableView::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HtmlTableView::linkHovered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HtmlTableView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HtmlTableView::linkUnhovered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HtmlTableView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HtmlTableView::itemMouseChange)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject HtmlTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_HtmlTableView.offsetsAndSize,
    qt_meta_data_HtmlTableView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_HtmlTableView_t
, QtPrivate::TypeAndForceComplete<HtmlTableView, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *HtmlTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HtmlTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HtmlTableView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int HtmlTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void HtmlTableView::linkActivated(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HtmlTableView::linkHovered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HtmlTableView::linkUnhovered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void HtmlTableView::itemMouseChange(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
