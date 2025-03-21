///*
//	14. 템플릿은 선언과 함수정의가 분리될 수 없음.
//*/
//#include <iostream>
//using namespace std;
//
//template <typename T>			// 템플릿 선언(일반화)
//T func(T a, T b) {				// 템플릿 함수
//	cout << "type: T" << endl;
//	return a + b;
//}
//
//template <>						// 템플릿 특수화 - 템플릿 일반화 중 특별한 타입을 처리할 경우
//int func<int>(int a, int b) {
//	cout << "type: <int>" << endl;
//	return a + b;
//}
//
//int main()
//{
//	cout << func(10, 20) << endl;
//	cout << func(10.5, 20.5) << endl;
//
//	cout << func<double>(10.1, 20.2) << endl;		// 명시적으로 사용자가 자료형을 지정해도됨
//	cout << func<int>(10, 10) << endl;
//
//	return 0;
//}