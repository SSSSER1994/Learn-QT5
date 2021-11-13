#pragma once
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

class MyWidget {
public:
  void setupUI(QWidget *widget);
  void retranslateUI(QWidget *widget);

private:
  QLabel *lab_demo_;
  QPushButton *close_btn_;
};
