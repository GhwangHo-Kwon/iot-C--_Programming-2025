# iot-C++_Programming-2025
 IoT 개발자 C++ 프로그래밍

## 1일차
- C++ 기초
    - cout : C++의 표준출력객체이며, C언어에서 printf와 같음 / [C1](./Day1/cout.cpp), [C2](./Day1/cout2.cpp)
    - namespace : [C](./Day1/namesp.cpp)
        - 이름과 형태가 같은 함수를 namespace로 따로 지정하면 여러개를 만들 수 있음
        - using namespace : 객체를 불러오는 명령어이며 파이썬에서 import와 유사함
    - cin : C++의 표준입력개체이며, C언어에서 scanf와 같음 [C](./Day1/cin.cpp)
        - 사용시 파이썬과 같이 문자열 사용안됨
        
        ```c++
        #include <iostream>
        using namespace std;            // std 객체를 불러옴
        int main()
        {
            int num(100);           // C++ 스타일 변수 초기화 및 선언방법
            int inVal;
            std::cout << "Hello World" << std::endl;    // C++ style, cout은 입력 endl는 개행
            
            cout >> "숫자 입력>> ";         // using namespace사용으로 std::cout에서 std:: 생략가능
            cin >> inVal;                   // C에서의 scanf와 같음
            return 0;
        }
        ```
    - 범위지정(Scope) 연산자 : [C](./Day1/scope.cpp), [C_header](./Day1/scope.h)
        - `::`로 표현함
        - `std::cout`에서 std객체에서(범위지정) cout이라는 함수를 호출하라는 의미

- 함수의 다형성
    - 함수 오버로딩(함수의 다중 정의) : [C](./Day1/overloading.cpp)
        - C++에서는 함수 이름이 같아도 매개변수의 타입이나 갯수가 다르면 다른함수
        - `출력만 다른건 동일한 함수!!`
        - 출력을 다른 자료형으로 출력해도 무방
    - 함수 오버라이딩(함수의 재정의) → 상속
    - 디폴트 매개변수 : [C1](./Day1/default.cpp), [C2](./Day1/default2.cpp), [C3](./Day1/default3.cpp)
        - 함수 생성시 매개변수의 초기화 값을 지정해주고,
          호출 시 입력값이 없으면 초기화 된 값을 입력받음
        - 디폴트 매개변수를 여러개 선언 했을때 맨 오른쪽부터 적용
          (중간값 or 왼쪽 값만 적용 안됨)
        - 디폴트 매개변수의 값은 함수원형에만 작성(함수원형 선언시)
        - 함수 오버로딩 중 디폴트 매개변수가 있는 함수와
          입력이 없는 순수한 함수가 있을때 입력없는 함수 호출 시 문제 발생
        ```c++
        int func(int num = 10){         // 초기화를 시켜주면
            return num * num;
        }
        int main()
        {
            func();         // 입력값 없을 시 디폴트 매개변수 적용!
        }
        ```

- 메모리 동적할당
    - C : [C1](./Day1/new.cpp)
        - C에서는 `malloc();`, `free()` 함수를 사용
        - malloc으로 동적할당을 받아서 free로 반환
    - C++
        - C++에서는 `new`, `delete` 사용
        - [C2](./Day1/new2.cpp)
            ```c++
            using namespace std;
            int size;
            int* pary;

            pary = new int[size];       // new로 동적할당을 받음
            ...(생략)
            delete[] pary;      // delete 바로 뒤에 자료형에 맞게 적어야됨
            ```
        - 자료형 포인터 = new 자료형(크기)
        - new는 생성자를 호출. 즉 new는 객체를 생성시킴
            - 생성자 호출이 되므로 초기화도 가능
            - 생성자는 객체를 생성하고, 초기화 시키는 기능을 가진 특별한 메서드 - [C3](./Day1/new3.cpp)
        - 객체를 생성하기 위해서는 생성자 호출이 있어야함.

- 레퍼런스(Reference) : [C1](./Day1/ref.cpp)
    - 변수의 또다른 이름, 보이지 않는 포인터
    - 메모리를 사용하지 않음. [C2](./Day1/ref2.cpp)
        ```c++
        void cFunc(int&);       // 레퍼런스(참조변수)선언
        ```
    - 선언과 동시에 반드시 초기화 해야함. [C3](./Day1/ref3.cpp)
        ```c++
        int& ref = num;
        ```
    - 레퍼런스에 레퍼런스 선언은 무한히 할 수 있음
    - 상수 레퍼런스 : [C4](./Day1/ref4.cpp)
        - 임시객체를 저장할 수 있는 공간
        - 리터럴(상수)도 참조 가능
        - 상수를 레퍼런스로 선언하려면 `const` 지정을 해줘야함
        ```c++
        const int& ref = 10;
        ```
    - 일반변수 출력 : [C5](./Day1/ref5.cpp)
        ```c++
        int func(int& anum);
        int main()
        {
            int num = 10
            cosnt int& res = func(num); // 함수 자체를 레퍼런스 하려면 const를 붙여야한다
        }
        ```
        - 함수 자체를 레퍼런스 하려면 `const`를 붙이기
        - 함수가 끝나는 순간 지역변수는 메모리 주소가 삭제되면서 없어짐(상수가 됨)
    - 레퍼런스 출력 : [C6](./Day1/ref6.cpp)
        - 레퍼런스 호출 및 선언 시 출력타입에 맞춰서 변수 설정

