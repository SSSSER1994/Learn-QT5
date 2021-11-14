#include "ch3/user_qwdialog.h"

void UserQwidialog::setupUi(QDialog *qwdialog)
{
    qwdialog->resize(396, 262);
    QFont font;
    font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
    font.setPointSize(11);
    qwdialog->setFont(font);
    vertical_layout_ = new QVBoxLayout(qwdialog);
    vertical_layout_->setSpacing(6);
    vertical_layout_->setContentsMargins(11, 11, 11, 11);
    vertical_layout_->setObjectName("verticalLayout");

    group_box_1_ = new QGroupBox(qwdialog);
    group_box_1_->setObjectName("groupBox_1");
    horizontal_layout_ = new QHBoxLayout(group_box_1_);
    horizontal_layout_->setSpacing(6);
    horizontal_layout_->setContentsMargins(11, 11, 11, 11);
    horizontal_layout_->setObjectName("horizontalLayout1");
    chk_box_under_ = new QCheckBox(group_box_1_);
    chk_box_under_->setObjectName("chkBoxUnder");
    horizontal_layout_->addWidget(chk_box_under_);
    chk_box_italic_ = new QCheckBox(group_box_1_);
    chk_box_italic_->setObjectName("chkBoxItalic");
    horizontal_layout_->addWidget(chk_box_italic_);
    chk_box_bold_ = new QCheckBox(group_box_1_);
    chk_box_bold_->setObjectName("chkBoxBold");
    horizontal_layout_->addWidget(chk_box_bold_);

    vertical_layout_->addWidget(group_box_1_);

    group_box_2_ = new QGroupBox(qwdialog);
    horizontal_layout_2_ = new QHBoxLayout(group_box_2_);
    horizontal_layout_2_->setSpacing(6);
    horizontal_layout_2_->setContentsMargins(11, 11, 11, 11);
    horizontal_layout_2_->setObjectName("horizontalLayout2");
    r_btn_black_ = new QRadioButton(group_box_2_);
    horizontal_layout_2_->addWidget(r_btn_black_);
    r_btn_blue_ = new QRadioButton(group_box_2_);
    horizontal_layout_2_->addWidget(r_btn_blue_);

    vertical_layout_->addWidget(group_box_2_);

    text_edit_ = new QPlainTextEdit(qwdialog);
    QFont font1;
    font1.setPointSize(20);
    text_edit_->setFont(font1);

    vertical_layout_->addWidget(text_edit_);

    horizontal_layout_3_ = new QHBoxLayout();
    horizontal_layout_3_->setSpacing(6);
    horizontal_layout_3_->setObjectName(QStringLiteral("horizontalLayout"));
    auto horizontal_spacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    horizontal_layout_3_->addItem(horizontal_spacer_3);

    btn_ok_ = new QPushButton(qwdialog);
    horizontal_layout_3_->addWidget(btn_ok_);
    btn_cancel_ = new QPushButton(qwdialog);
    horizontal_layout_3_->addWidget(btn_cancel_);
    auto horizontal_spacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    horizontal_layout_3_->addItem(horizontal_spacer_4);

    btn_close_ = new QPushButton(qwdialog);
    horizontal_layout_3_->addWidget(btn_close_);

    vertical_layout_->addLayout(horizontal_layout_3_);

    retranslateUi(qwdialog);
    QObject::connect(btn_ok_, SIGNAL(clicked()), qwdialog, SLOT(accept()));
    QObject::connect(btn_cancel_, SIGNAL(clicked()), qwdialog, SLOT(reject()));
    QObject::connect(btn_close_, SIGNAL(clicked()), qwdialog, SLOT(close()));
    QMetaObject::connectSlotsByName(qwdialog);
}

void UserQwidialog::retranslateUi(QDialog *qwdialog)
{
    qwdialog->setWindowTitle(QApplication::translate("qwdialog", "Dialog by Designer", Q_NULLPTR));
    group_box_1_->setTitle(QString());
    chk_box_under_->setText(QApplication::translate("qwdialog", "Underline", Q_NULLPTR));
    chk_box_italic_->setText(QApplication::translate("qwdialog", "Italic", Q_NULLPTR));
    chk_box_bold_->setText(QApplication::translate("qwdialog", "Bold", Q_NULLPTR));
    group_box_2_->setTitle(QString());
    r_btn_black_->setText(QApplication::translate("qwdialog", "Black", Q_NULLPTR));
    r_btn_blue_->setText(QApplication::translate("qwdialog", "Blue", Q_NULLPTR));
    text_edit_->setPlainText(QApplication::translate("qwdialog", "Hello, world\n"
                                                                 "It is my demo.",
                                                     Q_NULLPTR));
    btn_ok_->setText(QApplication::translate("qwdialog", "\347\241\256 \345\256\232", Q_NULLPTR));
    btn_cancel_->setText(QApplication::translate("qwdialog", "\345\217\226 \346\266\210", Q_NULLPTR));
    btn_close_->setText(QApplication::translate("qwdialog", "\351\200\200 \345\207\272", Q_NULLPTR));
}