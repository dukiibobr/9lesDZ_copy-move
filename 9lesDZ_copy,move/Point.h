#pragma once
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point();
	Point(int x1,int y1);
	 
	void print()const;

	Point& operator++();
	Point& operator--();
	bool operator >(const Point& other) const;

	bool operator <(const Point& other) const;
	Point operator!() ;


	int getX()const;
	int getY()const;
};

