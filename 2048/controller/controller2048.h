#ifndef CONTROLLER2048_H
#define CONTROLLER2048_H
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QObject>
#include <QBrush>
#include <QColor>
#include <QString>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include "ui_2048.h"
#include "../model/board2048.h"
#include "iogame.h"

namespace Ui
{
class UI2048;
}

using namespace std;

class Controller2048 : public QWidget
{
    Q_OBJECT
public:
    Controller2048(QWidget *parent = 0);
    ~Controller2048();

    void keyPressEvent(QKeyEvent * event);
    void setSettings(bool isGameSounds, string playername);
    void setHighscore(int highScore);

public slots:
    void handleRestart();
    void handleMenuSettings();

signals:
    bool gameClosed();

private:
    Ui::UI2048 * ui;
    QGraphicsScene * boardScene;
    Board2048 * board;
    string playername;
    int score;
    int highScore;
    bool gameOver;

    bool isGameSounds;

    QMediaPlayer * moveSound;
    QMediaPlayer * gameOverSound;

    void handleRound(int direction);
    void drawGameOver();
    void setupGame();
    void drawBoard();
    void saveHighscore();



};

#endif // CONTROLLER2048_H
