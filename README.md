# CPP-Programming-Learning-at-SWEA
SW Expert Academy에서 C++ 학습



## 프로그래밍

| 순차적 프로그래밍                           | 구조적 프로그래밍                        | 객제지향적 프로그래밍                                        |
| ------------------------------------------- | ---------------------------------------- | ------------------------------------------------------------ |
| 어셈블리(Assembly), COBOL, FORTRAN ...      | C, PASCAL ...                            | C++, Java ...                                                |
| 문장(statement)을 기본 단위로 명령문을 나열 | 문장들을 함수(function) 단위로 묶어 수행 | 데이터와 데이터를 처리하는 함수를 하나로 묶어놓은 객체(Object) 단위 |



## C++ 란?

**C언어를 기초로 확장한 C++ 언어의 기본적인 특징**

- 간결, 함축적 용어로 기술
- 함수 기반의 구조화된 프로그램 용이
- 가볍고 빠른 프로그램을 작성
- 포인터를 이용하여 메모리에 대한 자유롭게 접근

**객체지향 언어로서의 C++ 특징**

- 데이터 추상화(Abstraction) : 특정 대상의 주요 특성만을 모델링
- 캡슐화(Encapsulation) : 객체 관련 데이터 및 함수들을 하나로 묶은 것, 정보의 은닉(Information Hiding)
- 상속(Inheritance) : 기존에 정의되어 있는 클래스에 새로운 데이터나 함수를 추가하거나 기존의 함수를 수정하여 재정의하는 기능
- 다형성(Polymorphism) : 동일한 이름의 함수의 상황에 따라 다르게 동작하는 것

**일반화 프로그래밍언어로서의 C++ 특징**

- 템플릿
  - 함수 템플릿 : 함수를 정의하는 대신 함수를 만들어 내는 방법 정의
  - 클래스 템플릿  : 클래스를 정의하는 대신 클래스를 생성하는 방법 정의

**GUI 프로그램 종류**

- 게임 프로그램 : 동시다발적 이벤트 처리
- 파일질라(FileZila) FTP 프로그램 : 대용량 파일 송수신, 대부분의 플랫폼 지원, 운영체제를 가리지 않음
- 임베디드GUI : 크로스 플랫폼의 응용 프로그램 및 UI 프레임워크

**시스템 제어 프로그램**

- 타이젠내티브 응용프로그램 : 모바일(웹, 네이티브, 하이브리드) 개발 플랫폼
- WinRT APIs : Window8 Metro 스타일 프로그램 개발 런타임

**영상처리 프로그램**

- OpenCV 라이프러리 구현 : C++ 라이브러리를 사용하여 구현

**C++ 프로그램 개발 과정**

- 소스코드 작성 및 수정
- 컴파일 & 링킹 : 링커에 의해 오브젝트 파일이 실행파일로 생성
- 테스트 
- 디버깅



#### main 함수란

- **프로그램이 실행될 때 운영체제에 의해 호출**되는 함수 = **진입(Entry Point)함수**

- 리턴 자료형 
  - int(정수형)
  - 프로그램이 종료될 때 운영체제에 반환하는 값
  - 종료 코드(exit code)
  - 실행형태
    - 프로그램 실행 불가 시 : 1 반환(비정상적 종료상태를 운영체제에 알림)
    - 정상 종료 시 : 0 반환



#### 함수의 형식

- 리턴자료형 : 반환하는 값의 자료형
- 함수이름 : 대문자와 소문자로 구분되는 함수명
- 자료형 매개변수 : 전달되는 값들을 받아올 변수 선언, 생략가능
- 명령문 : 함수에서 수행되는 명령문



#### cout 객체란?

- **터미널(표준 출력 장치)로 출력**될 때 사용되는 객체

- << 연산자 : 출력할 내용 전달
  ``count<<"안녕하세요";``

- endl : 줄 바꿈 지정자(= \n), 출력 버퍼 비움(= flush)

  ``cout<<"안녕하세요, "<<"만나서 반갑습니다."<<endl;``



#### cout 및 endl 지정자 사용

- 형식
  ``include<iostream>``  : **객체가 선언되어 있는 헤더 파일이 포함되어야 함**(확장자 .h 생략 가능)

