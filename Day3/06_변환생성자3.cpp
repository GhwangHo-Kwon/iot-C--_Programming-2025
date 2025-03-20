///*
//	6. 변환 생성자
//	explicit - 암묵적인 변환을 허용하지 않는다
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	explicit MyClass(int value) {			// 인자를 받을 때 자료형 변환을 허용하지 않음
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
//	//MyClass obj = 10;				// 변환생성자 호출 - 객체의 변환이 일어남
//	//obj.printMyClass();
//
//	MyClass obj2{ 10 };
//	obj2.printMyClass();
//
//	return 0;
//}