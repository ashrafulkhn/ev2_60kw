/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ev2_b1105/dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[26];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 11), // "auth_status"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 23), // "connect_charger_message"
QT_MOC_LITERAL(4, 44, 25), // "charger_connected_message"
QT_MOC_LITERAL(5, 70, 12), // "page4_action"
QT_MOC_LITERAL(6, 83, 12), // "page5_action"
QT_MOC_LITERAL(7, 96, 12), // "qrAuthorised"
QT_MOC_LITERAL(8, 109, 10), // "qrRejected"
QT_MOC_LITERAL(9, 120, 9), // "qrInvalid"
QT_MOC_LITERAL(10, 130, 14), // "connectCharger"
QT_MOC_LITERAL(11, 145, 16), // "chargerConnected"
QT_MOC_LITERAL(12, 162, 17), // "disconnectCharger"
QT_MOC_LITERAL(13, 180, 19), // "chargerDisconnected"
QT_MOC_LITERAL(14, 200, 18), // "topic_subscription"
QT_MOC_LITERAL(15, 219, 15), // "process_message"
QT_MOC_LITERAL(16, 235, 7), // "message"
QT_MOC_LITERAL(17, 243, 14), // "QMqttTopicName"
QT_MOC_LITERAL(18, 258, 5), // "topic"
QT_MOC_LITERAL(19, 264, 15), // "rfid_read_react"
QT_MOC_LITERAL(20, 280, 7), // "payload"
QT_MOC_LITERAL(21, 288, 14), // "page4_reaction"
QT_MOC_LITERAL(22, 303, 14), // "page5_reaction"
QT_MOC_LITERAL(23, 318, 18), // "brokerDisconnected"
QT_MOC_LITERAL(24, 337, 20), // "updateLogStateChange"
QT_MOC_LITERAL(25, 358, 21) // "on_btn_manual_clicked"

    },
    "Dialog\0auth_status\0\0connect_charger_message\0"
    "charger_connected_message\0page4_action\0"
    "page5_action\0qrAuthorised\0qrRejected\0"
    "qrInvalid\0connectCharger\0chargerConnected\0"
    "disconnectCharger\0chargerDisconnected\0"
    "topic_subscription\0process_message\0"
    "message\0QMqttTopicName\0topic\0"
    "rfid_read_react\0payload\0page4_reaction\0"
    "page5_reaction\0brokerDisconnected\0"
    "updateLogStateChange\0on_btn_manual_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x06 /* Public */,
       3,    2,  119,    2, 0x06 /* Public */,
       4,    2,  124,    2, 0x06 /* Public */,
       5,    2,  129,    2, 0x06 /* Public */,
       6,    0,  134,    2, 0x06 /* Public */,
       7,    0,  135,    2, 0x06 /* Public */,
       8,    0,  136,    2, 0x06 /* Public */,
       9,    0,  137,    2, 0x06 /* Public */,
      10,    0,  138,    2, 0x06 /* Public */,
      11,    0,  139,    2, 0x06 /* Public */,
      12,    0,  140,    2, 0x06 /* Public */,
      13,    0,  141,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  142,    2, 0x0a /* Public */,
      15,    2,  143,    2, 0x0a /* Public */,
      19,    2,  148,    2, 0x0a /* Public */,
      21,    2,  153,    2, 0x0a /* Public */,
      22,    0,  158,    2, 0x0a /* Public */,
      23,    0,  159,    2, 0x08 /* Private */,
      24,    0,  160,    2, 0x08 /* Private */,
      25,    0,  161,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 17,   16,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->auth_status((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->connect_charger_message((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->charger_connected_message((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->page4_action((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->page5_action(); break;
        case 5: _t->qrAuthorised(); break;
        case 6: _t->qrRejected(); break;
        case 7: _t->qrInvalid(); break;
        case 8: _t->connectCharger(); break;
        case 9: _t->chargerConnected(); break;
        case 10: _t->disconnectCharger(); break;
        case 11: _t->chargerDisconnected(); break;
        case 12: _t->topic_subscription(); break;
        case 13: _t->process_message((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QMqttTopicName(*)>(_a[2]))); break;
        case 14: _t->rfid_read_react((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->page4_reaction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->page5_reaction(); break;
        case 17: _t->brokerDisconnected(); break;
        case 18: _t->updateLogStateChange(); break;
        case 19: _t->on_btn_manual_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::auth_status)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::connect_charger_message)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::charger_connected_message)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::page4_action)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::page5_action)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::qrAuthorised)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::qrRejected)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::qrInvalid)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::connectCharger)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::chargerConnected)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::disconnectCharger)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::chargerDisconnected)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog.data,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Dialog::auth_status(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::connect_charger_message(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dialog::charger_connected_message(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dialog::page4_action(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Dialog::page5_action()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Dialog::qrAuthorised()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Dialog::qrRejected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Dialog::qrInvalid()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Dialog::connectCharger()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Dialog::chargerConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Dialog::disconnectCharger()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Dialog::chargerDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE