#include"Oblique.h"
#include<typeinfo>

Oblique::Oblique(int base) :IsoscelesTriangle(base, "Oblique", "Class Oblique")
{
	if (getWidth() % 2 == 0)
	{
		this->setWidth(base + 1);
	}
	this->setHeight((getWidth() + 1) / 2);
};

Oblique::Oblique(int base, string description) :IsoscelesTriangle(  base  , "Oblique", description)
{
	if (getWidth() % 2 == 0)
	{
		this->setWidth(base+1);
	}
	this->setHeight((getWidth()+1)/2);
};


Oblique& Oblique::operator=(const Oblique & obl)
{

	this->setWidth(obl.getWidth());
	this->setHeight(obl.getHeight());

	return *this;
};



double Oblique::calculateGeoArea() const
{
	return this->getHeight() * this->getWidth() / 2;
};

double Oblique::calculateGeoPerimeter() const
{
	return (2 + sqrt(2))*this->getHeight();
};

double Oblique::calculateScreenArea() const
{
	return this->getHeight() * (this->getHeight() + 1) / 2;
};

double Oblique::calculateScreenPerimeter() const
{
	return  3 * (this->getHeight() - 1);
};


void Oblique::draw(Canvas & canvas, int row, int col, char fChar, char bChar) const
{
	int base = this->getWidth();
	int height = this->getHeight();
	int middle = (base + 1) / 2;
	int lt = middle-1;
	int ht = middle-1;

	for (int r = 0; r <height; ++r) // rows
	{
		for (int c = 0; c < base; ++c)//columns
		{
			if ((ht <= c) && (lt >= c))
			{
				canvas.put(row + r, col + c, fChar);//checked by Canvas

			}
			else canvas.put(row + r, col + c, bChar);//checked by Canvas
		}	 
		++lt, --ht;
	}
}