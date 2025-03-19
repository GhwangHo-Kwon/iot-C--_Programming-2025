///*
//	4. 
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char name[20];
//	int age;
//public:
//	void setData() {
//		id = 0;
//		strcpy(name, "");
//		age = 0;
//	}
//	void getData(int g_id, const char* g_name, int g_age) {
//		id = g_id;
//		// 주소 = rvalue
//		strcpy(name, g_name);
//		age = g_age;
//		cout << "id: " << id << ", name: " << name << ", age: " << age << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	obj.setData();
//	obj.getData(1, "김철수", 20);
//
//	return 0;
//}