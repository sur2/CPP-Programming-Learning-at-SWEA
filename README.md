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

### 선택문

#### if 문: 조건이 참이나 거짓

참 : 수행 결과가 0이 아닌 경우, 거짓 : 수행 결과가 0인 경우

- if 
- if-else

예제 코드 if-else.cpp

```
#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "score? ";
	cin >> score;
	if (score < 0 || score > 100)
	{
		cout << "Invalid score " << score << endl;
	}
	else {
		cout << "Valid score " << score << endl;
	}
	return 0;
}
```

#### switch 문 : 일정한 값으로 구분 되는 경우

if 문과 같은 조건일 경우 switch 문이 실행속도가 더 빠른다.

예제 코드 switch.cpp

```
#include <iostream>

using namespace std;

int main()
{
	int score = 0;

	cout << "score ? ";
	cin >> score;

	if (score < 0 || score > 100)
	{
		cout << "Invalid score" << score << endl;
	}
	else
	{
		switch (score / 10)
		{
		case 10 :

			break;
		case 9 :
			cout << "A 학점" << endl;
			break;
		case 8 :
			cout << "B 학점" << endl;
			break;
		case 7 : 
			cout << "C 학점" << endl;
			break;
		case 6 : 
			cout << "D 학점" << endl;
			break;
		default:
			cout << "F 학점" << endl;
			break;
		}
	}

	return 0;
}
```



### 반복문

동일한 명령문들을 반복적으로 수행

#### while 문

일정한 횟수의 반복보다는 일정한 조건이 만족되는 동안 반복

예제 코드 while.cpp

```
#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	int sum = 0;
	cout << "number? ";
	cin >> number;
	while (number != -1)
	{
		sum = sum + number;
		cout << "number? ";
		cin >> number;
	}
	cout << sum << endl;
	return 0;
}
```

#### do while 문

반복의 조건이 명령문보다 뒤에 있다.

예제 코드 do-while.cpp

```
#include <iostream>

using namespace std;

int main()
{
	int number = 0, sum = 0;

	do
	{
		sum += number;
		cout << "number? ";
		cin >> number;
	} while (number != -1);
	cout << sum << endl;

	return 0;
}
```

#### for 문

일정한 횟수를 반복하는 목적으로 사용

초기식 - **조건식 - 명령문 - 증감식 - 조건식 - 명령문 - 증감식** - ... - 조건식 - 반복종료	

예제 코드 for.cpp

```
#include <iostream>

using namespace std;

int main()
{
	int num = 0, sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "num? ";
		cin >> num;
		sum += num;
	}

	cout << sum << endl;

	return 0;
}
```



### 기타 제어문

#### break 문

자신이 속해 있는 반복문을 벗어나고자 할 때  사용하는 명령

예제 코드 break.cpp

```
#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	char ch;
	while (true)
	{
		cout << "ch? ";
		cin >> ch;
		count++;

		if (ch == 'e')
		{
			break;
		}
	}

	cout << "e 포함 : " << count << endl;

	return 0;
}
```

#### continue 문

이후의 명령문을 건너뛰고 반복의 다음 주기를 시작하는 명령문

예제 코드 continue.cpp

```
#include <iostream>

using namespace std;

int main()
{
	// 0 ~ 9까지 중 5를 제외하고 출력
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		cout << i << endl;
	}

	return 0;
}
```

#### goto 문

프로그램이 실행되는 도중 특정 위치로 이동해야 하는 경우 사용하며 goto 문의 대상이 되는 위치에는 label을 붙임

예제 코드 goto.cpp

```
#include <iostream>

using namespace std;

int main()
{
	int num1;
	cout << "1 또는 2를 입력하세요. ";
	cin >> num1;

	if (num1 == 1)         // num1이 1이면
		goto ONE;          // 레이블 ONE으로 즉시 이동
	else if (num1 == 2)    // num1이 2이면
		goto TWO;          // 레이블 TWO로 즉시 이동
	else                   // 1도 아니고 2도 아니면
		goto EXIT;         // 레이블 EXIT로 즉시 이동

ONE:    // 레이블 ONE
	printf("1입니다.\n");
	goto EXIT; // 레이블 EXIT로 즉시 이동

TWO:    // 레이블 TWO
	printf("2입니다.\n");
	goto EXIT; // 레이블 EXIT로 즉시 이동

EXIT:    // 레이블 EXIT
	return 0;
}
```



## 배열과 포인터

### 배열과 포인터, 그리고 레퍼런스의 개념

#### 배열

자료형이 동일한 데이터들이 메모리에 연속적으로 모여있는 것

#### 포인터

프로그램이 실행되는 공간인 메모리를 가리킴

- 포인터 변수의 선언 시 *** 지정자 이용**
- 선언하는 변수가 포인터 변수임을 **컴파일러에게 알림**
- 가리키는 대상이 없을 수도 있고, 달라질 수도 있음

#### 레퍼런스