- 표준 라이브러리 클래스, 함수 변수 등 사용 시

  ```
  std::cout
  std::endl
  ```

  ``using namespace std;`` std 네임스페이스 안에 선언된 모든 클래스, 함수, 변수, 등은 **접두어 없이 사용** 가능



**주석처리 이해**

컴파일러에 의한 해석 없이 무시되어 프로그램 설명 및 프로그램의 일부를 컴파일 하지 않도록 사용

```
// 한 줄 주석
/*
	여러 줄 주석
*/
```



예제 코드 cout.cpp

```
#include <iostream>

// 표준라이브러리의 stdnamespace 지정
usingnamespacestd;

int main() 
{
	/*	
		3번줄의 using 문이 없는 경우에는
		std::cout<<"안녕하세요, "<<"반갑습니다."<<std::endl;
	*/
	cout<<"안녕하세요, "<<"반갑습니다."<<endl;
	
	return 0;
}
```



## C++의 데이터 표현 방법

### 지원되는 자료형

자료형의 크기는 프로그램을 실행하는 운영체제마다 다를 수 있으므로 **sizeof 연산자**로 크기를 확인하고 사용
자료형의 크기를 염두하여 오버플로우(overflow)가 일어나지 않도록 함

#### 기본 자료형

- 논리형
- 문자형
- 정수형 : signed는 최상위 비트가 부호를 구분, unsigned는 자료형 전체를 데이터 비트로 사용
- 실수형

예제 코드 PrimitiveDataType.cpp

```
#include <iostream>

using namespace std;

int main(void)
{
	cout << "size of bool = " << sizeof(bool) << endl;
	cout << "size of char = " << sizeof(char) << endl;
	cout << "size of wchar_t = " << sizeof(wchar_t) << endl;
	cout << "size of short = " << sizeof(short) << endl;
	cout << "size of int = " << sizeof(int) << endl;
	cout << "size of long = " << sizeof(long) << endl;
	cout << "size of float = " << sizeof(float) << endl;
	cout << "size of double = " << sizeof(double) << endl;
	cout << "size of long double = " << sizeof(long double) << endl;
	cout << "size of short = " << sizeof(short) << endl;
	cout << "size of short = " << sizeof(short) << endl;

	return 0;
}
```



#### 사용자 정의 자료형

개발자가 정의하여 사용할 수 있는 사용자 정의 자료형

Typedef : 사용자가 새로운 형의 이름을 선언할 수 있도록 해 줌(기존의 자료형에 새로운 이름 부여)

예제 코드 Typedef.cpp

```
#include <iostream>
using namespace std;

int main()
{
	typedef unsigned short uint16;
	// 다른 컴파일러(or 플랫폼)에서 사용할 경우 typedef를 변경하여 자료형의 크기를 맞출 수 있다.
	// int형의 크기가 2Byte(16bit)일 경우 unsign int로 typedef를 변경
	uint16 port;

	// 2^16 - 1 = 65535
	port = 65535;

	cout << port << endl;

	return 0;
}
```

- 열거형  : 하나 이상의 정수형 상수를 원소로 갖는 열거형의 enum
  enum 목록에 나열된 것은 문자열이 아니라 **정수형 상수**, 자료형으로 선언한 변수는 **정수형 변수와 동일하게 처리**	
- 문자열
- 포인터
- 배열
- 구조체
- 공용체
- 클래스



### 변수와 상수, 그리고 표준 입출력
#### 변수

그 값이 변경될 수 있는 수

변수는 데이터를 저장할 수 있는 메모리 공간의 이름이며, 식별자와 같을 수 없다.

- 전역 변수 : 함수 외부에서 선언되는 변수
- 지역 변수 :  함수 내에 선언되는 변수

**운영체제에서 메모리 공간할당**

- 스택 세그먼트(Stack Segment) : 지역 변수 및 리턴 주소, 함수가 수행되는 동안만 할당
- 힙 세그먼트(Heep Segment) : 동적으로 할당되는 메모리
- 데이터 세그먼트(Data Segment) : 전역 변수 및 정적(static) 변수, 프로그램 종료 시까지 해제되지 않음
- 코드 세그먼트(Code Segment) : 프로그램의 실행코드

