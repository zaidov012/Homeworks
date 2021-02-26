#include <iostream>
#include <vector>
using namespace std;

class Line
{
private:
	class Point
	{
	public:
		int x;
		int y;
	};

	Point A;
	Point B;

public:
	Line(int x1, int y1, int x2, int y2)
	{
		A.x = x1;
		A.y = y1;

		B.x = x2;
		B.y = y2;
	}

	void printCoordinates()
	{
		printPointA();
		printPointB();
	}

	void printPointA()
	{
		cout << "Point A:\n";
		cout << A.x << '\t';
		cout << A.y << endl << endl;
	}

	void printPointB()
	{
		cout << "Point B:\n";
		cout << B.x << '\t';
		cout << B.y << endl << endl;
	}

	void editPointA(int x, int y)
	{
		A.x = x;
		A.y = y;
	}

	void editPointB(int x, int y)
	{
		B.x = x;
		B.y = y;
	}

	double calculateDistance()
	{
		double a = pow((A.x - B.x), 2);
		double b = pow((A.x - B.y), 2);
		return sqrt(a + b);
	}
};



/*
	Line class-i yaradin. Class oz daxilinde iki Point tipli object saxlamalidir.
	Bu onun noqtelerinin koordinatlarini gosteren objectler olacaq

	Point class-i oz daxilinde 'x' ve 'y' koordinatini saxlamalidir
	Point tipde object yaratmaq mumkun olmamalidir (yalniz Line class-inda mumkun olmaldir)
	Line class-inin objectini yaradanda siz 4 int tipli koordinat gondermelisiniz
	x1, y1, x2, y2
	x1, y1 -> PointA
	x2, y2 -> PointB

	Line class-inin daxilinde
	printCoordinates() - 2 noqtenin her birinin koordinatlarini cap etmek

	printPointA() - A noqtesinin koordinatlarini cap etmek
	editPointA(int newX, int newY) - A noqtesinin koordinatlarini deyishmek

	printPointB()  - B noqtesinin koordinatlarini cap etmek
	editPointB(int newX, int newY) - B noqtesinin koordinatlarini deyishmek

	calculateDistance() - A ve B noqteleri arasinda mesafenin hesablanmasi ve qaytarilmasi
	noqteler arasinda mesafenin hesablanmasi dusturunu internetden tapin

	methodlari olmalidir
	*/

int main()
{
	Line line(1, 2, 3, 4);
	line.printCoordinates();

	line.editPointA(3, 4);
	line.printPointA();

	line.editPointB(5, 2);
	line.printPointB();

	cout << "Distance between points: " << line.calculateDistance() << endl;
}
