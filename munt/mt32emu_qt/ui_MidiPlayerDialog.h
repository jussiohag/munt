/********************************************************************************
** Form generated from reading UI file 'MidiPlayerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDIPLAYERDIALOG_H
#define UI_MIDIPLAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MidiPlayerDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *playList;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addButton;
    QPushButton *addListButton;
    QPushButton *removeButton;
    QPushButton *clearButton;
    QPushButton *saveListButton;
    QPushButton *moveUpButton;
    QPushButton *moveDownButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *positionLabel;
    QSlider *positionSlider;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *playButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QPushButton *fastForwardButton;
    QPushButton *fastFastForwardButton;
    QLabel *tempoLabel;
    QSpinBox *tempoSpinBox;

    void setupUi(QDialog *MidiPlayerDialog)
    {
        if (MidiPlayerDialog->objectName().isEmpty())
            MidiPlayerDialog->setObjectName("MidiPlayerDialog");
        MidiPlayerDialog->resize(508, 282);
        verticalLayout_3 = new QVBoxLayout(MidiPlayerDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        playList = new QListWidget(MidiPlayerDialog);
        playList->setObjectName("playList");
        playList->setAcceptDrops(true);
        playList->setDragEnabled(true);
        playList->setDragDropMode(QAbstractItemView::DragDrop);

        horizontalLayout->addWidget(playList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        addButton = new QPushButton(MidiPlayerDialog);
        addButton->setObjectName("addButton");

        verticalLayout_2->addWidget(addButton);

        addListButton = new QPushButton(MidiPlayerDialog);
        addListButton->setObjectName("addListButton");

        verticalLayout_2->addWidget(addListButton);

        removeButton = new QPushButton(MidiPlayerDialog);
        removeButton->setObjectName("removeButton");

        verticalLayout_2->addWidget(removeButton);

        clearButton = new QPushButton(MidiPlayerDialog);
        clearButton->setObjectName("clearButton");

        verticalLayout_2->addWidget(clearButton);

        saveListButton = new QPushButton(MidiPlayerDialog);
        saveListButton->setObjectName("saveListButton");

        verticalLayout_2->addWidget(saveListButton);

        moveUpButton = new QPushButton(MidiPlayerDialog);
        moveUpButton->setObjectName("moveUpButton");

        verticalLayout_2->addWidget(moveUpButton);

        moveDownButton = new QPushButton(MidiPlayerDialog);
        moveDownButton->setObjectName("moveDownButton");

        verticalLayout_2->addWidget(moveDownButton);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        positionLabel = new QLabel(MidiPlayerDialog);
        positionLabel->setObjectName("positionLabel");

        horizontalLayout_2->addWidget(positionLabel);

        positionSlider = new QSlider(MidiPlayerDialog);
        positionSlider->setObjectName("positionSlider");
        positionSlider->setMaximum(1000);
        positionSlider->setSingleStep(10);
        positionSlider->setPageStep(100);
        positionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(positionSlider);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        playButton = new QPushButton(MidiPlayerDialog);
        playButton->setObjectName("playButton");

        horizontalLayout_3->addWidget(playButton);

        pauseButton = new QPushButton(MidiPlayerDialog);
        pauseButton->setObjectName("pauseButton");

        horizontalLayout_3->addWidget(pauseButton);

        stopButton = new QPushButton(MidiPlayerDialog);
        stopButton->setObjectName("stopButton");

        horizontalLayout_3->addWidget(stopButton);

        fastForwardButton = new QPushButton(MidiPlayerDialog);
        fastForwardButton->setObjectName("fastForwardButton");

        horizontalLayout_3->addWidget(fastForwardButton);

        fastFastForwardButton = new QPushButton(MidiPlayerDialog);
        fastFastForwardButton->setObjectName("fastFastForwardButton");

        horizontalLayout_3->addWidget(fastFastForwardButton);

        tempoLabel = new QLabel(MidiPlayerDialog);
        tempoLabel->setObjectName("tempoLabel");
        tempoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(tempoLabel);

        tempoSpinBox = new QSpinBox(MidiPlayerDialog);
        tempoSpinBox->setObjectName("tempoSpinBox");
        tempoSpinBox->setAccelerated(true);
        tempoSpinBox->setMinimum(1);
        tempoSpinBox->setMaximum(999);
        tempoSpinBox->setValue(120);

        horizontalLayout_3->addWidget(tempoSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        QWidget::setTabOrder(playList, addButton);
        QWidget::setTabOrder(addButton, addListButton);
        QWidget::setTabOrder(addListButton, removeButton);
        QWidget::setTabOrder(removeButton, clearButton);
        QWidget::setTabOrder(clearButton, saveListButton);
        QWidget::setTabOrder(saveListButton, moveUpButton);
        QWidget::setTabOrder(moveUpButton, moveDownButton);
        QWidget::setTabOrder(moveDownButton, positionSlider);
        QWidget::setTabOrder(positionSlider, playButton);
        QWidget::setTabOrder(playButton, pauseButton);
        QWidget::setTabOrder(pauseButton, stopButton);
        QWidget::setTabOrder(stopButton, fastForwardButton);
        QWidget::setTabOrder(fastForwardButton, fastFastForwardButton);
        QWidget::setTabOrder(fastFastForwardButton, tempoSpinBox);

        retranslateUi(MidiPlayerDialog);

        playButton->setDefault(true);


        QMetaObject::connectSlotsByName(MidiPlayerDialog);
    } // setupUi

    void retranslateUi(QDialog *MidiPlayerDialog)
    {
        MidiPlayerDialog->setWindowTitle(QCoreApplication::translate("MidiPlayerDialog", "MIDI Player", nullptr));
        addButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Add", nullptr));
        addListButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Add List", nullptr));
        removeButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Remove", nullptr));
        clearButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Clear", nullptr));
        saveListButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Save List", nullptr));
        moveUpButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Up", nullptr));
        moveDownButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Down", nullptr));
        positionLabel->setText(QCoreApplication::translate("MidiPlayerDialog", "00:00 / 00:00", nullptr));
        playButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Play", nullptr));
        pauseButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Pause", nullptr));
        stopButton->setText(QCoreApplication::translate("MidiPlayerDialog", "Stop", nullptr));
        fastForwardButton->setText(QCoreApplication::translate("MidiPlayerDialog", "FForward", nullptr));
        fastFastForwardButton->setText(QCoreApplication::translate("MidiPlayerDialog", "FFForward", nullptr));
        tempoLabel->setText(QCoreApplication::translate("MidiPlayerDialog", "Tempo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MidiPlayerDialog: public Ui_MidiPlayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDIPLAYERDIALOG_H
