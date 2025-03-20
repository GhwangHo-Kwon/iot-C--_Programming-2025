/*
	13.
*/
#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) :x(ax), y(ay) { printf("constructor!~\n"); }
	//Point(const Point& other) :x(other.x), y(other.y) { printf("copy constructor\n"); }
	Point(const Point& other) {
		printf("copy construcor!~\n");
		x = other.x;
		y = other.y;
	}
	Point add(const Point& other) {
		printf("add()!~\n");
		return Point(x + other.x, y + other.y);
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};

int main()
{
	Point obj(10, 20);
	//obj.showPoint();
	Point obj2(30, 40);
	//obj2.showPoint();
	//Point obj3;
	Point obj3 = obj.add(obj2);
	obj3.showPoint();

	return 0;
}