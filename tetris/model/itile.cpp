#include "itile.h"

ITile::ITile() : Tile()
{
    vector<vector<int>> shape = {
        {1, 1, 1, 1}
    };
    Point center(0, 2);
    setShape(shape);
    setCenterPoint(center);
    setXPos(getXPos() - 2);
}

void ITile::rotate()
{
    Tile::rotate();
    vector<vector<int>> rotatedShape = getShape();

    //TODO: check if position is correct
    if (rotatedShape.size() > 1)
    {
        // CENTER_POINT = (2,0)
        setCenterPoint(Point(2,0));
    }
    else
    {
        setCenterPoint(Point(0,2));
    }
}

ITile::~ITile()
{

}