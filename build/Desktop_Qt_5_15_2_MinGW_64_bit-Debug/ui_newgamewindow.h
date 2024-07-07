/********************************************************************************
** Form generated from reading UI file 'newgamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAMEWINDOW_H
#define UI_NEWGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewGameWindow
{
public:
    QLineEdit *startGameLogin;
    QLabel *label;
    QPushButton *startGameButton;
    QRadioButton *onePlayerGameChoice;
    QRadioButton *twoPlayerGameChoice;
    QRadioButton *threePlayerGameChoice;
    QRadioButton *fourPlayerGameChoice;
    QLabel *label_3;
    QPushButton *backToMenuButton;

    void setupUi(QWidget *NewGameWindow)
    {
        if (NewGameWindow->objectName().isEmpty())
            NewGameWindow->setObjectName(QString::fromUtf8("NewGameWindow"));
        NewGameWindow->resize(507, 366);
        QPalette palette;
        QBrush brush(QColor(2, 83, 49, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 221, 177, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush3(QColor(85, 69, 40, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        QBrush brush4(QColor(215, 240, 209, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush5(QColor(160, 212, 164, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(89, 159, 118, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        QBrush brush7(QColor(211, 240, 191, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush7);
        QBrush brush8(QColor(186, 223, 180, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        NewGameWindow->setPalette(palette);
        startGameLogin = new QLineEdit(NewGameWindow);
        startGameLogin->setObjectName(QString::fromUtf8("startGameLogin"));
        startGameLogin->setGeometry(QRect(140, 70, 291, 28));
        label = new QLabel(NewGameWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 63, 20));
        startGameButton = new QPushButton(NewGameWindow);
        startGameButton->setObjectName(QString::fromUtf8("startGameButton"));
        startGameButton->setGeometry(QRect(150, 250, 181, 29));
        onePlayerGameChoice = new QRadioButton(NewGameWindow);
        onePlayerGameChoice->setObjectName(QString::fromUtf8("onePlayerGameChoice"));
        onePlayerGameChoice->setGeometry(QRect(240, 190, 41, 26));
        twoPlayerGameChoice = new QRadioButton(NewGameWindow);
        twoPlayerGameChoice->setObjectName(QString::fromUtf8("twoPlayerGameChoice"));
        twoPlayerGameChoice->setGeometry(QRect(290, 190, 41, 26));
        threePlayerGameChoice = new QRadioButton(NewGameWindow);
        threePlayerGameChoice->setObjectName(QString::fromUtf8("threePlayerGameChoice"));
        threePlayerGameChoice->setGeometry(QRect(340, 190, 41, 26));
        fourPlayerGameChoice = new QRadioButton(NewGameWindow);
        fourPlayerGameChoice->setObjectName(QString::fromUtf8("fourPlayerGameChoice"));
        fourPlayerGameChoice->setGeometry(QRect(390, 190, 41, 26));
        QFont font;
        font.setPointSize(9);
        font.setKerning(true);
        fourPlayerGameChoice->setFont(font);
        label_3 = new QLabel(NewGameWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 190, 141, 20));
        backToMenuButton = new QPushButton(NewGameWindow);
        backToMenuButton->setObjectName(QString::fromUtf8("backToMenuButton"));
        backToMenuButton->setGeometry(QRect(190, 300, 101, 29));

        retranslateUi(NewGameWindow);

        QMetaObject::connectSlotsByName(NewGameWindow);
    } // setupUi

    void retranslateUi(QWidget *NewGameWindow)
    {
        NewGameWindow->setWindowTitle(QCoreApplication::translate("NewGameWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("NewGameWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        startGameButton->setText(QCoreApplication::translate("NewGameWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        onePlayerGameChoice->setText(QCoreApplication::translate("NewGameWindow", "1", nullptr));
        twoPlayerGameChoice->setText(QCoreApplication::translate("NewGameWindow", "2", nullptr));
        threePlayerGameChoice->setText(QCoreApplication::translate("NewGameWindow", "3", nullptr));
        fourPlayerGameChoice->setText(QCoreApplication::translate("NewGameWindow", "4", nullptr));
        label_3->setText(QCoreApplication::translate("NewGameWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\320\263\321\200\320\276\320\272\320\276\320\262", nullptr));
        backToMenuButton->setText(QCoreApplication::translate("NewGameWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewGameWindow: public Ui_NewGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAMEWINDOW_H
