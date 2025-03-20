///*
//	3. (deep copy) 복사 생성자
//	동적할당을 받는경우 복사하는 객체도 동적 할당 받은후 별개로 복사하여 저장 되어야 함
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* name, int age) {
//		printf("construct call!!\n");
//		this->name = new char[strlen(name) + 1];			// 동적할당
//		strncpy(this->name, name, strlen(name) + 1);
//		this->age = age;
//	}
//	Person(const Person& other) {			// 깊은 복사생성자
//		printf("copy construct!!\n");
//		this->name = new char[strlen(other.name) + 1];
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//		this->age = other.age;
//	}
//	~Person() { delete[] this->name; }
//
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
//	p.printPerson();
//
//	Person p3 = p;
//	p3.printPerson();
//
//	return 0;
//}
//
///*
//	디폴트로 자동으로 제공받는 생성자: 디폴트 생성자, 복사 생성자, 소멸자
//*/