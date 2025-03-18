///*
//	C++ 구조체
//*/
//#include <iostream>
//
//typedef struct human {		// 구조체에서 함수를 사용하려면 이름을 지정
//	char name[20];
//	int age;
//	char job[10];
//
//	void showHuman()		// C++은 함수까지 구조체에 들어가짐
//	{
//		printf("name: %s, age: %d, job: %s\n", name, age, job);
//	}
//
//} Human;		// 별칭
//
//int main()
//{
//	Human h = { "김철수", 30, "백수" };
//	//showHuman(h);
//	h.showHuman();
//
//	return 0;
//}