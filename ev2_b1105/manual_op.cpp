#include "manual_op.h"
#include "ui_manual_op.h"
#include "dialog.h"

manual_op::manual_op(QMqttClient *m_client, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manual_op),
    m_client_w2(m_client)

{
    ui->setupUi(this);

    //Set index to the home page on starting
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);

    QString a = "Hello";
    m_client_w2->subscribe(a);
    topic_subscription();
    connect(m_client_w2, &QMqttClient::connected, this, &manual_op::topic_subscription);
    connect(m_client_w2, &QMqttClient::messageReceived, this, &manual_op::process_message);

}

manual_op::~manual_op()
{
    delete ui;
}

void manual_op::on_pushButton_clicked()
{
    m_client_w2->publish(man_command_topic_1, (stop_message_1 + ":" + ":").toUtf8());
    m_client_w2->publish(man_command_topic_2, (stop_message_2 + ":" + ":").toUtf8());
    close();
}

void manual_op::topic_subscription(){
    if (m_client_w2->state() == QMqttClient::Connected){

        auto subscription = m_client_w2->subscribe(voltage_value_topic_1, 0);
        m_client_w2->subscribe(current_value_topic_1, 0);
        m_client_w2->subscribe(voltage_value_topic_2, 0);
        m_client_w2->subscribe(current_value_topic_2, 0);


            if (!subscription) {
//                ui->serv_status->setText("Error. Could not connect to Broker.");

//                QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not subscribe. Is there a valid connection?"));
                qDebug() << "Window 2 sub (false) State: " << m_client_w2->state();
                return;
            }
            else {
//                    ui->serv_status->setText("Subscribed to Broker Successfully.");
                    //QMessageBox::critical(this, QLatin1String("Success!!"), QLatin1String("Subscribed Successfully."));
//                    Dialog::setWindowTitle("Charger Connected to :: " + ui->lineEdit_2->text());
                    qDebug() << "Window 2 sub (true) State: " << m_client_w2->state();
                }
            qDebug() << "Window 2 sub (if connected) State: " << m_client_w2->state();
    }
}

void manual_op::process_message(const QByteArray &message, const QMqttTopicName &topic){
    if (topic == voltage_value_topic_1){
        ui->label_13->setText(message + "V");
    }
    if (topic == current_value_topic_1){
        ui->label_12->setText(message + "A");
    }
    if (topic == voltage_value_topic_2){
        ui->label_17->setText(message + "V");
    }
    if (topic == current_value_topic_2){
        ui->label_15->setText(message + "A");
    }

    qDebug() << "Recieved Message :: " << message << " on Topic : " << topic ;

}

void manual_op::on_pushButton_4_clicked()
{
    QString voltage = ui->lineEdit_2->text();
    QString current = ui->lineEdit->text();


    if (m_client_w2->publish(man_command_topic_1, (start_messsgae_1 + ":" + voltage + ":" + current).toUtf8()) == -1){
        qDebug() << "Message not published.";
    }
    else{
        qDebug() << "Start Message published.";
    }
}

void manual_op::on_pushButton_5_clicked()
{
    if (m_client_w2->publish(man_command_topic_1, (stop_message_1 + ":" + ":").toUtf8()) == -1){
        qDebug() << "Message not published." << man_command_topic_1;
    }
    else{
        qDebug() << "Start Message published." << man_command_topic_1;
    }
}


void manual_op::on_pushButton_6_clicked()
{
    QString voltage = ui->lineEdit_4->text();
    QString current = ui->lineEdit_3->text();


    if (m_client_w2->publish(man_command_topic_2, (start_messsgae_2 + ":" + voltage + ":" + current).toUtf8()) == -1){
        qDebug() << "Message not published." << man_command_topic_2;
    }
    else{
        qDebug() << "Start Message published." << man_command_topic_2;
    }
}


void manual_op::on_pushButton_7_clicked()
{
    if (m_client_w2->publish(man_command_topic_2, (stop_message_2+":"+":").toUtf8()) == -1){
        qDebug() << "Message not published." << man_command_topic_2;
    }
    else{
        qDebug() << "Start Message published." << man_command_topic_2;
    }
}

