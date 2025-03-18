///*
//	동적 할당받을 크기를 입력받고 원소를 저장하여 출력하시오.
//	c style
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int size;
//	int* p;
//
//	printf("크기 >> ");
//	scanf("%d", &size);
//	p = (int*)malloc(size * sizeof(int));
//	
//
//	for (int i = 0; i < size; i++) {
//		printf("%d번방 원소 입력 >> ", i);
//		scanf("%d", &p[i]);
//	}
//	
//	for (int i = 0; i < size; i++) {
//		printf("%d번째 원소 : %d\n", i, p[i]);
//	}
//
//	free(p);
//
//
//	return 0;
//}