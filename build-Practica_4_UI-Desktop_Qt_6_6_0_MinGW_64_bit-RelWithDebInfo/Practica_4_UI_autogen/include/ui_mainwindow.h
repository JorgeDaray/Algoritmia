/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *table_widget;
    QWidget *Ingresar;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_Neurona_agregar;
    QGridLayout *gridLayout_4;
    QLabel *label_ID;
    QLineEdit *leID;
    QLabel *label_Voltaje;
    QLineEdit *levoltaje;
    QLabel *label_X;
    QLineEdit *leX;
    QLabel *label_Y;
    QLineEdit *leY;
    QLabel *label_Red;
    QLineEdit *leRed;
    QLabel *label_Green;
    QLineEdit *leGreen;
    QLabel *label_Blue;
    QLineEdit *leBlue;
    QPushButton *pushButton_guardar_Final;
    QPushButton *pushButton_Imprimir;
    QPushButton *pushButton_guardar_Inicio;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit_imprimir;
    QWidget *Imprimir;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_mostrar_tabla;
    QPushButton *pushButton_ordenar;
    QLineEdit *leneurona;
    QPushButton *pushButton_buscar_neurona;
    QPushButton *pushButton_limpiar_tabla;
    QTableWidget *table_neurona;
    QWidget *Dibujar;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_Dibujar;
    QPushButton *pushButton_Limpiar_2;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(766, 532);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(165, 165, 165);\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-bottom-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        actionAbrir->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        actionAbrir->setFont(font);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        actionGuardar->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        table_widget = new QTabWidget(centralwidget);
        table_widget->setObjectName("table_widget");
        table_widget->setFont(font);
        table_widget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"border-bottom-color: rgb(0, 0, 0);"));
        Ingresar = new QWidget();
        Ingresar->setObjectName("Ingresar");
        Ingresar->setEnabled(true);
        Ingresar->setTabletTracking(false);
        Ingresar->setAcceptDrops(false);
        Ingresar->setAutoFillBackground(false);
        Ingresar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-bottom-color: rgb(0, 0, 0);"));
        gridLayout_3 = new QGridLayout(Ingresar);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox_Neurona_agregar = new QGroupBox(Ingresar);
        groupBox_Neurona_agregar->setObjectName("groupBox_Neurona_agregar");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        groupBox_Neurona_agregar->setFont(font1);
        groupBox_Neurona_agregar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        gridLayout_4 = new QGridLayout(groupBox_Neurona_agregar);
        gridLayout_4->setObjectName("gridLayout_4");
        label_ID = new QLabel(groupBox_Neurona_agregar);
        label_ID->setObjectName("label_ID");
        label_ID->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(44, 55, 79);"));

        gridLayout_4->addWidget(label_ID, 0, 0, 1, 1);

        leID = new QLineEdit(groupBox_Neurona_agregar);
        leID->setObjectName("leID");
        leID->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom-color: rgb(0, 0, 0);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_4->addWidget(leID, 0, 1, 1, 1);

        label_Voltaje = new QLabel(groupBox_Neurona_agregar);
        label_Voltaje->setObjectName("label_Voltaje");
        label_Voltaje->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 55, 79);"));

        gridLayout_4->addWidget(label_Voltaje, 1, 0, 1, 1);

        levoltaje = new QLineEdit(groupBox_Neurona_agregar);
        levoltaje->setObjectName("levoltaje");
        levoltaje->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_4->addWidget(levoltaje, 1, 1, 1, 1);

        label_X = new QLabel(groupBox_Neurona_agregar);
        label_X->setObjectName("label_X");
        label_X->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 55, 79);"));

        gridLayout_4->addWidget(label_X, 2, 0, 1, 1);

        leX = new QLineEdit(groupBox_Neurona_agregar);
        leX->setObjectName("leX");
        leX->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_4->addWidget(leX, 2, 1, 1, 1);

        label_Y = new QLabel(groupBox_Neurona_agregar);
        label_Y->setObjectName("label_Y");
        label_Y->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 55, 79);"));

        gridLayout_4->addWidget(label_Y, 3, 0, 1, 1);

        leY = new QLineEdit(groupBox_Neurona_agregar);
        leY->setObjectName("leY");
        leY->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_4->addWidget(leY, 3, 1, 1, 1);

        label_Red = new QLabel(groupBox_Neurona_agregar);
        label_Red->setObjectName("label_Red");
        label_Red->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 55, 79);"));

        gridLayout_4->addWidget(label_Red, 4, 0, 1, 1);

        leRed = new QLineEdit(groupBox_Neurona_agregar);
        leRed->setObjectName("leRed");
        leRed->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_4->addWidget(leRed, 4, 1, 1, 1);

        label_Green = new QLabel(groupBox_Neurona_agregar);
        label_Green->setObjectName("label_Green");
        label_Green->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 55, 79);"));

        gridLayout_4->addWidget(label_Green, 5, 0, 1, 1);

        leGreen = new QLineEdit(groupBox_Neurona_agregar);
        leGreen->setObjectName("leGreen");
        leGreen->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_4->addWidget(leGreen, 5, 1, 1, 1);

        label_Blue = new QLabel(groupBox_Neurona_agregar);
        label_Blue->setObjectName("label_Blue");
        label_Blue->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 55, 79);"));

        gridLayout_4->addWidget(label_Blue, 6, 0, 1, 1);

        leBlue = new QLineEdit(groupBox_Neurona_agregar);
        leBlue->setObjectName("leBlue");
        leBlue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_4->addWidget(leBlue, 6, 1, 1, 1);

        pushButton_guardar_Final = new QPushButton(groupBox_Neurona_agregar);
        pushButton_guardar_Final->setObjectName("pushButton_guardar_Final");
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(58, 58, 58, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        pushButton_guardar_Final->setPalette(palette);
        pushButton_guardar_Final->setMouseTracking(false);
        pushButton_guardar_Final->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);\n"