예제 코드 variable.cpp

```
#include <iostream>
using namespace std;

int scount = 100;

int Func(void);

int main()
{
	Func();
	cout << "main : count = " << scount << endl;
	return 0;
}

int Func()
{
	int number = 10;

	cout << "Func : number = " << number << endl;
	cout << "Func : count = " << scount << endl;

	return 0;
};
```



#### 상수

언제 어디서나 값이 변하지 않는 수

- 리터럴(literal) 상수

  - 논리 상수, 정수형 상수, 실수형 상수, 문자 및 문자열 상수
- 심볼릭(symbolic) 상수 
  - 변수선언 시 const 키워드와 함께 초기화되어야 함
  - 초기화 된 값은 변경 불가능



#### 표준입출력

C++에서 데이터를 입출력 하는 기능은 iostream 라이브러리에서 제공

- cin : 표준 입력 객체
- cout : 표준 출력 객체

예제 코드 cin.cpp

```
#include <iostream>
using namespace std;

int main()
{
	int number;
	char letter;
	float rnumber;

	cout << "정수 문자 실수 순서대로 입력하세요. --> ";
	cin >> number >> letter >> rnumber;

	cout << "당신이 입력한 정수는 " << number << "입니다." << endl;
	cout << "당신이 입력한 문자는 " << letter << "입니다." << endl;
	cout << "당신이 입력한 실수는 " << rnumber << "입니다." << endl;

	return 0;
}
```



### 연산자의 종류

#### C와 동일한 연산자

연산자는 변수나 상수들을 대상으로 연산하는 기호

연산자의 우선순위를 잘 알아야 올바른 표현식 작성 가능

C에서 지원하는 모든 연산자 지원

- 산술 연산자(+, -, *, /, %)
- 증감 연산자(++, --)
- 관계 연산자(>, <, >=, <=, ==, !=)
- 논리 연산자(&&, ||, !)
- 비트 연산자 : 메모리의 효율적 사용을 위해 비트 단위로 데이터 처리
  - & : 비트끼리 AND
  - | : 비트끼리 OR
  - ~ : 1의 보수(1은 0, 0은 1로 변환) 
  - ^ : 비트끼리 XOR(eXclusive OR : 비트의 값이 동일하면 0, 서로 다르면 1)
  - '>>' n : 오른쪽으로 n비트씩 이동
  - '<<' n : 왼쪽으로 n비트씩 이동
- 형변환(cast) 연산자
- 대입 연산자(=, 축약형)
- 조건 연산자(? : , ',') 

C++에 추가된 연산자

- 범위지정(::) 연산자 : 변수명 앞에 붙이면 전역변수를 의미
  예제 코드 ScopeResolutionOperator.cpp

  ```
  #include <iostream>
  
  using namespace std;
  
  int count = 100;
  
  int Func();
  
  int main()
  {
  	Func();
  	::count = 50;
  	cout << "main : count = " << ::count << endl;
  	
  	return 0;
  }
  
  int Func()
  {
  	int count = 10;
  
  	cout << "Func : count = " << count << endl;
  	cout << "Func : ::count = " << ::count << endl;
  
  	return 0;
  }
  ```

- const_cast, dynamic_cast, reinterpret_cast, new / delete, new[] / delete[], .*, -> *, throw



### namespace

이름이 사용될 수 있는 범위 지정

#### 네임스페이스 사용

**내가 지정한 네임스페이스 공간**과 관련 없는 공간을 구분

#### using 선언

예제 코드 using.cpp

```
#include <iostream>

using namespace std;

namespace NS1 {
	int number;
	void Test() {
		cout << "NS1::Test called number = " << number << endl;
	}
}

namespace NS2 {
	int number;
	int position;
	void Test() {
		cout << "NS2::Test called number = " << number << endl;
	}
}

int main()
{
	NS1::number = 10;
	NS1::Test();

	using namespace NS2;
	number = 100;
	Test();

	return 0;
}
```



## 프로그램의 흐름을 제어하는 선택문과 반복문



