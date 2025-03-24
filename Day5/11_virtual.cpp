///*
//	11. Virtual Function : 파생클래스에서 재정의할 것을 약속받은 멤버 함수를 말하며
//	Base 클래스의 멤버 함수에 Virtual 키워드를 사용하여 만든다.
//	Virtual Table이 만들어지고, Dynamic Binding으로 동작한다.
//*/
//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void func1() { cout << "B::func1()" << endl; }		// 가상함수 : 함수명 제일 앞에 virtual 키워드 붙임
//	virtual void func2() { cout << "B::func2()" << endl; }		// 가상함수
//	void func3() { cout << "B::func3()" << endl; }
//};
//class Derived : public Base {
//	void func1() override { cout << "D::func1()" << endl; }		// 가상함수를 재정의하는 멤버함수를 나타냄. / override는 생략 가능
//	void func3() { cout << "D::func3()" << endl; }
//	void func4() { cout << "D::func4()" << endl; }
//};
//
//int main()
//{
//	Base b;
//	Derived d;
//	Base* bptr = new Derived();			// upcasting - 부모객체가 자식객체를 가르킴
//
//	bptr->func1();			// Base클래스의 func1()은 가상함수로 선언되어 Derived클래스의 func1() 호출
//	bptr->func2();			// Base클래스의 func2()는 가상함수로 선언되었지만 오버라이딩(재정의)이 되지 않음
//	bptr->func3();			// 포인터 타입의 호출 함수가 결정
//
//	//bptr->func4();		// 객체포인터가 접근 할 수 있는 영역을 벗어남
//
//	delete bptr;
//	bptr = &b;
//	bptr->func1();
//	bptr->func2();
//	bptr->func3();
//
//	return 0;
//}
///*
//	객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클라스의 객체를 가르키면 접근은 기초 클래스 멤버로 제한된다.
//	이때 오버라이딩된 파생 클래스의 멤버를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상함수로 만들면 된다.
//	이것은 컴파일시 포인터형으로 바인딩되지 못하고 런타임에서 포인터가 어떤 객체를 가르키고 있는지에 따라서 바인딩할 함수를
//	결정한다.
//*/