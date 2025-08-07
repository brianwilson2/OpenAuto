/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QPushButton *pushButtonSave;
    QPushButton *pushButtonCancel;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QGroupBox *groupBoxHandenessOfTraffic;
    QRadioButton *radioButtonLeftHandDrive;
    QRadioButton *radioButtonRightHandDrive;
    QCheckBox *checkBoxShowClock;
    QWidget *tabVideo;
    QGroupBox *groupBoxResolution;
    QRadioButton *radioButton480p;
    QRadioButton *radioButton720p;
    QRadioButton *radioButton1080p;
    QLabel *labelResolutionWarning;
    QLabel *labelResolutionWarningIcon;
    QGroupBox *groupBoxFrameRate;
    QRadioButton *radioButton60FPS;
    QRadioButton *radioButton30FPS;
    QGroupBox *groupBoxOmxLayerIndex;
    QLabel *labelOmxLayerIndex;
    QLabel *labelBluetoothAddressFormatInfo_2;
    QLabel *labelBluetoothAddressFormatInfoIcon_2;
    QSpinBox *spinBoxOmxLayerIndex;
    QLabel *labelVideoMarginWidth;
    QSpinBox *spinBoxVideoMarginWidth;
    QLabel *labelVideoMarginHeight;
    QSpinBox *spinBoxVideoMarginHeight;
    QGroupBox *groupBoxScreenDPI;
    QLabel *labelScreenDPIValue;
    QSlider *horizontalSliderScreenDPI;
    QWidget *tabAudio;
    QGroupBox *groupBoxAudioChannels;
    QCheckBox *checkBoxMusicAudioChannel;
    QCheckBox *checkBoxSpeechAudioChannel;
    QLabel *labelAudioChannelDescription;
    QLabel *labelAudioChannelDescriptionIcon;
    QGroupBox *groupBoxAudioOutputBackend;
    QRadioButton *radioButtonRtAudio;
    QRadioButton *radioButtonQtAudio;
    QWidget *tabInput;
    QCheckBox *checkBoxEnableTouchscreen;
    QListWidget *listWidgetButtons;
    QLabel *labelButtons;
    QCheckBox *checkBoxPlayButton;
    QCheckBox *checkBoxPauseButton;
    QCheckBox *checkBoxTogglePlayButton;
    QCheckBox *checkBoxNextTrackButton;
    QCheckBox *checkBoxPreviousTrackButton;
    QCheckBox *checkBoxHomeButton;
    QCheckBox *checkBoxBackButton;
    QCheckBox *checkBoxEnterButton;
    QCheckBox *checkBoxPhoneButton;
    QCheckBox *checkBoxCallEndButton;
    QCheckBox *checkBoxVoiceCommandButton;
    QCheckBox *checkBoxLeftButton;
    QCheckBox *checkBoxRightButton;
    QCheckBox *checkBoxUpButton;
    QCheckBox *checkBoxDownButton;
    QCheckBox *checkBoxScrollWheelButton;
    QPushButton *pushButtonSelectAll;
    QPushButton *pushButtonClearSelection;
    QPushButton *pushButtonShowBindings;
    QWidget *tabBluetooth;
    QGroupBox *groupBoxBluetoothAdapter;
    QRadioButton *radioButtonDisableBluetooth;
    QRadioButton *radioButtonUseExternalBluetoothAdapter;
    QLineEdit *lineEditExternalBluetoothAdapterAddress;
    QLabel *labelBluetoothAdapterAddress;
    QLabel *labelBluetoothAddressFormatInfo;
    QLabel *labelBluetoothAddressFormatInfoIcon;
    QRadioButton *radioButtonUseLocalBluetoothAdapter;
    QLabel *labelPairWarningIcon;
    QLabel *labelPairWarning;
    QLabel *labelSettingsIcon;
    QPushButton *pushButtonResetToDefaults;

    void setupUi(QWidget *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QString::fromUtf8("SettingsWindow"));
        SettingsWindow->resize(800, 480);
        SettingsWindow->setMinimumSize(QSize(800, 480));
        SettingsWindow->setMaximumSize(QSize(800, 480));
        SettingsWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(238, 238, 236);"));
        pushButtonSave = new QPushButton(SettingsWindow);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(630, 430, 161, 41));
        pushButtonSave->setAutoDefault(false);
        pushButtonCancel = new QPushButton(SettingsWindow);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(630, 330, 161, 41));
        pushButtonCancel->setAutoDefault(false);
        tabWidget = new QTabWidget(SettingsWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 621, 481));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        groupBoxHandenessOfTraffic = new QGroupBox(tabGeneral);
        groupBoxHandenessOfTraffic->setObjectName(QString::fromUtf8("groupBoxHandenessOfTraffic"));
        groupBoxHandenessOfTraffic->setGeometry(QRect(0, 10, 621, 91));
        radioButtonLeftHandDrive = new QRadioButton(groupBoxHandenessOfTraffic);
        radioButtonLeftHandDrive->setObjectName(QString::fromUtf8("radioButtonLeftHandDrive"));
        radioButtonLeftHandDrive->setGeometry(QRect(10, 30, 141, 23));
        radioButtonRightHandDrive = new QRadioButton(groupBoxHandenessOfTraffic);
        radioButtonRightHandDrive->setObjectName(QString::fromUtf8("radioButtonRightHandDrive"));
        radioButtonRightHandDrive->setGeometry(QRect(10, 60, 151, 23));
        checkBoxShowClock = new QCheckBox(tabGeneral);
        checkBoxShowClock->setObjectName(QString::fromUtf8("checkBoxShowClock"));
        checkBoxShowClock->setGeometry(QRect(10, 110, 111, 23));
        tabWidget->addTab(tabGeneral, QString());
        tabVideo = new QWidget();
        tabVideo->setObjectName(QString::fromUtf8("tabVideo"));
        groupBoxResolution = new QGroupBox(tabVideo);
        groupBoxResolution->setObjectName(QString::fromUtf8("groupBoxResolution"));
        groupBoxResolution->setGeometry(QRect(0, 80, 621, 141));
        radioButton480p = new QRadioButton(groupBoxResolution);
        radioButton480p->setObjectName(QString::fromUtf8("radioButton480p"));
        radioButton480p->setGeometry(QRect(10, 30, 71, 23));
        radioButton720p = new QRadioButton(groupBoxResolution);
        radioButton720p->setObjectName(QString::fromUtf8("radioButton720p"));
        radioButton720p->setGeometry(QRect(120, 30, 71, 23));
        radioButton1080p = new QRadioButton(groupBoxResolution);
        radioButton1080p->setObjectName(QString::fromUtf8("radioButton1080p"));
        radioButton1080p->setGeometry(QRect(230, 30, 81, 23));
        labelResolutionWarning = new QLabel(groupBoxResolution);
        labelResolutionWarning->setObjectName(QString::fromUtf8("labelResolutionWarning"));
        labelResolutionWarning->setGeometry(QRect(50, 60, 561, 71));
        labelResolutionWarning->setWordWrap(true);
        labelResolutionWarning->setMargin(10);
        labelResolutionWarningIcon = new QLabel(groupBoxResolution);
        labelResolutionWarningIcon->setObjectName(QString::fromUtf8("labelResolutionWarningIcon"));
        labelResolutionWarningIcon->setGeometry(QRect(20, 60, 31, 71));
        groupBoxFrameRate = new QGroupBox(tabVideo);
        groupBoxFrameRate->setObjectName(QString::fromUtf8("groupBoxFrameRate"));
        groupBoxFrameRate->setGeometry(QRect(0, 10, 621, 61));
        radioButton60FPS = new QRadioButton(groupBoxFrameRate);
        radioButton60FPS->setObjectName(QString::fromUtf8("radioButton60FPS"));
        radioButton60FPS->setGeometry(QRect(120, 30, 81, 23));
        radioButton30FPS = new QRadioButton(groupBoxFrameRate);
        radioButton30FPS->setObjectName(QString::fromUtf8("radioButton30FPS"));
        radioButton30FPS->setGeometry(QRect(10, 30, 81, 23));
        groupBoxOmxLayerIndex = new QGroupBox(tabVideo);
        groupBoxOmxLayerIndex->setObjectName(QString::fromUtf8("groupBoxOmxLayerIndex"));
        groupBoxOmxLayerIndex->setGeometry(QRect(0, 230, 621, 121));
        labelOmxLayerIndex = new QLabel(groupBoxOmxLayerIndex);
        labelOmxLayerIndex->setObjectName(QString::fromUtf8("labelOmxLayerIndex"));
        labelOmxLayerIndex->setGeometry(QRect(10, 40, 91, 21));
        labelBluetoothAddressFormatInfo_2 = new QLabel(groupBoxOmxLayerIndex);
        labelBluetoothAddressFormatInfo_2->setObjectName(QString::fromUtf8("labelBluetoothAddressFormatInfo_2"));
        labelBluetoothAddressFormatInfo_2->setGeometry(QRect(60, 80, 311, 31));
        labelBluetoothAddressFormatInfoIcon_2 = new QLabel(groupBoxOmxLayerIndex);
        labelBluetoothAddressFormatInfoIcon_2->setObjectName(QString::fromUtf8("labelBluetoothAddressFormatInfoIcon_2"));
        labelBluetoothAddressFormatInfoIcon_2->setGeometry(QRect(30, 80, 21, 31));
        spinBoxOmxLayerIndex = new QSpinBox(groupBoxOmxLayerIndex);
        spinBoxOmxLayerIndex->setObjectName(QString::fromUtf8("spinBoxOmxLayerIndex"));
        spinBoxOmxLayerIndex->setGeometry(QRect(100, 30, 71, 41));
        labelVideoMarginWidth = new QLabel(groupBoxOmxLayerIndex);
        labelVideoMarginWidth->setObjectName(QString::fromUtf8("labelVideoMarginWidth"));
        labelVideoMarginWidth->setGeometry(QRect(200, 40, 101, 21));
        spinBoxVideoMarginWidth = new QSpinBox(groupBoxOmxLayerIndex);
        spinBoxVideoMarginWidth->setObjectName(QString::fromUtf8("spinBoxVideoMarginWidth"));
        spinBoxVideoMarginWidth->setGeometry(QRect(310, 30, 71, 41));
        spinBoxVideoMarginWidth->setMaximum(99999);
        labelVideoMarginHeight = new QLabel(groupBoxOmxLayerIndex);
        labelVideoMarginHeight->setObjectName(QString::fromUtf8("labelVideoMarginHeight"));
        labelVideoMarginHeight->setGeometry(QRect(410, 40, 111, 21));
        spinBoxVideoMarginHeight = new QSpinBox(groupBoxOmxLayerIndex);
        spinBoxVideoMarginHeight->setObjectName(QString::fromUtf8("spinBoxVideoMarginHeight"));
        spinBoxVideoMarginHeight->setGeometry(QRect(520, 30, 71, 41));
        spinBoxVideoMarginHeight->setMaximum(99999);
        groupBoxScreenDPI = new QGroupBox(tabVideo);
        groupBoxScreenDPI->setObjectName(QString::fromUtf8("groupBoxScreenDPI"));
        groupBoxScreenDPI->setGeometry(QRect(0, 360, 621, 81));
        labelScreenDPIValue = new QLabel(groupBoxScreenDPI);
        labelScreenDPIValue->setObjectName(QString::fromUtf8("labelScreenDPIValue"));
        labelScreenDPIValue->setGeometry(QRect(570, 40, 41, 31));
        horizontalSliderScreenDPI = new QSlider(groupBoxScreenDPI);
        horizontalSliderScreenDPI->setObjectName(QString::fromUtf8("horizontalSliderScreenDPI"));
        horizontalSliderScreenDPI->setGeometry(QRect(20, 40, 531, 31));
        horizontalSliderScreenDPI->setMaximum(400);
        horizontalSliderScreenDPI->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tabVideo, QString());
        tabAudio = new QWidget();
        tabAudio->setObjectName(QString::fromUtf8("tabAudio"));
        groupBoxAudioChannels = new QGroupBox(tabAudio);
        groupBoxAudioChannels->setObjectName(QString::fromUtf8("groupBoxAudioChannels"));
        groupBoxAudioChannels->setGeometry(QRect(-1, 10, 621, 111));
        checkBoxMusicAudioChannel = new QCheckBox(groupBoxAudioChannels);
        checkBoxMusicAudioChannel->setObjectName(QString::fromUtf8("checkBoxMusicAudioChannel"));
        checkBoxMusicAudioChannel->setGeometry(QRect(10, 30, 131, 23));
        checkBoxSpeechAudioChannel = new QCheckBox(groupBoxAudioChannels);
        checkBoxSpeechAudioChannel->setObjectName(QString::fromUtf8("checkBoxSpeechAudioChannel"));
        checkBoxSpeechAudioChannel->setGeometry(QRect(160, 30, 131, 23));
        labelAudioChannelDescription = new QLabel(groupBoxAudioChannels);
        labelAudioChannelDescription->setObjectName(QString::fromUtf8("labelAudioChannelDescription"));
        labelAudioChannelDescription->setGeometry(QRect(60, 70, 511, 31));
        labelAudioChannelDescriptionIcon = new QLabel(groupBoxAudioChannels);
        labelAudioChannelDescriptionIcon->setObjectName(QString::fromUtf8("labelAudioChannelDescriptionIcon"));
        labelAudioChannelDescriptionIcon->setGeometry(QRect(30, 70, 21, 31));
        groupBoxAudioOutputBackend = new QGroupBox(tabAudio);
        groupBoxAudioOutputBackend->setObjectName(QString::fromUtf8("groupBoxAudioOutputBackend"));
        groupBoxAudioOutputBackend->setGeometry(QRect(0, 130, 621, 61));
        radioButtonRtAudio = new QRadioButton(groupBoxAudioOutputBackend);
        radioButtonRtAudio->setObjectName(QString::fromUtf8("radioButtonRtAudio"));
        radioButtonRtAudio->setGeometry(QRect(10, 30, 112, 23));
        radioButtonQtAudio = new QRadioButton(groupBoxAudioOutputBackend);
        radioButtonQtAudio->setObjectName(QString::fromUtf8("radioButtonQtAudio"));
        radioButtonQtAudio->setGeometry(QRect(140, 30, 112, 23));
        tabWidget->addTab(tabAudio, QString());
        tabInput = new QWidget();
        tabInput->setObjectName(QString::fromUtf8("tabInput"));
        checkBoxEnableTouchscreen = new QCheckBox(tabInput);
        checkBoxEnableTouchscreen->setObjectName(QString::fromUtf8("checkBoxEnableTouchscreen"));
        checkBoxEnableTouchscreen->setGeometry(QRect(0, 10, 161, 23));
        listWidgetButtons = new QListWidget(tabInput);
        listWidgetButtons->setObjectName(QString::fromUtf8("listWidgetButtons"));
        listWidgetButtons->setGeometry(QRect(0, 70, 621, 381));
        listWidgetButtons->setSelectionMode(QAbstractItemView::MultiSelection);
        labelButtons = new QLabel(tabInput);
        labelButtons->setObjectName(QString::fromUtf8("labelButtons"));
        labelButtons->setGeometry(QRect(10, 50, 67, 17));
        checkBoxPlayButton = new QCheckBox(tabInput);
        checkBoxPlayButton->setObjectName(QString::fromUtf8("checkBoxPlayButton"));
        checkBoxPlayButton->setGeometry(QRect(20, 80, 92, 23));
        checkBoxPauseButton = new QCheckBox(tabInput);
        checkBoxPauseButton->setObjectName(QString::fromUtf8("checkBoxPauseButton"));
        checkBoxPauseButton->setGeometry(QRect(20, 120, 92, 23));
        checkBoxTogglePlayButton = new QCheckBox(tabInput);
        checkBoxTogglePlayButton->setObjectName(QString::fromUtf8("checkBoxTogglePlayButton"));
        checkBoxTogglePlayButton->setGeometry(QRect(20, 160, 111, 23));
        checkBoxNextTrackButton = new QCheckBox(tabInput);
        checkBoxNextTrackButton->setObjectName(QString::fromUtf8("checkBoxNextTrackButton"));
        checkBoxNextTrackButton->setGeometry(QRect(20, 200, 92, 23));
        checkBoxPreviousTrackButton = new QCheckBox(tabInput);
        checkBoxPreviousTrackButton->setObjectName(QString::fromUtf8("checkBoxPreviousTrackButton"));
        checkBoxPreviousTrackButton->setGeometry(QRect(20, 240, 121, 23));
        checkBoxHomeButton = new QCheckBox(tabInput);
        checkBoxHomeButton->setObjectName(QString::fromUtf8("checkBoxHomeButton"));
        checkBoxHomeButton->setGeometry(QRect(20, 280, 92, 23));
        checkBoxBackButton = new QCheckBox(tabInput);
        checkBoxBackButton->setObjectName(QString::fromUtf8("checkBoxBackButton"));
        checkBoxBackButton->setGeometry(QRect(200, 320, 92, 23));
        checkBoxEnterButton = new QCheckBox(tabInput);
        checkBoxEnterButton->setObjectName(QString::fromUtf8("checkBoxEnterButton"));
        checkBoxEnterButton->setGeometry(QRect(200, 360, 92, 23));
        checkBoxPhoneButton = new QCheckBox(tabInput);
        checkBoxPhoneButton->setObjectName(QString::fromUtf8("checkBoxPhoneButton"));
        checkBoxPhoneButton->setGeometry(QRect(20, 320, 92, 23));
        checkBoxCallEndButton = new QCheckBox(tabInput);
        checkBoxCallEndButton->setObjectName(QString::fromUtf8("checkBoxCallEndButton"));
        checkBoxCallEndButton->setGeometry(QRect(20, 360, 92, 23));
        checkBoxVoiceCommandButton = new QCheckBox(tabInput);
        checkBoxVoiceCommandButton->setObjectName(QString::fromUtf8("checkBoxVoiceCommandButton"));
        checkBoxVoiceCommandButton->setGeometry(QRect(200, 80, 141, 23));
        checkBoxLeftButton = new QCheckBox(tabInput);
        checkBoxLeftButton->setObjectName(QString::fromUtf8("checkBoxLeftButton"));
        checkBoxLeftButton->setGeometry(QRect(200, 120, 92, 23));
        checkBoxRightButton = new QCheckBox(tabInput);
        checkBoxRightButton->setObjectName(QString::fromUtf8("checkBoxRightButton"));
        checkBoxRightButton->setGeometry(QRect(200, 160, 92, 23));
        checkBoxUpButton = new QCheckBox(tabInput);
        checkBoxUpButton->setObjectName(QString::fromUtf8("checkBoxUpButton"));
        checkBoxUpButton->setGeometry(QRect(200, 200, 92, 23));
        checkBoxDownButton = new QCheckBox(tabInput);
        checkBoxDownButton->setObjectName(QString::fromUtf8("checkBoxDownButton"));
        checkBoxDownButton->setGeometry(QRect(200, 240, 92, 23));
        checkBoxScrollWheelButton = new QCheckBox(tabInput);
        checkBoxScrollWheelButton->setObjectName(QString::fromUtf8("checkBoxScrollWheelButton"));
        checkBoxScrollWheelButton->setGeometry(QRect(200, 280, 111, 23));
        pushButtonSelectAll = new QPushButton(tabInput);
        pushButtonSelectAll->setObjectName(QString::fromUtf8("pushButtonSelectAll"));
        pushButtonSelectAll->setGeometry(QRect(490, 80, 121, 41));
        pushButtonSelectAll->setAutoDefault(false);
        pushButtonClearSelection = new QPushButton(tabInput);
        pushButtonClearSelection->setObjectName(QString::fromUtf8("pushButtonClearSelection"));
        pushButtonClearSelection->setGeometry(QRect(490, 140, 121, 41));
        pushButtonClearSelection->setAutoDefault(false);
        pushButtonShowBindings = new QPushButton(tabInput);
        pushButtonShowBindings->setObjectName(QString::fromUtf8("pushButtonShowBindings"));
        pushButtonShowBindings->setGeometry(QRect(490, 200, 121, 41));
        pushButtonShowBindings->setAutoDefault(false);
        tabWidget->addTab(tabInput, QString());
        tabBluetooth = new QWidget();
        tabBluetooth->setObjectName(QString::fromUtf8("tabBluetooth"));
        groupBoxBluetoothAdapter = new QGroupBox(tabBluetooth);
        groupBoxBluetoothAdapter->setObjectName(QString::fromUtf8("groupBoxBluetoothAdapter"));
        groupBoxBluetoothAdapter->setGeometry(QRect(0, 10, 621, 441));
        radioButtonDisableBluetooth = new QRadioButton(groupBoxBluetoothAdapter);
        radioButtonDisableBluetooth->setObjectName(QString::fromUtf8("radioButtonDisableBluetooth"));
        radioButtonDisableBluetooth->setGeometry(QRect(20, 30, 171, 23));
        radioButtonUseExternalBluetoothAdapter = new QRadioButton(groupBoxBluetoothAdapter);
        radioButtonUseExternalBluetoothAdapter->setObjectName(QString::fromUtf8("radioButtonUseExternalBluetoothAdapter"));
        radioButtonUseExternalBluetoothAdapter->setGeometry(QRect(20, 90, 171, 23));
        lineEditExternalBluetoothAdapterAddress = new QLineEdit(groupBoxBluetoothAdapter);
        lineEditExternalBluetoothAdapterAddress->setObjectName(QString::fromUtf8("lineEditExternalBluetoothAdapterAddress"));
        lineEditExternalBluetoothAdapterAddress->setGeometry(QRect(130, 120, 231, 31));
        labelBluetoothAdapterAddress = new QLabel(groupBoxBluetoothAdapter);
        labelBluetoothAdapterAddress->setObjectName(QString::fromUtf8("labelBluetoothAdapterAddress"));
        labelBluetoothAdapterAddress->setGeometry(QRect(60, 120, 67, 31));
        labelBluetoothAddressFormatInfo = new QLabel(groupBoxBluetoothAdapter);
        labelBluetoothAddressFormatInfo->setObjectName(QString::fromUtf8("labelBluetoothAddressFormatInfo"));
        labelBluetoothAddressFormatInfo->setGeometry(QRect(180, 160, 271, 31));
        labelBluetoothAddressFormatInfoIcon = new QLabel(groupBoxBluetoothAdapter);
        labelBluetoothAddressFormatInfoIcon->setObjectName(QString::fromUtf8("labelBluetoothAddressFormatInfoIcon"));
        labelBluetoothAddressFormatInfoIcon->setGeometry(QRect(150, 160, 21, 31));
        radioButtonUseLocalBluetoothAdapter = new QRadioButton(groupBoxBluetoothAdapter);
        radioButtonUseLocalBluetoothAdapter->setObjectName(QString::fromUtf8("radioButtonUseLocalBluetoothAdapter"));
        radioButtonUseLocalBluetoothAdapter->setGeometry(QRect(20, 60, 151, 23));
        labelPairWarningIcon = new QLabel(groupBoxBluetoothAdapter);
        labelPairWarningIcon->setObjectName(QString::fromUtf8("labelPairWarningIcon"));
        labelPairWarningIcon->setGeometry(QRect(10, 206, 31, 41));
        labelPairWarning = new QLabel(groupBoxBluetoothAdapter);
        labelPairWarning->setObjectName(QString::fromUtf8("labelPairWarning"));
        labelPairWarning->setGeometry(QRect(50, 210, 501, 31));
        tabWidget->addTab(tabBluetooth, QString());
        labelSettingsIcon = new QLabel(SettingsWindow);
        labelSettingsIcon->setObjectName(QString::fromUtf8("labelSettingsIcon"));
        labelSettingsIcon->setGeometry(QRect(650, 80, 131, 151));
        pushButtonResetToDefaults = new QPushButton(SettingsWindow);
        pushButtonResetToDefaults->setObjectName(QString::fromUtf8("pushButtonResetToDefaults"));
        pushButtonResetToDefaults->setGeometry(QRect(630, 380, 161, 41));
        pushButtonResetToDefaults->setAutoDefault(false);
        QWidget::setTabOrder(pushButtonCancel, pushButtonResetToDefaults);
        QWidget::setTabOrder(pushButtonResetToDefaults, pushButtonSave);
        QWidget::setTabOrder(pushButtonSave, tabWidget);
        QWidget::setTabOrder(tabWidget, radioButtonLeftHandDrive);
        QWidget::setTabOrder(radioButtonLeftHandDrive, radioButtonRightHandDrive);
        QWidget::setTabOrder(radioButtonRightHandDrive, checkBoxShowClock);
        QWidget::setTabOrder(checkBoxShowClock, radioButton30FPS);
        QWidget::setTabOrder(radioButton30FPS, radioButton60FPS);
        QWidget::setTabOrder(radioButton60FPS, radioButton480p);
        QWidget::setTabOrder(radioButton480p, radioButton720p);
        QWidget::setTabOrder(radioButton720p, radioButton1080p);
        QWidget::setTabOrder(radioButton1080p, spinBoxOmxLayerIndex);
        QWidget::setTabOrder(spinBoxOmxLayerIndex, spinBoxVideoMarginWidth);
        QWidget::setTabOrder(spinBoxVideoMarginWidth, spinBoxVideoMarginHeight);
        QWidget::setTabOrder(spinBoxVideoMarginHeight, horizontalSliderScreenDPI);
        QWidget::setTabOrder(horizontalSliderScreenDPI, checkBoxMusicAudioChannel);
        QWidget::setTabOrder(checkBoxMusicAudioChannel, checkBoxSpeechAudioChannel);
        QWidget::setTabOrder(checkBoxSpeechAudioChannel, radioButtonRtAudio);
        QWidget::setTabOrder(radioButtonRtAudio, radioButtonQtAudio);
        QWidget::setTabOrder(radioButtonQtAudio, checkBoxEnableTouchscreen);
        QWidget::setTabOrder(checkBoxEnableTouchscreen, listWidgetButtons);
        QWidget::setTabOrder(listWidgetButtons, checkBoxPlayButton);
        QWidget::setTabOrder(checkBoxPlayButton, checkBoxPauseButton);
        QWidget::setTabOrder(checkBoxPauseButton, checkBoxTogglePlayButton);
        QWidget::setTabOrder(checkBoxTogglePlayButton, checkBoxNextTrackButton);
        QWidget::setTabOrder(checkBoxNextTrackButton, checkBoxPreviousTrackButton);
        QWidget::setTabOrder(checkBoxPreviousTrackButton, checkBoxHomeButton);
        QWidget::setTabOrder(checkBoxHomeButton, checkBoxPhoneButton);
        QWidget::setTabOrder(checkBoxPhoneButton, checkBoxCallEndButton);
        QWidget::setTabOrder(checkBoxCallEndButton, checkBoxVoiceCommandButton);
        QWidget::setTabOrder(checkBoxVoiceCommandButton, checkBoxLeftButton);
        QWidget::setTabOrder(checkBoxLeftButton, checkBoxRightButton);
        QWidget::setTabOrder(checkBoxRightButton, checkBoxUpButton);
        QWidget::setTabOrder(checkBoxUpButton, checkBoxDownButton);
        QWidget::setTabOrder(checkBoxDownButton, checkBoxScrollWheelButton);
        QWidget::setTabOrder(checkBoxScrollWheelButton, checkBoxBackButton);
        QWidget::setTabOrder(checkBoxBackButton, checkBoxEnterButton);
        QWidget::setTabOrder(checkBoxEnterButton, pushButtonSelectAll);
        QWidget::setTabOrder(pushButtonSelectAll, pushButtonClearSelection);
        QWidget::setTabOrder(pushButtonClearSelection, pushButtonShowBindings);
        QWidget::setTabOrder(pushButtonShowBindings, radioButtonDisableBluetooth);
        QWidget::setTabOrder(radioButtonDisableBluetooth, radioButtonUseLocalBluetoothAdapter);
        QWidget::setTabOrder(radioButtonUseLocalBluetoothAdapter, radioButtonUseExternalBluetoothAdapter);
        QWidget::setTabOrder(radioButtonUseExternalBluetoothAdapter, lineEditExternalBluetoothAdapterAddress);

        retranslateUi(SettingsWindow);

        pushButtonCancel->setDefault(false);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QWidget *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "Settings", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("SettingsWindow", "Save", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("SettingsWindow", "Cancel", nullptr));
        groupBoxHandenessOfTraffic->setTitle(QCoreApplication::translate("SettingsWindow", "Handedness of traffic", nullptr));
        radioButtonLeftHandDrive->setText(QCoreApplication::translate("SettingsWindow", "Left-hand drive", nullptr));
        radioButtonRightHandDrive->setText(QCoreApplication::translate("SettingsWindow", "Right-hand drive", nullptr));
        checkBoxShowClock->setText(QCoreApplication::translate("SettingsWindow", "Show clock", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QCoreApplication::translate("SettingsWindow", "General", nullptr));
        groupBoxResolution->setTitle(QCoreApplication::translate("SettingsWindow", "Resolution", nullptr));
        radioButton480p->setText(QCoreApplication::translate("SettingsWindow", "480p", nullptr));
        radioButton720p->setText(QCoreApplication::translate("SettingsWindow", "720p", nullptr));
        radioButton1080p->setText(QCoreApplication::translate("SettingsWindow", "1080p", nullptr));
        labelResolutionWarning->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p align=\"justify\"><span style=\" font-style:italic;\">720p and 1080p must be activated in hidden Developer settings of Android Auto application.</span></p></body></html>", nullptr));
        labelResolutionWarningIcon->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p align=\"justify\"><img src=\":/ico_warning.png\"/></p></body></html>", nullptr));
        groupBoxFrameRate->setTitle(QCoreApplication::translate("SettingsWindow", "Frame rate", nullptr));
        radioButton60FPS->setText(QCoreApplication::translate("SettingsWindow", "60 FPS", nullptr));
        radioButton30FPS->setText(QCoreApplication::translate("SettingsWindow", "30 FPS", nullptr));
        groupBoxOmxLayerIndex->setTitle(QCoreApplication::translate("SettingsWindow", "Display", nullptr));
        labelOmxLayerIndex->setText(QCoreApplication::translate("SettingsWindow", "Layer index:", nullptr));
        labelBluetoothAddressFormatInfo_2->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic;\">OMX Layer is used only in case of OMX video output.</span></p></body></html>", nullptr));
        labelBluetoothAddressFormatInfoIcon_2->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p><img src=\":/ico_info.png\"/></p></body></html>", nullptr));
        labelVideoMarginWidth->setText(QCoreApplication::translate("SettingsWindow", "Margin width:", nullptr));
        labelVideoMarginHeight->setText(QCoreApplication::translate("SettingsWindow", "Margin height:", nullptr));
        groupBoxScreenDPI->setTitle(QCoreApplication::translate("SettingsWindow", "Screen DPI", nullptr));
        labelScreenDPIValue->setText(QCoreApplication::translate("SettingsWindow", "400", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabVideo), QCoreApplication::translate("SettingsWindow", "Video", nullptr));
        groupBoxAudioChannels->setTitle(QCoreApplication::translate("SettingsWindow", "Audio channels", nullptr));
        checkBoxMusicAudioChannel->setText(QCoreApplication::translate("SettingsWindow", "Music channel", nullptr));
        checkBoxSpeechAudioChannel->setText(QCoreApplication::translate("SettingsWindow", "Speech channel", nullptr));
        labelAudioChannelDescription->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic;\">Disable audio channel if you need custom audio routing e.g. via A2DP or AUX.</span></p></body></html>", nullptr));
        labelAudioChannelDescriptionIcon->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p><img src=\":/ico_info.png\"/></p></body></html>", nullptr));
        groupBoxAudioOutputBackend->setTitle(QCoreApplication::translate("SettingsWindow", "Output backend", nullptr));
        radioButtonRtAudio->setText(QCoreApplication::translate("SettingsWindow", "RT audio", nullptr));
        radioButtonQtAudio->setText(QCoreApplication::translate("SettingsWindow", "Qt", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAudio), QCoreApplication::translate("SettingsWindow", "Audio", nullptr));
        checkBoxEnableTouchscreen->setText(QCoreApplication::translate("SettingsWindow", "Enable touchscreen", nullptr));
        labelButtons->setText(QCoreApplication::translate("SettingsWindow", "Buttons", nullptr));
        checkBoxPlayButton->setText(QCoreApplication::translate("SettingsWindow", "Play", nullptr));
        checkBoxPauseButton->setText(QCoreApplication::translate("SettingsWindow", "Pause", nullptr));
        checkBoxTogglePlayButton->setText(QCoreApplication::translate("SettingsWindow", "Toggle play", nullptr));
        checkBoxNextTrackButton->setText(QCoreApplication::translate("SettingsWindow", "Next track", nullptr));
        checkBoxPreviousTrackButton->setText(QCoreApplication::translate("SettingsWindow", "Previous track", nullptr));
        checkBoxHomeButton->setText(QCoreApplication::translate("SettingsWindow", "Home", nullptr));
        checkBoxBackButton->setText(QCoreApplication::translate("SettingsWindow", "Back", nullptr));
        checkBoxEnterButton->setText(QCoreApplication::translate("SettingsWindow", "Enter", nullptr));
        checkBoxPhoneButton->setText(QCoreApplication::translate("SettingsWindow", "Phone", nullptr));
        checkBoxCallEndButton->setText(QCoreApplication::translate("SettingsWindow", "Call end", nullptr));
        checkBoxVoiceCommandButton->setText(QCoreApplication::translate("SettingsWindow", "Voice command", nullptr));
        checkBoxLeftButton->setText(QCoreApplication::translate("SettingsWindow", "Left", nullptr));
        checkBoxRightButton->setText(QCoreApplication::translate("SettingsWindow", "Right", nullptr));
        checkBoxUpButton->setText(QCoreApplication::translate("SettingsWindow", "Up", nullptr));
        checkBoxDownButton->setText(QCoreApplication::translate("SettingsWindow", "Down", nullptr));
        checkBoxScrollWheelButton->setText(QCoreApplication::translate("SettingsWindow", "Scroll wheel", nullptr));
        pushButtonSelectAll->setText(QCoreApplication::translate("SettingsWindow", "Select all", nullptr));
        pushButtonClearSelection->setText(QCoreApplication::translate("SettingsWindow", "Clear selection", nullptr));
        pushButtonShowBindings->setText(QCoreApplication::translate("SettingsWindow", "Show bindings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInput), QCoreApplication::translate("SettingsWindow", "Input", nullptr));
        groupBoxBluetoothAdapter->setTitle(QCoreApplication::translate("SettingsWindow", "Bluetooth adapter", nullptr));
        radioButtonDisableBluetooth->setText(QCoreApplication::translate("SettingsWindow", "Disable bluetooth", nullptr));
        radioButtonUseExternalBluetoothAdapter->setText(QCoreApplication::translate("SettingsWindow", "Use external adapter", nullptr));
        labelBluetoothAdapterAddress->setText(QCoreApplication::translate("SettingsWindow", "Address:", nullptr));
        labelBluetoothAddressFormatInfo->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic; color:#babdb6;\">Provide address in format AA:BB:CC:DD:EE:FF.</span></p></body></html>", nullptr));
        labelBluetoothAddressFormatInfoIcon->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p><img src=\":/ico_info.png\"/></p></body></html>", nullptr));
        radioButtonUseLocalBluetoothAdapter->setText(QCoreApplication::translate("SettingsWindow", "Use local adapter", nullptr));
        labelPairWarningIcon->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p><img src=\":/ico_warning.png\"/></p></body></html>", nullptr));
        labelPairWarning->setText(QCoreApplication::translate("SettingsWindow", "In order to use bluetooth features please remember to pair your device.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBluetooth), QCoreApplication::translate("SettingsWindow", "Bluetooth", nullptr));
        labelSettingsIcon->setText(QCoreApplication::translate("SettingsWindow", "<html><head/><body><p><img src=\":/ico_setting.png\"/></p></body></html>", nullptr));
        pushButtonResetToDefaults->setText(QCoreApplication::translate("SettingsWindow", "Reset to defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
