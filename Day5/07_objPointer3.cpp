///*
//	7. 
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	int value;
//	//MyClass() {}
//	MyClass(int v = 0) : value(v) { }
//	void showMyClass() {
//		std::cout << "Value: " << value << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass* ptr = new MyClass{ 10 };
//	ptr->showMyClass();
//	printf("value: %d\n", ptr->value);
//
//	delete ptr;
//
//	MyClass obj{};
//	ptr = &obj;
//
//	ptr->showMyClass();				// 역참조와 동일
//	(*ptr).showMyClass();			// 역참조 사용시 괄호 조심
//	printf("value: %d\n", ptr->value);
//
//	return 0;
//}