#pragma once
#include"Shape.h"
class IsoscelesTriangle : public Shape
{
	private:
		// Construction value of Isoceltes triangle
		int height, base;
	public:
		// constructor with height , base, description and shape name
		IsoscelesTriangle(int , int, string, string );
		// constructor with height , base, shape name
		IsoscelesTriangle(int, string, string);
		// returns height of the triangle
		int getHeight() const;
		// returns width of the triangle
		int getWidth() const;
		// set height of triangle
		void setHeight(int height);
		// set width of triangle
		void setWidth(int base);
};
