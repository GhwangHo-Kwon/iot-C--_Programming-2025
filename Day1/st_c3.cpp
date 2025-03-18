/*
	C++ 클래스
*/
#include <iostream>

class Human {
public:					// 지역변수에서 전역변수로 변환하여 다른 함수에서도 사용가능
	char name[20];
	int age;
	char job[10];

	Human() {}			// 디폴트 생성자(입출력이 없으며, 클래스 이름과 같음)

	void showHuman()
	{
		printf("name: %s, age: %d, job: %s\n", name, age, job);
	}

};

int main()
{
	Human h = { "김철수", 30, "백수" };
	//showHuman(h);
	h.showHuman();

	return 0;
}