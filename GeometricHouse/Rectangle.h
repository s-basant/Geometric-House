#pragma once
#include"Shape.h"
#include<iostream>
#include<ostream>
#include"Canvas.h"
class Rectangle : public Shape
{
private:
	// triangle construction value 
	int height, width;
public:
	// constructor for rectangle with height and width
	explicit Rectangle(int height , int width );
	// constructor with height , widht and description
	Rectangle(int, int, string description);
	// copy constructor
	Rectangle(const Rectangle & rec );
	// assignment constructor
	Rectangle& operator=(const Rectangle  &rhs);
	// get height of triangle
	int getHeight() const;
	// get widht of triangle
	int getWidth() const;
	// set height of triangle
	void setHeight(int height);
	// set widht of trianlge
	void setWidth(int width);
	// calculate geometrical Area of triangle
	double calculateGeoArea() const;
	// calcualte geometrical perimeter of tiranlge
	double calculateGeoPerimeter() const;
	// calcualte screen area
	double calculateScreenArea() const;
	// calculate screen perimeter
	double calculateScreenPerimeter() const;
	// draw the shape on canvas
	void draw(Canvas & canvas, int row, int col, char foreChar= '*', char bChar= ' ') const;
};