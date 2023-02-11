/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../KursoviK/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_coursework_t {
    const uint offsetsAndSize[26];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_coursework_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_coursework_t qt_meta_stringdata_coursework = {
    {
QT_MOC_LITERAL(0, 10), // "coursework"
QT_MOC_LITERAL(11, 11), // "slot_select"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 11), // "QModelIndex"
QT_MOC_LITERAL(36, 6), // "new_db"
QT_MOC_LITERAL(43, 15), // "load_db_in_file"
QT_MOC_LITERAL(59, 16), // "write_db_in_file"
QT_MOC_LITERAL(76, 11), // "add_db_line"
QT_MOC_LITERAL(88, 14), // "delete_db_line"
QT_MOC_LITERAL(103, 8), // "merge_db"
QT_MOC_LITERAL(112, 7), // "db_find"
QT_MOC_LITERAL(120, 7), // "appExit"
QT_MOC_LITERAL(128, 5) // "about"

    },
    "coursework\0slot_select\0\0QModelIndex\0"
    "new_db\0load_db_in_file\0write_db_in_file\0"
    "add_db_line\0delete_db_line\0merge_db\0"
    "db_find\0appExit\0about"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_coursework[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x08,    1 /* Private */,
       4,    0,   79,    2, 0x08,    4 /* Private */,
       5,    0,   80,    2, 0x08,    5 /* Private */,
       6,    0,   81,    2, 0x08,    6 /* Private */,
       7,    0,   82,    2, 0x08,    7 /* Private */,
       8,    0,   83,    2, 0x08,    8 /* Private */,
       9,    0,   84,    2, 0x08,    9 /* Private */,
      10,    0,   85,    2, 0x08,   10 /* Private */,
      11,    0,   86,    2, 0x08,   11 /* Private */,
      12,    0,   87,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
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

void coursework::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<coursework *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_select((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 1: _t->new_db(); break;
        case 2: _t->load_db_in_file(); break;
        case 3: _t->write_db_in_file(); break;
        case 4: _t->add_db_line(); break;
        case 5: _t->delete_db_line(); break;
        case 6: _t->merge_db(); break;
        case 7: _t->db_find(); break;
        case 8: _t->appExit(); break;
        case 9: _t->about(); break;
        default: ;
        }
    }
}

const QMetaObject coursework::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_coursework.offsetsAndSize,
    qt_meta_data_coursework,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_coursework_t
, QtPrivate::TypeAndForceComplete<coursework, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>, QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *coursework::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *coursework::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_coursework.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int coursework::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
