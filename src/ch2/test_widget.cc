#include "ch2/test_widget.h"

TestWidget::TestWidget(QWidget *parent) : QWidget(parent), ui(new MyWidget)
{
    ui->setupUI(this);
}

TestWidget::~TestWidget() { delete ui; }