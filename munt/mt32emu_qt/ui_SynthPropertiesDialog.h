/********************************************************************************
** Form generated from reading UI file 'SynthPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNTHPROPERTIESDIALOG_H
#define UI_SYNTHPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SynthPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *romSetLabel;
    QPushButton *changeROMSetButton;
    QLabel *midiDelayEmuLabel;
    QComboBox *midiDelayEmuComboBox;
    QLabel *dacEmuLabel;
    QComboBox *dacEmuComboBox;
    QCheckBox *reverbCheckBox;
    QComboBox *reverbCompatibilityComboBox;
    QLabel *label_4;
    QComboBox *reverbModeComboBox;
    QLabel *label_3;
    QSlider *reverbTimeSlider;
    QLabel *label_2;
    QSlider *reverbLevelSlider;
    QLabel *label_10;
    QSpinBox *maxPartialsSpinBox;
    QLabel *label_8;
    QComboBox *analogComboBox;
    QLabel *label_9;
    QComboBox *rendererTypeComboBox;
    QLabel *label_11;
    QComboBox *displayCompatibilityComboBox;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QSlider *outputGainSlider;
    QDoubleSpinBox *outputGainSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QSlider *reverbOutputGainSlider;
    QDoubleSpinBox *reverbOutputGainSpinBox;
    QCheckBox *reverseStereoCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *assignChannels2_10Button;
    QPushButton *assignChannels1_8_10Button;
    QCheckBox *niceAmpRampCheckBox;
    QCheckBox *engageChannel1CheckBox;
    QCheckBox *nicePanningCheckBox;
    QCheckBox *nicePartialMixingCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QComboBox *profileComboBox;
    QCheckBox *profileCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SynthPropertiesDialog)
    {
        if (SynthPropertiesDialog->objectName().isEmpty())
            SynthPropertiesDialog->setObjectName("SynthPropertiesDialog");
        SynthPropertiesDialog->resize(393, 444);
        SynthPropertiesDialog->setMaximumSize(QSize(16777215, 444));
        SynthPropertiesDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(SynthPropertiesDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(SynthPropertiesDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        romSetLabel = new QLabel(SynthPropertiesDialog);
        romSetLabel->setObjectName("romSetLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(romSetLabel->sizePolicy().hasHeightForWidth());
        romSetLabel->setSizePolicy(sizePolicy);
        romSetLabel->setFrameShape(QFrame::StyledPanel);
        romSetLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(romSetLabel);

        changeROMSetButton = new QPushButton(SynthPropertiesDialog);
        changeROMSetButton->setObjectName("changeROMSetButton");

        horizontalLayout->addWidget(changeROMSetButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        midiDelayEmuLabel = new QLabel(SynthPropertiesDialog);
        midiDelayEmuLabel->setObjectName("midiDelayEmuLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, midiDelayEmuLabel);

        midiDelayEmuComboBox = new QComboBox(SynthPropertiesDialog);
        midiDelayEmuComboBox->addItem(QString());
        midiDelayEmuComboBox->addItem(QString());
        midiDelayEmuComboBox->addItem(QString());
        midiDelayEmuComboBox->setObjectName("midiDelayEmuComboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, midiDelayEmuComboBox);

        dacEmuLabel = new QLabel(SynthPropertiesDialog);
        dacEmuLabel->setObjectName("dacEmuLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, dacEmuLabel);

        dacEmuComboBox = new QComboBox(SynthPropertiesDialog);
        dacEmuComboBox->addItem(QString());
        dacEmuComboBox->addItem(QString());
        dacEmuComboBox->addItem(QString());
        dacEmuComboBox->setObjectName("dacEmuComboBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, dacEmuComboBox);

        reverbCheckBox = new QCheckBox(SynthPropertiesDialog);
        reverbCheckBox->setObjectName("reverbCheckBox");
        reverbCheckBox->setTristate(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, reverbCheckBox);

        reverbCompatibilityComboBox = new QComboBox(SynthPropertiesDialog);
        reverbCompatibilityComboBox->addItem(QString());
        reverbCompatibilityComboBox->addItem(QString());
        reverbCompatibilityComboBox->addItem(QString());
        reverbCompatibilityComboBox->setObjectName("reverbCompatibilityComboBox");

        formLayout->setWidget(3, QFormLayout::FieldRole, reverbCompatibilityComboBox);

        label_4 = new QLabel(SynthPropertiesDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        reverbModeComboBox = new QComboBox(SynthPropertiesDialog);
        reverbModeComboBox->addItem(QString());
        reverbModeComboBox->addItem(QString());
        reverbModeComboBox->addItem(QString());
        reverbModeComboBox->addItem(QString());
        reverbModeComboBox->setObjectName("reverbModeComboBox");

        formLayout->setWidget(4, QFormLayout::FieldRole, reverbModeComboBox);

        label_3 = new QLabel(SynthPropertiesDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        reverbTimeSlider = new QSlider(SynthPropertiesDialog);
        reverbTimeSlider->setObjectName("reverbTimeSlider");
        reverbTimeSlider->setMaximum(7);
        reverbTimeSlider->setPageStep(4);
        reverbTimeSlider->setOrientation(Qt::Horizontal);
        reverbTimeSlider->setTickPosition(QSlider::TicksAbove);

        formLayout->setWidget(5, QFormLayout::FieldRole, reverbTimeSlider);

        label_2 = new QLabel(SynthPropertiesDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_2);

        reverbLevelSlider = new QSlider(SynthPropertiesDialog);
        reverbLevelSlider->setObjectName("reverbLevelSlider");
        reverbLevelSlider->setMaximum(7);
        reverbLevelSlider->setPageStep(4);
        reverbLevelSlider->setOrientation(Qt::Horizontal);
        reverbLevelSlider->setTickPosition(QSlider::TicksAbove);

        formLayout->setWidget(6, QFormLayout::FieldRole, reverbLevelSlider);

        label_10 = new QLabel(SynthPropertiesDialog);
        label_10->setObjectName("label_10");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        maxPartialsSpinBox = new QSpinBox(SynthPropertiesDialog);
        maxPartialsSpinBox->setObjectName("maxPartialsSpinBox");
        maxPartialsSpinBox->setMinimum(8);
        maxPartialsSpinBox->setMaximum(256);
        maxPartialsSpinBox->setValue(32);

        formLayout->setWidget(7, QFormLayout::FieldRole, maxPartialsSpinBox);

        label_8 = new QLabel(SynthPropertiesDialog);
        label_8->setObjectName("label_8");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        analogComboBox = new QComboBox(SynthPropertiesDialog);
        analogComboBox->addItem(QString());
        analogComboBox->addItem(QString());
        analogComboBox->addItem(QString());
        analogComboBox->setObjectName("analogComboBox");

        formLayout->setWidget(8, QFormLayout::FieldRole, analogComboBox);

        label_9 = new QLabel(SynthPropertiesDialog);
        label_9->setObjectName("label_9");

        formLayout->setWidget(9, QFormLayout::LabelRole, label_9);

        rendererTypeComboBox = new QComboBox(SynthPropertiesDialog);
        rendererTypeComboBox->addItem(QString());
        rendererTypeComboBox->addItem(QString());
        rendererTypeComboBox->setObjectName("rendererTypeComboBox");

        formLayout->setWidget(9, QFormLayout::FieldRole, rendererTypeComboBox);

        label_11 = new QLabel(SynthPropertiesDialog);
        label_11->setObjectName("label_11");

        formLayout->setWidget(10, QFormLayout::LabelRole, label_11);

        displayCompatibilityComboBox = new QComboBox(SynthPropertiesDialog);
        displayCompatibilityComboBox->addItem(QString());
        displayCompatibilityComboBox->addItem(QString());
        displayCompatibilityComboBox->addItem(QString());
        displayCompatibilityComboBox->setObjectName("displayCompatibilityComboBox");

        formLayout->setWidget(10, QFormLayout::FieldRole, displayCompatibilityComboBox);

        label_5 = new QLabel(SynthPropertiesDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(11, QFormLayout::LabelRole, label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        outputGainSlider = new QSlider(SynthPropertiesDialog);
        outputGainSlider->setObjectName("outputGainSlider");
        outputGainSlider->setMaximum(400);
        outputGainSlider->setOrientation(Qt::Horizontal);
        outputGainSlider->setTickPosition(QSlider::TicksAbove);
        outputGainSlider->setTickInterval(100);

        horizontalLayout_4->addWidget(outputGainSlider);

        outputGainSpinBox = new QDoubleSpinBox(SynthPropertiesDialog);
        outputGainSpinBox->setObjectName("outputGainSpinBox");
        outputGainSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outputGainSpinBox->setMaximum(4.000000000000000);
        outputGainSpinBox->setSingleStep(0.100000000000000);
        outputGainSpinBox->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(outputGainSpinBox);


        formLayout->setLayout(11, QFormLayout::FieldRole, horizontalLayout_4);

        label_6 = new QLabel(SynthPropertiesDialog);
        label_6->setObjectName("label_6");

        formLayout->setWidget(12, QFormLayout::LabelRole, label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        reverbOutputGainSlider = new QSlider(SynthPropertiesDialog);
        reverbOutputGainSlider->setObjectName("reverbOutputGainSlider");
        reverbOutputGainSlider->setMaximum(400);
        reverbOutputGainSlider->setOrientation(Qt::Horizontal);
        reverbOutputGainSlider->setTickPosition(QSlider::TicksAbove);
        reverbOutputGainSlider->setTickInterval(100);

        horizontalLayout_5->addWidget(reverbOutputGainSlider);

        reverbOutputGainSpinBox = new QDoubleSpinBox(SynthPropertiesDialog);
        reverbOutputGainSpinBox->setObjectName("reverbOutputGainSpinBox");
        reverbOutputGainSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        reverbOutputGainSpinBox->setMaximum(4.000000000000000);
        reverbOutputGainSpinBox->setSingleStep(0.100000000000000);
        reverbOutputGainSpinBox->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(reverbOutputGainSpinBox);


        formLayout->setLayout(12, QFormLayout::FieldRole, horizontalLayout_5);

        reverseStereoCheckBox = new QCheckBox(SynthPropertiesDialog);
        reverseStereoCheckBox->setObjectName("reverseStereoCheckBox");
        reverseStereoCheckBox->setTristate(false);

        formLayout->setWidget(13, QFormLayout::LabelRole, reverseStereoCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        assignChannels2_10Button = new QPushButton(SynthPropertiesDialog);
        assignChannels2_10Button->setObjectName("assignChannels2_10Button");

        horizontalLayout_3->addWidget(assignChannels2_10Button);

        assignChannels1_8_10Button = new QPushButton(SynthPropertiesDialog);
        assignChannels1_8_10Button->setObjectName("assignChannels1_8_10Button");

        horizontalLayout_3->addWidget(assignChannels1_8_10Button);


        formLayout->setLayout(13, QFormLayout::FieldRole, horizontalLayout_3);

        niceAmpRampCheckBox = new QCheckBox(SynthPropertiesDialog);
        niceAmpRampCheckBox->setObjectName("niceAmpRampCheckBox");

        formLayout->setWidget(14, QFormLayout::LabelRole, niceAmpRampCheckBox);

        engageChannel1CheckBox = new QCheckBox(SynthPropertiesDialog);
        engageChannel1CheckBox->setObjectName("engageChannel1CheckBox");
        engageChannel1CheckBox->setTristate(false);

        formLayout->setWidget(14, QFormLayout::FieldRole, engageChannel1CheckBox);

        nicePanningCheckBox = new QCheckBox(SynthPropertiesDialog);
        nicePanningCheckBox->setObjectName("nicePanningCheckBox");

        formLayout->setWidget(15, QFormLayout::LabelRole, nicePanningCheckBox);

        nicePartialMixingCheckBox = new QCheckBox(SynthPropertiesDialog);
        nicePartialMixingCheckBox->setObjectName("nicePartialMixingCheckBox");
        nicePartialMixingCheckBox->setTristate(false);

        formLayout->setWidget(15, QFormLayout::FieldRole, nicePartialMixingCheckBox);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_7 = new QLabel(SynthPropertiesDialog);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_7);

        profileComboBox = new QComboBox(SynthPropertiesDialog);
        profileComboBox->setObjectName("profileComboBox");
        profileComboBox->setEditable(true);

        horizontalLayout_2->addWidget(profileComboBox);

        profileCheckBox = new QCheckBox(SynthPropertiesDialog);
        profileCheckBox->setObjectName("profileCheckBox");
        sizePolicy1.setHeightForWidth(profileCheckBox->sizePolicy().hasHeightForWidth());
        profileCheckBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(profileCheckBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(SynthPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SynthPropertiesDialog);

        QMetaObject::connectSlotsByName(SynthPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *SynthPropertiesDialog)
    {
        SynthPropertiesDialog->setWindowTitle(QCoreApplication::translate("SynthPropertiesDialog", "Synth Properties", nullptr));
        label->setText(QCoreApplication::translate("SynthPropertiesDialog", "ROM Set:", nullptr));
        romSetLabel->setText(QCoreApplication::translate("SynthPropertiesDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        changeROMSetButton->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Set of ROM images to use in emulation.\n"
"\n"
"Takes effect after reopening the Synth.", nullptr));
#endif // QT_CONFIG(tooltip)
        changeROMSetButton->setText(QCoreApplication::translate("SynthPropertiesDialog", "Change", nullptr));
        midiDelayEmuLabel->setText(QCoreApplication::translate("SynthPropertiesDialog", "MIDI Delay Mode:", nullptr));
        midiDelayEmuComboBox->setItemText(0, QCoreApplication::translate("SynthPropertiesDialog", "Process all MIDI events immediately", nullptr));
        midiDelayEmuComboBox->setItemText(1, QCoreApplication::translate("SynthPropertiesDialog", "Delay short MIDI messages only", nullptr));
        midiDelayEmuComboBox->setItemText(2, QCoreApplication::translate("SynthPropertiesDialog", "Delay any MIDI events", nullptr));

#if QT_CONFIG(tooltip)
        midiDelayEmuComboBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "MIDI interface delay emulation mode\n"
"\n"
"Incoming MIDI events will be delayed as if they are transferred via a real MIDI cable", nullptr));
#endif // QT_CONFIG(tooltip)
        dacEmuLabel->setText(QCoreApplication::translate("SynthPropertiesDialog", "DAC Emulation Mode:", nullptr));
        dacEmuComboBox->setItemText(0, QCoreApplication::translate("SynthPropertiesDialog", "High quality", nullptr));
        dacEmuComboBox->setItemText(1, QCoreApplication::translate("SynthPropertiesDialog", "Generation 1", nullptr));
        dacEmuComboBox->setItemText(2, QCoreApplication::translate("SynthPropertiesDialog", "Generation 2", nullptr));

        reverbCheckBox->setText(QCoreApplication::translate("SynthPropertiesDialog", "Reverb Enabled", nullptr));
        reverbCompatibilityComboBox->setItemText(0, QCoreApplication::translate("SynthPropertiesDialog", "Default - depends on control ROM version", nullptr));
        reverbCompatibilityComboBox->setItemText(1, QCoreApplication::translate("SynthPropertiesDialog", "MT-32 Compatible", nullptr));
        reverbCompatibilityComboBox->setItemText(2, QCoreApplication::translate("SynthPropertiesDialog", "CM-32L/LAPC-I Compatible", nullptr));

#if QT_CONFIG(tooltip)
        reverbCompatibilityComboBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Reverb Compatibility Mode\n"
"\n"
"Select reverb model tunings to accurately emulate reverb chip of older units (like MT-32 v.1 or v.2) vs. newer units (including CM-32L).", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("SynthPropertiesDialog", "Reverb Mode", nullptr));
        reverbModeComboBox->setItemText(0, QCoreApplication::translate("SynthPropertiesDialog", "0: Room", nullptr));
        reverbModeComboBox->setItemText(1, QCoreApplication::translate("SynthPropertiesDialog", "1: Hall", nullptr));
        reverbModeComboBox->setItemText(2, QCoreApplication::translate("SynthPropertiesDialog", "2: Plate", nullptr));
        reverbModeComboBox->setItemText(3, QCoreApplication::translate("SynthPropertiesDialog", "3: Tap Delay", nullptr));

        label_3->setText(QCoreApplication::translate("SynthPropertiesDialog", "Reverb Time", nullptr));
        label_2->setText(QCoreApplication::translate("SynthPropertiesDialog", "Reverb Level", nullptr));
        label_10->setText(QCoreApplication::translate("SynthPropertiesDialog", "Max Partials", nullptr));
#if QT_CONFIG(tooltip)
        maxPartialsSpinBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "The maximum number of partials playing simultaneously.\n"
"Takes effect after reopening the Synth.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("SynthPropertiesDialog", "Analogue Output", nullptr));
        analogComboBox->setItemText(0, QCoreApplication::translate("SynthPropertiesDialog", "Accurate analogue path emulation", nullptr));
        analogComboBox->setItemText(1, QCoreApplication::translate("SynthPropertiesDialog", "Coarse analogue path emulation", nullptr));
        analogComboBox->setItemText(2, QCoreApplication::translate("SynthPropertiesDialog", "Digital path emulation only", nullptr));

#if QT_CONFIG(tooltip)
        analogComboBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Methods for emulating the effects of analogue circuits of real hardware units on the output signal.\n"
"\n"
"Takes effect after reopening the Synth.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("SynthPropertiesDialog", "Renderer Type", nullptr));
        rendererTypeComboBox->setItemText(0, QCoreApplication::translate("SynthPropertiesDialog", "Integer 16-bit", nullptr));
        rendererTypeComboBox->setItemText(1, QCoreApplication::translate("SynthPropertiesDialog", "Float 32-bit", nullptr));

#if QT_CONFIG(tooltip)
        rendererTypeComboBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Allows selecting between the available types of the wave generator\n"
"model and the sample renderer.\n"
"\n"
"Integer 16-bit: 16-bit signed samples are used in the renderer.\n"
"The wave generator uses a more accurate model based on logarithmic\n"
"fixed-point computations and the LUTs found in the real hardware.\n"
"Provides for the maximum emulation accuracy and speed.\n"
"\n"
"Float 32-bit: 32-bit floating point samples are used in the renderer.\n"
"The wave generator uses less accurate simplified emulation model.\n"
"This model produces output signal with better sound quality than\n"
"the real hardware in terms of introducing less noise.\n"
"\n"
"Takes effect after reopening the Synth.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("SynthPropertiesDialog", "Display Compatibility", nullptr));
        displayCompatibilityComboBox->setItemText(0, QCoreApplication::translate("SynthPropertiesDialog", "Default - depends on control ROM version", nullptr));
        displayCompatibilityComboBox->setItemText(1, QCoreApplication::translate("SynthPropertiesDialog", "Compatible with old-gen MT-32", nullptr));
        displayCompatibilityComboBox->setItemText(2, QCoreApplication::translate("SynthPropertiesDialog", "Compatible with new-gen MT-32 (and CM-32L)", nullptr));

#if QT_CONFIG(tooltip)
        displayCompatibilityComboBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Display Compatibility Mode\n"
"\n"
"Select display emulation model to enable features specific to old-gen units vs. new-gen units (including CM-32L, as if a LCD was connected).", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("SynthPropertiesDialog", "Output Gain", nullptr));
        label_6->setText(QCoreApplication::translate("SynthPropertiesDialog", "Reverb Output Gain", nullptr));
        reverseStereoCheckBox->setText(QCoreApplication::translate("SynthPropertiesDialog", "Reverse Stereo", nullptr));
#if QT_CONFIG(tooltip)
        assignChannels2_10Button->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Reset channel assignment to default. MIDI channels 2..10 will be used.", nullptr));
#endif // QT_CONFIG(tooltip)
        assignChannels2_10Button->setText(QCoreApplication::translate("SynthPropertiesDialog", "Set channels 2..10", nullptr));
#if QT_CONFIG(tooltip)
        assignChannels1_8_10Button->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Reset channel assignment to alternative. MIDI channels 1..8 and 10 will be used.", nullptr));
#endif // QT_CONFIG(tooltip)
        assignChannels1_8_10Button->setText(QCoreApplication::translate("SynthPropertiesDialog", "Set channels 1..8,10", nullptr));
#if QT_CONFIG(tooltip)
        niceAmpRampCheckBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Toggles improved emulation of amplitude ramp in sustain phase.\n"
"\n"
"Quick changes of volume or expression on a MIDI channel\n"
"may result in amp jumps on real hardware.\n"
"Disabling this option (enabled by default) allows\n"
"to trade-off the quality improvement over the emulation accuracy.", nullptr));
#endif // QT_CONFIG(tooltip)
        niceAmpRampCheckBox->setText(QCoreApplication::translate("SynthPropertiesDialog", "Nice Amp Ramp", nullptr));
        engageChannel1CheckBox->setText(QCoreApplication::translate("SynthPropertiesDialog", "Use alternative channel assignment on synth start", nullptr));
#if QT_CONFIG(tooltip)
        nicePanningCheckBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Enlarges the allowed value range for the pan-pot setting, providing for smoother panning.\n"
"\n"
"Despite MT-32 MIDI implementation indicates allowed PANPOT range 0-14,\n"
"the LA32 chip actually recognises values 0-7 only. By enabling this option,\n"
"we degrade emulation accuracy a bit, pretending that LA32 handled all values as distinct,\n"
"e.g. making possible for a 1-partial timbre to sound at the perfect stereo centre.\n"
"\n"
"Note, this option has no effect on partial pairs within the stereo structures (8 and 9).", nullptr));
#endif // QT_CONFIG(tooltip)
        nicePanningCheckBox->setText(QCoreApplication::translate("SynthPropertiesDialog", "Nice Panning", nullptr));
#if QT_CONFIG(tooltip)
        nicePartialMixingCheckBox->setToolTip(QCoreApplication::translate("SynthPropertiesDialog", "Disables occasional counter-phase mixing of partials that the LA32 chip exhibits.\n"
"\n"
"This behaviour is usually hard to notice unless playing a timbre with two or more\n"
"partials that sound very close. Such timbres sound very differently in case\n"
"of counter-phase mixing since the partials in a pair cancel out each other (mostly).\n"
"\n"
"By enabling this option, we make sure that the timbres, that comprise of closely\n"
"sounding partials, are mixed in a more predictable way, again at the expense\n"
"of somewhat degraded emulation accuracy. Additionally, the output signal has better\n"
"chances to overdrive, so the output quality may be affected (e.g. due to by clipping).", nullptr));
#endif // QT_CONFIG(tooltip)
        nicePartialMixingCheckBox->setText(QCoreApplication::translate("SynthPropertiesDialog", "Nice partial mixing (always mix in-phase)", nullptr));
        label_7->setText(QCoreApplication::translate("SynthPropertiesDialog", "Profile", nullptr));
        profileCheckBox->setText(QCoreApplication::translate("SynthPropertiesDialog", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SynthPropertiesDialog: public Ui_SynthPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNTHPROPERTIESDIALOG_H
