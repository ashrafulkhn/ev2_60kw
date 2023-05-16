#include "dialog.h"
#include "ui_dialog.h"
#include <QPixmap>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QtMqtt/QMqttClient>
#include <thread>
#include <chrono>
#include <QThread>
#include <QLineEdit>
#include <QHostInfo>
#include <QNetworkInterface>

Dialog::Dialog(QWidget *parent) : QDialog(parent) , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //Set index to the home page on starting
    ui->stackedWidget_1->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);

    //Set car image
    QPixmap ev_car(":/data/image/ev_car.png");
    QPixmap ev_car_tranformed = ev_car.scaledToWidth(400, Qt::SmoothTransformation);
    //    QPixmap ev_car_mirrored = ev_car_tranformed.mirrored(true,false);
    QImage ev_car_image = ev_car_tranformed.toImage();
    QImage mirrored_ev_car_image = ev_car_image.mirrored(true, false);
    QPixmap mirrored_ev_car = QPixmap::fromImage(mirrored_ev_car_image);
    //    ui->label_4->setPixmap(mirrored_ev_car);
    ui->label_4->setPixmap(ev_car_tranformed);
    ui->label_7->setPixmap(mirrored_ev_car);

    //:::::::::::::::::::    MQTT Section   :::::::::::::::::::::::::::::::::::
    m_client = new QMqttClient(this);
//    m_client->setHostname("192.168.43.154");
        m_client->setHostname("192.168.3.11");
//    m_client->setHostname(getLocalIpAddress());
    m_client->setPort(1883);

    connect_to_broker();
    m_client->requestPing();

    connect(m_client, &QMqttClient::stateChanged, this, &Dialog::updateLogStateChange);
    connect(m_client, &QMqttClient::disconnected, this, &Dialog::brokerDisconnected);
    connect(m_client, &QMqttClient::connected, this, &Dialog::topic_subscription);
    connect(m_client, &QMqttClient::messageReceived, this, &Dialog::process_message);

    //:::::::::::::::::::    MQTT Section   :::::::::::::::::::::::::::::::::::

    qDebug() << "State:" << m_client->state();

    // Connect signals to slots for custom events
//    QObject::connect(this, &Dialog::rfid_read_action, this, &Dialog::rfid_read_react);
//    QObject::connect(this, &Dialog::idAuthorisation, this, &Dialog::);

    connect(this, &Dialog::auth_status, this, &Dialog::rfid_read_react);
    connect(this, &Dialog::connect_charger_message, this, &Dialog::rfid_read_react);
    connect(this, &Dialog::charger_connected_message, this, &Dialog::rfid_read_react);
    connect(this, &Dialog::page4_action, this, &Dialog::page4_reaction);
    connect(this, &Dialog::page5_action, this, &Dialog::page5_reaction);

    connect(m_client, &QMqttClient::pingResponseReceived, this, [this]() {
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String(" PingResponse")
                    + QLatin1Char('\n');
        qDebug() << "Ping Response: " << content;
    });

//    updateLogStateChange();
//    topic_subscription();

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::setClientPort(int p)
{
    m_client->setPort(p);
}


void Dialog::on_pushButton_2_clicked()
{
    ui->stackedWidget_1->setCurrentIndex(0);
}


void Dialog::on_pushButton_3_clicked()
{
    ui->stackedWidget_1->setCurrentIndex(1);
}


void Dialog::on_pushButton_clicked()
{
    ui->stackedWidget_1->setCurrentIndex(2);
}


void Dialog::on_pushButton_4_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}


void Dialog::on_pushButton_5_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}


void Dialog::on_pushButton_6_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}


void Dialog::on_pushButton_7_clicked()
{
    ui->stackedWidget_1->setCurrentIndex(3);
}


void Dialog::on_pushButton_8_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
}


//void Dialog::on_buttonConnect_clicked()
//{
//    if (m_client->state() == QMqttClient::Disconnected) {
//        ui->buttonConnect->setText(tr("Disconnect"));
//        m_client->connectToHost();
//        qDebug() << "on_buttonConnect_clicked" << m_client->state();
//    }
//    else {
//            ui->buttonConnect->setText(tr("Connect"));
//            m_client->disconnectFromHost();
//        }
//}

