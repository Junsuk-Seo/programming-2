/****************************************************************************
** Meta object code from reading C++ file 'secdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../secdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SecDialog_t {
    const uint offsetsAndSize[22];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SecDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SecDialog_t qt_meta_stringdata_SecDialog = {
    {
QT_MOC_LITERAL(0, 9), // "SecDialog"
QT_MOC_LITERAL(10, 25), // "on_Add_Pushbutton_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 19), // "on_loadData_clicked"
QT_MOC_LITERAL(57, 26), // "on_back_pushbutton_clicked"
QT_MOC_LITERAL(84, 17), // "on_course_clicked"
QT_MOC_LITERAL(102, 15), // "on_home_clicked"
QT_MOC_LITERAL(118, 14), // "on_stu_clicked"
QT_MOC_LITERAL(133, 22), // "on_course_plus_clicked"
QT_MOC_LITERAL(156, 17), // "on_home_2_clicked"
QT_MOC_LITERAL(174, 23) // "on_student_plus_clicked"

    },
    "SecDialog\0on_Add_Pushbutton_clicked\0"
    "\0on_loadData_clicked\0on_back_pushbutton_clicked\0"
    "on_course_clicked\0on_home_clicked\0"
    "on_stu_clicked\0on_course_plus_clicked\0"
    "on_home_2_clicked\0on_student_plus_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecDialog[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    0 /* Private */,
       3,    0,   69,    2, 0x08,    1 /* Private */,
       4,    0,   70,    2, 0x08,    2 /* Private */,
       5,    0,   71,    2, 0x08,    3 /* Private */,
       6,    0,   72,    2, 0x08,    4 /* Private */,
       7,    0,   73,    2, 0x08,    5 /* Private */,
       8,    0,   74,    2, 0x08,    6 /* Private */,
       9,    0,   75,    2, 0x08,    7 /* Private */,
      10,    0,   76,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

void SecDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Add_Pushbutton_clicked(); break;
        case 1: _t->on_loadData_clicked(); break;
        case 2: _t->on_back_pushbutton_clicked(); break;
        case 3: _t->on_course_clicked(); break;
        case 4: _t->on_home_clicked(); break;
        case 5: _t->on_stu_clicked(); break;
        case 6: _t->on_course_plus_clicked(); break;
        //case 7: _t->on_home_2_clicked(); break;
        case 8: _t->on_student_plus_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject SecDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SecDialog.offsetsAndSize,
    qt_meta_data_SecDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SecDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SecDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SecDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
