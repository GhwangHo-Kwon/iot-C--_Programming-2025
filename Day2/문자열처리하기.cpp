///*
//	7. 문자열 처리하기
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char str[20] = "홍길동";		// 기본형태(선언과 바로 입력(초기화) 시키는건 가능)
//	cout << str << endl;
//
//	char str2[20];
//	//str2 = "김영희";			// 배열이름(주소)에 문자열을 넣어서 저장X
//	strcpy(str2, "김영희");		// 변수 선언 후 상수나 변수로 문자를 입력받으려면 복사해서 붙여넣어야함
//	cout << str2 << endl;
//
//	//char* str3 = nullptr;
//	char str3[100];				// 문자 입력 받을때 변수 선언
//	cout << "이름입력 >> ";		
//	cin >> str3;
//	cout << str3 << endl;
//
//	const char* name;		// 포인터로 문자열 입력(상수로 입력 받는건 const 붙이기!)
//	name = "김철수";		// 변수로 저장 받는건 상수선언 X / ex) name = str; -- char str[20] = "홍길동"
//	cout << name << endl;
//
//	return 0;
//}