#include "Point.h"
#include "Vector.h"
#include<Windows.h>

void gotoxy(int x, int y) {
	COORD position;
	position.X = static_cast<SHORT>(x);
	position.Y = static_cast<SHORT>(y);

	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		position);
}

void drawPoint(const Point& p) {
	gotoxy(p.getX(), p.getY());
	cout << "*";
}

int main()
{
	for (int i = 0; i < 30; i++)
	{
		cout << endl;
	}
	Point p4(5, 2);
	Point p5(15, 4);
	drawPoint(p4);
	drawPoint(p5);
	gotoxy(0, 12);
	cout << "points drawn" << endl;





	Point p1(5, 1);
	Point p2(4, 8);
	Point p3(14, 28);
	//p1.print();
	//if (p2 > p1)
	//	cout << "p2>p1" << endl;
	//else
	//	cout << "no ";
	//if (p1 < p2)
	//	cout << "p1<p2" << endl;
	//else
	//	cout << " no";

	//!p2;
	//p2.print();

	Vector v1;
	v1.addPoint(p1);
	v1.addPoint(p2);
	v1.addPoint(p3);

	v1.printV();

	Vector copy(v1);

	Vector newV = copy;
	cout << "=====copy below=====" << endl;
	newV.printV();

	Vector v2(move(v1));
	v2.printV();

	v1.printV();

	
	

}


