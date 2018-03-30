#include "ttile.h"

TTile::TTile()
{
    vector<vector<int>> shape = {
        {1, 1, 1},
        {0, 1, 0}
    };

    Point center(0, 1);
    setShape(shape);
    setCenterPoint(center);
}

void TTile::rotate()
{
    Tile::rotate();
    vector<vector<int>> rotatedShape = getShape();

    //TODO: check if position is correct
    if (rotatedShape.size() == 3)
    {
        if (rotatedShape[0][0] != 0)
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

TTile::~TTile()
{

}