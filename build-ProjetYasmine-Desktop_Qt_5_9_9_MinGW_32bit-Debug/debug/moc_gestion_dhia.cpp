/****************************************************************************
** Meta object code from reading C++ file 'gestion_dhia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjetYasmine/gestion_dhia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestion_dhia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gestion_dhia_t {
    QByteArrayData data[19];
    char stringdata0[444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gestion_dhia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gestion_dhia_t qt_meta_stringdata_gestion_dhia = {
    {
QT_MOC_LITERAL(0, 0, 12), // "gestion_dhia"
QT_MOC_LITERAL(1, 13, 21), // "on_table_zone_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 35), // "on_zone_sel_col_currentIndexC..."
QT_MOC_LITERAL(5, 78, 4), // "arg1"
QT_MOC_LITERAL(6, 83, 24), // "on_rech_zone_textChanged"
QT_MOC_LITERAL(7, 108, 27), // "on_table_infraction_clicked"
QT_MOC_LITERAL(8, 136, 41), // "on_infraction_sel_col_current..."
QT_MOC_LITERAL(9, 178, 30), // "on_rech_infraction_textChanged"
QT_MOC_LITERAL(10, 209, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 233, 27), // "on_deleteinfraction_clicked"
QT_MOC_LITERAL(12, 261, 21), // "on_deletezone_clicked"
QT_MOC_LITERAL(13, 283, 23), // "on_btnajoutzone_clicked"
QT_MOC_LITERAL(14, 307, 19), // "on_btnajout_clicked"
QT_MOC_LITERAL(15, 327, 35), // "on_id_inf_modif_currentIndexC..."
QT_MOC_LITERAL(16, 363, 36), // "on_id_modif_zone_currentIndex..."
QT_MOC_LITERAL(17, 400, 23), // "on_btnmodifzone_clicked"
QT_MOC_LITERAL(18, 424, 19) // "on_btnmodif_clicked"

    },
    "gestion_dhia\0on_table_zone_clicked\0\0"
    "index\0on_zone_sel_col_currentIndexChanged\0"
    "arg1\0on_rech_zone_textChanged\0"
    "on_table_infraction_clicked\0"
    "on_infraction_sel_col_currentIndexChanged\0"
    "on_rech_infraction_textChanged\0"
    "on_pushButton_2_clicked\0"
    "on_deleteinfraction_clicked\0"
    "on_deletezone_clicked\0on_btnajoutzone_clicked\0"
    "on_btnajout_clicked\0"
    "on_id_inf_modif_currentIndexChanged\0"
    "on_id_modif_zone_currentIndexChanged\0"
    "on_btnmodifzone_clicked\0on_btnmodif_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestion_dhia[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       4,    1,   92,    2, 0x08 /* Private */,
       6,    1,   95,    2, 0x08 /* Private */,
       7,    1,   98,    2, 0x08 /* Private */,
       8,    1,  101,    2, 0x08 /* Private */,
       9,    1,  104,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    1,  112,    2, 0x08 /* Private */,
      16,    1,  115,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gestion_dhia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gestion_dhia *_t = static_cast<gestion_dhia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_table_zone_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_zone_sel_col_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_rech_zone_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_table_infraction_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_infraction_sel_col_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_rech_infraction_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_deleteinfraction_clicked(); break;
        case 8: _t->on_deletezone_clicked(); break;
        case 9: _t->on_btnajoutzone_clicked(); break;
        case 10: _t->on_btnajout_clicked(); break;
        case 11: _t->on_id_inf_modif_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_id_modif_zone_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_btnmodifzone_clicked(); break;
        case 14: _t->on_btnmodif_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject gestion_dhia::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gestion_dhia.data,
      qt_meta_data_gestion_dhia,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gestion_dhia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestion_dhia::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gestion_dhia.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gestion_dhia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
