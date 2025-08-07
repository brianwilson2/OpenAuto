/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelWaitingForDevice;
    QLabel *label;
    QPushButton *pushButtonSettings;
    QPushButton *pushButtonExit;
    QLabel *labelPluginDeviceText;
    QLabel *labelProjectHomePage;
    QLabel *labelDistractionWarningIcon;
    QLabel *labelDistractionWarning;
    QLabel *labelCertificationWarning;
    QLabel *labelCertificationWarningIcon;
    QLabel *labelCopyrightsInfoIcon;
    QLabel *labelTrademark;
    QPushButton *pushButtonToggleCursor;
    QPushButton *pushButtonWirelessConnection;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(238, 238, 236);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelWaitingForDevice = new QLabel(centralwidget);
        labelWaitingForDevice->setObjectName(QString::fromUtf8("labelWaitingForDevice"));
        labelWaitingForDevice->setGeometry(QRect(290, 30, 281, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 20, 101, 101));
        pushButtonSettings = new QPushButton(centralwidget);
        pushButtonSettings->setObjectName(QString::fromUtf8("pushButtonSettings"));
        pushButtonSettings->setGeometry(QRect(630, 330, 161, 41));
        pushButtonSettings->setAutoDefault(false);
        pushButtonExit = new QPushButton(centralwidget);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(630, 380, 161, 41));
        pushButtonExit->setAutoDefault(false);
        labelPluginDeviceText = new QLabel(centralwidget);
        labelPluginDeviceText->setObjectName(QString::fromUtf8("labelPluginDeviceText"));
        labelPluginDeviceText->setGeometry(QRect(340, 70, 301, 31));
        labelProjectHomePage = new QLabel(centralwidget);
        labelProjectHomePage->setObjectName(QString::fromUtf8("labelProjectHomePage"));
        labelProjectHomePage->setGeometry(QRect(10, 440, 271, 31));
        labelDistractionWarningIcon = new QLabel(centralwidget);
        labelDistractionWarningIcon->setObjectName(QString::fromUtf8("labelDistractionWarningIcon"));
        labelDistractionWarningIcon->setGeometry(QRect(30, 170, 31, 41));
        labelDistractionWarning = new QLabel(centralwidget);
        labelDistractionWarning->setObjectName(QString::fromUtf8("labelDistractionWarning"));
        labelDistractionWarning->setGeometry(QRect(80, 130, 531, 101));
        labelDistractionWarning->setWordWrap(true);
        labelCertificationWarning = new QLabel(centralwidget);
        labelCertificationWarning->setObjectName(QString::fromUtf8("labelCertificationWarning"));
        labelCertificationWarning->setGeometry(QRect(80, 240, 531, 121));
        labelCertificationWarning->setWordWrap(true);
        labelCertificationWarningIcon = new QLabel(centralwidget);
        labelCertificationWarningIcon->setObjectName(QString::fromUtf8("labelCertificationWarningIcon"));
        labelCertificationWarningIcon->setGeometry(QRect(30, 270, 31, 41));
        labelCopyrightsInfoIcon = new QLabel(centralwidget);
        labelCopyrightsInfoIcon->setObjectName(QString::fromUtf8("labelCopyrightsInfoIcon"));
        labelCopyrightsInfoIcon->setGeometry(QRect(410, 440, 21, 31));
        labelTrademark = new QLabel(centralwidget);
        labelTrademark->setObjectName(QString::fromUtf8("labelTrademark"));
        labelTrademark->setGeometry(QRect(440, 440, 351, 31));
        pushButtonToggleCursor = new QPushButton(centralwidget);
        pushButtonToggleCursor->setObjectName(QString::fromUtf8("pushButtonToggleCursor"));
        pushButtonToggleCursor->setGeometry(QRect(630, 230, 161, 41));
        pushButtonToggleCursor->setAutoDefault(false);
        pushButtonWirelessConnection = new QPushButton(centralwidget);
        pushButtonWirelessConnection->setObjectName(QString::fromUtf8("pushButtonWirelessConnection"));
        pushButtonWirelessConnection->setGeometry(QRect(630, 280, 161, 41));
        pushButtonWirelessConnection->setAutoDefault(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 370, 551, 61));
        label_2->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(pushButtonToggleCursor, pushButtonWirelessConnection);
        QWidget::setTabOrder(pushButtonWirelessConnection, pushButtonSettings);
        QWidget::setTabOrder(pushButtonSettings, pushButtonExit);

        retranslateUi(MainWindow);

        pushButtonSettings->setDefault(false);
        pushButtonToggleCursor->setDefault(false);
        pushButtonWirelessConnection->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelWaitingForDevice->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#3465a4;\">Waiting for device...</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/ico_androidauto.png\"/></p></body></html>", nullptr));
        pushButtonSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        labelPluginDeviceText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic; color:#eeeeec;\">Plug in your device to start AndroidAuto (tm).</span></p></body></html>", nullptr));
        labelProjectHomePage->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"https://github.com/f1xpl/openauto\"><span style=\" text-decoration: underline; color:#007af4;\">https://github.com/f1xpl/openauto</span></a></p></body></html>", nullptr));
        labelDistractionWarningIcon->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/ico_warning.png\"/></p></body></html>", nullptr));
        labelDistractionWarning->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ef2929;\">WARNING!</span></p><p><span style=\" color:#ef2929;\">Distraction may cause accidents. Do not attempt to operate while driving. Always concentrate on driving and obey Traffic Regulations. You assume total responsibility and risk for using this software.</span></p></body></html>", nullptr));
        labelCertificationWarning->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ef2929;\">This software is not certified by Google Inc. It is created for R&amp;D purposes and may not work as expected by the original authors. Do not use while driving.</span></p><p><span style=\" color:#ef2929;\">You use this software at your own risk.</span></p></body></html>", nullptr));
        labelCertificationWarningIcon->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/ico_warning.png\"/></p></body></html>", nullptr));
        labelCopyrightsInfoIcon->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/ico_info.png\"/></p></body></html>", nullptr));
        labelTrademark->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">AndroidAuto is registered trademark of Google Inc.</span></p></body></html>", nullptr));
        pushButtonToggleCursor->setText(QCoreApplication::translate("MainWindow", "Toggle cursor", nullptr));
        pushButtonWirelessConnection->setText(QCoreApplication::translate("MainWindow", "Wireless connection", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">If you are looking for a Raspberry PI compatible 12V power supply equipped with an ignition switch, visit </span><a href=\"https://bluewavestudio.io/\"><span style=\" text-decoration: underline; color:#007af4;\">https://bluewavestudio.io</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
