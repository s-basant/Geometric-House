#pragma once
#include"IsoscelesTriangle.h"
#include<iostream>
#include<ostream>

class Oblique : public IsoscelesTriangle
{
public:
	// constructor with base
	Oblique(int);
	// constructor with base and description
	Oblique(int, string);
	// to calculate geometrical Area of triangle
	double calculateGeoArea() const;
	// to calculate geometrical perimeter of triangle
	double calculateGeoPerimeter() const;
	// to calculate screen Area
	double calculateScreenArea() const;
	// to calculate screen perimeter
	double calculateScreenPerimeter() const;
	// operator = oveload
	Oblique & operator=(const Oblique &obl);
	//friend ostream& operator<<(ostream& os, Oblique &obl);
	void draw(Canvas & canvas, int row, int col, char foreChar = '*', char bChar = ' ') const;

};