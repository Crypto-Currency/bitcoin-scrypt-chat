/****************************************************************************
** Meta object code from reading C++ file 'chatterboxpage.h'
**
** Created: Tue Jul 23 09:53:30 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/chatterboxpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatterboxpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatterboxPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      41,   15,   15,   15, 0x08,
      67,   15,   15,   15, 0x08,
      90,   15,   15,   15, 0x08,
     102,   15,   15,   15, 0x08,
     114,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChatterboxPage[] = {
    "ChatterboxPage\0\0on_loginButton_clicked()\0"
    "on_logoutButton_clicked()\0"
    "on_sayButton_clicked()\0readyRead()\0"
    "connected()\0disconnected()\0"
};

void ChatterboxPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChatterboxPage *_t = static_cast<ChatterboxPage *>(_o);
        switch (_id) {
        case 0: _t->on_loginButton_clicked(); break;
        case 1: _t->on_logoutButton_clicked(); break;
        case 2: _t->on_sayButton_clicked(); break;
        case 3: _t->readyRead(); break;
        case 4: _t->connected(); break;
        case 5: _t->disconnected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ChatterboxPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChatterboxPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChatterboxPage,
      qt_meta_data_ChatterboxPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatterboxPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatterboxPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatterboxPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatterboxPage))
        return static_cast<void*>(const_cast< ChatterboxPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChatterboxPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
