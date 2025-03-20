///*
//	4. 변환 생성자
//	다른 타입의 객체로 변환될때 호출되는 생성자. 입력을 한개만 가지는 생성자
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	MyClass(int value) {
//		printf("변환 생성자 호출!!\n");
//		this->value = value;
//	}
//
//	void printMyClass() {
//		printf("value: %d\n", value);
//	}
//};
//
//int main()
//{
//	MyClass obj = 10;		// 클래스와 정수의 자료형 타입이 다르지만, 변환 생성자에서 타입을 맞춰줌
//	obj.printMyClass();
//
//	MyClass obj2(10);
//	obj2.printMyClass();
//
//	return 0;
//}