#include"Shape.h"
#include<iostream>

string Shape::getName() const 
{ 
	return name; 
};
int Shape::getID() const 
{ 
	return objID; 
};
string Shape::getDescription() const 
{ 
	return description; 
}
void Shape::setDescription(string description)  
{ 
	this->description = description; 
};
void Shape::setName(string name) 
{ 
	this->name = name;
};
ostream& operator<<(ostream& os, const Shape & sp) 
{
	os << sp.toString();
	os.flush();
	return os;
}

string  Shape::toString() const
{
	cout << "Shape Information" << endl;
	cout << "-----------------" << endl;
	cout << "Static type :" << typeid(this).name() << endl;
	cout << "Dynamic type :" << typeid(*this).name() << endl;
	cout << "Shape name :" << this->getName() << endl;
	cout << "Description :" << this->getDescription() << endl;
	cout << "id :" << this->getID() << endl;
	cout << "B.boxwidth :" << this->getWidth() << endl;
	cout << "B.boxheight :" << this->getHeight() << endl;
	cout << "Scr area :" << this->calculateScreenArea() << endl;
	cout << "Geo area :" << this->calculateGeoArea() << endl;
	cout << "Scr perimeter :" << this->calculateScreenPerimeter() << endl;
	cout << "Geo perimeter :" << this->calculateGeoPerimeter() << endl;
	return "";
}

