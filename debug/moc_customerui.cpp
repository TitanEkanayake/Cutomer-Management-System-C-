/****************************************************************************
** Meta object code from reading C++ file 'customerui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ClientRegistration/customerui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customerui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_customerui_t {
    QByteArrayData data[14];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_customerui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_customerui_t qt_meta_stringdata_customerui = {
    {
QT_MOC_LITERAL(0, 0, 10), // "customerui"
QT_MOC_LITERAL(1, 11, 22), // "on_tableView_activated"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 47, 5), // "index"
QT_MOC_LITERAL(5, 53, 21), // "on_refreshbtn_clicked"
QT_MOC_LITERAL(6, 75, 18), // "on_savebtn_clicked"
QT_MOC_LITERAL(7, 94, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 116, 20), // "on_cleearbtn_clicked"
QT_MOC_LITERAL(9, 137, 20), // "on_updatebtn_clicked"
QT_MOC_LITERAL(10, 158, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(11, 190, 4), // "arg1"
QT_MOC_LITERAL(12, 195, 17), // "on_nicbtn_clicked"
QT_MOC_LITERAL(13, 213, 20) // "on_deletebtn_clicked"

    },
    "customerui\0on_tableView_activated\0\0"
    "QModelIndex\0index\0on_refreshbtn_clicked\0"
    "on_savebtn_clicked\0on_pushButton_clicked\0"
    "on_cleearbtn_clicked\0on_updatebtn_clicked\0"
    "on_comboBox_currentIndexChanged\0arg1\0"
    "on_nicbtn_clicked\0on_deletebtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_customerui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void customerui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<customerui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_refreshbtn_clicked(); break;
        case 2: _t->on_savebtn_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_cleearbtn_clicked(); break;
        case 5: _t->on_updatebtn_clicked(); break;
        case 6: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_nicbtn_clicked(); break;
        case 8: _t->on_deletebtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject customerui::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_customerui.data,
    qt_meta_data_customerui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *customerui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *customerui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_customerui.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int customerui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