기존에 존재하는 변수의 메모리를 함께 공유

- 레퍼런스 변수는 **& 지정자**를 붙여 선언
- **선언과 동시에 어떤 변수와 초기화**할 것인지를 명시함
  - 변수 선언은 메모리 할당 / 레퍼런스 변수 선언은 어떤 변수를 참조할 지에 대한 선언
- 나중에 다른 변수를 참조하도록 변경 불가



### 1차원 배열과 다차원 배열

#### 1차원 배열

- 배열명은 **배열의 첫 번째 주소**이며 **상수의 성격**을 가진다.

- 배열의 원소(elementary)들은 **첨자(subscript)를 이용**하여 표현

- **C 스타일의 문자열 처리 함수**
  - char * strcpy(char * dest, const char * src) : src의 문자열을 dest의 배열로 복사하는 문자열 복사함수
  - char * strcat(char * dest, const char * src) : dest가 가리키는 문자열 뒤에 src가 가리키는 문자열을 덧붙이는 함수
  - int strcmp(const char * s1, const char * s2) : s1과 s2가 가리키는 문자열을 비교하여 두 문자열이 서로 같으면 0, 서로 다르면 0이 아닌 값을 반환함
  - size_t strlen(const char * s) : 문자열의 길이를 바이트 단위로 계산해서 반환하며, 문자열의 길이에 NULL은 개수에 포함하지 않는다.

- C 스타일 문자열 처리함수 사용 시 소스코드에 헤더 파일 포함

- **string 클래스**를 사용하는 것이 문자열의 처리가 쉬워 더 자주 사용됨

예제 코드 array.cpp

```
#include <iostream>

using namespace std;

#define LEN 5

int main()
{

	int number[LEN] = {};
	int i = 0, sum = 0;

	for (i = 0; i < LEN; i++)
	{
		cout << "정수를 입력하세요 --> ";
		cin >> number[i];

		sum += number[i];
	}

	cout << "sum = " << sum << endl;

	return 0;
}
```

#### 2차원 배열

예제 코드 TwoDimensionalArray.cpp

```
#include <iostream>

using namespace std;

#define ROWMAX 5
#define COLMAX 3

int main()
{
	int score[ROWMAX][COLMAX] = {
		{78, 65, 80},
		{93, 88, 95},
		{85, 97, 94},
		{66, 79, 82},
		{84, 87, 88}
	};

	int i = 0, j = 0, sum = 0;

	float avg[ROWMAX] = {};

	for (i = 0; i < ROWMAX; i++)
	{
		sum = 0;
		for (j = 0; j < COLMAX; j++)
		{
			sum += score[i][j];
		}
		avg[i] = (float) sum / COLMAX;
	}

	for (i = 0; i < ROWMAX; i++)
	{
		cout << avg[i] << endl;
	}

	return 0;
}
```

#### 다차원 배열

n - 1 차원에서 n 차원의 배열이 될 때 마다 행 첨자를 붙여나간다.



### 포인터의 사용

#### 포인터 변수

저장된 메모리의 주소가 가리키는 메모리의 내용(저장된 값)을 참조할 수 있다.

포인터 변수도 변수와 마찬가지로 선언 시 **메모리가 할당된다.** (운영체제, 플랫폼 등에 따라 상이함)

| 주소 연산자 | 의미                                                         |
| ----------- | ------------------------------------------------------------ |
| &           | 뒤에 따라오는 변수의 주소                                    |
| *           | 포인터 변수 앞에 쓰이는 연산자로 포인터 변수가 가리키는 곳의 내용(값) |

포인터 변수는 **+, -, ++, --** 연산자만 사용가능

**포인터 변수의 자료형 크기만큼 연산**이 이루어진다. (char 포인터는 1, int 포인터는 4 ,,, 메모리 주소값이 커짐)

#### 포인터 변수와 배열의 관계

배열의 원소들은 주소값은 자료형의 크기만큼 차이가 난다.

``p + i = &number[i] = number + i = &p[i]``, ``*(p + i) = number[i] = *(number + i) = p[i]``

예제 코드 pointer.cpp

```
#include <iostream>

using namespace std;

#define MAX 5

int main()
{
	int num[MAX], * p;
	double dnum[MAX], * dp;

	// 배열명은 배열의 첫 번째 주소를 가리킴
	p = num;
	dp = dnum;

	cout << "정수 5개를 입력하세요. " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cin >> p[i];
	}

	cout << "실수 5개를 입력하세요. " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cin >> dp[i];
	}

	cout << "입력받은 수는 다음과 같습니다. " << endl;

	for (int i = 0; i < MAX; i++)
	{
		cout << "*(p + " << i << ") = " << *(p + i);
		cout << " , *(dp + " << i << ") = " << *(dp + i) << endl;
	}

	return 0;
}
```

#### 동적 메모리

프로그램 실행 시 할당 받는 메모리(미리 선언되어 할당 받지 않음),  힙 세그먼트에 할당받음

