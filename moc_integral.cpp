/****************************************************************************
** Meta object code from reading C++ file 'integral.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../TypesetWidget/integral.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'integral.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Typeset__Integral_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Typeset__Integral_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Typeset__Integral_t qt_meta_stringdata_Typeset__Integral = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Typeset::Integral"
QT_MOC_LITERAL(1, 18, 12), // "addSubscript"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "Typeset::Integral\0addSubscript\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Typeset__Integral[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Typeset::Integral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Integral *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addSubscript(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Typeset::Integral::staticMetaObject = { {
    QMetaObject::SuperData::link<TerminalConstruct::staticMetaObject>(),
    qt_meta_stringdata_Typeset__Integral.data,
    qt_meta_data_Typeset__Integral,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Typeset::Integral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Typeset::Integral::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Typeset__Integral.stringdata0))
        return static_cast<void*>(this);
    return TerminalConstruct::qt_metacast(_clname);
}

int Typeset::Integral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TerminalConstruct::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Typeset__Integral_S_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Typeset__Integral_S_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Typeset__Integral_S_t qt_meta_stringdata_Typeset__Integral_S = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Typeset::Integral_S"
QT_MOC_LITERAL(1, 20, 14), // "addSuperscript"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15) // "removeSubscript"

    },
    "Typeset::Integral_S\0addSuperscript\0\0"
    "removeSubscript"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Typeset__Integral_S[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Typeset::Integral_S::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Integral_S *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addSuperscript(); break;
        case 1: _t->removeSubscript(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Typeset::Integral_S::staticMetaObject = { {
    QMetaObject::SuperData::link<UnaryConstruct::staticMetaObject>(),
    qt_meta_stringdata_Typeset__Integral_S.data,
    qt_meta_data_Typeset__Integral_S,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Typeset::Integral_S::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Typeset::Integral_S::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Typeset__Integral_S.stringdata0))
        return static_cast<void*>(this);
    return UnaryConstruct::qt_metacast(_clname);
}

int Typeset::Integral_S::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnaryConstruct::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_Typeset__Integral_SN_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Typeset__Integral_SN_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Typeset__Integral_SN_t qt_meta_stringdata_Typeset__Integral_SN = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Typeset::Integral_SN"
QT_MOC_LITERAL(1, 21, 17), // "removeSuperscript"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "Typeset::Integral_SN\0removeSuperscript\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Typeset__Integral_SN[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Typeset::Integral_SN::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Integral_SN *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeSuperscript(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Typeset::Integral_SN::staticMetaObject = { {
    QMetaObject::SuperData::link<BinaryConstruct::staticMetaObject>(),
    qt_meta_stringdata_Typeset__Integral_SN.data,
    qt_meta_data_Typeset__Integral_SN,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Typeset::Integral_SN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Typeset::Integral_SN::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Typeset__Integral_SN.stringdata0))
        return static_cast<void*>(this);
    return BinaryConstruct::qt_metacast(_clname);
}

int Typeset::Integral_SN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BinaryConstruct::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
