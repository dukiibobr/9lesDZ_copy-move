#include "Vector.h"

 Vector::Vector()
{
	points = nullptr;
	countPoint = 0;
}

  void Vector::printV() const {
	 for (int i = 0; i < countPoint; i++)
	 {
		 points[i].print();
		 cout << endl;
	 }
 }

   void Vector::addPoint(Point p) {
	  Point* temp = new Point[countPoint + 1];
	  for (int i = 0; i < countPoint; i++)
	  {
		  temp[i] = points[i];
	  }
	  temp[countPoint] = p;
	  if (points != nullptr)
		  delete[]points;
	  countPoint++;
	  points = temp;
  }

    Vector::Vector(const Vector& other) {
	   countPoint = other.countPoint;
	   points = new Point[countPoint];
	   for (int i = 0; i < countPoint; i++)
	   {
		   points[i] = other.points[i];
	   }
   }

    Vector& Vector::operator=(const Vector& other) {
	   if (this == &other)
		   return *this;

	   this->countPoint = other.countPoint;

	   if (points != nullptr)
		   delete[]points;

	   this->points = new Point[countPoint];
	   for (int i = 0; i < countPoint; i++)
	   {
		   this->points[i] = other.points[i];
	   }
	   return *this;
   }

	 Vector::Vector(Vector&& other) noexcept {
		points = other.points;
		countPoint = other.countPoint;

		other.points = nullptr;
		other.countPoint = 0;
	}

  Vector::~Vector()
 {
	 if (points != nullptr)
		 delete[]points;
 }
