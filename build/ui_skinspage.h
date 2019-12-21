/********************************************************************************
** Form generated from reading UI file 'skinspage.ui'
**
** Created: Tue Jul 23 09:04:52 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINSPAGE_H
#define UI_SKINSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkinsPage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *mainLayout;

    void setupUi(QWidget *SkinsPage)
    {
        if (SkinsPage->objectName().isEmpty())
            SkinsPage->setObjectName(QString::fromUtf8("SkinsPage"));
        SkinsPage->resize(878, 457);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        SkinsPage->setFont(font);
        verticalLayout = new QVBoxLayout(SkinsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mainLayout = new QGridLayout();
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));

        verticalLayout->addLayout(mainLayout);


        retranslateUi(SkinsPage);

        QMetaObject::connectSlotsByName(SkinsPage);
    } // setupUi

    void retranslateUi(QWidget *SkinsPage)
    {
        SkinsPage->setWindowTitle(QApplication::translate("SkinsPage", "Skins Pages", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SkinsPage: public Ui_SkinsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINSPAGE_H
