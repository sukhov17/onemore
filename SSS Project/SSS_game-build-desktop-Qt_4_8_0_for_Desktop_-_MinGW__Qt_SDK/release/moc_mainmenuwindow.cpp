/****************************************************************************
** Meta object code from reading C++ file 'mainmenuwindow.h'
**
** Created: Tue 1. May 17:02:50 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SSS_game/mainmenuwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenuwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainMenuWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   15,   15,   15, 0x08,
      60,   15,   15,   15, 0x08,
      88,   15,   15,   15, 0x08,
     122,   15,   15,   15, 0x08,
     149,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainMenuWindow[] = {
    "MainMenuWindow\0\0setWindowId(int)\0"
    "on_newGameButton_clicked()\0"
    "on_loadGameButton_clicked()\0"
    "on_scenarioEditorButton_clicked()\0"
    "on_optionsButton_clicked()\0"
    "on_exitButton_clicked()\0"
};

void MainMenuWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainMenuWindow *_t = static_cast<MainMenuWindow *>(_o);
        switch (_id) {
        case 0: _t->setWindowId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_newGameButton_clicked(); break;
        case 2: _t->on_loadGameButton_clicked(); break;
        case 3: _t->on_scenarioEditorButton_clicked(); break;
        case 4: _t->on_optionsButton_clicked(); break;
        case 5: _t->on_exitButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainMenuWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainMenuWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainMenuWindow,
      qt_meta_data_MainMenuWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainMenuWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainMenuWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainMenuWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainMenuWindow))
        return static_cast<void*>(const_cast< MainMenuWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainMenuWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void MainMenuWindow::setWindowId(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
