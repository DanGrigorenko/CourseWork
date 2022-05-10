/****************************************************************************
** Meta object code from reading C++ file 'hashwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../untitled/hashwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hashwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HashWidget_t {
    const uint offsetsAndSize[40];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_HashWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_HashWidget_t qt_meta_stringdata_HashWidget = {
    {
QT_MOC_LITERAL(0, 10), // "HashWidget"
QT_MOC_LITERAL(11, 8), // "HashNode"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 12), // "ShowMenuItem"
QT_MOC_LITERAL(34, 10), // "timeChange"
QT_MOC_LITERAL(45, 4), // "time"
QT_MOC_LITERAL(50, 11), // "HideButtons"
QT_MOC_LITERAL(62, 19), // "CreateButtonClicked"
QT_MOC_LITERAL(82, 19), // "InsertButtonClicked"
QT_MOC_LITERAL(102, 19), // "SearchButtonClicked"
QT_MOC_LITERAL(122, 19), // "RemoveButtonClicked"
QT_MOC_LITERAL(142, 17), // "MenuButtonClicked"
QT_MOC_LITERAL(160, 21), // "CreateGoButtonClicked"
QT_MOC_LITERAL(182, 21), // "SearchGoButtonClicked"
QT_MOC_LITERAL(204, 21), // "InsertGoButtonClicked"
QT_MOC_LITERAL(226, 21), // "RemoveGoButtonClicked"
QT_MOC_LITERAL(248, 19), // "LinerProbingClicked"
QT_MOC_LITERAL(268, 23), // "QUADRATICProbingClicked"
QT_MOC_LITERAL(292, 10), // "EnabledBtn"
QT_MOC_LITERAL(303, 4) // "flag"

    },
    "HashWidget\0HashNode\0\0ShowMenuItem\0"
    "timeChange\0time\0HideButtons\0"
    "CreateButtonClicked\0InsertButtonClicked\0"
    "SearchButtonClicked\0RemoveButtonClicked\0"
    "MenuButtonClicked\0CreateGoButtonClicked\0"
    "SearchGoButtonClicked\0InsertGoButtonClicked\0"
    "RemoveGoButtonClicked\0LinerProbingClicked\0"
    "QUADRATICProbingClicked\0EnabledBtn\0"
    "flag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HashWidget[] = {

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
       1,    0,  110,    2, 0x0a,    0 /* Public */,
       3,    0,  111,    2, 0x0a,    1 /* Public */,
       4,    1,  112,    2, 0x0a,    2 /* Public */,
       6,    0,  115,    2, 0x0a,    4 /* Public */,
       7,    0,  116,    2, 0x0a,    5 /* Public */,
       8,    0,  117,    2, 0x0a,    6 /* Public */,
       9,    0,  118,    2, 0x0a,    7 /* Public */,
      10,    0,  119,    2, 0x0a,    8 /* Public */,
      11,    0,  120,    2, 0x0a,    9 /* Public */,
      12,    0,  121,    2, 0x0a,   10 /* Public */,
      13,    0,  122,    2, 0x0a,   11 /* Public */,
      14,    0,  123,    2, 0x0a,   12 /* Public */,
      15,    0,  124,    2, 0x0a,   13 /* Public */,
      16,    0,  125,    2, 0x0a,   14 /* Public */,
      17,    0,  126,    2, 0x0a,   15 /* Public */,
      18,    1,  127,    2, 0x0a,   16 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

void HashWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HashWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->HashNode(); break;
        case 1: _t->ShowMenuItem(); break;
        case 2: _t->timeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->HideButtons(); break;
        case 4: _t->CreateButtonClicked(); break;
        case 5: _t->InsertButtonClicked(); break;
        case 6: _t->SearchButtonClicked(); break;
        case 7: _t->RemoveButtonClicked(); break;
        case 8: _t->MenuButtonClicked(); break;
        case 9: _t->CreateGoButtonClicked(); break;
        case 10: _t->SearchGoButtonClicked(); break;
        case 11: _t->InsertGoButtonClicked(); break;
        case 12: _t->RemoveGoButtonClicked(); break;
        case 13: _t->LinerProbingClicked(); break;
        case 14: _t->QUADRATICProbingClicked(); break;
        case 15: _t->EnabledBtn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HashWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_HashWidget.offsetsAndSize,
    qt_meta_data_HashWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_HashWidget_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *HashWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HashWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HashWidget.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int HashWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
