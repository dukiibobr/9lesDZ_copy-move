#pragma once
#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int x1,int y1):x(x1),y(y1){}
	 
	void print()const;

	Point& operator++();
	Point& operator--();
	bool operator >(const Point& other) const;

	bool operator <(const Point& other) const;
	Point operator!() ;
};

