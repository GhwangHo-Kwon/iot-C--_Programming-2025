///*
//	디폴트 매개변수
//*/
//#include <iostream>
//
//int func(int num = 10) {			// 매개변수를 초기화 시킬 때 아무것도 입력 안하면 초기화된 값 입력
//	return num * num;
//}
//
//int main()
//{
//	int res;
//	res = func(10);
//	std::cout << res << std::endl;
//
//	res = func(0);
//	std::cout << res << std::endl;
//
//	res = func();				// 입력이 없으면 디폴트 매개변수가 적용
//	std::cout << res << std::endl;
//
//	return 0;
//}