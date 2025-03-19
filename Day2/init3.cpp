///*
//	10.
//	콜론 초기화는 메서드 헤드 부분에 작성
//	함수 몸체 부분의 실질적인 메서드 실행 전 제일 먼저 실행됨
//*/
//#include <iostream>
//using namespace std;
//
//class CTime {
//private:
//	int m_hour{ 0 };
//	int m_min{ 0 };
//	int m_sec{ 0 };
//public:
//	CTime() { cout << "기본 생성자 호출" << endl; }			// 디폴트 생성자
//	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)		// 콜론 초기화 or 이니셜라이져 리스트
//	{
//		cout << "입력 3개 받는 생성자 호출" << endl;
//		//m_hour = h;
//		//m_min = m;
//		//m_sec = s;
//	}
//
//	void setTime(int hour, int min, int sec) {
//		m_hour = hour;
//		m_min = min;
//		m_sec = sec;
//	}
//	void showTime() const {
//		printf("현재 시간은 %d:%d:%d 입니다.\n", m_hour, m_min, m_sec);
//	}
//};
//
//int main()
//{
//	//CTime now;
//	CTime now = CTime();			// rvalue는 임시(클래스)객체
//	now.showTime();
//
//	//CTime t(15, 30, 30);			// 직접 초기화
//	//CTime t = { 12, 12, 12 };		// 중괄호 값을 복사 후 초기화
//	CTime t{ 10, 11, 12 };			// 중괄호 값을 직접 초기화
//	t.showTime();
//
//	return 0;
//}