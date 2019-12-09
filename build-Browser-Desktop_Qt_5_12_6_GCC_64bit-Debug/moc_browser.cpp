/****************************************************************************
** Meta object code from reading C++ file 'browser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Browser/browser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Browser_t {
    QByteArrayData data[12];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Browser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Browser_t qt_meta_stringdata_Browser = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Browser"
QT_MOC_LITERAL(1, 8, 2), // "go"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 9), // "updateUrl"
QT_MOC_LITERAL(4, 22, 3), // "url"
QT_MOC_LITERAL(5, 26, 11), // "LoadStarted"
QT_MOC_LITERAL(6, 38, 12), // "LoadFinished"
QT_MOC_LITERAL(7, 51, 12), // "LoadProgress"
QT_MOC_LITERAL(8, 64, 5), // "value"
QT_MOC_LITERAL(9, 70, 11), // "showHistory"
QT_MOC_LITERAL(10, 82, 6), // "goBack"
QT_MOC_LITERAL(11, 89, 6) // "goNext"

    },
    "Browser\0go\0\0updateUrl\0url\0LoadStarted\0"
    "LoadFinished\0LoadProgress\0value\0"
    "showHistory\0goBack\0goNext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Browser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    1,   55,    2, 0x09 /* Protected */,
       5,    0,   58,    2, 0x09 /* Protected */,
       6,    0,   59,    2, 0x09 /* Protected */,
       7,    1,   60,    2, 0x09 /* Protected */,
       9,    0,   63,    2, 0x09 /* Protected */,
      10,    0,   64,    2, 0x09 /* Protected */,
      11,    0,   65,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Browser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Browser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->go(); break;
        case 1: _t->updateUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 2: _t->LoadStarted(); break;
        case 3: _t->LoadFinished(); break;
        case 4: _t->LoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showHistory(); break;
        case 6: _t->goBack(); break;
        case 7: _t->goNext(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Browser::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Browser.data,
    qt_meta_data_Browser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Browser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Browser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Browser.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Browser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
