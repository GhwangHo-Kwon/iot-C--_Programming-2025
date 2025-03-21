///*
//	1. 
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int m_a, m_b;
//	//const char* m_name;
//public:
//	MyClass(int a = 0, int b = 0) : m_a(a), m_b(b) { }
//	void showMyClass() {
//		std::cout << m_a << ", " << m_b << ", " << std::endl;
//	}
//};
//
//int main()
//{
//	//MyClass obj{ 1, 2, "홍길동" };
//	//obj.showMyClass();
//	
//	//MyClass obj2;
//	//obj2 = obj;				// num = 10;, 디폴트 대입 연산자
//	//obj2.showMyClass();
//
//	MyClass obj{ 10, 20 };
//	MyClass obj2{ 30, 40 };
//	MyClass ob3 = obj + obj2;		// 클래스 2개 더하기(오버로딩)
//
//	return 0;
//}