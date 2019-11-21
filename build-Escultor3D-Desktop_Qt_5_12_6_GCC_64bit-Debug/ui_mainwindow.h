/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "colorwindow.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPutVoxel;
    QAction *actionCutVoxel;
    QAction *actionPutBox;
    QAction *actionCutBox;
    QAction *actionPutSphere;
    QAction *actionCutSphere;
    QAction *actionPutEllipsoid;
    QAction *actionCutEllipsoid;
    QAction *actionRotClk;
    QAction *actionRotCClk;
    QAction *actionInvert;
    QAction *actionNewBox;
    QAction *actionShow_OFF;
    QAction *actionShow_VECT;
    QAction *actionSave;
    QAction *actionXY;
    QAction *actionZX;
    QAction *actionYZ;
    QWidget *centralWidget;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    Plotter *widgetPlotter;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QLCDNumber *lcdNumber_8;
    QSlider *horizontalSliderSlice;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QSlider *horizontalSliderRD;
    QLCDNumber *lcdNumber_4;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdNumber_5;
    QSlider *horizontalSliderRY;
    QLCDNumber *lcdNumber_6;
    QSlider *horizontalSliderRZ;
    QSlider *horizontalSliderRX;
    QLabel *label_6;
    QLCDNumber *lcdNumber_7;
    QLabel *label_7;
    QLabel *label_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QSlider *horizontalSliderX;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_3;
    QLabel *label_2;
    QSlider *horizontalSliderZ;
    QLCDNumber *lcdNumber_2;
    QSlider *horizontalSliderY;
    QGridLayout *gridLayout_7;
    ColorWindow *widgetColor;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLCDNumber *lcdNumber_9;
    QLabel *label_11;
    QSlider *horizontalSliderGreen;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_11;
    QSlider *horizontalSliderAlpha;
    QLCDNumber *lcdNumber_12;
    QLabel *label_9;
    QLabel *label_12;
    QSlider *horizontalSliderBlue;
    QLabel *label_10;
    QSlider *horizontalSliderRed;
    QGridLayout *gridLayout_9;
    QLabel *labelFG;
    QLabel *labelSize;
    QLabel *labelDim;
    QGridLayout *gridLayout_14;
    QLCDNumber *lcdNumberColuna;
    QLCDNumber *lcdNumberLinha;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1104, 744);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background:#000;\n"
