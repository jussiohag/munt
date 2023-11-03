/********************************************************************************
** Form generated from reading UI file 'MidiConverterDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDICONVERTERDIALOG_H
#define UI_MIDICONVERTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MidiConverterDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QListWidget *midiList;
    QLabel *label;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QListWidget *pcmList;
    QVBoxLayout *verticalLayout_2;
    QPushButton *newPcmButton;
    QPushButton *newGroupButton;
    QPushButton *addMidiButton;
    QPushButton *addInitButton;
    QPushButton *editPcmButton;
    QPushButton *removeButton;
    QPushButton *clearButton;
    QPushButton *moveUpButton;
    QPushButton *moveDownButton;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *label_4;
    QComboBox *profileComboBox;

    void setupUi(QDialog *MidiConverterDialog)
    {
        if (MidiConverterDialog->objectName().isEmpty())
            MidiConverterDialog->setObjectName("MidiConverterDialog");
        MidiConverterDialog->resize(649, 366);
        verticalLayout_3 = new QVBoxLayout(MidiConverterDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(MidiConverterDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        midiList = new QListWidget(MidiConverterDialog);
        midiList->setObjectName("midiList");
        midiList->setDragEnabled(true);
        midiList->setDragDropMode(QAbstractItemView::DragDrop);

        verticalLayout_4->addWidget(midiList);


        horizontalLayout->addLayout(verticalLayout_4);

        label = new QLabel(MidiConverterDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(MidiConverterDialog);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        pcmList = new QListWidget(MidiConverterDialog);
        pcmList->setObjectName("pcmList");

        verticalLayout_5->addWidget(pcmList);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        newPcmButton = new QPushButton(MidiConverterDialog);
        newPcmButton->setObjectName("newPcmButton");

        verticalLayout_2->addWidget(newPcmButton);

        newGroupButton = new QPushButton(MidiConverterDialog);
        newGroupButton->setObjectName("newGroupButton");

        verticalLayout_2->addWidget(newGroupButton);

        addMidiButton = new QPushButton(MidiConverterDialog);
        addMidiButton->setObjectName("addMidiButton");
        addMidiButton->setEnabled(false);

        verticalLayout_2->addWidget(addMidiButton);

        addInitButton = new QPushButton(MidiConverterDialog);
        addInitButton->setObjectName("addInitButton");
        addInitButton->setEnabled(false);

        verticalLayout_2->addWidget(addInitButton);

        editPcmButton = new QPushButton(MidiConverterDialog);
        editPcmButton->setObjectName("editPcmButton");
        editPcmButton->setEnabled(false);

        verticalLayout_2->addWidget(editPcmButton);

        removeButton = new QPushButton(MidiConverterDialog);
        removeButton->setObjectName("removeButton");
        removeButton->setEnabled(false);

        verticalLayout_2->addWidget(removeButton);

        clearButton = new QPushButton(MidiConverterDialog);
        clearButton->setObjectName("clearButton");
        clearButton->setEnabled(false);

        verticalLayout_2->addWidget(clearButton);

        moveUpButton = new QPushButton(MidiConverterDialog);
        moveUpButton->setObjectName("moveUpButton");
        moveUpButton->setEnabled(false);

        verticalLayout_2->addWidget(moveUpButton);

        moveDownButton = new QPushButton(MidiConverterDialog);
        moveDownButton->setObjectName("moveDownButton");
        moveDownButton->setEnabled(false);

        verticalLayout_2->addWidget(moveDownButton);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(MidiConverterDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setEnabled(false);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        startButton = new QPushButton(MidiConverterDialog);
        startButton->setObjectName("startButton");
        startButton->setEnabled(false);

        horizontalLayout_3->addWidget(startButton);

        stopButton = new QPushButton(MidiConverterDialog);
        stopButton->setObjectName("stopButton");
        stopButton->setEnabled(false);

        horizontalLayout_3->addWidget(stopButton);

        label_4 = new QLabel(MidiConverterDialog);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);

        profileComboBox = new QComboBox(MidiConverterDialog);
        profileComboBox->setObjectName("profileComboBox");

        horizontalLayout_3->addWidget(profileComboBox);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        QWidget::setTabOrder(midiList, pcmList);
        QWidget::setTabOrder(pcmList, newPcmButton);
        QWidget::setTabOrder(newPcmButton, newGroupButton);
        QWidget::setTabOrder(newGroupButton, addMidiButton);
        QWidget::setTabOrder(addMidiButton, addInitButton);
        QWidget::setTabOrder(addInitButton, editPcmButton);
        QWidget::setTabOrder(editPcmButton, removeButton);
        QWidget::setTabOrder(removeButton, clearButton);
        QWidget::setTabOrder(clearButton, moveUpButton);
        QWidget::setTabOrder(moveUpButton, moveDownButton);
        QWidget::setTabOrder(moveDownButton, startButton);
        QWidget::setTabOrder(startButton, stopButton);

        retranslateUi(MidiConverterDialog);

        startButton->setDefault(true);


        QMetaObject::connectSlotsByName(MidiConverterDialog);
    } // setupUi

    void retranslateUi(QDialog *MidiConverterDialog)
    {
        MidiConverterDialog->setWindowTitle(QCoreApplication::translate("MidiConverterDialog", "Standard MIDI file converter", nullptr));
        label_2->setText(QCoreApplication::translate("MidiConverterDialog", "Source MIDI files", nullptr));
        label->setText(QCoreApplication::translate("MidiConverterDialog", "\342\206\222", nullptr));
        label_3->setText(QCoreApplication::translate("MidiConverterDialog", "Output PCM files", nullptr));
        newPcmButton->setText(QCoreApplication::translate("MidiConverterDialog", "New PCM", nullptr));
        newGroupButton->setText(QCoreApplication::translate("MidiConverterDialog", "New Group", nullptr));
        addMidiButton->setText(QCoreApplication::translate("MidiConverterDialog", "Add MIDI", nullptr));
        addInitButton->setText(QCoreApplication::translate("MidiConverterDialog", "Add init to all", nullptr));
        editPcmButton->setText(QCoreApplication::translate("MidiConverterDialog", "Edit PCM", nullptr));
        removeButton->setText(QCoreApplication::translate("MidiConverterDialog", "Remove", nullptr));
        clearButton->setText(QCoreApplication::translate("MidiConverterDialog", "Clear", nullptr));
        moveUpButton->setText(QCoreApplication::translate("MidiConverterDialog", "Up", nullptr));
        moveDownButton->setText(QCoreApplication::translate("MidiConverterDialog", "Down", nullptr));
        startButton->setText(QCoreApplication::translate("MidiConverterDialog", "Start", nullptr));
        stopButton->setText(QCoreApplication::translate("MidiConverterDialog", "Stop", nullptr));
        label_4->setText(QCoreApplication::translate("MidiConverterDialog", "Synth Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MidiConverterDialog: public Ui_MidiConverterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDICONVERTERDIALOG_H
