#include"IsoscelesTriangle.h"
#include<iostream>
// constructor with height , base, description and shape
IsoscelesTriangle::IsoscelesTriangle(int height, int base, string description, string shape) : Shape(shape, description)
{
	this->height = height;
	this->base = base;
};
// constructor with height , base, description
IsoscelesTriangle::IsoscelesTriangle(int base, string name, string description) : Shape(name, description)
{
	this->base = base;
};
// to get the height of triangle
int IsoscelesTriangle::getHeight() const
{
	return this->height;
};
// to get width of triangle
int IsoscelesTriangle::getWidth() const
{
	return this->base;
};
// to set height of triangle
void IsoscelesTriangle::setHeight(int height)
{
	this->height = height;
};
// to set width of triangle
void IsoscelesTriangle::setWidth(int base)
{
	this->base = base;
};