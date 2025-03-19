///*
//	11. 멤버 초기화 - 콜론초기화 사용
//	1. 상수 멤버 초기화
//	2. 레퍼런스 멤버 초기화
//	3. 객체를 멤버로 가지는 경우
//*/
//#include <iostream>
//using namespace std;
//
//class ConstClass {
//private:
//	int m_value;
//	const int m_value2;			// 상수 멤버 변수는 객체 생성되기 전 반드시 초기화가 되어야 한다. --> 콜론 초기화
//public:
//	ConstClass(int value, int value2) : m_value2(value2) { m_value = value; }		// 콜론초기화 - 생성자 생성 전 초기화
//	void showValue() const {
//		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
//	}
//};
//
//class RefClass {
//private:
//	int& ref;			// 레퍼런스 역시 객체가 생성되기 전 반드시 초기화가 이루어져야 함.
//public:
//	RefClass(int& r) : ref(r) { }
//	void showValue() {
//		printf("ref: %d\n", ref);
//	}
//};
//
//class Position {
//private:
//	int m_x;
//	int m_y;
//public:
//	Position(int x, int y) { 
//		printf("Position 생성자!!\n");
//		m_x = x, m_y = y;
//	}
//	void getData() {
//		printf("m_x: %d, m_y: %d\n", m_x, m_y);
//	}
//};
//class ObjClass {
//private:
//	Position pos;			// 객체 멤버변수 / ObjClass가 실행되기 전 Position 객체가 먼저 생성되어야함
//public:
//	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass constructor!!\n"); }		// 객체 멤버변수도 콜론 초기화
//	void showValue() {
//		pos.getData();
//	}
//};
//
//int main()
//{
//	ConstClass obj(10, 20);
//	obj.showValue();
//
//	int n = 50;
//	RefClass obj2(n);
//
//	obj2.showValue();
//
//	cout << "============================================" << endl;
//
//	ObjClass o(3, 6);
//	o.showValue();
//
//	return 0;
//}