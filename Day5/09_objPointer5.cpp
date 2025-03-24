///*
//	9. 상속에서 객체 포인터:
//	부모타입의 포인터로 자식타입의 객체를 가르키면 객체가 부모타입으로 업캐스팅됨
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class!!\n"); }
//};
//class Dervied : public Base {
//public:
//	void show() { printf("Dervied Class!!\n"); }			// 오버라이딩(재정의)
//};
//
//int main()
//{
//	Base* bptr = nullptr;
//	Dervied* dptr = nullptr;
//	
//	Dervied obj;			// 파생클래스 객체
//	dptr = &obj;
//	dptr->show();
//
//	bptr = &obj;			// 부모타입의 포인터로 자식 객체를 가르킴. (Upcasting)
//	bptr->show();			// 하지만 부모타입 함수가 출력됨
//	//bptr->Dervied::show();
//
//	return 0;
//}