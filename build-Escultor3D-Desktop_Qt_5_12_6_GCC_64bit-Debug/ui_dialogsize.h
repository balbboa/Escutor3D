/********************************************************************************
** Form generated from reading UI file 'dialogsize.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSIZE_H
#define UI_DIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_DialogSize
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSliderSX;
    QSlider *horizontalSliderSY;
    QSlider *horizontalSliderSZ;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;

    void setupUi(QDialog *DialogSize)
    {
        if (DialogSize->objectName().isEmpty())
            DialogSize->setObjectName(QString::fromUtf8("DialogSize"));
        DialogSize->resize(400, 198);
        buttonBox = new QDialogButtonBox(DialogSize);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 120, 371, 61));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        horizontalSliderSX = new QSlider(DialogSize);
        horizontalSliderSX->setObjectName(QString::fromUtf8("horizontalSliderSX"));
        horizontalSliderSX->setGeometry(QRect(20, 20, 301, 16));
        horizontalSliderSX->setOrientation(Qt::Horizontal);
        horizontalSliderSY = new QSlider(DialogSize);
        horizontalSliderSY->setObjectName(QString::fromUtf8("horizontalSliderSY"));
        horizontalSliderSY->setGeometry(QRect(20, 50, 301, 16));
        horizontalSliderSY->setOrientation(Qt::Horizontal);
        horizontalSliderSZ = new QSlider(DialogSize);
        horizontalSliderSZ->setObjectName(QString::fromUtf8("horizontalSliderSZ"));
        horizontalSliderSZ->setGeometry(QRect(20, 80, 301, 16));
        horizontalSliderSZ->setOrientation(Qt::Horizontal);
        lcdNumber = new QLCDNumber(DialogSize);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(330, 10, 64, 23));
        lcdNumber_2 = new QLCDNumber(DialogSize);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(330, 40, 64, 23));
        lcdNumber_3 = new QLCDNumber(DialogSize);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(330, 70, 64, 23));

        retranslateUi(DialogSize);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogSize, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogSize, SLOT(reject()));
        QObject::connect(horizontalSliderSX, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderSY, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderSZ, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));

        QMetaObject::connectSlotsByName(DialogSize);
    } // setupUi

    void retranslateUi(QDialog *DialogSize)
    {
        DialogSize->setWindowTitle(QApplication::translate("DialogSize", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSize: public Ui_DialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSIZE_H
