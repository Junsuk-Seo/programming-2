/****************************************************************************
** Meta object code from reading C++ file 'course_2.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../course_2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'course_2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_course_2_t {
    const uint offsetsAndSize[18];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_course_2_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_course_2_t qt_meta_stringdata_course_2 = {
    {
QT_MOC_LITERAL(0, 8), // "course_2"
QT_MOC_LITERAL(9, 26), // "on_back_pushbutton_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 17), // "on_course_clicked"
QT_MOC_LITERAL(55, 14), // "on_stu_clicked"
QT_MOC_LITERAL(70, 15), // "on_home_clicked"
QT_MOC_LITERAL(86, 23), // "on_cousrse_plus_clicked"
QT_MOC_LITERAL(110, 17), // "on_home_2_clicked"
QT_MOC_LITERAL(128, 23) // "on_student_plus_clicked"

    },
    "course_2\0on_back_pushbutton_clicked\0"
    "\0on_course_clicked\0on_stu_clicked\0"
    "on_home_clicked\0on_cousrse_plus_clicked\0"
    "on_home_2_clicked\0on_student_plus_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_course_2[] = {

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

void course_2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<course_2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_back_pushbutton_clicked(); break;
        case 1: _t->on_course_clicked(); break;
        case 2: _t->on_stu_clicked(); break;
        case 3: _t->on_home_clicked(); break;
        case 4: _t->on_cousrse_plus_clicked(); break;
        case 6: _t->on_student_plus_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject course_2::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_course_2.offsetsAndSize,
    qt_meta_data_course_2,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_course_2_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *course_2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *course_2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_course_2.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int course_2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
