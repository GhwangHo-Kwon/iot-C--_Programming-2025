///*
//	6.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;			// mutable int id; - mutable : 변수를 상수화되는 것을 막음
//	//char name[20];
//	char* name;
//	int age;
//public:
//	//MyClass() { }						// 디폴트 생성자
//	~MyClass() { delete[] name; }		// 소멸자(자동 호출 - 동적할당경우 말고는 별도 작성 필요 X)
//	MyClass(int _id, const char* _name, int _age);
//
//	void getData() const;
//};
//
//MyClass::MyClass(int _id, const char* _name, int _age) {		// 메서드 이름 앞에 클래스명:: 입력
//	id = _id;
//	age = _age;
//	name = new char[strlen(_name) + 1];			// 동적할당
//	//name = _name;				// 배열 선언 후 대입 연산자를 사용하여 값을 직접 할당할 수 없음
//	strcpy(name, _name);
//}
//
//void MyClass::getData() const {			// 상수 멤버 함수(모든 멤버들을 상수화) : 함수자체를 상수화 시킴
//	cout << "id: " << id << ", name: " << name << ", age: " << age << endl;
//}
//
//int main()
//{
//	MyClass obj(1, "김철수", 20);
//	obj.getData();
//
//	return 0;
//}