///*
//	5.
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int x, y;
//public:
//	MyClass(int ax = 0, int ay = 0) : x(ax), y(ay) { }
//
//	MyClass operator+(const MyClass& other) {
//		return MyClass(x + other.x, y + other.y);
//	}
//	MyClass operator+(int n) {
//		return MyClass(x + n, y + n);
//	}
//	MyClass add(const MyClass& other) {
//		return MyClass(x + other.x, y + other.y);
//	}
//
//	void showMyClass() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//
//int main()
//{
//	MyClass obj(10, 20);
//	MyClass obj2(20, 30);
//	MyClass obj3 = obj.add(obj2);
//	MyClass obj4 = obj.operator+(obj3);
//	obj.showMyClass();
//	obj2.showMyClass();
//	obj3.showMyClass();
//	obj4.showMyClass();
//
//	MyClass obj5 = obj4 + 100;
//	obj5.showMyClass();
//	//MyClass obj6 = 200 + obj4;
//
//	return 0;
//}
//
//// 오버로딩 할 수 없는 연산자:
//// ::, ., *, sizeof