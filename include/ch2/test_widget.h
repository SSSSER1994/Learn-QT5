#pragma once

#include "ch2/my_widget.h"
#include <QWidget>

class TestWidget : public QWidget {
  Q_OBJECT
public:
  explicit TestWidget(QWidget *parent = 0);
  virtual ~TestWidget();

private:
  MyWidget *ui;
};
