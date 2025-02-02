/********************************************************************************
** Form generated from reading UI file 'QGCPluginHost.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCPLUGINHOST_H
#define UI_QGCPLUGINHOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCPluginHost
{
public:
    QListWidget *pluginListWidget;
    QTextEdit *pluginLog;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *QGCPluginHost)
    {
        if (QGCPluginHost->objectName().isEmpty())
            QGCPluginHost->setObjectName(QString::fromUtf8("QGCPluginHost"));
        QGCPluginHost->resize(633, 329);
        pluginListWidget = new QListWidget(QGCPluginHost);
        pluginListWidget->setObjectName(QString::fromUtf8("pluginListWidget"));
        pluginListWidget->setGeometry(QRect(10, 30, 256, 271));
        pluginLog = new QTextEdit(QGCPluginHost);
        pluginLog->setObjectName(QString::fromUtf8("pluginLog"));
        pluginLog->setGeometry(QRect(280, 30, 341, 271));
        pluginLog->setReadOnly(true);
        label = new QLabel(QGCPluginHost);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 121, 16));
        label_2 = new QLabel(QGCPluginHost);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 10, 91, 16));

        retranslateUi(QGCPluginHost);

        QMetaObject::connectSlotsByName(QGCPluginHost);
    } // setupUi

    void retranslateUi(QWidget *QGCPluginHost)
    {
        QGCPluginHost->setWindowTitle(QCoreApplication::translate("QGCPluginHost", "Form", nullptr));
        label->setText(QCoreApplication::translate("QGCPluginHost", "Loaded Plugins", nullptr));
        label_2->setText(QCoreApplication::translate("QGCPluginHost", "Plugin Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QGCPluginHost: public Ui_QGCPluginHost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCPLUGINHOST_H
