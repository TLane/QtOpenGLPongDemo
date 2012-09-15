#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamewindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    
private:
    Ui::MainWindow *ui;
    GameWindow *mainGameWindow;

public slots:
    void launchGameWindow();
    void closeGameWindow();
};

#endif // MAINWINDOW_H
