#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "janela2.h" // 2ª forma de mostrar a janela, porém globalmente

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Janela2 *form2; // só que em forma de ponteiro
};
#endif // MAINWINDOW_H
