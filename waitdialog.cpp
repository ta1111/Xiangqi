#include "waitdialog.h"
#include "ui_waitdialog.h"

WaitDialog::WaitDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::WaitDialog) {
  ui->setupUi(this);
}

WaitDialog::~WaitDialog() { delete ui; }
