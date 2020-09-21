#ifndef MAINWINDOW_H_20200921_1037
#define MAINWINDOW_H_20200921_1037

#include <QMainWindow>

namespace Ui {
  class MainWindow;
};

class MainWindow : public QMainWindow {
  Q_OBJECT

  public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

  private slots:
    void on_actionExit_triggered();

  private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H_20200921_1037