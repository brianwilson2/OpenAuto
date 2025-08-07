/********************************************************************************
** Form generated from reading UI file 'connectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConnectDialog
{
public:
    QGroupBox *groupBoxIPAddress;
    QLineEdit *lineEditIPAddress;
    QGroupBox *groupBoxRecent;
    QListView *listViewRecent;
    QLabel *labelHeadUnitServerInfo;
    QLabel *labelCopyrightsInfoIcon;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonConnect;
    QProgressBar *progressBarConnect;
    QLabel *labelConnecting;

    void setupUi(QDialog *ConnectDialog)
    {
        if (ConnectDialog->objectName().isEmpty())
            ConnectDialog->setObjectName(QString::fromUtf8("ConnectDialog"));
        ConnectDialog->resize(301, 389);
        groupBoxIPAddress = new QGroupBox(ConnectDialog);
        groupBoxIPAddress->setObjectName(QString::fromUtf8("groupBoxIPAddress"));
        groupBoxIPAddress->setGeometry(QRect(10, 10, 281, 61));
        lineEditIPAddress = new QLineEdit(groupBoxIPAddress);
        lineEditIPAddress->setObjectName(QString::fromUtf8("lineEditIPAddress"));
        lineEditIPAddress->setGeometry(QRect(10, 30, 261, 25));
        groupBoxRecent = new QGroupBox(ConnectDialog);
        groupBoxRecent->setObjectName(QString::fromUtf8("groupBoxRecent"));
        groupBoxRecent->setGeometry(QRect(10, 80, 281, 181));
        listViewRecent = new QListView(groupBoxRecent);
        listViewRecent->setObjectName(QString::fromUtf8("listViewRecent"));
        listViewRecent->setGeometry(QRect(10, 30, 261, 141));
        listViewRecent->setEditTriggers(QAbstractItemView::NoEditTriggers);
        labelHeadUnitServerInfo = new QLabel(ConnectDialog);
        labelHeadUnitServerInfo->setObjectName(QString::fromUtf8("labelHeadUnitServerInfo"));
        labelHeadUnitServerInfo->setGeometry(QRect(60, 260, 221, 81));
        labelHeadUnitServerInfo->setWordWrap(true);
        labelCopyrightsInfoIcon = new QLabel(ConnectDialog);
        labelCopyrightsInfoIcon->setObjectName(QString::fromUtf8("labelCopyrightsInfoIcon"));
        labelCopyrightsInfoIcon->setGeometry(QRect(20, 290, 21, 21));
        pushButtonCancel = new QPushButton(ConnectDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(40, 340, 121, 41));
        pushButtonConnect = new QPushButton(ConnectDialog);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(170, 340, 121, 41));
        progressBarConnect = new QProgressBar(ConnectDialog);
        progressBarConnect->setObjectName(QString::fromUtf8("progressBarConnect"));
        progressBarConnect->setGeometry(QRect(170, 340, 121, 41));
        progressBarConnect->setMaximum(0);
        progressBarConnect->setValue(0);
        labelConnecting = new QLabel(ConnectDialog);
        labelConnecting->setObjectName(QString::fromUtf8("labelConnecting"));
        labelConnecting->setGeometry(QRect(188, 350, 91, 20));
        groupBoxIPAddress->raise();
        groupBoxRecent->raise();
        labelHeadUnitServerInfo->raise();
        labelCopyrightsInfoIcon->raise();
        pushButtonCancel->raise();
        progressBarConnect->raise();
        labelConnecting->raise();
        pushButtonConnect->raise();

        retranslateUi(ConnectDialog);

        QMetaObject::connectSlotsByName(ConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectDialog)
    {
        ConnectDialog->setWindowTitle(QCoreApplication::translate("ConnectDialog", "Connect to device", nullptr));
        groupBoxIPAddress->setTitle(QCoreApplication::translate("ConnectDialog", "IP Address", nullptr));
        groupBoxRecent->setTitle(QCoreApplication::translate("ConnectDialog", "Recent", nullptr));
        labelHeadUnitServerInfo->setText(QCoreApplication::translate("ConnectDialog", "<html><head/><body><p><span style=\" font-style:italic;\">In order to use wireless mode you must enable head unit server in developer settings.</span></p></body></html>", nullptr));
        labelCopyrightsInfoIcon->setText(QCoreApplication::translate("ConnectDialog", "<html><head/><body><p><img src=\":/ico_info.png\"/></p></body></html>", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ConnectDialog", "Cancel", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("ConnectDialog", "Connect", nullptr));
        labelConnecting->setText(QCoreApplication::translate("ConnectDialog", "Connecting...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectDialog: public Ui_ConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
