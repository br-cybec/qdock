/****************************************************************************
** Meta object code from reading C++ file 'AppLauncher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/AppLauncher.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppLauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_AppLauncher_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[12];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[18];
    char stringdata8[21];
    char stringdata9[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AppLauncher_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AppLauncher_t qt_meta_stringdata_AppLauncher = {
    {
        QT_MOC_LITERAL(0, 11),  // "AppLauncher"
        QT_MOC_LITERAL(12, 11),  // "appLaunched"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 3),  // "pid"
        QT_MOC_LITERAL(29, 11),  // "execCommand"
        QT_MOC_LITERAL(41, 11),  // "appFinished"
        QT_MOC_LITERAL(53, 8),  // "exitCode"
        QT_MOC_LITERAL(62, 17),  // "onProcessFinished"
        QT_MOC_LITERAL(80, 20),  // "QProcess::ExitStatus"
        QT_MOC_LITERAL(101, 6)   // "status"
    },
    "AppLauncher",
    "appLaunched",
    "",
    "pid",
    "execCommand",
    "appFinished",
    "exitCode",
    "onProcessFinished",
    "QProcess::ExitStatus",
    "status"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AppLauncher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,
       5,    2,   37,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   42,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    6,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject AppLauncher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppLauncher.offsetsAndSizes,
    qt_meta_data_AppLauncher,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AppLauncher_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AppLauncher, std::true_type>,
        // method 'appLaunched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'appFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onProcessFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>
    >,
    nullptr
} };

void AppLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppLauncher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appLaunched((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->appFinished((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->onProcessFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppLauncher::*)(qint64 , const QString & );
            if (_t _q_method = &AppLauncher::appLaunched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppLauncher::*)(qint64 , int );
            if (_t _q_method = &AppLauncher::appFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AppLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppLauncher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AppLauncher::appLaunched(qint64 _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppLauncher::appFinished(qint64 _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
