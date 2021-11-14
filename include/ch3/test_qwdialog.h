#pragma once

#include <QDialog>
#include "ch3/user_qwdialog.h"

class TestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TestDialog(QWidget *parent = 0);
    ~TestDialog();

private slots:
    void on_chkBoxUnder_clicked(bool checked);  //设置下划线
    void on_chkBoxItalic_clicked(bool checked); //设置斜体
    void on_chkBoxBold_clicked(bool checked);   //设置粗体
    void setTextFontColor();                    //设置字体颜色

private:
    UserQwidialog *ui_;
};