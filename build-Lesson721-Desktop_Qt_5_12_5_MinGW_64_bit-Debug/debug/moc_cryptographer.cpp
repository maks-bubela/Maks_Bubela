/****************************************************************************
** Meta object code from reading C++ file 'cryptographer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lesson721/cryptographer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cryptographer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cryptographer_t {
    QByteArrayData data[9];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cryptographer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cryptographer_t qt_meta_stringdata_Cryptographer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Cryptographer"
QT_MOC_LITERAL(1, 14, 8), // "CesCrypt"
QT_MOC_LITERAL(2, 23, 6), // "string"
QT_MOC_LITERAL(3, 30, 0), // ""
QT_MOC_LITERAL(4, 31, 10), // "CesDecrypt"
QT_MOC_LITERAL(5, 42, 8), // "VigCrypt"
QT_MOC_LITERAL(6, 51, 10), // "VigDecrypt"
QT_MOC_LITERAL(7, 62, 6), // "Choice"
QT_MOC_LITERAL(8, 69, 7) // "Choice2"

    },
    "Cryptographer\0CesCrypt\0string\0\0"
    "CesDecrypt\0VigCrypt\0VigDecrypt\0Choice\0"
    "Choice2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cryptographer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    3, 0x08 /* Private */,
       4,    0,   45,    3, 0x08 /* Private */,
       5,    0,   46,    3, 0x08 /* Private */,
       6,    0,   47,    3, 0x08 /* Private */,
       7,    0,   48,    3, 0x08 /* Private */,
       8,    0,   49,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2,
    0x80000000 | 2,
    0x80000000 | 2,
    0x80000000 | 2,
    0x80000000 | 2,

       0        // eod
};

void Cryptographer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cryptographer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { string _r = _t->CesCrypt();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 1: { string _r = _t->CesDecrypt();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 2: { string _r = _t->VigCrypt();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 3: { string _r = _t->VigDecrypt();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 4: { string _r = _t->Choice();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 5: { string _r = _t->Choice2();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cryptographer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Cryptographer.data,
    qt_meta_data_Cryptographer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cryptographer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cryptographer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cryptographer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Cryptographer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
