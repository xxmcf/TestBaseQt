/****************************************************************************
** Meta object code from reading C++ file 'testqthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../testqthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testqthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WorkThread_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorkThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorkThread_t qt_meta_stringdata_WorkThread = {
    {
QT_MOC_LITERAL(0, 0, 10) // "WorkThread"

    },
    "WorkThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorkThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WorkThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WorkThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WorkThread.data,
      qt_meta_data_WorkThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WorkThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WorkThread.stringdata0))
        return static_cast<void*>(const_cast< WorkThread*>(this));
    return QThread::qt_metacast(_clname);
}

int WorkThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_MyObject_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyObject_t qt_meta_stringdata_MyObject = {
    {
QT_MOC_LITERAL(0, 0, 8) // "MyObject"

    },
    "MyObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MyObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MyObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyObject.data,
      qt_meta_data_MyObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyObject.stringdata0))
        return static_cast<void*>(const_cast< MyObject*>(this));
    return QObject::qt_metacast(_clname);
}

int MyObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_MySecondObject_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MySecondObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MySecondObject_t qt_meta_stringdata_MySecondObject = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MySecondObject"
QT_MOC_LITERAL(1, 15, 13), // "sig_sendfirst"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5) // "first"

    },
    "MySecondObject\0sig_sendfirst\0\0first"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MySecondObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MySecondObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MySecondObject *_t = static_cast<MySecondObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_sendfirst(); break;
        case 1: _t->first(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MySecondObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MySecondObject::sig_sendfirst)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MySecondObject::staticMetaObject = {
    { &MyObject::staticMetaObject, qt_meta_stringdata_MySecondObject.data,
      qt_meta_data_MySecondObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MySecondObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MySecondObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MySecondObject.stringdata0))
        return static_cast<void*>(const_cast< MySecondObject*>(this));
    return MyObject::qt_metacast(_clname);
}

int MySecondObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MySecondObject::sig_sendfirst()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_MyMainObject_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyMainObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyMainObject_t qt_meta_stringdata_MyMainObject = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MyMainObject"
QT_MOC_LITERAL(1, 13, 9), // "sig_first"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16) // "slot_recivefirst"

    },
    "MyMainObject\0sig_first\0\0slot_recivefirst"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyMainObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MyMainObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyMainObject *_t = static_cast<MyMainObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_first(); break;
        case 1: _t->slot_recivefirst(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyMainObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyMainObject::sig_first)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MyMainObject::staticMetaObject = {
    { &MyObject::staticMetaObject, qt_meta_stringdata_MyMainObject.data,
      qt_meta_data_MyMainObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyMainObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyMainObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyMainObject.stringdata0))
        return static_cast<void*>(const_cast< MyMainObject*>(this));
    return MyObject::qt_metacast(_clname);
}

int MyMainObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MyMainObject::sig_first()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
