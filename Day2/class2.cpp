///*
//	2. class
//*/
//#include <iostream>
//using namespace std;
//
//class AClass {
//private:
//	int n1;
//	int n2;
//public:
//	//AClass() {}				// 생성자는 클래스와 이름이 같으며, 출력이 없음(초기화 기능)
//	void setDate(){
//		n1 = 0;
//		n2 = 0;
//		cout << "n1, n2 초기화" << endl;
//		cout << "n1: " << n1 << ", n2: " << n2 << endl;
//	}
//	void getDate(int gn1, int gn2){
//		n1 = gn1;
//		n2 = gn2;
//		cout << "나는 MyClass의 인스턴스 입니다." << endl;
//		cout << "n1: " << n1 << ", n2: " << n2 << endl;
//	}
//};
//
//int main()
//{
//	AClass obj;
//	//AClass obj(100, 200);
//
//	obj.setDate();
//	obj.getDate(10, 20);
//
//	return 0;
//}