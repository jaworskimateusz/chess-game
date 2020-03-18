#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <game.h>
#include <algorithm>
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
    Game *game;
private:
    Ui::MainWindow *ui;
    pair<int,int> positionFrom;
    pair<int,int> positionTo;
    bool isClicked = false;
    vector<pair<int,int>> possiblePositions;

private slots:
    void onFieldClick();
    pair<int,int> getPosition(string s);
    bool isEmpty(pair<int,int> positionTo);
    bool hasMove();
    void onButtonClick();
    void uncheckColors();
    void printFields();
    void colorPossibleMoves(vector<pair<int,int>> moves);
    QPushButton * getClickedButton(int x, int y);
    void updateGame();
    void setCurrentMoveLayout();

};
#endif // MAINWINDOW_H
