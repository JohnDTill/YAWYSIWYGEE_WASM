/****************************************************************************
** Meta object code from reading C++ file 'root.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../TypesetWidget/root.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'root.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Typeset__SquareRoot_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Typeset__SquareRoot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Typeset__SquareRoot_t qt_meta_stringdata_Typeset__SquareRoot = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Typeset::SquareRoot"
QT_MOC_LITERAL(1, 20, 9), // "addScript"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "Typeset::SquareRoot\0addScript\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Typeset__SquareRoot[] = {

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

void Typeset::SquareRoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SquareRoot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addScript(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Typeset::SquareRoot::staticMetaObject = { {
    QMetaObject::SuperData::link<UnaryConstruct::staticMetaObject>(),
    qt_meta_stringdata_Typeset__SquareRoot.data,
    qt_meta_data_Typeset__SquareRoot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Typeset::SquareRoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Typeset::SquareRoot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Typeset__SquareRoot.stringdata0))
        return static_cast<void*>(this);
    return UnaryConstruct::qt_metacast(_clname);
}

int Typeset::SquareRoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnaryConstruct::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Typeset__ScriptedRoot_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Typeset__ScriptedRoot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Typeset__ScriptedRoot_t qt_meta_stringdata_Typeset__ScriptedRoot = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Typeset::ScriptedRoot"
QT_MOC_LITERAL(1, 22, 12), // "removeScript"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "Typeset::ScriptedRoot\0removeScript\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Typeset__ScriptedRoot[] = {

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

void Typeset::ScriptedRoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScriptedRoot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeScript(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Typeset::ScriptedRoot::staticMetaObject = { {
    QMetaObject::SuperData::link<BinaryConstruct::staticMetaObject>(),
    qt_meta_stringdata_Typeset__ScriptedRoot.data,
    qt_meta_data_Typeset__ScriptedRoot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Typeset::ScriptedRoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Typeset::ScriptedRoot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Typeset__ScriptedRoot.stringdata0))
        return static_cast<void*>(this);
    return BinaryConstruct::qt_metacast(_clname);
}

int Typeset::ScriptedRoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
