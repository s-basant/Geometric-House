#include<iostream>
#include <vector>
#include"Canvas.h"
using namespace std;
// the constructor to create the canvas
Canvas::Canvas(int rows, int cols, char  fillCh ) 
{
	//vector<vector<char>> canv(rows, std::vector<char>(cols));
	this->canvas.resize(rows);
	for (int i = 0; i < rows; ++i)
		this->canvas[i].resize(cols);
	for (int i = 0; i <rows; ++i)
	{
		for (int j = 0 ; j < cols ; ++j)
		{
			this->canvas[i][j] = fillCh;
		} 
	}
}
// to put a character at given coordinates
void Canvas::put(int r, int c, char ch )
{
	
	canvas[r][c] = ch;
}
// get height of canvas
int Canvas::getHeight() const
{
	return canvas.size(); // return row
}
// get width of the canavas
int Canvas::getWidth() const
{
	return canvas[0].size();  // return column
}
// to check of the cordiantes is in bound
bool Canvas::inBounds(int r, int c) const
{
	if (((size_t) r < canvas.size()) && ((size_t)c < canvas[0].size()))
	{
		return true;
	}
	else return false;
}
// clear the filled character
void Canvas::clear(char fillCh)
{
	int rows = this->getHeight();
	int cols = this->getWidth();
	for (int i = 0; i <rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			this->canvas[i][j] = fillCh;
		}
	}

}

// operator overload to return canvas object
const vector<char> & Canvas::operator[](int i) const
{
	int rows = this->getHeight();
	int cols = this->getWidth();

	return this->canvas[i];
}

//to print canavas object
ostream& operator<<(ostream& os, const Canvas &canvas) 
{
	int rows = canvas.getHeight();
	int cols = canvas.getWidth();
	for (int i = 0; i <rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			os << canvas[i][j];
		}
	}
	os.flush();
	return os;

}