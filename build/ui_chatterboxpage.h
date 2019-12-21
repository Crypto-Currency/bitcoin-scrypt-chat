/********************************************************************************
** Form generated from reading UI file 'chatterboxpage.ui'
**
** Created: Tue Jul 23 09:04:52 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTERBOXPAGE_H
#define UI_CHATTERBOXPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatterboxPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QGridLayout *gridLayout;
    QPushButton *sayButton;
    QLineEdit *sayLineEdit;
    QListWidget *userListWidget;
    QPushButton *logoutButton;
    QTextEdit *roomTextEdit;
    QWidget *loginPage;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QFrame *loginFrame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *serverLineEdit;
    QLabel *label_2;
    QLineEdit *userLineEdit;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ChatterboxPage)
    {
        if (ChatterboxPage->objectName().isEmpty())
            ChatterboxPage->setObjectName(QString::fromUtf8("ChatterboxPage"));
        ChatterboxPage->resize(867, 495);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        ChatterboxPage->setFont(font);
        ChatterboxPage->setStyleSheet(QString::fromUtf8("#mainFrame {\n"
"border: none;\n"
"background: white;\n"
"}\n"
"\n"
"#loginFrame {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ddf, stop: 1 #aaf);\n"
"border: 1px solid gray;\n"
"padding: 10px;\n"
"border-radius: 25px;\n"
"}"));
        centralwidget = new QWidget(ChatterboxPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(20, 0, 815, 460));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(mainFrame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        chatPage = new QWidget();
        chatPage->setObjectName(QString::fromUtf8("chatPage"));
        gridLayout = new QGridLayout(chatPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sayButton = new QPushButton(chatPage);
        sayButton->setObjectName(QString::fromUtf8("sayButton"));

        gridLayout->addWidget(sayButton, 2, 2, 1, 1);

        sayLineEdit = new QLineEdit(chatPage);
        sayLineEdit->setObjectName(QString::fromUtf8("sayLineEdit"));

        gridLayout->addWidget(sayLineEdit, 2, 0, 1, 2);

        userListWidget = new QListWidget(chatPage);
        userListWidget->setObjectName(QString::fromUtf8("userListWidget"));
        userListWidget->setMinimumSize(QSize(150, 0));
        userListWidget->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(userListWidget, 1, 1, 1, 2);

        logoutButton = new QPushButton(chatPage);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));

        gridLayout->addWidget(logoutButton, 0, 2, 1, 1);

        roomTextEdit = new QTextEdit(chatPage);
        roomTextEdit->setObjectName(QString::fromUtf8("roomTextEdit"));
        roomTextEdit->setReadOnly(true);

        gridLayout->addWidget(roomTextEdit, 0, 0, 2, 1);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        gridLayout_3 = new QGridLayout(loginPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName(QString::fromUtf8("loginFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginFrame->sizePolicy().hasHeightForWidth());
        loginFrame->setSizePolicy(sizePolicy);
        loginFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout_2 = new QGridLayout(loginFrame);
        gridLayout_2->setSpacing(20);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(loginFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        serverLineEdit = new QLineEdit(loginFrame);
        serverLineEdit->setObjectName(QString::fromUtf8("serverLineEdit"));

        gridLayout_2->addWidget(serverLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(loginFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        userLineEdit = new QLineEdit(loginFrame);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));

        gridLayout_2->addWidget(userLineEdit, 1, 1, 1, 1);

        loginButton = new QPushButton(loginFrame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(loginButton, 2, 1, 1, 1);


        gridLayout_3->addWidget(loginFrame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);

        stackedWidget->addWidget(loginPage);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(mainFrame);

        QWidget::setTabOrder(serverLineEdit, userLineEdit);
        QWidget::setTabOrder(userLineEdit, loginButton);
        QWidget::setTabOrder(loginButton, roomTextEdit);
        QWidget::setTabOrder(roomTextEdit, userListWidget);
        QWidget::setTabOrder(userListWidget, sayLineEdit);
        QWidget::setTabOrder(sayLineEdit, sayButton);

        retranslateUi(ChatterboxPage);
        QObject::connect(sayLineEdit, SIGNAL(returnPressed()), sayButton, SLOT(animateClick()));
        QObject::connect(serverLineEdit, SIGNAL(returnPressed()), userLineEdit, SLOT(setFocus()));
        QObject::connect(userLineEdit, SIGNAL(returnPressed()), loginButton, SLOT(animateClick()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ChatterboxPage);
    } // setupUi

    void retranslateUi(QWidget *ChatterboxPage)
    {
        ChatterboxPage->setWindowTitle(QApplication::translate("ChatterboxPage", "Chatter Box", 0, QApplication::UnicodeUTF8));
        sayButton->setText(QApplication::translate("ChatterboxPage", "Send", 0, QApplication::UnicodeUTF8));
        logoutButton->setText(QApplication::translate("ChatterboxPage", "Log OUT", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ChatterboxPage", "Server name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChatterboxPage", "User name:", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("ChatterboxPage", "Login", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChatterboxPage: public Ui_ChatterboxPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTERBOXPAGE_H
