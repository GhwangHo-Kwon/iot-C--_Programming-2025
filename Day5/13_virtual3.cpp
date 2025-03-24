///*
//	13. 추상자료형을 이용해서 동적 할당된 객체를 참조할 때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생.
//	따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자호출을 유도한다.
//*/
//#include <iostream>
//using namespace std;
//
//class CTest {
//private:
//	int num;
//public:
//	CTest(int anum) : num(anum) { cout << num << " CTest Constructor" << endl; }
//	virtual ~CTest() { cout << num << " CTest Destructor" << endl; }			// 가상 소멸자
//	//~CTest() { cout << num << " CTest Destructor" << endl; }		// 객체 동적 할당 시 자식 클래스 소멸자 호출이 안됨(문제 발생)
//	virtual void vfunc() { cout << "CTest Virtual function()" << endl; }
//	void func() { cout << "CTest function()" << endl; }
//};
//class CTestSub : public CTest {
//private:
//	int subN;
//public:
//	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTestSub Constructor" << endl; }
//	~CTestSub() { cout << subN << " CTestSub Destructor" << endl; }
//	void vfunc() override { cout << "CTestSub function() override" << endl; }
//};
//
//int main()
//{
//	CTest obj(1);
//	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//	CTestSub obj2(2, 22);
//	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//	obj.func();
//	obj.vfunc();
//	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//	obj2.func();				// 자식 클래스의 함수가 없으므로 부모 클래스의 함수가 호출됨
//	obj2.vfunc();
//	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//
//	CTest* ptr = new CTestSub(3, 33);		// 객체 동적 할당
//
//	delete ptr;
//
//	return 0;
//}