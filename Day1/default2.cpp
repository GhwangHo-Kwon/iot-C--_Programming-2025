///*
//	디폴트 매개변수를 여러개 적용할 때는 맨 오른쪽부터 순서대로 적용
//*/
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int coordinates(int x, int y = 0, int z = 0);			// defalut 변수 값은 함수원형에만 작성(함수원형 선언시)
//														// defalut 매개변수 사용은 오른쪽부터 순차적으로 시킴 (중간값만 적용 안됨)
//
//int main()
//{
//	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
//	cout << "(10, 20, def): " << coordinates(10, 20) << endl;
//	cout << "(10, def, def): " << coordinates(10) << endl;
//
//	return 0;
//}
//
//int coordinates(int x, int y, int z)
//{
//	int res = 0;
//
//	res = pow(x, 2) + pow(y, 2) + pow(z, 2);		// pow(); 제곱을 시키는 함수
//	return sqrt(res);								// sqrt(); 제곱근 함수
//}