/****************************************************************************
** Meta object code from reading C++ file 'stu_3.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../stu_3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stu_3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stu_3_t {
    const uint offsetsAndSize[18];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_stu_3_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_stu_3_t qt_meta_stringdata_stu_3 = {
    {
QT_MOC_LITERAL(0, 5), // "stu_3"
QT_MOC_LITERAL(6, 26), // "on_back_pushbutton_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 17), // "on_course_clicked"
QT_MOC_LITERAL(52, 14), // "on_stu_clicked"
QT_MOC_LITERAL(67, 15), // "on_home_clicked"
QT_MOC_LITERAL(83, 23), // "on_cousrse_plus_clicked"
QT_MOC_LITERAL(107, 17), // "on_home_2_clicked"
QT_MOC_LITERAL(125, 23) // "on_student_plus_clicked"

    },
    "stu_3\0on_back_pushbutton_clicked\0\0"
    "on_course_clicked\0on_stu_clicked\0"
    "on_home_clicked\0on_cousrse_plus_clicked\0"
    "on_home_2_clicked\0on_student_plus_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stu_3[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    0 /* Private */,
       3,    0,   57,    2, 0x08,    1 /* Private */,
       4,    0,   58,    2, 0x08,    2 /* Private */,
       5,    0,   59,    2, 0x08,    3 /* Private */,
       6,    0,   60,    2, 0x08,    4 /* Private */,
       7,    0,   61,    2, 0x08,    5 /* Private */,
       8,    0,   62,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void stu_3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<stu_3 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_back_pushbutton_clicked(); break;
        case 1: _t->on_course_clicked(); break;
        case 2: _t->on_stu_clicked(); break;
        case 3: _t->on_home_clicked(); break;
        case 4: _t->on_cousrse_plus_clicked(); break;
        //case 5: _t->on_home_2_clicked(); break;
        case 6: _t->on_student_plus_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject stu_3::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_stu_3.offsetsAndSize,
    qt_meta_data_stu_3,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_stu_3_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *stu_3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stu_3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_stu_3.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int stu_3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
