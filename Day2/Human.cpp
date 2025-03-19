/*
	12.
	step1. 이름과 전화번호는 동적할당.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char *_name, int _age, const char *_ptel) {
		pname = new char[strlen(_name) + 1];
		ptel = new char[strlen(_ptel) + 1];
		strcpy(pname, _name);
		age = _age;
		strcpy(ptel, _ptel);
	}
	~Human() {
		delete[] pname;
		delete[] ptel;
	}
	void getData(){
		cout << "name: " << pname << ", age: " << age << ", tel: " << ptel << endl;
	}
};

int main()
{
	Human h("홍길동", 30, "010-1234-1234");
	h.getData();

	return 0;
}