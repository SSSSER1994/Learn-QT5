#pragma once

#include <QtCore/QVariant>
#include <QtWidgets>

QT_BEGIN_NAMESPACE

class UserQwidialog
{
public:
    void setupUi(QDialog *qwdialog);
    void retranslateUi(QDialog *qwdialog);

public:
    QVBoxLayout *vertical_layout_;
    QGroupBox *group_box_1_;
    QHBoxLayout *horizontal_layout_;
    QCheckBox *chk_box_under_;
    QCheckBox *chk_box_italic_;
    QCheckBox *chk_box_bold_;
    QGroupBox *group_box_2_;
    QHBoxLayout *horizontal_layout_2_;
    QRadioButton *r_btn_black_;
    QRadioButton *r_btn_blue_;
    QPlainTextEdit *text_edit_;
    QHBoxLayout *horizontal_layout_3_;
    QPushButton *btn_ok_;
    QPushButton *btn_cancel_;
    QPushButton *btn_close_;
};

QT_END_NAMESPACE