"border-color: rgb(255, 255, 255);"));
        pushButton_guardar_Final->setCheckable(false);

        gridLayout_4->addWidget(pushButton_guardar_Final, 7, 1, 1, 1);

        pushButton_Imprimir = new QPushButton(groupBox_Neurona_agregar);
        pushButton_Imprimir->setObjectName("pushButton_Imprimir");
        pushButton_Imprimir->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);\n"
"border-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(pushButton_Imprimir, 7, 2, 1, 1);

        pushButton_guardar_Inicio = new QPushButton(groupBox_Neurona_agregar);
        pushButton_guardar_Inicio->setObjectName("pushButton_guardar_Inicio");
        pushButton_guardar_Inicio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);\n"
"border-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(pushButton_guardar_Inicio, 8, 1, 1, 1);

        pushButton = new QPushButton(groupBox_Neurona_agregar);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);"));

        gridLayout_4->addWidget(pushButton, 8, 2, 1, 1);

        plainTextEdit_imprimir = new QPlainTextEdit(groupBox_Neurona_agregar);
        plainTextEdit_imprimir->setObjectName("plainTextEdit_imprimir");
        plainTextEdit_imprimir->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);"));

        gridLayout_4->addWidget(plainTextEdit_imprimir, 0, 2, 7, 1);


        gridLayout_3->addWidget(groupBox_Neurona_agregar, 0, 0, 1, 1);

        table_widget->addTab(Ingresar, QString());
        Imprimir = new QWidget();
        Imprimir->setObjectName("Imprimir");
        Imprimir->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        gridLayout_2 = new QGridLayout(Imprimir);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(Imprimir);
        groupBox->setObjectName("groupBox");
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"color: rgb(0, 0, 0);"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        pushButton_mostrar_tabla = new QPushButton(groupBox);
        pushButton_mostrar_tabla->setObjectName("pushButton_mostrar_tabla");
        pushButton_mostrar_tabla->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_5->addWidget(pushButton_mostrar_tabla, 0, 0, 1, 1);

        pushButton_ordenar = new QPushButton(groupBox);
        pushButton_ordenar->setObjectName("pushButton_ordenar");
        pushButton_ordenar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_5->addWidget(pushButton_ordenar, 0, 1, 1, 1);

        leneurona = new QLineEdit(groupBox);
        leneurona->setObjectName("leneurona");
        leneurona->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.858, x2:0.981, y2:0.898, stop:0 rgba(0, 0, 122, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_5->addWidget(leneurona, 1, 0, 1, 1);

        pushButton_buscar_neurona = new QPushButton(groupBox);
        pushButton_buscar_neurona->setObjectName("pushButton_buscar_neurona");
        pushButton_buscar_neurona->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_5->addWidget(pushButton_buscar_neurona, 2, 0, 1, 1);

        pushButton_limpiar_tabla = new QPushButton(groupBox);
        pushButton_limpiar_tabla->setObjectName("pushButton_limpiar_tabla");
        pushButton_limpiar_tabla->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(141, 141, 141);"));

        gridLayout_5->addWidget(pushButton_limpiar_tabla, 2, 1, 1, 1);

        table_neurona = new QTableWidget(groupBox);
        table_neurona->setObjectName("table_neurona");
        table_neurona->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0.0328638 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 700 10pt \"Segoe UI\";\n"
"gridline-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_5->addWidget(table_neurona, 3, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        table_widget->addTab(Imprimir, QString());
        Dibujar = new QWidget();
        Dibujar->setObjectName("Dibujar");
        Dibujar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        gridLayout_6 = new QGridLayout(Dibujar);
        gridLayout_6->setObjectName("gridLayout_6");
        groupBox_2 = new QGroupBox(Dibujar);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"color: rgb(0, 0, 0);"));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setObjectName("gridLayout_7");
        pushButton_Dibujar = new QPushButton(groupBox_2);
        pushButton_Dibujar->setObjectName("pushButton_Dibujar");
        pushButton_Dibujar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);\n"
