///*
//	8. 변수 초기화
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 3;			// 복사 초기화
//	int num2(30);			// 직접 초기화, 함수 호출과 비슷함
//	int num3{ 300 };		// 중괄호 직접 초기화	C++11
//	int num4 = { 3000 };	// 중괄호 복사 초기화
//
//	int x = 3.14;		// 입력은 되나 자료형이 안맞아서 데이터가 손실됨(3 출력)
//	int x1{ 3.14 };		// 자료형이 안맞으므로 입력이 안됨
//
//	cout << num << endl;
//	cout << num2 << endl;
//	cout << num3 << endl;
//	cout << num4 << endl;
//	cout << x << endl;
//	cout << x1 << endl;
//
//	return 0;
//}