void Dialog::topic_subscription(){
    if (m_client->state() == QMqttClient::Connected){
        auto subscription = m_client->subscribe(auth_stat);
        m_client->subscribe(connect_string);
        m_client->subscribe(charger_connected);
        m_client->subscribe(charge_stopped);
        m_client->subscribe(soc_1);
        m_client->subscribe(voltage_1);
        m_client->subscribe(current_1);
        m_client->subscribe(full_soc_1);
        m_client->subscribe(energy_1);
        if (!subscription) {
                ui->stackedWidget_1->setCurrentIndex(0);
                ui->stackedWidget_2->setCurrentIndex(0);
                return;
            }
            else {
                    qDebug() << "State: " << m_client->state();
                }

        m_client->subscribe(i111);
        m_client->subscribe(voltage_1);
        m_client->subscribe(current_1);
        m_client->subscribe(i141);
        m_client->subscribe(i151);
        m_client->subscribe(i161);
        m_client->subscribe(i171);
        m_client->subscribe(i181);
        m_client->subscribe(i191);
        m_client->subscribe(i1101);
        m_client->subscribe(i1111);
        m_client->subscribe(soc_1);
        m_client->subscribe(full_soc_1);
        m_client->subscribe(i1141);
        m_client->subscribe(i1151);
        m_client->subscribe(i116);
        m_client->subscribe(i117);
        m_client->subscribe(i118);
        m_client->subscribe(energy_1);
        m_client->subscribe(i1201);
        m_client->subscribe(i1211);
        m_client->subscribe(i1221);
        m_client->subscribe(i211);
        m_client->subscribe(i221);
        m_client->subscribe(i231);
        m_client->subscribe(i241);
        m_client->subscribe(i251);
        m_client->subscribe(i261);
        m_client->subscribe(i271);
        m_client->subscribe(i281);
        m_client->subscribe(i291);
        m_client->subscribe(i2101);

        //Gun 2 Topics
        m_client->subscribe(i112);
        m_client->subscribe(voltage_2);
        m_client->subscribe(current_2);
        m_client->subscribe(i142);
        m_client->subscribe(i152);
        m_client->subscribe(i162);
        m_client->subscribe(i172);
        m_client->subscribe(i182);
        m_client->subscribe(i192);
        m_client->subscribe(i1102);
        m_client->subscribe(i1112);
        m_client->subscribe(soc_2);
        m_client->subscribe(full_soc_2);
        m_client->subscribe(i1142);
        m_client->subscribe(i1152);
        m_client->subscribe(i116);
        m_client->subscribe(i117);
        m_client->subscribe(i118);
        m_client->subscribe(energy_2);
        m_client->subscribe(i1202);
        m_client->subscribe(i1212);
        m_client->subscribe(i1222);
        m_client->subscribe(i212);
        m_client->subscribe(i222);
        m_client->subscribe(i232);
        m_client->subscribe(i242);
        m_client->subscribe(i252);
        m_client->subscribe(i262);
        m_client->subscribe(i272);
        m_client->subscribe(i282);
        m_client->subscribe(i292);
        m_client->subscribe(i2102);


    }
    else {
        ui->stackedWidget_1->setCurrentIndex(0);
        ui->stackedWidget_2->setCurrentIndex(0);
    }
}

void Dialog::rfid_read_react(QString payload, QString topic){
    ui->stackedWidget_1->setCurrentIndex(2);
    if (payload == pending){
        ui->auth_status->setText("Pending...");
    }
    else if (payload == deauth){
        ui->auth_status->setText("RFID Rejected...");
        ui->stackedWidget_1->setCurrentIndex(1);
        ui->auth_status->setText("Please wait...");
    }
    else if (payload == auth){
        ui->auth_status->setText("RFID Authorised.");
        ui->connect_stat->setText("Please Connect the Charger");
    }
    else{
        ui->auth_status->setText("Please Wait....");
    }

    if (topic == connect_string){
        ui->connect_stat->setText(getConnectString());
    }
}

