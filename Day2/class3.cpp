///*
//	3. 생성자 constructor
//	생성자 호출로 객체가 만들어짐
//	객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않음
//	생성자는 초기화 기능으로 사용한다.
//	생성자는 오버로딩이 가능
//	프로그래머가 생성자를 작성하면 더 이상 디폴트 생성자는 제공되지 않음
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int m_num1;
//	int m_num2;
//public:
//	MyClass() {}						// 기본 생성자
//	MyClass(int num1, int num2) {		// 생성자(입력을 2개 받음)
//		m_num1 = num1;
//		m_num2 = num2;
//	}
//	~MyClass(){}			// 소멸자 : 디폴트 생성자에 `~` 표시만 해주면 됨
//
//	void printData() {
//		cout << "나는 MyClass의 인스턴스 입니다." << endl;
//		cout << "m_num1: " << m_num1 << "   m_num2: " << m_num2 << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	MyClass obj2(100, 200);
//	obj2.printData();
//
//	return 0;
//}