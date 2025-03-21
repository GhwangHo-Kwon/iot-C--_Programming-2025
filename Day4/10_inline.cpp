///*
//	10.
//*/
//#include <iostream>
//#define ADD(a, b)	#a "+" #b		// 매크로 함수, 전처리기가 처리함, #은 문자열로 처리
//#define PI			3.14
//#define MSG(x, y, z)	x ## y ## z
//
//
//int main() {		// 컴파일러가 처리
//	printf("ADD(a, b): %s\n", ADD(10, 20));
//	printf("PI: %.2lf\n", PI);
//	printf("MSG(x, y, z): %s\n", MSG("macro+", "operator+", "test"));
//
//	return 0;
//}