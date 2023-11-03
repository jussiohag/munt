/********************************************************************************
** Form generated from reading UI file 'ROMSelectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROMSELECTIONDIALOG_H
#define UI_ROMSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ROMSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *romDirLineEdit;
    QPushButton *romDirButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *fileFilterCombo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *machineCombo;
    QTableWidget *romInfoTable;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;
    QPushButton *refreshButton;

    void setupUi(QDialog *ROMSelectionDialog)
    {
        if (ROMSelectionDialog->objectName().isEmpty())
            ROMSelectionDialog->setObjectName("ROMSelectionDialog");
        ROMSelectionDialog->resize(623, 296);
        ROMSelectionDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ROMSelectionDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ROMSelectionDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        romDirLineEdit = new QLineEdit(ROMSelectionDialog);
        romDirLineEdit->setObjectName("romDirLineEdit");
        romDirLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(romDirLineEdit);

        romDirButton = new QPushButton(ROMSelectionDialog);
        romDirButton->setObjectName("romDirButton");

        horizontalLayout->addWidget(romDirButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(ROMSelectionDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        fileFilterCombo = new QComboBox(ROMSelectionDialog);
        fileFilterCombo->setObjectName("fileFilterCombo");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileFilterCombo->sizePolicy().hasHeightForWidth());
        fileFilterCombo->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(fileFilterCombo);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(ROMSelectionDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        machineCombo = new QComboBox(ROMSelectionDialog);
        machineCombo->setObjectName("machineCombo");
        sizePolicy.setHeightForWidth(machineCombo->sizePolicy().hasHeightForWidth());
        machineCombo->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(machineCombo);


        verticalLayout->addLayout(horizontalLayout_4);

        romInfoTable = new QTableWidget(ROMSelectionDialog);
        if (romInfoTable->columnCount() < 6)
            romInfoTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        romInfoTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        romInfoTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        romInfoTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        romInfoTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        romInfoTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        romInfoTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        romInfoTable->setObjectName("romInfoTable");
        romInfoTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        romInfoTable->setColumnCount(6);
        romInfoTable->horizontalHeader()->setCascadingSectionResizes(true);

        verticalLayout->addWidget(romInfoTable);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        buttonBox = new QDialogButtonBox(ROMSelectionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);

        refreshButton = new QPushButton(ROMSelectionDialog);
        refreshButton->setObjectName("refreshButton");

        horizontalLayout_2->addWidget(refreshButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ROMSelectionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ROMSelectionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ROMSelectionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ROMSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *ROMSelectionDialog)
    {
        ROMSelectionDialog->setWindowTitle(QCoreApplication::translate("ROMSelectionDialog", "ROM Selection", nullptr));
        label->setText(QCoreApplication::translate("ROMSelectionDialog", "ROM Directory:", nullptr));
        romDirButton->setText(QCoreApplication::translate("ROMSelectionDialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("ROMSelectionDialog", "File Filter:", nullptr));
        label_3->setText(QCoreApplication::translate("ROMSelectionDialog", "Machine Model:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = romInfoTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ROMSelectionDialog", "File Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = romInfoTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ROMSelectionDialog", "ROM ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = romInfoTable->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ROMSelectionDialog", "ROM Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = romInfoTable->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ROMSelectionDialog", "ROM Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = romInfoTable->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ROMSelectionDialog", "ROM SHA1 Digest", nullptr));
        refreshButton->setText(QCoreApplication::translate("ROMSelectionDialog", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ROMSelectionDialog: public Ui_ROMSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROMSELECTIONDIALOG_H
