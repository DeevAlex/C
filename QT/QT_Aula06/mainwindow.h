#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    // void mudaTexto(); // Quaso estivesse aqui ele não pode ser associado a um slots

public slots:
    void mudaTexto(); // para criar os metodos de slots devemos fazer desta maneira

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
