/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LR_6/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[415];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "addPointEnabled"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "finishFigureEnabled"
QT_MOC_LITERAL(4, 48, 9), // "cur_index"
QT_MOC_LITERAL(5, 58, 11), // "start_index"
QT_MOC_LITERAL(6, 70, 30), // "on_chooseBGColorButton_clicked"
QT_MOC_LITERAL(7, 101, 35), // "on_chooseBordersColorButton_c..."
QT_MOC_LITERAL(8, 137, 32), // "on_chooseFillColorButton_clicked"
QT_MOC_LITERAL(9, 170, 25), // "on_addPointButton_clicked"
QT_MOC_LITERAL(10, 196, 25), // "on_clearAllButton_clicked"
QT_MOC_LITERAL(11, 222, 29), // "on_finishFigureButton_clicked"
QT_MOC_LITERAL(12, 252, 21), // "on_fillButton_clicked"
QT_MOC_LITERAL(13, 274, 26), // "on_clearFillButton_clicked"
QT_MOC_LITERAL(14, 301, 16), // "changeSeedLabels"
QT_MOC_LITERAL(15, 318, 8), // "seed_pos"
QT_MOC_LITERAL(16, 327, 26), // "on_seedRadioButton_clicked"
QT_MOC_LITERAL(17, 354, 28), // "on_figureRadioButton_clicked"
QT_MOC_LITERAL(18, 383, 31) // "on_arbitraryRadioButton_clicked"

    },
    "MainWindow\0addPointEnabled\0\0"
    "finishFigureEnabled\0cur_index\0start_index\0"
    "on_chooseBGColorButton_clicked\0"
    "on_chooseBordersColorButton_clicked\0"
    "on_chooseFillColorButton_clicked\0"
    "on_addPointButton_clicked\0"
    "on_clearAllButton_clicked\0"
    "on_finishFigureButton_clicked\0"
    "on_fillButton_clicked\0on_clearFillButton_clicked\0"
    "changeSeedLabels\0seed_pos\0"
    "on_seedRadioButton_clicked\0"
    "on_figureRadioButton_clicked\0"
    "on_arbitraryRadioButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    2,   85,    2, 0x08 /* Private */,
       6,    0,   90,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addPointEnabled(); break;
        case 1: _t->finishFigureEnabled((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->on_chooseBGColorButton_clicked(); break;
        case 3: _t->on_chooseBordersColorButton_clicked(); break;
        case 4: _t->on_chooseFillColorButton_clicked(); break;
        case 5: _t->on_addPointButton_clicked(); break;
        case 6: _t->on_clearAllButton_clicked(); break;
        case 7: _t->on_finishFigureButton_clicked(); break;
        case 8: _t->on_fillButton_clicked(); break;
        case 9: _t->on_clearFillButton_clicked(); break;
        case 10: _t->changeSeedLabels((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->on_seedRadioButton_clicked(); break;
        case 12: _t->on_figureRadioButton_clicked(); break;
        case 13: _t->on_arbitraryRadioButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
