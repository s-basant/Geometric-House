#include"Rhombus.h"
#include<typeinfo>
// constructor with diagonal
Rhombus::Rhombus(int diagonal) : Shape("Rhombus", "Class Rhombus")
{
	this->diagonal  = diagonal;
	if (this->diagonal % 2 == 0)
	{
		this->diagonal = this->diagonal + 1;
	}
};
// constructor with diagonal and description
Rhombus::Rhombus(int diagonal, string description) : Shape("Rhombus", description)
{
	this->diagonal = diagonal;
	if (this->diagonal % 2 == 0)
	{
		this->diagonal = this->diagonal + 1;
	}
};
// constructor with constructor
Rhombus::Rhombus(Rhombus const &rho) : Shape("Rhombus", "Class Rhombus")
{
	this->diagonal = rho.diagonal;
}
// assignment operator overload
Rhombus & Rhombus::operator=(const Rhombus & rho) 
{
	this->diagonal = rho.diagonal;
	return *this; 
}


// get height of the shape
int Rhombus::getHeight() const
{
	return  this->diagonal;
};
// get widht of the shape
int Rhombus::getWidth() const
{

	return  this->diagonal;
};
// set the height of the Rhombus
void Rhombus::setHeight(int diagonal) { this->diagonal = diagonal; };
// set width of the Rhombus
void Rhombus::setWidth(int diagonal) { this->diagonal = diagonal; };
// calculate geometrical Area
double Rhombus::calculateGeoArea() const
{
	int diag = this->diagonal; 
	return diag * diag / 2;
};
// calculate geometrical perimeter
double Rhombus::calculateGeoPerimeter() const
{
	int diag = this->diagonal;
	return (2*sqrt(2))*diag;
};
// calculate screen area
double Rhombus::calculateScreenArea() const
{
	int diag = this->diagonal;
	return ((diag * (diag /2 + 1)) + 1);
};
// calculate screen perimeter
double Rhombus::calculateScreenPerimeter( ) const
{
	int diag = this->diagonal;
	return  2 * (diag - 1);
};


// draw the rhombus on the canvas
void Rhombus::draw(Canvas & canvas, int row, int col, char fChar, char bChar) const
{

	int dia = this->diagonal;
	int m = (dia +1 ) /2  ;
	int lt = m-1;
	int ht = m-1;
	for (int r = 0; r < (dia + 1) / 2; r++)
	{
		for (int c = 0; c < dia; c++)
		{
			if ((lt <= c) && (ht >= c))
			{
				canvas.put(row + r, col + c, fChar);

			}
			else canvas.put(row + r, col + c, bChar);
		}
		++ht, --lt;
	}

	for (int r = (dia + 1) / 2; r < dia; r++)
	{
		--ht, ++lt;
		for (int c = 0; c <dia; c++)
		{
			if ((lt < c) && (ht > c))
			{
				canvas.put(row + r, col + c, fChar);
			}
			else canvas.put(row + r, col + c, bChar);


		}
	}

}

