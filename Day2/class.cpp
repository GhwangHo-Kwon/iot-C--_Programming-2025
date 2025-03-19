///*
//	1. class
//*/
//#include <iostream>
//using namespace std;
//
//class A {
//public:
//	int m_num;			// 멤버변수(속성)
//	
//	void set(int num) {
//		m_num = num;
//	}
//
//	void print() {		// 멤버함수(기능), 메서드
//		cout << "나는 A 클래스의 인스턴스 입니다." << " num: " << m_num << endl;
//	}
//};
//
//int main()
//{
//	// int n;
//	//A obj();		// 클래스 객체 (생성자)생성
//	A obj;			// 변수 선언이랑 비슷(클래스는 타입이라 생각 / 사용자 정의 자료형(구조체와 비슷))
//					// A 클래스로 만들어진 객체 obj 생성
//	obj.print();
//	obj.set(10);
//	obj.print();
//
//	return 0;
//}