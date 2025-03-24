///*
//	12. virtual Class - 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 함수를 가지는 클래스
//	추상클래스는 객체를 생성할 수 없다.
//*/
//#include <iostream>
//
//class Cinterface {
//public:
//	Cinterface() { std::cout << "CInterface Constructor" << std::endl; }
//	virtual void getData() const = 0;			// 순수 가상 함수 - `= 0`이 순수 지정자
//};
//class CinSub : public Cinterface {
//public:
//	CinSub() { std::cout << "CinSub Constructor" << std::endl; }
//	void getData() const override {				// 순수 가상 함수로 인해 무조건 재정의 해야함
//		std::cout << "Pure Virtual Function()" << std::endl;
//	}
//};
//
//int main()
//{
//	//Cinterface obj;			// 순수 가상 함수로 지정된 클래스(추상클래스)는 직접적으로 사용 불가
//	CinSub obj;
//	obj.getData();
//
//	return 0;
//}