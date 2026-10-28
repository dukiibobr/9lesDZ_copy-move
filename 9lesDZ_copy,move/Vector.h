#pragma once
#include "Point.h"

class Vector
{
	Point* points;
	int countPoint;
public:
	Vector();
	void printV()const;

	void addPoint(Point p);

	Vector(const Vector& other);

	Vector& operator=(const Vector& other);

	Vector(Vector&& other)noexcept;


	~Vector();
};


