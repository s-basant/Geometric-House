#pragma once
#include"Shape.h"
#include<iostream>
#include<ostream>

class Rhombus : public Shape
{
private:
	// construction value of Rhombus
	int diagonal;
public:
	// construtor with diagonal
	Rhombus(int);
	// constructor with diagonal and description
	Rhombus(int, string description);
	// copy constructor
	Rhombus(Rhombus const &rho);
	// assignment operator overload
	Rhombus & operator=(const Rhombus & rho);
	// get height of the shape
	int getHeight() const;
	// get width of the shape
	int getWidth() const;
	// set height of the shape
	void setHeight(int);
	// set width of the shape
	void setWidth(int);
	// calculate geometrical area
	double calculateGeoArea() const ;
	// calculate geometrical perimeter
	double calculateGeoPerimeter() const;
	// calcualte screen Area
	double calculateScreenArea() const;
	// calculate screen Permieter
	double calculateScreenPerimeter() const;
	// draw the shape on the canvas
	void draw(Canvas & canvas, int row, int col, char foreChar = '*', char bChar = ' ') const;

};
