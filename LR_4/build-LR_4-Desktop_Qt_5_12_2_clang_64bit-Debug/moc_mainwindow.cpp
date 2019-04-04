/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LR_4/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "buildCircleEnabled"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 24), // "buildVisualCircleEnabled"
QT_MOC_LITERAL(4, 56, 19), // "buildEllipseEnabled"
QT_MOC_LITERAL(5, 76, 25), // "buildVisualEllipseEnabled"
QT_MOC_LITERAL(6, 102, 23), // "on_chooseButton_clicked"
QT_MOC_LITERAL(7, 126, 27), // "on_clearSceneButton_clicked"
QT_MOC_LITERAL(8, 154, 24), // "on_radioButton_6_clicked"
QT_MOC_LITERAL(9, 179, 24), // "on_radioButton_7_clicked"
QT_MOC_LITERAL(10, 204, 28), // "on_buildCircleButton_clicked"
QT_MOC_LITERAL(11, 233, 29), // "on_buildEllipseButton_clicked"
QT_MOC_LITERAL(12, 263, 34), // "on_buildVisualCircleButton_cl..."
QT_MOC_LITERAL(13, 298, 35), // "on_buildVisualEllipseButton_c..."
QT_MOC_LITERAL(14, 334, 32) // "on_drawCircleChartButton_clicked"

    },
    "MainWindow\0buildCircleEnabled\0\0"
    "buildVisualCircleEnabled\0buildEllipseEnabled\0"
    "buildVisualEllipseEnabled\0"
    "on_chooseButton_clicked\0"
    "on_clearSceneButton_clicked\0"
    "on_radioButton_6_clicked\0"
    "on_radioButton_7_clicked\0"
    "on_buildCircleButton_clicked\0"
    "on_buildEllipseButton_clicked\0"
    "on_buildVisualCircleButton_clicked\0"
    "on_buildVisualEllipseButton_clicked\0"
    "on_drawCircleChartButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 0: _t->buildCircleEnabled(); break;
        case 1: _t->buildVisualCircleEnabled(); break;
        case 2: _t->buildEllipseEnabled(); break;
        case 3: _t->buildVisualEllipseEnabled(); break;
        case 4: _t->on_chooseButton_clicked(); break;
        case 5: _t->on_clearSceneButton_clicked(); break;
        case 6: _t->on_radioButton_6_clicked(); break;
        case 7: _t->on_radioButton_7_clicked(); break;
        case 8: _t->on_buildCircleButton_clicked(); break;
        case 9: _t->on_buildEllipseButton_clicked(); break;
        case 10: _t->on_buildVisualCircleButton_clicked(); break;
        case 11: _t->on_buildVisualEllipseButton_clicked(); break;
        case 12: _t->on_drawCircleChartButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
