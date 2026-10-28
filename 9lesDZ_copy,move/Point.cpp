#include "Point.h"

 void Point::print() const {
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

 Point& Point::operator++() {
	++x;
	++y;

	return *this;

}

 inline Point& Point::operator--() {
	 --x;
	 --y;

	 return *this;
 }

  bool Point::operator>(const Point& other) const {
	 return ((this->x) > (other.x) && ((this->y) > (other.y)));

 }
  bool Point::operator<(const Point& other) const {
	  return ((this->x <other.x) && (this->y < other.y));
 }

   Point Point::operator!()  {
	  this->x *= -1;
	  this->y *= -1;
	  return *this;
  }
