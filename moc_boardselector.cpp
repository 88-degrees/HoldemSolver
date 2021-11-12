/****************************************************************************
** Meta object code from reading C++ file 'boardselector.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "boardselector.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_boardselector_t {
    const uint offsetsAndSize[22];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_boardselector_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_boardselector_t qt_meta_stringdata_boardselector = {
    {
QT_MOC_LITERAL(0, 13), // "boardselector"
QT_MOC_LITERAL(14, 29), // "on_boardSelectorTable_clicked"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 11), // "QModelIndex"
QT_MOC_LITERAL(57, 5), // "index"
QT_MOC_LITERAL(63, 23), // "on_boardEdit_textEdited"
QT_MOC_LITERAL(87, 4), // "arg1"
QT_MOC_LITERAL(92, 24), // "on_boardEdit_textChanged"
QT_MOC_LITERAL(117, 24), // "on_confirmButton_clicked"
QT_MOC_LITERAL(142, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(166, 27) // "on_clearBoardButton_clicked"

    },
    "boardselector\0on_boardSelectorTable_clicked\0"
    "\0QModelIndex\0index\0on_boardEdit_textEdited\0"
    "arg1\0on_boardEdit_textChanged\0"
    "on_confirmButton_clicked\0"
    "on_cancelButton_clicked\0"
    "on_clearBoardButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_boardselector[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x08,    1 /* Private */,
       5,    1,   53,    2, 0x08,    3 /* Private */,
       7,    1,   56,    2, 0x08,    5 /* Private */,
       8,    0,   59,    2, 0x08,    7 /* Private */,
       9,    0,   60,    2, 0x08,    8 /* Private */,
      10,    0,   61,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void boardselector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<boardselector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_boardSelectorTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_boardEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_boardEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_confirmButton_clicked(); break;
        case 4: _t->on_cancelButton_clicked(); break;
        case 5: _t->on_clearBoardButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject boardselector::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_boardselector.offsetsAndSize,
    qt_meta_data_boardselector,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_boardselector_t
, QtPrivate::TypeAndForceComplete<boardselector, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *boardselector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *boardselector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_boardselector.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int boardselector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
