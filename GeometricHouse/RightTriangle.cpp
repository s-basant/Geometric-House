#include"RightTriangle.h"
#include<typeinfo>
// constructor with base and description
RightTriangle::RightTriangle(int base, string description) :IsoscelesTriangle(base, base, "Right Triangle", description)
{
	this->setWidth(base);
	this->setHeight(base);
};

// constructor with base
RightTriangle::RightTriangle(int base) :IsoscelesTriangle(base, base, "Right Triangle", "Right Triangle")
{
	this->setWidth(base);
	this->setHeight(base);
};
// calculate geometrical Area
double RightTriangle::calculateGeoArea() const
{
	return this->getHeight() * this->getWidth()/2 ;
};
// calculate geometrical perimeter
double RightTriangle::calculateGeoPerimeter() const
{
	return (2+ sqrt(2))*this->getHeight() ;
};
// calculate screen area
double RightTriangle::calculateScreenArea() const
{
	return this->getHeight() * (this->getHeight() + 1)/2;
};
//  calculate screen perimeter
double RightTriangle::calculateScreenPerimeter() const
{
	return  3 * (this->getHeight() - 1);
}

// draw shape in canvas
void RightTriangle::draw(Canvas & canvas, int row, int col, char fChar, char bChar) const
{
	int h = this->getHeight();
	int b =  this->getWidth();
	for (int r = 0; r < h; ++r) // rows
	{
		for (int c = 0; c < b; ++c)//columns
		{
			if (!canvas.inBounds(r, c))
						{
							break;
						}
			if (c <= r)
				canvas.put(row + r, col + c, fChar);//checked by Canvas
			else canvas.put(row + r, col + c, bChar);//checked by Canvas
		}
	}
}