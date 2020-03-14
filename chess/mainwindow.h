#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <game.h>
#include "QPushButton"

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Game game;

private:
    Ui::MainWindow *ui;
private slots:
    void onFieldClick();
    pair<int,int> getPosition(string s);
    void onButtonClick();
    void uncheckColors();
    void colorPossibleMoves(vector<pair<int,int>> moves);
    QPushButton * getClickedButton(int x, int y);

};
#endif // MAINWINDOW_H