void Dialog::page4_reaction(QString payload, QString topic)
{
    if (topic == charger_connected){
        if(payload == QString(STATE_B)){
            ui->stackedWidget_1->setCurrentIndex(3);
        }
        else if (payload == STATE_A) {
            ui->stackedWidget_1->setCurrentIndex(1);
        }

    }
}

void Dialog::page5_reaction()
{
    ui->stackedWidget_1->setCurrentIndex(4);
}

void Dialog::process_message(const QByteArray &message, const QMqttTopicName &topic){
    QString topicName = topic.name();
    QString payload = QString::fromUtf8(message);

    qDebug() << "Tpoic : " << topicName << " Payload : " << payload;

    if(topic == (auth_stat)){
        emit auth_status(payload, topicName);
    }
    else if(topic == (connect_string)){
        setConnectString(payload);
        emit auth_status(payload, topicName);
    }

    else if (topic == charger_connected){
        emit page4_action(payload, topicName);
    }
    else if (topic == soc_1){
        ui->soc_val_g1->setText(payload + " %");
    }
    else if (topic == voltage_1){
        ui->voltage_val_g1->setText(payload + " V");
    }
    else if (topic == current_1){
        ui->current_val_g1->setText(payload + " A");
    }
    else if (topic == full_soc_1){
        ui->time_t_f_soc_val_g1->setText(payload + " Sec");
    }
    else if (topic == energy_1){
        ui->energy_cons_val_g1->setText(payload + " kWh");
    }
    else if (topic == charge_stopped) {
        emit page5_action();
    }
}

QString Dialog::getLocalIpAddress()
{
    QList<QHostAddress> ipAddressesList;

    // Get a list of network interfaces
    QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();

    // Iterate through the interfaces to find the one with the IPv4 address
    for (int i = 0; i < interfaces.count(); i++) {
        QNetworkInterface iface = interfaces.at(i);
        if (iface.flags().testFlag(QNetworkInterface::IsUp) && !iface.flags().testFlag(QNetworkInterface::IsLoopBack)) {
            QList<QNetworkAddressEntry> entries = iface.addressEntries();
            for (int j = 0; j < entries.count(); j++) {
                QNetworkAddressEntry entry = entries.at(j);
                if (entry.ip().protocol() == QAbstractSocket::IPv4Protocol) {
                    ipAddressesList.append(entry.ip());
                    QString IP = entry.ip().toString();
                    qDebug() << "IP Address : " << IP;
                }
            }
        }
    }

    // Return the first IPv4 address found
    if (!ipAddressesList.isEmpty())
        return ipAddressesList.first().toString();
    else
        return QString();
}


void Dialog::connect_to_broker(){
    if (m_client->state() == QMqttClient::Disconnected) {
//        ui->buttonConnect->setText(tr("Disconnect"));
        m_client->connectToHost();
        qDebug() << "connect_to_broker" << m_client->state();
        ui->stackedWidget_1->setCurrentIndex(1);
    }
    else {
//            ui->buttonConnect->setText(tr("Connect"));
            m_client->disconnectFromHost();
        }
}

void Dialog::brokerDisconnected()
{
    qDebug() << "brokerDisconnected" << m_client->state();
//    ui->buttonConnect->setText(tr("Connect"));
    ui->stackedWidget_1->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
}

void Dialog::updateLogStateChange(){
    qDebug() << "updateLogStateChange" << m_client->state();
    if(m_client->state()==2){
        ui->stackedWidget_1->setCurrentIndex(1);
        ui->stackedWidget_2->setCurrentIndex(1);
    }
    if(m_client->state()==0){
        ui->stackedWidget_1->setCurrentIndex(0);
        ui->stackedWidget_2->setCurrentIndex(0);
    }
}


void Dialog::on_btn_manual_clicked()
{
    _manual_op = new manual_op(m_client);
    _manual_op->setModal(true);
    _manual_op->setWindowTitle("::: Manual Mode :::");
    _manual_op->showFullScreen();
//    _manual_op->showMaximized();
    _manual_op->exec();
}

void Dialog::setConnectString(QString iPayload)
{
    ConnectString = iPayload;
}

QString Dialog::getConnectString()
{
    return ConnectString;
}

std::string Dialog::getStopMessage() {
    return stopMessage;
}
