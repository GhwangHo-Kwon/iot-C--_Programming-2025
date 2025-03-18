# iot-C++_Programming-2025
 IoT 개발자 C++ 프로그래밍

## 1일차
- C++ 기초
    - cout : C++의 표준출력객체이며, C언어에서 printf와 같음
    - namespace : [C](./Day1/namesp.cpp)
        - 이름과 형태가 같은 함수를 namespace로 따로 지정하면 여러개를 만들 수 있음
        - using namespace : 객체를 불러오는 명령어이며 파이썬에서 import와 유사함
    - cin : C++의 표준입력개체이며, C언어에서 scanf와 같음
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
    - 디폴트 매개변수 : [C1](./Day1/default.cpp), [C2](./Day1/default2.cpp)
        - 함수 생성시 매개변수의 초기화 값을 지정해주고, 호출 시 입력값이 없으면 초기화 된 값을 입력받음
        - 디폴트 매개변수를 여러개 선언 했을때 맨 오른쪽부터 적용(중간값 or 왼쪽 값만 적용 안됨)
        - 디폴트 매개변수의 값은 함수원형에만 작성(함수원형 선언시)
        - 함수 오버로딩 중 디폴트 매개변수가 있는 함수와 입력이 없는 순수한 함수가 있을때 입력없는 함수 호출 시 문제 발생
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
        - 자료형 포인터 = new 자료형(크기)
        - new는 생성자를 호출. 즉 new는 객체를 생성시킴
            - 생성자 호출이 되므로 초기화도 가능
            - 생성자는 객체를 생성하고, 초기화 시키는 기능을 가진 특별한 메서드 - [C3](./Day1/new3.cpp)
        - 객체를 생성하기 위해서는 생성자 호출이 있어야함.
        - [C2](./Day1/new2.cpp)
            ```c++
            using namespace std;
            int size;
            int* pary;

            pary = new int[size];       // new로 동적할당을 받음
            ...(생략)
            delete[] pary;      // delete 바로 뒤에 자료형에 맞게 적어야됨
            ```

- 레퍼런스(Reference) : [C1](./Day1/ref.cpp) ~ [C6](./Day1/ref6.cpp)
    - 변수의 또다른 이름, 보이지 않는 포인터
    - 메모리를 사용하지 않음

<!-- ref1~6 -> str_c1~3 ->  -->