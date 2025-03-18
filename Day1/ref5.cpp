///*
//	출력인 경우: 일반 변수
//*/
//#include <iostream>
////using namespace std;
//
//int func(int&);
//
//int main()
//{
//	int num = 10;
//	const int& res = func(num);			// 함수 자체를 레퍼런스 하려면 const를 붙여야한다
//										// 함수가 끝나는 순간 지역변수는 메모리에서 주소가 삭제되면서 없어지기 때문(상수가 되버림)
//
//	std::cout << res << std::endl;
//
//	return 0;
//}
//
//int func(int& anum) {
//	anum++;
//	return anum;
//}