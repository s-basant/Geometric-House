#pragma once
#include"IsoscelesTriangle.h"
#include<iostream>
#include<ostream>

class RightTriangle : public IsoscelesTriangle
{
public:
	// construtor with base and description
	RightTriangle(int, string );
	// construtor with base
	RightTriangle(int);
	// calculate geometrical area
	double calculateGeoArea() const;
	// Calculate geometric perimeter
	double calculateGeoPerimeter()const;		
	// Calculate Screen Area
	double calculateScreenArea()const;				
	// Calculate Screen Perimeter
	double calculateScreenPerimeter() const;
	// draw the shape on canvas
	void draw(Canvas & canvas, int row, int col, char foreChar = '*', char bChar = ' ') const;
};