#include"Rectangle.h"
#include<iostream>
#include<ostream>

using namespace std;
// constructor with width and height
Rectangle::Rectangle( int width=0 , int height = 0 ) : Shape("Rectangle", "Class Rectangle")
{
	this->height = height;
	this->width = width;
};
// constructor with width height and description
Rectangle::Rectangle( int width, int height,  string description) : Shape("Rectangle", description)
{
	this->height = height;
	this->width = width;
};
// copy constructor
Rectangle::Rectangle(const Rectangle & rec):Shape("Rectangle", "Class Rectangle")
{
	this->setHeight(rec.height);
	this->setHeight(rec.width);

};
// assignment operator overload
Rectangle& Rectangle::operator=(const Rectangle  &rhs)
{
	this->height = rhs.height;
	this->width = rhs.width;
	return *this;
};
// get heignt of the rectangle
int Rectangle::getHeight() const 
{
	return this->height;
};
// get widht of rectangle
int Rectangle::getWidth() const 
{ 
	return width;  
};
// set height of rectangle
void Rectangle::setHeight(int height) { height = height; };
// get widht of rectangle
void Rectangle::setWidth(int width) { width = width; };
// calculate geometrical area of triangle
double Rectangle::calculateGeoArea() const
{
	return this->height * this->width;
};
// calculate geometrical perimeter of triangle
double Rectangle::calculateGeoPerimeter() const
{
	return 2*(this->height + this->width);
};
// calculate screen area
double Rectangle::calculateScreenArea() const
{
	return this->height * this->width;
};
// calculate screen perimeter
double Rectangle::calculateScreenPerimeter() const
{
	return 2 * (this->height + this->width)-4;
};




//string  Rectangle::toString() const
//{
//	cout << "Shape Information" << endl;
//	cout << "-----------------" << endl;
//	cout << "Static type :" << typeid(this).name() << endl;
//	cout << "Dynamic type :" << typeid(*this).name() << endl;
//	cout << "Shape name :" << this->getName() << endl;
//	cout << "Description :" << this->getDescription()<<endl;
//	cout << "id :" << this->getID() <<endl;
//	cout << "B.boxwidth :"<< this->getWidth() << endl;
//	cout << "B.boxheight :" << this->getHeight() <<endl;
//	cout << "Scr area :" << this->calculateScreenArea() << endl;
//	cout << "Geo area :" << this->calculateGeoArea()<< endl;
//	cout << "Scr perimeter :" << this->calculateScreenPerimeter() << endl;
//	cout << "Geo perimeter :" << this->calculateGeoPerimeter()<< endl;
//	return "";
//}
void Rectangle::draw(Canvas & canvas, int row, int col, char fChar, char bChar) const
{
	for (int r = 0; r < this->getHeight(); r++) // rows
	{

		for (int c = 0; c<this->getWidth(); c++)//columns
		{
			//cout << this->getDescription() << endl;
			/*cout << row + r << " " << col + c << endl;*/
			if (canvas.inBounds(row + r, col + c)==false)
			{
				break;
			}
			//canvas[row + r][col + c] = fChar;	//unchecked by vector
			canvas.put(row + r, col + c, fChar);//checked by Canvas
		}
	}
}



