#ifndef SCREENSAVERVIEW_H
#define SCREENSAVERVIEW_H

#include <QWidget>

namespace Ui {
class ScreenSaverView;
}

class ScreenSaverView : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenSaverView(QWidget *parent = nullptr);
    ~ScreenSaverView();

private:
    Ui::ScreenSaverView *ui;
};

#endif // SCREENSAVERVIEW_H
