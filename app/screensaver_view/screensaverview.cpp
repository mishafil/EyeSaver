#include "screensaverview.h"
#include "ui_screensaverview.h"

ScreenSaverView::ScreenSaverView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScreenSaverView)
{
    ui->setupUi(this);
}

ScreenSaverView::~ScreenSaverView()
{
    delete ui;
}