"border-color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(pushButton_Dibujar, 0, 0, 1, 1);

        pushButton_Limpiar_2 = new QPushButton(groupBox_2);
        pushButton_Limpiar_2->setObjectName("pushButton_Limpiar_2");
        pushButton_Limpiar_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(58, 58, 58);\n"
"border-color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(pushButton_Limpiar_2, 0, 1, 1, 1);

        graphicsView = new QGraphicsView(groupBox_2);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(graphicsView, 1, 0, 1, 2);


        gridLayout_6->addWidget(groupBox_2, 0, 0, 1, 1);

        table_widget->addTab(Dibujar, QString());

        gridLayout->addWidget(table_widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 766, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionGuardar);
        menuFile->addAction(actionAbrir);

        retranslateUi(MainWindow);

        table_widget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
#if QT_CONFIG(tooltip)
        actionAbrir->setToolTip(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
#if QT_CONFIG(tooltip)
        table_widget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Ingresar</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        Ingresar->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Ingresar</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Ingresar->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Ingresar->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        groupBox_Neurona_agregar->setTitle(QCoreApplication::translate("MainWindow", "Ingresar neurona", nullptr));
        label_ID->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">ID</span></p></body></html>", nullptr));
        label_Voltaje->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Voltaje</span></p></body></html>", nullptr));
        label_X->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Posicion X</span></p></body></html>", nullptr));
        label_Y->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Posicion Y</span></p></body></html>", nullptr));
        label_Red->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Red </span></p></body></html>", nullptr));
        label_Green->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Green</span></p></body></html>", nullptr));
        label_Blue->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Blue</span></p></body></html>", nullptr));
        pushButton_guardar_Final->setText(QCoreApplication::translate("MainWindow", "Guardar neurona al final", nullptr));
        pushButton_Imprimir->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
        pushButton_guardar_Inicio->setText(QCoreApplication::translate("MainWindow", "Guardar neurona al inicio", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
        table_widget->setTabText(table_widget->indexOf(Ingresar), QCoreApplication::translate("MainWindow", "Ingresar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Mostrar Tabla", nullptr));
        pushButton_mostrar_tabla->setText(QCoreApplication::translate("MainWindow", "Mostrar tabla", nullptr));
        pushButton_ordenar->setText(QCoreApplication::translate("MainWindow", "Ordenar", nullptr));
        leneurona->setText(QCoreApplication::translate("MainWindow", "Ingrese el ID de la neurona a buscar", nullptr));
        pushButton_buscar_neurona->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButton_limpiar_tabla->setText(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
        table_widget->setTabText(table_widget->indexOf(Imprimir), QCoreApplication::translate("MainWindow", "Tabla", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Dibujar", nullptr));
        pushButton_Dibujar->setText(QCoreApplication::translate("MainWindow", "Dibujar", nullptr));
        pushButton_Limpiar_2->setText(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
        table_widget->setTabText(table_widget->indexOf(Dibujar), QCoreApplication::translate("MainWindow", "Dibujar", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
