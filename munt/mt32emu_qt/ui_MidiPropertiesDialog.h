/********************************************************************************
** Form generated from reading UI file 'MidiPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDIPROPERTIESDIALOG_H
#define UI_MIDIPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MidiPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QListWidget *midiPortList;
    QLabel *label_2;
    QLineEdit *midiPortName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MidiPropertiesDialog)
    {
        if (MidiPropertiesDialog->objectName().isEmpty())
            MidiPropertiesDialog->setObjectName("MidiPropertiesDialog");
        MidiPropertiesDialog->resize(394, 286);
        MidiPropertiesDialog->setModal(true);
        verticalLayout_3 = new QVBoxLayout(MidiPropertiesDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_1 = new QLabel(MidiPropertiesDialog);
        label_1->setObjectName("label_1");

        verticalLayout->addWidget(label_1);

        midiPortList = new QListWidget(MidiPropertiesDialog);
        midiPortList->setObjectName("midiPortList");

        verticalLayout->addWidget(midiPortList);

        label_2 = new QLabel(MidiPropertiesDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        midiPortName = new QLineEdit(MidiPropertiesDialog);
        midiPortName->setObjectName("midiPortName");

        verticalLayout->addWidget(midiPortName);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(MidiPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        QWidget::setTabOrder(midiPortList, midiPortName);
        QWidget::setTabOrder(midiPortName, buttonBox);

        retranslateUi(MidiPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MidiPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MidiPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MidiPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *MidiPropertiesDialog)
    {
        MidiPropertiesDialog->setWindowTitle(QCoreApplication::translate("MidiPropertiesDialog", "MIDI Properties", nullptr));
        label_1->setText(QCoreApplication::translate("MidiPropertiesDialog", "MIDI input ports", nullptr));
        label_2->setText(QCoreApplication::translate("MidiPropertiesDialog", "MIDI input port name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MidiPropertiesDialog: public Ui_MidiPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDIPROPERTIESDIALOG_H
