#ifndef ELEVENTHWINDOW_H
#define ELEVENTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class EleventhWindow;
}

class EleventhWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EleventhWindow(QWidget *parent = nullptr);
    ~EleventhWindow();

private:
    Ui::EleventhWindow *ui;
};

#endif // ELEVENTHWINDOW_H