- 구조체(Struct)
    - C 구조체 : [C1](./Day1/st_c.cpp)
    - C++ 구조체 : [C2](./Day1/st_c2.cpp)
        - C++은 함수까지 구조체에 들어가짐
    - C++의 구조체가 진화한 것이 Class이다. [C3](./Day1/st_c3.cpp)
        - public을 선언하면 클래스 내부에서만 접근가능한 함수 및 변수들을
          클래스 외부에서도 접근 가능해짐
        - class를 선언하면 디폴트 생성자가 생긴다
            - 디폴트 생성자는 입출력이 없으며, 클래스 이름과 같음

## 2일차
- 문자열 처리하기 복습 [C](./Day2/문자열처리하기.cpp)
- 클래스(class) : [C1](./Day2/class.cpp)
    - 클래스를 구성하는 3가지
        1. 접근제어 지시자
            - private : 외부 접근 불가
            - public : 외부 접근 가능
            - protected : 자신만 접근 가능
        2. 멤버변수 - 속성, private 영역
            - mutable : 변수를 상수화 되는것을 막음 `mutable int id`
        3. 멤버함수(메서드) - 기능, public 영역
    - 객체
    - 인스턴스
    - 생성자(constructor) [C3](./Day2/class3.cpp)
        - 생성자 호출로 객체가 만들어짐
        - 객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않음
        - 생성자는 초기화 기능으로 사용
        - 생성자를 안 만들면 디폴트 생성자가 제공되지만
          사용자가 생성자를 만들면 디폴트 생성자가 제공안됨
        - 생성자도 함수이므로 오버로딩이 가능

        - 디폴트 생성자 [C2](./Day2/class2.cpp)
            - 디폴트 생성자 형태 : `class본인이름 (){ }`
            - 디폴트 생성자는 클래스 내부에서 생성자를 안만들면 자동 생성됨
        - 소멸자
            - 소멸자는 자동호출되며 동적할당하는 경우 말고는 별도 작성할 필요는 없음.
            - 소멸자 형태 : `~디폴트생성자`, 디폴트 생성자를 작성하고 맨 앞에 `~`만 작성
    - 클래스 매개변수 초기화 예시
        - 클래스 내 함수를 이용한 초기화 [C1](./Day2/MyClass.cpp)
        - 생성자를 이용한 초기화 [C2](./Day2/MyClass2.cpp)
        - 생성자를 이용 + 매개변수를 동적할당 받았을 때 [C3](./Day2/MyClass3.cpp)
            - 클래스 내 함수 및 생성자를 클래스 밖으로 꺼내는 법
                ```c++
                class MyClass{
                    MyClass();      // 클래스 내 함수 원형 선언 후
                };
                MyClass::MyClass(){ }      // 메서드 이름 앞에 `::`를 입력한 후 함수 선언
                ```
            - 상수 멤버 함수 : 함수 안에 있는 모든 변수들을 상수화 시킴(변수 수정 불가)
                ```c++
                void MyClass::getData() const { }
                ```
    - 변수 초기화 방법 : [C](./Day2/init.cpp)
        - 클래스 안의 매개변수 초기화 : [C](./Day2/init2.cpp)
            - `int m_width{ 0 };` - 자료형 변수명{ 변수 }; 형태로 작성
        - 콜론 초기화 or 이니셜라이저 리스트 : [C](./Day2/init3.cpp)
            - 콜론 초기화는 메서드 헤드 부분에 작성
            - 함수 몸체 부분의 실질적인 메서드가 실행되기 전 제일 먼저 실행됨
              > 생성자가 생성되기 전 클래스 내 매개변수 초기화를 시킴
                ```c++
                using namespace std;
                class CTime{
                private:
                    int m_hour{ 0 };
                    int m_min{ 0 };
                    int m_sec{ 0 };
                public:
                    CTime() { cout << "기본 생성자 호출" << endl; }     // 디폴트 생성자
                    CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) {    // 콜론 초기화
                        cout << "입력 3개 받는 생성자 호출" << endl;
                    }
                };
                ```
        - 멤버 초기화 - 콜론 초기화 사용 [C](./Day2/init4.cpp)
            1. 상수 멤버 초기화
                - 상수 멤버 변수는 객체가 생성되기 전 반드시 초기화가 되어야한다.
                  > 콜론 초기화 사용
            2. 레퍼런스 멤버 초기화
                - 레퍼런스 역시 객체가 생성되기 전 반드시 초기화가 이루어져야 함.
                  > 레퍼런스는 객체의 별명을 지정하는 것(같은 주소 사용)으로 객체가 없으면 안됨
            3. 객체를 멤버로 가지는 경우
                - 클래스 내 클래스 객체를 수정해야하는데 수정해야할 객체가
                  private 지정이 됐을때 사용함

## 3일차