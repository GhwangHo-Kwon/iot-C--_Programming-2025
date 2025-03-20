///*
//	11. StaticTest라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
//		3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것이기 때문에
//		출력담당의 showMember() 메서드를 구현하시오.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class StaticTest {
//private:
//	static int cnt;
//	char* name;
//	char* phone;
//	char* addr;
//public:
//	StaticTest(const char*, const char*, const char*);
//	~StaticTest() {
//		delete[] name;
//		delete[] phone;
//		delete[] addr;
//	}
//	void showMember() {
//		cout << "회원번호: " << cnt << endl;
//		printf("이름: %s, 전화번호: %s, 주소: %s\n", name, phone, addr);
//	}
//};
//
//int StaticTest::cnt = 0;
//StaticTest::StaticTest(const char* name, const char* phone, const char* addr) {
//	this->name = new char[strlen(name) + 1];
//	strcpy(this->name, name);
//	this->phone = new char[strlen(phone) + 1];
//	strcpy(this->phone, phone);
//	this->addr = new char[strlen(phone) + 1];
//	strcpy(this->addr, addr);
//	this->cnt++;
//}
//
//int main()
//{
//	StaticTest m1("홍길동", "010-1111-1111", "부산");
//	m1.showMember();
//
//	StaticTest m2("김영희", "010-2222-2222", "부산");
//	m2.showMember();
//
//	StaticTest m3("홍길동", "010-3333-3333", "울산");
//	m3.showMember();
//
//	return 0;
//}