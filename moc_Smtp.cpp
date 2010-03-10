/****************************************************************************
** Meta object code from reading C++ file 'Smtp.h'
**
** Created: Sun Jan 24 21:59:31 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Smtp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Smtp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Smtp[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   22,    5,    5, 0x08,
      84,   72,    5,    5, 0x08,
     123,    5,    5,    5, 0x08,
     138,    5,    5,    5, 0x08,
     150,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Smtp[] = {
    "Smtp\0\0status(QString)\0socketState\0"
    "stateChanged(QTcpSocket::SocketState)\0"
    "socketError\0errorReceived(QTcpSocket::SocketError)\0"
    "disconnected()\0connected()\0readyRead()\0"
};

const QMetaObject Smtp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Smtp,
      qt_meta_data_Smtp, 0 }
};

const QMetaObject *Smtp::metaObject() const
{
    return &staticMetaObject;
}

void *Smtp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Smtp))
        return static_cast<void*>(const_cast< Smtp*>(this));
    return QObject::qt_metacast(_clname);
}

int Smtp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: stateChanged((*reinterpret_cast< QTcpSocket::SocketState(*)>(_a[1]))); break;
        case 2: errorReceived((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 3: disconnected(); break;
        case 4: connected(); break;
        case 5: readyRead(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Smtp::status(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
