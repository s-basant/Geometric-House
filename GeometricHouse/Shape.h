#pragma once
#include <iostream>
#include<ostream>
#include<string>
#include"Canvas.h"
using namespace std;

class Shape {

private:
	// object ID of the shape
	int objID;
	// name of the shape
	string  name;
	// description of the shape
	string description;
public:
	// constructor with name and description
	Shape(string name, string description) : name(name), description(description) { 
		objID = IDCounter();
		this->name = name;
		this->description = description;
	 }
	// get the name of the shape
	string getName() const;
	// get the ID of the shape
	int getID() const;
	// get the description of the shape
	string getDescription() const;
	// set the description of the description
	void setDescription(string description);
	// set the name of the shape
	void setName(string Name) ;
	// to print shape object
	string  toString() const;
	// Calculate geometric area
	virtual double calculateGeoArea() const =0 ;
	// Calculate geometric perimeter
	virtual double calculateGeoPerimeter()const =0;	
	// Calculate Screen Area
	virtual double calculateScreenArea()const =0;	
	// Calculate Screen Perimeter
	virtual double calculateScreenPerimeter() const =0;	
	// get height of the shape
	virtual  int getHeight() const=0;
	// get width of the shape
	virtual int getWidth() const=0;
	// draw the shape
	virtual void draw(
		Canvas& canvas, //a drawing surface 
		int row, //the y (row) coordinate of the bounding box to be drawn. 
		int col, //the x (column) coordinate of the bounding box to be drawn. 
		char foreChar = '*', //foreground char 
		char backChar = ' ') //backgroundchar
		const = 0;
	// function to create ID of the object
	int IDCounter() { static int count = 0; return count++; };
	// print the shape
	friend ostream& operator<<(ostream& os, const Shape &sh);
};