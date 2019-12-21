/****************************************************************************
** Meta object code from reading C++ file 'skinspage.h'
**
** Created: Tue Jul 23 09:53:29 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/skinspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'skinspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SkinsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   11,   10,   10, 0x05,
      67,   59,   10,   10, 0x05,
      97,   83,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     126,   10,   10,   10, 0x08,
     134,   10,   10,   10, 0x08,
     152,  141,   10,   10, 0x08,
     176,   10,   10,   10, 0x08,
     192,   10,   10,   10, 0x08,
     225,  207,  202,   10, 0x08,
     270,  264,   10,   10, 0x08,
     302,  264,   10,   10, 0x08,
     335,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SkinsPage[] = {
    "SkinsPage\0\0title,message,modal\0"
    "error(QString,QString,bool)\0message\0"
    "status(QString)\0title,message\0"
    "information(QString,QString)\0reset()\0"
    "find()\0row,column\0openFileOfItem(int,int)\0"
    "optionChanged()\0getlist()\0bool\0"
    "reply,urlDownload\0"
    "netHandleError(QNetworkReply*,QString)\0"
    "reply\0getListFinished(QNetworkReply*)\0"
    "downloadFinished(QNetworkReply*)\0"
    "networkTimeout()\0"
};

void SkinsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SkinsPage *_t = static_cast<SkinsPage *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->information((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->reset(); break;
        case 4: _t->find(); break;
        case 5: _t->openFileOfItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->optionChanged(); break;
        case 7: _t->getlist(); break;
        case 8: { bool _r = _t->netHandleError((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->getListFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->downloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->networkTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SkinsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SkinsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SkinsPage,
      qt_meta_data_SkinsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SkinsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SkinsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SkinsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SkinsPage))
        return static_cast<void*>(const_cast< SkinsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int SkinsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SkinsPage::error(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SkinsPage::status(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SkinsPage::information(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
