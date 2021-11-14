#include "ch3/test_qwdialog.h"

TestDialog::TestDialog(QWidget *parent) : QDialog(parent), ui_(new UserQwidialog)
{
    ui_->setupUi(this);
    connect(ui_->r_btn_blue_, SIGNAL(clicked()), this, SLOT(setTextFontColor()));  //信号与槽的关联
    connect(ui_->r_btn_black_, SIGNAL(clicked()), this, SLOT(setTextFontColor())); //信号与槽的关联
}

TestDialog::~TestDialog()
{
    delete ui_;
}

void TestDialog::setTextFontColor()
{
    QPalette plet = ui_->text_edit_->palette();
    if (ui_->r_btn_blue_->isChecked())
        plet.setColor(QPalette::Text, Qt::blue);
    else if (ui_->r_btn_black_->isChecked())
        plet.setColor(QPalette::Text, Qt::black);
    else
        plet.setColor(QPalette::Text, Qt::black);

    ui_->text_edit_->setPalette(plet);
}

void TestDialog::on_chkBoxUnder_clicked(bool checked)
{
    QFont font = ui_->text_edit_->font();
    font.setUnderline(checked);
    ui_->text_edit_->setFont(font);
} //设置下划线

void TestDialog::on_chkBoxItalic_clicked(bool checked)
{
    QFont font = ui_->text_edit_->font();
    font.setItalic(checked);
    ui_->text_edit_->setFont(font);
} //设置斜体

void TestDialog::on_chkBoxBold_clicked(bool checked)
{
    QFont font = ui_->text_edit_->font();
    font.setBold(checked);
    ui_->text_edit_->setFont(font);
}