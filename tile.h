#ifndef TILE_H
#define TILE_H
#include <vector>

struct Point {
private:
    int y;
    int x;
public:
    Point(){}
    Point(int y, int x) : y(y), x(x)
    {}
    int& getY();
    int& getX();
    void setY(int y);
    void setX(int x);
};

using namespace std;
class Tile
{
public:
    Tile();
    virtual ~Tile();
    virtual void rotate() = 0;
    virtual vector<vector<int>> getShape() const;
    vector<vector<int>> getRotatedShape() const;
    Point getCenterPoint();
    virtual void setCenterPoint(Point center);
    int getXPos();
    int getYPos();
    virtual void setShape(vector<vector<int>> shape);
    void setXPos(int row);
    void setYPos(int column);

private:
    vector<vector<int>> shape;
    Point CENTER_POINT{}; // Center point on tile. Determines what point rotation is to revolve around.
    Point position{}; // Position of tile on board
};

#endif // TILE_H
