/********************************************************************************
** Form generated from reading UI file 'SynthWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNTHWIDGET_H
#define UI_SYNTHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SynthWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QListWidget *midiList;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *midiAdd;
    QPushButton *midiRemove;
    QPushButton *midiProperties;
    QPushButton *midiRecord;
    QGroupBox *audioOutputGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *audioDeviceComboBox;
    QToolButton *refreshButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *audioPropertiesButton;
    QPushButton *audioRecord;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *synthFrame;
    QVBoxLayout *synthFrameLayout;
    QLabel *synthEmuModeLabel;
    QSlider *masterVolumeSlider;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *pinCheckBox;
    QPushButton *synthPropertiesButton;
    QFrame *midiMessageFrame;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QHBoxLayout *midiMessageLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *label_2;
    QLabel *statusLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QHBoxLayout *horizontalLayout_6;
    QFrame *line;
    QPushButton *detailsButton;
    QFrame *detailsFrame;
    QHBoxLayout *detailsLayout;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_4;
    QGridLayout *partialStateGrid;
    QGroupBox *groupBox_5;
    QGridLayout *polyStateGrid;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SynthWidget)
    {
        if (SynthWidget->objectName().isEmpty())
            SynthWidget->setObjectName("SynthWidget");
        SynthWidget->resize(654, 501);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SynthWidget->sizePolicy().hasHeightForWidth());
        SynthWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SynthWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(SynthWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        midiList = new QListWidget(groupBox);
        midiList->setObjectName("midiList");
        midiList->setMinimumSize(QSize(0, 60));

        verticalLayout_2->addWidget(midiList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        midiAdd = new QPushButton(groupBox);
        midiAdd->setObjectName("midiAdd");
        midiAdd->setEnabled(false);

        horizontalLayout_3->addWidget(midiAdd);

        midiRemove = new QPushButton(groupBox);
        midiRemove->setObjectName("midiRemove");
        midiRemove->setEnabled(false);

        horizontalLayout_3->addWidget(midiRemove);

        midiProperties = new QPushButton(groupBox);
        midiProperties->setObjectName("midiProperties");
        midiProperties->setEnabled(false);

        horizontalLayout_3->addWidget(midiProperties);

        midiRecord = new QPushButton(groupBox);
        midiRecord->setObjectName("midiRecord");

        horizontalLayout_3->addWidget(midiRecord);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        audioOutputGroupBox = new QGroupBox(SynthWidget);
        audioOutputGroupBox->setObjectName("audioOutputGroupBox");
        verticalLayout_4 = new QVBoxLayout(audioOutputGroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(audioOutputGroupBox);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_5);

        audioDeviceComboBox = new QComboBox(audioOutputGroupBox);
        audioDeviceComboBox->setObjectName("audioDeviceComboBox");

        horizontalLayout_2->addWidget(audioDeviceComboBox);

        refreshButton = new QToolButton(audioOutputGroupBox);
        refreshButton->setObjectName("refreshButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Refresh.gif"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon);

        horizontalLayout_2->addWidget(refreshButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        audioPropertiesButton = new QPushButton(audioOutputGroupBox);
        audioPropertiesButton->setObjectName("audioPropertiesButton");

        horizontalLayout_5->addWidget(audioPropertiesButton);

        audioRecord = new QPushButton(audioOutputGroupBox);
        audioRecord->setObjectName("audioRecord");

        horizontalLayout_5->addWidget(audioRecord);


        verticalLayout_4->addLayout(horizontalLayout_5);


        gridLayout->addWidget(audioOutputGroupBox, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(SynthWidget);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        synthFrame = new QFrame(groupBox_2);
        synthFrame->setObjectName("synthFrame");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(synthFrame->sizePolicy().hasHeightForWidth());
        synthFrame->setSizePolicy(sizePolicy2);
        synthFrame->setFrameShape(QFrame::StyledPanel);
        synthFrame->setFrameShadow(QFrame::Raised);
        synthFrameLayout = new QVBoxLayout(synthFrame);
        synthFrameLayout->setObjectName("synthFrameLayout");
        synthEmuModeLabel = new QLabel(synthFrame);
        synthEmuModeLabel->setObjectName("synthEmuModeLabel");
        synthEmuModeLabel->setAlignment(Qt::AlignCenter);

        synthFrameLayout->addWidget(synthEmuModeLabel);

        masterVolumeSlider = new QSlider(synthFrame);
        masterVolumeSlider->setObjectName("masterVolumeSlider");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(masterVolumeSlider->sizePolicy().hasHeightForWidth());
        masterVolumeSlider->setSizePolicy(sizePolicy3);
        masterVolumeSlider->setMaximum(100);
        masterVolumeSlider->setValue(100);
        masterVolumeSlider->setOrientation(Qt::Horizontal);
        masterVolumeSlider->setTickPosition(QSlider::TicksAbove);
        masterVolumeSlider->setTickInterval(10);

        synthFrameLayout->addWidget(masterVolumeSlider);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pinCheckBox = new QCheckBox(synthFrame);
        pinCheckBox->setObjectName("pinCheckBox");
        sizePolicy2.setHeightForWidth(pinCheckBox->sizePolicy().hasHeightForWidth());
        pinCheckBox->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(pinCheckBox);

        synthPropertiesButton = new QPushButton(synthFrame);
        synthPropertiesButton->setObjectName("synthPropertiesButton");

        horizontalLayout_4->addWidget(synthPropertiesButton);

        midiMessageFrame = new QFrame(synthFrame);
        midiMessageFrame->setObjectName("midiMessageFrame");
        sizePolicy3.setHeightForWidth(midiMessageFrame->sizePolicy().hasHeightForWidth());
        midiMessageFrame->setSizePolicy(sizePolicy3);
        midiMessageFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_5 = new QVBoxLayout(midiMessageFrame);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 3, 0, 6);
        label_3 = new QLabel(midiMessageFrame);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        midiMessageLayout = new QHBoxLayout();
        midiMessageLayout->setSpacing(0);
        midiMessageLayout->setObjectName("midiMessageLayout");

        verticalLayout_5->addLayout(midiMessageLayout);


        horizontalLayout_4->addWidget(midiMessageFrame);


        synthFrameLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(synthFrame);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox_2, 1, 2, 2, 1);

        label = new QLabel(SynthWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(SynthWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        statusLabel = new QLabel(SynthWidget);
        statusLabel->setObjectName("statusLabel");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy4);
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        startButton = new QPushButton(SynthWidget);
        startButton->setObjectName("startButton");

        horizontalLayout->addWidget(startButton);

        stopButton = new QPushButton(SynthWidget);
        stopButton->setObjectName("stopButton");
        stopButton->setEnabled(false);

        horizontalLayout->addWidget(stopButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        line = new QFrame(SynthWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line);

        detailsButton = new QPushButton(SynthWidget);
        detailsButton->setObjectName("detailsButton");
        sizePolicy2.setHeightForWidth(detailsButton->sizePolicy().hasHeightForWidth());
        detailsButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Details.gif"), QSize(), QIcon::Normal, QIcon::Off);
        detailsButton->setIcon(icon1);

        horizontalLayout_6->addWidget(detailsButton);


        verticalLayout->addLayout(horizontalLayout_6);

        detailsFrame = new QFrame(SynthWidget);
        detailsFrame->setObjectName("detailsFrame");
        detailsFrame->setFrameShape(QFrame::StyledPanel);
        detailsFrame->setFrameShadow(QFrame::Raised);
        detailsLayout = new QHBoxLayout(detailsFrame);
        detailsLayout->setObjectName("detailsLayout");
        horizontalSpacer_2 = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        detailsLayout->addItem(horizontalSpacer_2);

        groupBox_4 = new QGroupBox(detailsFrame);
        groupBox_4->setObjectName("groupBox_4");
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        partialStateGrid = new QGridLayout(groupBox_4);
        partialStateGrid->setObjectName("partialStateGrid");

        detailsLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(detailsFrame);
        groupBox_5->setObjectName("groupBox_5");
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        polyStateGrid = new QGridLayout(groupBox_5);
        polyStateGrid->setObjectName("polyStateGrid");

        detailsLayout->addWidget(groupBox_5);

        horizontalSpacer = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        detailsLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(detailsFrame);


        retranslateUi(SynthWidget);

        QMetaObject::connectSlotsByName(SynthWidget);
    } // setupUi

    void retranslateUi(QWidget *SynthWidget)
    {
        SynthWidget->setWindowTitle(QCoreApplication::translate("SynthWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SynthWidget", "MIDI Input", nullptr));
        midiAdd->setText(QCoreApplication::translate("SynthWidget", "+", nullptr));
        midiRemove->setText(QCoreApplication::translate("SynthWidget", "-", nullptr));
        midiProperties->setText(QCoreApplication::translate("SynthWidget", "Properties...", nullptr));
        midiRecord->setText(QCoreApplication::translate("SynthWidget", "Record", nullptr));
        audioOutputGroupBox->setTitle(QCoreApplication::translate("SynthWidget", "Audio Output", nullptr));
        label_5->setText(QCoreApplication::translate("SynthWidget", "Device:", nullptr));
#if QT_CONFIG(tooltip)
        refreshButton->setToolTip(QCoreApplication::translate("SynthWidget", "Refresh device list", nullptr));
#endif // QT_CONFIG(tooltip)
        audioPropertiesButton->setText(QCoreApplication::translate("SynthWidget", "Properties", nullptr));
        audioRecord->setText(QCoreApplication::translate("SynthWidget", "Record", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SynthWidget", "Synth", nullptr));
        synthEmuModeLabel->setText(QCoreApplication::translate("SynthWidget", "Unknown Emulation Mode", nullptr));
        pinCheckBox->setText(QCoreApplication::translate("SynthWidget", "Pin Synth", nullptr));
        synthPropertiesButton->setText(QCoreApplication::translate("SynthWidget", "Properties", nullptr));
        label_3->setText(QCoreApplication::translate("SynthWidget", "MIDI MESSAGE", nullptr));
        label->setText(QCoreApplication::translate("SynthWidget", "\342\206\222", nullptr));
        label_2->setText(QCoreApplication::translate("SynthWidget", "\342\206\220", nullptr));
        statusLabel->setText(QCoreApplication::translate("SynthWidget", "Relax", nullptr));
        startButton->setText(QCoreApplication::translate("SynthWidget", "Start", nullptr));
        stopButton->setText(QCoreApplication::translate("SynthWidget", "Stop", nullptr));
        detailsButton->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("SynthWidget", "Partial State", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SynthWidget", "Channel Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SynthWidget: public Ui_SynthWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNTHWIDGET_H
