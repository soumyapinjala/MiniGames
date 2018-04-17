#include "ltile.h"

LTile::LTile() : Tile()
{
    vector<vector<int>> shape = {
        {0, 0, 3},
        {3, 3, 3}
    };

    Point center(1, 1);
    setShape(shape);
    setCenterPoint(center);
    setXPos(getXPos() - 2);
}

void LTile::rotate()
{
    Tile::rotate();
    vector<vector<int>> rotatedShape = getShape();

    //TODO: check if position is correct
    if (rotatedShape.size() == 3)
    {
        if (rotatedShape[0][1] != 0)
        {
            // CENTER_POINT = (1,1)
            setCenterPoint(Point(1,1));
        }
        else
        {
            // CENTER_POINT = (1,0)
            setCenterPoint(Point(1,0));
        }
    }
    else
    {
        if (rotatedShape[0][0] != 0)
        {
            // CENTER_POINT = (0,1)
            setCenterPoint(Point(0,1));
        }
        else
        {
            // CENTER_POINT = (1,1)
            setCenterPoint(Point(1,1));
        }
    }
}

LTile::~LTile()
{

}