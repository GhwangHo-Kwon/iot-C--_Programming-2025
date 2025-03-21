///*
//	9. setp4.
//	char 포인터의 name, int 타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
//	name을 동적할당하고 나이 30, 이름 홍명보, man 객체를 생성하시오.
//	man 객체를 복사하여 copyman 객체를 생성하시오.
//	xman = man이 실행시키시오
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* name = " ", int age = 0) {
//		printf("constructor~\n");
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Human(const Human& other) {
//		printf("copy constructor~\n");
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//	~Human() {
//		printf("destructor~\n");
//		delete[] name;
//	}
//	void showHuman() {
//		printf("name: %s, age: %d\n", name, age);
//	}
//	const Human& operator=(const Human& rhs);			// 깊은 대입복사 함수원형
//};
//
//const Human& Human::operator=(const Human& rhs) {		// 깊은 대입복사
//	if (this != &rhs) {
//		//delete[] name;				// 동적할당을 받았을때 초기값을 지움
//		printf("operator overloading!\n");
//		this->name = new char[strlen(rhs.name) + 1];
//		strcpy(name, rhs.name);
//		this->age = rhs.age;
//	}
//	return *this;		// 변경이 있으면 안되므로 함수 이름 앞에 상수화
//}
//
//int main()
//{
//	Human man("홍명보", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;
//	xman.showHuman();
//
//	return 0;
//}