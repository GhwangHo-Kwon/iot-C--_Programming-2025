///*
//	10. 다운캐스팅: 자식 포인터로 부모 객체를 가르킬 수 없다.
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class\n"); }
//};
//class Derived : public Base {
//public:
//	void show() { printf("Derived Class\n"); }
//};
//
//int main()
//{
//	Base bobj;
//	Derived* dptr = nullptr;
//	//dptr = &bobj;			// 자식 객체가 부모 객체를 가르킬 순 없음
//	/*
//	dptr = (Base*)&bobj;
//	dptr->show();
//	*/
//
//	dptr = (Derived*) &bobj;		// 억지로 형변환해서 가르킬 순 있음
//	dptr->show();
//
//	return 0;
//}