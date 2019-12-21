/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created: Tue Jul 23 09:53:23 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   12,   11,   11, 0x0a,
      71,   63,   11,   11, 0x2a,
     104,   98,   11,   11, 0x0a,
     146,  127,   11,   11, 0x0a,
     184,  168,   11,   11, 0x0a,
     211,  204,   11,   11, 0x0a,
     256,  236,   11,   11, 0x0a,
     298,  284,   11,   11, 0x0a,
     327,   63,   11,   11, 0x0a,
     363,  343,   11,   11, 0x0a,
     391,  384,   11,   11, 0x0a,
     410,   11,   11,   11, 0x08,
     429,   11,   11,   11, 0x08,
     446,   11,   11,   11, 0x08,
     464,   11,   11,   11, 0x08,
     486,   11,   11,   11, 0x08,
     502,   11,   11,   11, 0x08,
     523,   11,   11,   11, 0x08,
     546,   11,   11,   11, 0x08,
     566,   11,   11,   11, 0x08,
     584,  579,   11,   11, 0x08,
     612,   11,   11,   11, 0x28,
     633,  579,   11,   11, 0x08,
     663,   11,   11,   11, 0x28,
     686,   11,   11,   11, 0x08,
     703,   11,   11,   11, 0x08,
     725,  718,   11,   11, 0x08,
     795,  778,   11,   11, 0x08,
     836,  204,   11,   11, 0x08,
     856,   11,   11,   11, 0x08,
     876,   11,   11,   11, 0x08,
     890,   11,   11,   11, 0x08,
     905,   11,   11,   11, 0x08,
     917,   11,   11,   11, 0x08,
     932,   11,   11,   11, 0x08,
     951,   11,   11,   11, 0x08,
     980,  966,   11,   11, 0x08,
    1008,   11,   11,   11, 0x28,
    1032,   11,   11,   11, 0x08,
    1047,   11,   11,   11, 0x08,
    1067,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BitcoinGUI[] = {
    "BitcoinGUI\0\0message,quickSleep\0"
    "splashMessage(std::string,bool)\0message\0"
    "splashMessage(std::string)\0count\0"
    "setNumConnections(int)\0count,countOfPeers\0"
    "setNumBlocks(int,int)\0mining,hashrate\0"
    "setMining(bool,int)\0status\0"
    "setEncryptionStatus(int)\0title,message,modal\0"
    "error(QString,QString,bool)\0title,message\0"
    "information(QString,QString)\0"
    "status(QString)\0nFeeRequired,payFee\0"
    "askFee(qint64,bool*)\0strURI\0"
    "handleURI(QString)\0gotoOverviewPage()\0"
    "gotoMiningPage()\0gotoHistoryPage()\0"
    "gotoAddressBookPage()\0gotoSkinsPage()\0"
    "gotoChatterboxPage()\0gotoReceiveCoinsPage()\0"
    "gotoSendCoinsPage()\0openConfig()\0addr\0"
    "gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,end\0"
    "incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0unlockWalletStake()\0"
    "checkWallet()\0repairWallet()\0zapWallet()\0"
    "backupWallet()\0changePassphrase()\0"
    "unlockWallet()\0fToggleHidden\0"
    "showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
    "updateMintingIcon()\0updateMintingWeights()\0"
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->splashMessage((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->splashMessage((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setMining((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->information((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 10: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->gotoOverviewPage(); break;
        case 12: _t->gotoMiningPage(); break;
        case 13: _t->gotoHistoryPage(); break;
        case 14: _t->gotoAddressBookPage(); break;
        case 15: _t->gotoSkinsPage(); break;
        case 16: _t->gotoChatterboxPage(); break;
        case 17: _t->gotoReceiveCoinsPage(); break;
        case 18: _t->gotoSendCoinsPage(); break;
        case 19: _t->openConfig(); break;
        case 20: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->gotoSignMessageTab(); break;
        case 22: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->gotoVerifyMessageTab(); break;
        case 24: _t->optionsClicked(); break;
        case 25: _t->aboutClicked(); break;
        case 26: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 27: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 28: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->unlockWalletStake(); break;
        case 30: _t->checkWallet(); break;
        case 31: _t->repairWallet(); break;
        case 32: _t->zapWallet(); break;
        case 33: _t->backupWallet(); break;
        case 34: _t->changePassphrase(); break;
        case 35: _t->unlockWallet(); break;
        case 36: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->showNormalIfMinimized(); break;
        case 38: _t->toggleHidden(); break;
        case 39: _t->updateMintingIcon(); break;
        case 40: _t->updateMintingWeights(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BitcoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI,
      qt_meta_data_BitcoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BitcoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
