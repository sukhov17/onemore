/****************************************************************************
** Meta object code from reading C++ file 'optionswindow.h'
**
** Created: Tue 1. May 17:02:51 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SSS_game/optionswindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   14,   14,   14, 0x08,
      58,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OptionsWindow[] = {
    "OptionsWindow\0\0setWindowId(int)\0"
    "on_acceptButton_clicked()\0"
    "on_backButton_clicked()\0"
};

void OptionsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionsWindow *_t = static_cast<OptionsWindow *>(_o);
        switch (_id) {
        case 0: _t->setWindowId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_acceptButton_clicked(); break;
        case 2: _t->on_backButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OptionsWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionsWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OptionsWindow,
      qt_meta_data_OptionsWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsWindow))
        return static_cast<void*>(const_cast< OptionsWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int OptionsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OptionsWindow::setWindowId(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
