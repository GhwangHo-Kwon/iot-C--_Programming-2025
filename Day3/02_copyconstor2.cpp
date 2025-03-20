///*
//	2. 복사생성자
//	const 참조를 해야 함수의 객체가 메모리에서 삭제안됨
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {
//		printf("constructor call!!\n");
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Person(const Person& other) {			// 복사생성자 : 객체를 참조(임시)로 받아야함 + 상수화 선언
//		printf("copy constructor!!\n");
//		this->age = other.age;
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("홍길동", 30);
//	p.printPerson();
//
//	Person p2(p);
//	p2.printPerson();
//
//	Person p3 = p;
//	p3.printPerson();
//	
//	return 0;
//}
//
////void a(int aa) {
////	aa++;
////}
////
////void main()
////{
////	int n = 10;
////	a(n);
////}