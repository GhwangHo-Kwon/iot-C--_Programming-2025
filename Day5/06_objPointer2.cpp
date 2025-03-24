///*
//	6. 객체 동적 생성
//*/
//#include <iostream>
//
//class AClass {
//public:
//	void showAClass() {
//		std::cout << "Dynamically Created Object" << std::endl;
//	}
//};
//
//int main()
//{
//	AClass* ptr = new AClass{ };				// 객체 동적 할당, 동적 할당 선언 시 {} 쓰는 걸 권장
//	ptr->showAClass();
//	
//	delete ptr;				// 동적 메모리 해제
//
//	return 0;
//}