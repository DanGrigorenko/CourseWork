/****************************************************************************
** Meta object code from reading C++ file 'listwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../untitled/listwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListWidget_t {
    const uint offsetsAndSize[40];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ListWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ListWidget_t qt_meta_stringdata_ListWidget = {
    {
QT_MOC_LITERAL(0, 10), // "ListWidget"
QT_MOC_LITERAL(11, 10), // "timeChange"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 4), // "time"
QT_MOC_LITERAL(28, 13), // "Node_ON_Scene"
QT_MOC_LITERAL(42, 1), // "n"
QT_MOC_LITERAL(44, 9), // "CreateDiv"
QT_MOC_LITERAL(54, 9), // "InsertDiv"
QT_MOC_LITERAL(64, 9), // "SearchDiv"
QT_MOC_LITERAL(74, 16), // "RandomFixSizeDiv"
QT_MOC_LITERAL(91, 9), // "RemoveDiv"
QT_MOC_LITERAL(101, 9), // "RandomDiv"
QT_MOC_LITERAL(111, 15), // "RandomSortedDiv"
QT_MOC_LITERAL(127, 7), // "MenuDiv"
QT_MOC_LITERAL(135, 11), // "CreateGoDiv"
QT_MOC_LITERAL(147, 11), // "SearchGoDiv"
QT_MOC_LITERAL(159, 13), // "InsertTailDiv"
QT_MOC_LITERAL(173, 14), // "InsertHeadlDiv"
QT_MOC_LITERAL(188, 14), // "RemoveHeadlDiv"
QT_MOC_LITERAL(203, 14) // "RemoveTaillDiv"

    },
    "ListWidget\0timeChange\0\0time\0Node_ON_Scene\0"
    "n\0CreateDiv\0InsertDiv\0SearchDiv\0"
    "RandomFixSizeDiv\0RemoveDiv\0RandomDiv\0"
    "RandomSortedDiv\0MenuDiv\0CreateGoDiv\0"
    "SearchGoDiv\0InsertTailDiv\0InsertHeadlDiv\0"
    "RemoveHeadlDiv\0RemoveTaillDiv"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x0a,    0 /* Public */,
       4,    1,  113,    2, 0x0a,    2 /* Public */,
       6,    0,  116,    2, 0x0a,    4 /* Public */,
       7,    0,  117,    2, 0x0a,    5 /* Public */,
       8,    0,  118,    2, 0x0a,    6 /* Public */,
       9,    0,  119,    2, 0x0a,    7 /* Public */,
      10,    0,  120,    2, 0x0a,    8 /* Public */,
      11,    0,  121,    2, 0x0a,    9 /* Public */,
      12,    0,  122,    2, 0x0a,   10 /* Public */,
      13,    0,  123,    2, 0x0a,   11 /* Public */,
      14,    0,  124,    2, 0x0a,   12 /* Public */,
      15,    0,  125,    2, 0x0a,   13 /* Public */,
      16,    0,  126,    2, 0x0a,   14 /* Public */,
      17,    0,  127,    2, 0x0a,   15 /* Public */,
      18,    0,  128,    2, 0x0a,   16 /* Public */,
      19,    0,  129,    2, 0x0a,   17 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->Node_ON_Scene((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->CreateDiv(); break;
        case 3: _t->InsertDiv(); break;
        case 4: _t->SearchDiv(); break;
        case 5: _t->RandomFixSizeDiv(); break;
        case 6: _t->RemoveDiv(); break;
        case 7: _t->RandomDiv(); break;
        case 8: _t->RandomSortedDiv(); break;
        case 9: _t->MenuDiv(); break;
        case 10: _t->CreateGoDiv(); break;
        case 11: _t->SearchGoDiv(); break;
        case 12: _t->InsertTailDiv(); break;
        case 13: _t->InsertHeadlDiv(); break;
        case 14: _t->RemoveHeadlDiv(); break;
        case 15: _t->RemoveTaillDiv(); break;
        default: ;
        }
    }
}

const QMetaObject ListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_ListWidget.offsetsAndSize,
    qt_meta_data_ListWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ListWidget_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListWidget.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int ListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
