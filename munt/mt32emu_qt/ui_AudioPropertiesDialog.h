/********************************************************************************
** Form generated from reading UI file 'AudioPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOPROPERTIESDIALOG_H
#define UI_AUDIOPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AudioPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QComboBox *sampleRate;
    QComboBox *srcQuality;
    QLineEdit *chunkLen;
    QLineEdit *audioLatency;
    QLineEdit *midiLatency;
    QCheckBox *advancedTiming;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AudioPropertiesDialog)
    {
        if (AudioPropertiesDialog->objectName().isEmpty())
            AudioPropertiesDialog->setObjectName("AudioPropertiesDialog");
        AudioPropertiesDialog->resize(174, 198);
        AudioPropertiesDialog->setModal(true);
        verticalLayout_3 = new QVBoxLayout(AudioPropertiesDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(AudioPropertiesDialog);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(AudioPropertiesDialog);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label = new QLabel(AudioPropertiesDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(AudioPropertiesDialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(AudioPropertiesDialog);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        sampleRate = new QComboBox(AudioPropertiesDialog);
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->setObjectName("sampleRate");
        sampleRate->setEditable(true);

        verticalLayout->addWidget(sampleRate);

        srcQuality = new QComboBox(AudioPropertiesDialog);
        srcQuality->addItem(QString());
        srcQuality->addItem(QString());
        srcQuality->addItem(QString());
        srcQuality->addItem(QString());
        srcQuality->setObjectName("srcQuality");
        srcQuality->setEditable(false);

        verticalLayout->addWidget(srcQuality);

        chunkLen = new QLineEdit(AudioPropertiesDialog);
        chunkLen->setObjectName("chunkLen");

        verticalLayout->addWidget(chunkLen);

        audioLatency = new QLineEdit(AudioPropertiesDialog);
        audioLatency->setObjectName("audioLatency");

        verticalLayout->addWidget(audioLatency);

        midiLatency = new QLineEdit(AudioPropertiesDialog);
        midiLatency->setObjectName("midiLatency");

        verticalLayout->addWidget(midiLatency);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        advancedTiming = new QCheckBox(AudioPropertiesDialog);
        advancedTiming->setObjectName("advancedTiming");

        verticalLayout_3->addWidget(advancedTiming);

        buttonBox = new QDialogButtonBox(AudioPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        QWidget::setTabOrder(buttonBox, sampleRate);
        QWidget::setTabOrder(sampleRate, srcQuality);
        QWidget::setTabOrder(srcQuality, chunkLen);
        QWidget::setTabOrder(chunkLen, audioLatency);
        QWidget::setTabOrder(audioLatency, midiLatency);
        QWidget::setTabOrder(midiLatency, advancedTiming);

        retranslateUi(AudioPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AudioPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AudioPropertiesDialog, qOverload<>(&QDialog::reject));

        sampleRate->setCurrentIndex(0);
        srcQuality->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AudioPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *AudioPropertiesDialog)
    {
        AudioPropertiesDialog->setWindowTitle(QCoreApplication::translate("AudioPropertiesDialog", "Audio Properties", nullptr));
        label_4->setText(QCoreApplication::translate("AudioPropertiesDialog", "Sample rate", nullptr));
        label_5->setText(QCoreApplication::translate("AudioPropertiesDialog", "SRC quality", nullptr));
        label->setText(QCoreApplication::translate("AudioPropertiesDialog", "Chunk length", nullptr));
        label_3->setText(QCoreApplication::translate("AudioPropertiesDialog", "Audio latency", nullptr));
        label_2->setText(QCoreApplication::translate("AudioPropertiesDialog", "MIDI latency", nullptr));
        sampleRate->setItemText(0, QCoreApplication::translate("AudioPropertiesDialog", "Default", nullptr));
        sampleRate->setItemText(1, QCoreApplication::translate("AudioPropertiesDialog", "16000", nullptr));
        sampleRate->setItemText(2, QCoreApplication::translate("AudioPropertiesDialog", "22050", nullptr));
        sampleRate->setItemText(3, QCoreApplication::translate("AudioPropertiesDialog", "32000", nullptr));
        sampleRate->setItemText(4, QCoreApplication::translate("AudioPropertiesDialog", "44100", nullptr));
        sampleRate->setItemText(5, QCoreApplication::translate("AudioPropertiesDialog", "48000", nullptr));
        sampleRate->setItemText(6, QCoreApplication::translate("AudioPropertiesDialog", "96000", nullptr));
        sampleRate->setItemText(7, QCoreApplication::translate("AudioPropertiesDialog", "192000", nullptr));

#if QT_CONFIG(tooltip)
        sampleRate->setToolTip(QCoreApplication::translate("AudioPropertiesDialog", "As MT-32 compatible units use internally sample rate 32000 Hz, the emulation core is strictly bound to this frequency.\n"
"Though, virtually any sample rate can be used by means of sample conversion, it can significantly degrade performance.\n"
"So, it's best to rely on the audio system to make necessary conversions and set the emulation to produce output\n"
"at default sample rate (which depends on analog output emulation mode).\n"
"However, there are cases when a different sample rate is necessary / desired.\n"
"In such cases, it is still preferable to set the sample rate to the lowest (closest) possible above the default rate.", nullptr));
#endif // QT_CONFIG(tooltip)
        srcQuality->setItemText(0, QCoreApplication::translate("AudioPropertiesDialog", "Fastest", nullptr));
        srcQuality->setItemText(1, QCoreApplication::translate("AudioPropertiesDialog", "Fast", nullptr));
        srcQuality->setItemText(2, QCoreApplication::translate("AudioPropertiesDialog", "Good", nullptr));
        srcQuality->setItemText(3, QCoreApplication::translate("AudioPropertiesDialog", "Best", nullptr));

#if QT_CONFIG(tooltip)
        srcQuality->setToolTip(QCoreApplication::translate("AudioPropertiesDialog", "The quality of sample rate conversion when used.", nullptr));
#endif // QT_CONFIG(tooltip)
        advancedTiming->setText(QCoreApplication::translate("AudioPropertiesDialog", "Use advanced timing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioPropertiesDialog: public Ui_AudioPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOPROPERTIESDIALOG_H
