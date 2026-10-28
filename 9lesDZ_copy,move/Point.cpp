#include "Point.h"

 Point::Point()
{
	x = 0;
	y = 0;
}

 Point::Point(int x1, int y1) :x(x1), y(y1) {}

void Point::print() const {
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

 Point& Point::operator++() {
	++x;
	++y;

	return *this;
}

  Point& Point::operator--() {
	 --x;
	 --y;

	 return *this;
 }

  bool Point::operator>(const Point& other) const {
	  return x + y > other.x + other.y;
 }
  bool Point::operator<(const Point& other) const {
	  return x + y < other.x + other.y;
  }

   Point Point::operator!()  {
	  this->x *= -1;
	  this->y *= -1;
	  return *this;
  }

    int Point::getX() const {
	   return x;
   }

    int Point::getY() const {
	   return y;
   }
