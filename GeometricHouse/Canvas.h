#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Canvas 
{
private:
	// to representthe cells
	vector<vector<char>> canvas ; 
public:
	/* 
	A constructor , The parameters rows and cols represent, respectively, the number of rows and columns 
	 of the canvas under construction. This constructor should initialize every cell with the  fill character fillCh,
	 which defaults to a blank
	*/
	Canvas(int rows, int cols, char  fillCh = ' '); 
	/*
	function that writeschin the cell at rowrand columnc.This function checks against bounds, 
	and it simply ignores (clips) writes that land outsideits boundaries
	*/
	void put(int r, int c, char ch = '*');
	// The method that returns the canvas height(rows).
	int getHeight() const;
	// The method that returns the canvas width (columns).
	int getWidth() const;
	// The method that determines whether the speci ed row and columnpositions are inside the bounds of this canvas.
	bool inBounds(int, int) const;
	// The method that takes an optional  ll character and writes the cells with that char - acter.The  ll character defaults to a blank
	void clear(char fillCh = ' ');
	//
	//void draw(
	//	Canvas & canvas, //a drawing surface 
	//	int row, // they (row) coordinate of the bounding box to be drawn. 
	//	int col, //the x (column) coordinate of the bounding box to be drawn. 
	//	char foreChar = '*', //foreground char 
	//	char backChar = ' ')//background char
	//	const;
	/*
	Subscript operator[]overloads, bothconstand non-constversions. 
	These operators donot check against bounds, as they effectively reflect the corresponding operators of the underlying vectors
	*/
	const vector<char>& operator[](int i) const; // subscript operator overload: read-only
	// to print the canavas
	friend ostream& operator<<(ostream& os, const Canvas &canvas);


};
