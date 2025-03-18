///*
//*/
//#include <iostream>
//#include "scope.h"
//
//A::A(int aa) {			// `::` 범위지정 (scope)연산자 / `std::cout <<` - 형태와 비슷
//	a = aa;
//}
//void A::AInfo() {
//	std::cout << "a: " << a << std::endl;
//}
//
//int main()
//{
//	A a(10);			// A클래스의 a객체에 10을 초기화
//	a.AInfo();
//
//	return 0;
//}