예제 코드 DynamicMemoryAllocation.cpp

```
#include <iostream>

using namespace std;

int main()
{
	int size = 0;

	cout << "배열의 크기는 ? ";
	cin >> size;
	
	// 메모리 동적 할당
	int* p = new int[size];
	if (p == NULL)
	{
		cout << "메모리 할당 실패 : int[" << size << "]" << endl;
		return 1;
	}
	double* dp = new double[size];
	if (dp == NULL)
	{
		cout << "메모리 할당 실패 : double[" << size << "]" << endl;
		return 1;
	}
	cout << "정수 " << size << "개를 입력하세요. " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}

	cout << "실수 " << size << "개를 입력하세요. " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> dp[i];
	}

	cout << "입력받은 수는 다음과 같습니다. " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "*(p + " << i << ") = " << *(p + i);
		cout << " , *(dp + " << i << ") = " << *(dp + i) << endl;
	}

	// 동적 메모리 해제
	delete[] p;
	p = NULL;
	delete[] dp;
	dp = NULL;

	return 0;
}
```

#### 포인터 배열

각 원소가 모두 포인터 자료형인 배열

예제 코드 PointerArray.cpp

```
#include <iostream>

using namespace std;

int main()
{
	// const char* array[] = {char* ch0, char* ch1, char* ch2 ,,,}
	const char* cityNama[] = { "Seoul", "Busan", "Daeku", "Incheon", "Daejeon", "Ulsan", "kwangju", NULL };
	int len = sizeof(cityNama) / sizeof(char*);
	for (int i = 0; i < len - 1; i++)
	{
		cout << cityNama[i] << endl;
	}
	return 0;
}
```

#### 함수 포인터

포인터 변수를 이용하여 함수 호출

함수의 시작 주소를 저장하기 위해 함수 포인터 변수 선언

서로 다른 환경에서 호출, 시스템 소프트웨어 작성, 동적 라이브러리 함수에 사용됨

``리턴타입(*함수포인터변수명)([자료형변수명, ... ;]);``

``int (*calc)(int num1, int num2);``, ``void (*calc) (int, int);``

``calc : 함수 포인터 변수로 함수의 시작 주소를 대입하여 사용 가능  ``

예제 코드 FunctionPointer.cpp

```
#include <iostream>

using namespace std;

int add(int x, int y);
int subtract(int x, int y);

int main()
{
	// calc 함수 포인터 변수 선언
	int (*calc)(int, int);

	// 함수 포인터 변수에 함수의 시작 주소를 대입
	calc = add;
	cout << calc(64, 178) << endl;

	// 함수 포인터 변수에 함수의 시작 주소를 대입
	calc = subtract;
	cout << calc(153, 98) << endl;

	return 0;
}


int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}
```

#### void 포인터

주소를 저장하는 자료형, 어떤 자료형의 주소이든 저장가능 (메모리의 내용 참조 시 형 변환)

#### 포인터 상수

const 키워드와 함께 선언하여 사용, 주로 함수의 인자 전달 시 인자의 값을 변경하지 못하게 하기 위함

**const 위치에 따라 의미가 달라진다.**

- const가 자료형 앞에 오는 경우

  ```
  int number1 = 100;
  int number2 = 200;
  const int* p = &number1;
  *p = number2; // 옳바르지 않음, 메모리 내용 변경 불가
  p = &number2; // 옳바른 방법, 포인터 변수 자체에 대한 변화
  ```

- const가 포인터 앞에 오는 경우

  ```
  int number1 = 100;
  int number2 = 200;
  int* const p = &number1;
  *p = number2; // 옳바른 방법, 메모리 내용 변경 가능 
  p = &number2; // 옳바르지 않은 방법, 포인터 변수 변경 불가
  ```

- const가 자료형 앞과 포인터 앞 양쪽에 오는 경우

  ```
  int number = 30;
  int test = 0;
  const int * const p = &number;
  *p = test; // 옳바르지 않은 방법, 포인터 변수 변경 불가
  p = &test; // 옳바르지 않은 방법, 메모리 내용 변경 불가
  ```



### 레퍼런스의 사용 

#### 레퍼런스의 선언

레퍼런스는 기존에 존재하는 변수의 메모리를 함께 사용 (다른 변수에 대한 별명)

레퍼런스는 참조하는 변수를 다루는 방법과 동일하게 사용

레퍼런스는 선언 시 반드시 초기화해야 함 (초기화된 레퍼런스는 다른 변수를 참조할 수 없음)

예제 코드 reference.cpp

```
#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	// 레퍼런스 변수가 int형 number 변수를 참조하는 것으로 초기화
	int& rnum = number;
	// rnum은 number와 같은 메모리 참조하여 number = 10과 같음
	rnum = 10;

	cout << "number = " << number << endl;
	cout << "reference = " << rnum << endl;

	return 0;
}
```









