/********************************************************************************
** Form generated from reading UI file 'loadgamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADGAMEWINDOW_H
#define UI_LOADGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadGameWindow
{
public:
    QLineEdit *loginInputLine;
    QLabel *label;
    QPushButton *continueGameButton;
    QPushButton *backToMenuButton;

    void setupUi(QWidget *LoadGameWindow)
    {
        if (LoadGameWindow->objectName().isEmpty())
            LoadGameWindow->setObjectName(QString::fromUtf8("LoadGameWindow"));
        LoadGameWindow->resize(514, 392);
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
        LoadGameWindow->setPalette(palette);
        loginInputLine = new QLineEdit(LoadGameWindow);
        loginInputLine->setObjectName(QString::fromUtf8("loginInputLine"));
        loginInputLine->setGeometry(QRect(160, 110, 281, 28));
        label = new QLabel(LoadGameWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 110, 63, 20));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        continueGameButton = new QPushButton(LoadGameWindow);
        continueGameButton->setObjectName(QString::fromUtf8("continueGameButton"));
        continueGameButton->setGeometry(QRect(160, 250, 191, 41));
        backToMenuButton = new QPushButton(LoadGameWindow);
        backToMenuButton->setObjectName(QString::fromUtf8("backToMenuButton"));
        backToMenuButton->setGeometry(QRect(202, 320, 101, 29));

        retranslateUi(LoadGameWindow);

        QMetaObject::connectSlotsByName(LoadGameWindow);
    } // setupUi

    void retranslateUi(QWidget *LoadGameWindow)
    {
        LoadGameWindow->setWindowTitle(QCoreApplication::translate("LoadGameWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoadGameWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        continueGameButton->setText(QCoreApplication::translate("LoadGameWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        backToMenuButton->setText(QCoreApplication::translate("LoadGameWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadGameWindow: public Ui_LoadGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADGAMEWINDOW_H
