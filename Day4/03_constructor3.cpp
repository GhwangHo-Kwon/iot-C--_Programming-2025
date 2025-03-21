///*
//	3. 객체를 더하는 함수: add()
//	참조를 리턴한다.
//*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		printf("constructor\n");
//	}
//	Point(const Point& other) {
//		printf("copy constructor\n");
//		x = other.x;
//		y = other.y;
//	}
//	Point& add(const Point& other) {
//		printf("add()\n");
//		//return Point(x + other.x, y + other.y);
//		/* 참조로 리턴한다. */
//		x = other.x;
//		y = other.y;
//		return *this;
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//
//int main()
//{
//	Point p(10, 20);
//	Point p2(30, 40);
//	
//	std::cout << "++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
//
//	/*
//	Point p3;					// 객체를 생성한 후 함수 실행
//	p3 = p.add(p2);				// 임시객체가 생성안됨
//	*/
//	Point p3 = p.add(p2);		// 복사생성자로 임시객체를 만든 후 객체 생성
//	p3.showPoint();
//
//	return 0;
//}