"color:rgb(115, 210, 22)"));
        actionPutVoxel = new QAction(MainWindow);
        actionPutVoxel->setObjectName(QString::fromUtf8("actionPutVoxel"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/3d.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/images/index2.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        actionPutVoxel->setIcon(icon);
        actionCutVoxel = new QAction(MainWindow);
        actionCutVoxel->setObjectName(QString::fromUtf8("actionCutVoxel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/3d2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutVoxel->setIcon(icon1);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/rubik.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutBox->setIcon(icon2);
        actionCutBox = new QAction(MainWindow);
        actionCutBox->setObjectName(QString::fromUtf8("actionCutBox"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/rubik2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutBox->setIcon(icon3);
        actionPutSphere = new QAction(MainWindow);
        actionPutSphere->setObjectName(QString::fromUtf8("actionPutSphere"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutSphere->setIcon(icon4);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/circle2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutSphere->setIcon(icon5);
        actionPutEllipsoid = new QAction(MainWindow);
        actionPutEllipsoid->setObjectName(QString::fromUtf8("actionPutEllipsoid"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/ellipse.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutEllipsoid->setIcon(icon6);
        actionCutEllipsoid = new QAction(MainWindow);
        actionCutEllipsoid->setObjectName(QString::fromUtf8("actionCutEllipsoid"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/ellipse2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutEllipsoid->setIcon(icon7);
        actionRotClk = new QAction(MainWindow);
        actionRotClk->setObjectName(QString::fromUtf8("actionRotClk"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotClk->setIcon(icon8);
        actionRotCClk = new QAction(MainWindow);
        actionRotCClk->setObjectName(QString::fromUtf8("actionRotCClk"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/undo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotCClk->setIcon(icon9);
        actionInvert = new QAction(MainWindow);
        actionInvert->setObjectName(QString::fromUtf8("actionInvert"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/invert.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionInvert->setIcon(icon10);
        actionNewBox = new QAction(MainWindow);
        actionNewBox->setObjectName(QString::fromUtf8("actionNewBox"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/file.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewBox->setIcon(icon11);
        actionShow_OFF = new QAction(MainWindow);
        actionShow_OFF->setObjectName(QString::fromUtf8("actionShow_OFF"));
        actionShow_VECT = new QAction(MainWindow);
        actionShow_VECT->setObjectName(QString::fromUtf8("actionShow_VECT"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon12);
        actionXY = new QAction(MainWindow);
        actionXY->setObjectName(QString::fromUtf8("actionXY"));
        actionZX = new QAction(MainWindow);
        actionZX->setObjectName(QString::fromUtf8("actionZX"));
        actionYZ = new QAction(MainWindow);
        actionYZ->setObjectName(QString::fromUtf8("actionYZ"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName(QString::fromUtf8("widgetPlotter"));
        widgetPlotter->setMinimumSize(QSize(471, 431));

        gridLayout_11->addWidget(widgetPlotter, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setStyleSheet(QString::fromUtf8("t"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        lcdNumber_8 = new QLCDNumber(centralWidget);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));

        gridLayout_10->addWidget(lcdNumber_8, 2, 0, 1, 1);

        horizontalSliderSlice = new QSlider(centralWidget);
        horizontalSliderSlice->setObjectName(QString::fromUtf8("horizontalSliderSlice"));
        horizontalSliderSlice->setLayoutDirection(Qt::LeftToRight);
        horizontalSliderSlice->setStyleSheet(QString::fromUtf8(""));
        horizontalSliderSlice->setOrientation(Qt::Vertical);

        gridLayout_10->addWidget(horizontalSliderSlice, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_10, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSliderRD = new QSlider(groupBox_3);
        horizontalSliderRD->setObjectName(QString::fromUtf8("horizontalSliderRD"));
        horizontalSliderRD->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderRD, 0, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(groupBox_3);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout_2->addWidget(lcdNumber_4, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lcdNumber_5 = new QLCDNumber(groupBox_2);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout_3->addWidget(lcdNumber_5, 0, 2, 1, 1);

        horizontalSliderRY = new QSlider(groupBox_2);
        horizontalSliderRY->setObjectName(QString::fromUtf8("horizontalSliderRY"));
        horizontalSliderRY->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRY, 1, 1, 1, 1);

        lcdNumber_6 = new QLCDNumber(groupBox_2);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout_3->addWidget(lcdNumber_6, 1, 2, 1, 1);

        horizontalSliderRZ = new QSlider(groupBox_2);
        horizontalSliderRZ->setObjectName(QString::fromUtf8("horizontalSliderRZ"));
        horizontalSliderRZ->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRZ, 2, 1, 1, 1);

        horizontalSliderRX = new QSlider(groupBox_2);
        horizontalSliderRX->setObjectName(QString::fromUtf8("horizontalSliderRX"));
        horizontalSliderRX->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRX, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        lcdNumber_7 = new QLCDNumber(groupBox_2);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));

        gridLayout_3->addWidget(lcdNumber_7, 2, 2, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSliderX = new QSlider(groupBox);
        horizontalSliderX->setObjectName(QString::fromUtf8("horizontalSliderX"));
        horizontalSliderX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderX, 0, 1, 1, 1);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 2, 1, 1);

        lcdNumber_3 = new QLCDNumber(groupBox);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSliderZ = new QSlider(groupBox);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderZ, 2, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 2, 1, 1);

        horizontalSliderY = new QSlider(groupBox);
        horizontalSliderY->setObjectName(QString::fromUtf8("horizontalSliderY"));
        horizontalSliderY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderY, 1, 1, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_6->setRowStretch(0, 10);
        gridLayout_6->setRowStretch(1, 5);
        gridLayout_6->setRowStretch(2, 10);

        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setSizeConstraint(QLayout::SetMaximumSize);
        widgetColor = new ColorWindow(centralWidget);
        widgetColor->setObjectName(QString::fromUtf8("widgetColor"));

        gridLayout_7->addWidget(widgetColor, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lcdNumber_9 = new QLCDNumber(groupBox_4);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));

        gridLayout_5->addWidget(lcdNumber_9, 0, 2, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 2, 0, 1, 1);

        horizontalSliderGreen = new QSlider(groupBox_4);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setSliderPosition(99);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderGreen, 1, 1, 1, 1);

        lcdNumber_10 = new QLCDNumber(groupBox_4);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));

        gridLayout_5->addWidget(lcdNumber_10, 1, 2, 1, 1);

        lcdNumber_11 = new QLCDNumber(groupBox_4);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));

        gridLayout_5->addWidget(lcdNumber_11, 2, 2, 1, 1);

        horizontalSliderAlpha = new QSlider(groupBox_4);
        horizontalSliderAlpha->setObjectName(QString::fromUtf8("horizontalSliderAlpha"));
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderAlpha, 3, 1, 1, 1);

        lcdNumber_12 = new QLCDNumber(groupBox_4);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));

        gridLayout_5->addWidget(lcdNumber_12, 3, 2, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 1, 0, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 3, 0, 1, 1);

        horizontalSliderBlue = new QSlider(groupBox_4);
        horizontalSliderBlue->setObjectName(QString::fromUtf8("horizontalSliderBlue"));
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderBlue, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        horizontalSliderRed = new QSlider(groupBox_4);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderRed, 0, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_4, 0, 1, 1, 1);

        gridLayout_7->setColumnStretch(0, 30);
        gridLayout_7->setColumnStretch(1, 60);

        gridLayout_8->addLayout(gridLayout_7, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_8, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_4, 0, 1, 1, 1);

        gridLayout_11->setColumnStretch(0, 60);
        gridLayout_11->setColumnStretch(1, 30);

        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setSizeConstraint(QLayout::SetMinimumSize);
        labelFG = new QLabel(centralWidget);
        labelFG->setObjectName(QString::fromUtf8("labelFG"));

        gridLayout_9->addWidget(labelFG, 0, 2, 1, 1);

        labelSize = new QLabel(centralWidget);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        gridLayout_9->addWidget(labelSize, 0, 3, 1, 1);

        labelDim = new QLabel(centralWidget);
        labelDim->setObjectName(QString::fromUtf8("labelDim"));
        labelDim->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(labelDim, 0, 1, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        lcdNumberColuna = new QLCDNumber(centralWidget);
        lcdNumberColuna->setObjectName(QString::fromUtf8("lcdNumberColuna"));
        lcdNumberColuna->setAcceptDrops(false);
        lcdNumberColuna->setAutoFillBackground(false);
        lcdNumberColuna->setStyleSheet(QString::fromUtf8("color:rgb(115, 210, 22)"));

        gridLayout_14->addWidget(lcdNumberColuna, 0, 1, 1, 1);

        lcdNumberLinha = new QLCDNumber(centralWidget);
        lcdNumberLinha->setObjectName(QString::fromUtf8("lcdNumberLinha"));
        lcdNumberLinha->setStyleSheet(QString::fromUtf8(""));

        gridLayout_14->addWidget(lcdNumberLinha, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_14, 0, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_9, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1104, 24));
        menuBar->setAutoFillBackground(false);
        menuBar->setStyleSheet(QString::fromUtf8("background:#000;\n"
"color:rgb(115, 210, 22)"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setStyleSheet(QString::fromUtf8("background:#000;\n"
"color:rgb(115, 210, 22)"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        toolBar_2->setStyleSheet(QString::fromUtf8("background:#000;\n"
"color:rgb(115, 210, 22)"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        toolBar_3->setStyleSheet(QString::fromUtf8("background:#000;\n"
"color:rgb(115, 210, 22)"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(MainWindow);
        toolBar_4->setObjectName(QString::fromUtf8("toolBar_4"));
        toolBar_4->setStyleSheet(QString::fromUtf8("background:#000;\n"
"color:rgb(115, 210, 22)"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_4);

        toolBar->addAction(actionRotClk);
        toolBar->addAction(actionRotCClk);
        toolBar->addAction(actionInvert);
        toolBar_2->addAction(actionPutVoxel);
        toolBar_2->addAction(actionCutVoxel);
        toolBar_2->addAction(actionPutBox);
        toolBar_2->addAction(actionCutBox);
        toolBar_2->addAction(actionPutSphere);
        toolBar_2->addAction(actionCutSphere);
        toolBar_2->addAction(actionPutEllipsoid);
        toolBar_2->addAction(actionCutEllipsoid);
        toolBar_3->addAction(actionXY);
        toolBar_3->addAction(actionZX);
        toolBar_3->addAction(actionYZ);
        toolBar_4->addAction(actionShow_OFF);
        toolBar_4->addAction(actionShow_VECT);
        toolBar_4->addAction(actionSave);
        toolBar_4->addAction(actionNewBox);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderX, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderY, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderRD, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(horizontalSliderRX, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSliderRY, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSliderRZ, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(horizontalSliderRed, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(valueChanged(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(horizontalSliderAlpha, SIGNAL(valueChanged(int)), lcdNumber_12, SLOT(display(int)));
        QObject::connect(horizontalSliderRed, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeRed(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeGreen(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeBlue(int)));
        QObject::connect(horizontalSliderSlice, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPutVoxel->setText(QApplication::translate("MainWindow", "Put Voxel", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPutVoxel->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionCutVoxel->setText(QApplication::translate("MainWindow", "cutVoxel", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCutVoxel->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionPutBox->setText(QApplication::translate("MainWindow", "putBox", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPutBox->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionCutBox->setText(QApplication::translate("MainWindow", "cutBox", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCutBox->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionPutSphere->setText(QApplication::translate("MainWindow", "putSphere", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPutSphere->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionCutSphere->setText(QApplication::translate("MainWindow", "cutSphere", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCutSphere->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionPutEllipsoid->setText(QApplication::translate("MainWindow", "putEllipsoid", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPutEllipsoid->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionCutEllipsoid->setText(QApplication::translate("MainWindow", "cutEllipsoid", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCutEllipsoid->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionRotClk->setText(QApplication::translate("MainWindow", "RotClk", nullptr));
        actionRotCClk->setText(QApplication::translate("MainWindow", "RotCClk", nullptr));
        actionInvert->setText(QApplication::translate("MainWindow", "Invert", nullptr));
        actionNewBox->setText(QApplication::translate("MainWindow", "NewBox", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNewBox->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionShow_OFF->setText(QApplication::translate("MainWindow", "OFF", nullptr));
#ifndef QT_NO_TOOLTIP
        actionShow_OFF->setToolTip(QApplication::translate("MainWindow", "OFF", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShow_OFF->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionShow_VECT->setText(QApplication::translate("MainWindow", "VECT", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShow_VECT->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionXY->setText(QApplication::translate("MainWindow", "XY", nullptr));
        actionZX->setText(QApplication::translate("MainWindow", "ZX", nullptr));
        actionYZ->setText(QApplication::translate("MainWindow", "YZ", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Fatia", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Raio da Espera", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Rd", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Raio da Elipse", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "RdY", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "RdZ", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "RdX", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Tamanho do Cubo", nullptr));
        label->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Z", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Y", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Cor", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "B", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "G", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "A", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "R", nullptr));
        labelFG->setText(QApplication::translate("MainWindow", "Put Voxel", nullptr));
        labelSize->setText(QApplication::translate("MainWindow", "50 x 50 x 50", nullptr));
        labelDim->setText(QApplication::translate("MainWindow", "XY1", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QApplication::translate("MainWindow", "toolBar_3", nullptr));
        toolBar_4->setWindowTitle(QApplication::translate("MainWindow", "toolBar_4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
