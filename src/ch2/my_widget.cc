#include "ch2/my_widget.h"

void MyWidget::setupUI(QWidget *widget)
{
    if (widget->objectName().isEmpty())
    {
        widget->setObjectName(QString("user_widget"));
    }
    widget->resize(280, 180);
    lab_demo_ = new QLabel(widget);
    lab_demo_->setObjectName(QString("user_label"));
    lab_demo_->setGeometry({50, 20, 201, 51});
    QFont font;
    font.setPointSize(20);
    font.setBold(true);
    lab_demo_->setFont(font);
    close_btn_ = new QPushButton(widget);
    close_btn_->setObjectName("btnClose");
    close_btn_->setGeometry({150, 120, 75, 23});

    retranslateUI(widget);
    QObject::connect(close_btn_, SIGNAL(clicked()), widget, SLOT(close()));
    QMetaObject::connectSlotsByName(widget);
}

void MyWidget::retranslateUI(QWidget *widget)
{
    widget->setWindowTitle(QApplication::translate("Widget", "Demo", Q_NULLPTR));
    lab_demo_->setText(QApplication::translate("Widget", "Hello, World", Q_NULLPTR));
    close_btn_->setText(QApplication::translate("Widget", "Close", Q_NULLPTR));
}