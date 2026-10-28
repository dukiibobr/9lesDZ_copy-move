#include "Point.h"

int main()
{
	Point p1(5, 1);
	Point p2(4, 8);
	p1.print();
	if (p2 > p1)
		cout << "p2>p1" << endl;
	else
		cout << "no ";
	if (p1 < p2)
		cout << "p1<p2" << endl;
	else
		cout << " no";

	!p2;
	p2.print();

}


