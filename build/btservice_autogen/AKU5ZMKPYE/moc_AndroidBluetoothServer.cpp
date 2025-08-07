/****************************************************************************
** Meta object code from reading C++ file 'AndroidBluetoothServer.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/f1x/openauto/btservice/AndroidBluetoothServer.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AndroidBluetoothServer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_f1x__openauto__btservice__AndroidBluetoothServer_t {
    QByteArrayData data[3];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_f1x__openauto__btservice__AndroidBluetoothServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_f1x__openauto__btservice__AndroidBluetoothServer_t qt_meta_stringdata_f1x__openauto__btservice__AndroidBluetoothServer = {
    {
QT_MOC_LITERAL(0, 0, 48), // "f1x::openauto::btservice::And..."
QT_MOC_LITERAL(1, 49, 17), // "onClientConnected"
QT_MOC_LITERAL(2, 67, 0) // ""

    },
    "f1x::openauto::btservice::AndroidBluetoothServer\0"
    "onClientConnected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_f1x__openauto__btservice__AndroidBluetoothServer[] = {

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

void f1x::openauto::btservice::AndroidBluetoothServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AndroidBluetoothServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onClientConnected(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject f1x::openauto::btservice::AndroidBluetoothServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_f1x__openauto__btservice__AndroidBluetoothServer.data,
    qt_meta_data_f1x__openauto__btservice__AndroidBluetoothServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *f1x::openauto::btservice::AndroidBluetoothServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *f1x::openauto::btservice::AndroidBluetoothServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_f1x__openauto__btservice__AndroidBluetoothServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IAndroidBluetoothServer"))
        return static_cast< IAndroidBluetoothServer*>(this);
    return QObject::qt_metacast(_clname);
}

int f1x::openauto::btservice::AndroidBluetoothServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
