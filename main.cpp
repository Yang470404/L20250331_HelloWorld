#include <iostream>

using namespace std;

//자료형 메모리 공간 일정 크기 사용ㅇ한다.
//숫자를 저장하고 사용할 때 용도가 바뀜
// int cpu, 컴파일러마다 크기가 다름
//0 ~ 255, 8bit -> 7bit -126 ~ 0 ~126
//[] -> 숫자 -> 문자
// C++ -> UE + Define + UHT
//3d 게임엔 언리얼이 편해서 이제 unity 안써 (unity는 사야하고, 언리얼은 이미 있음 ㅋㅋㅋ)
int main()
{
	//char
	//int
	//float
	int Number1 = 100;
	int Number2 = 101;

	float A = 1.5f;

	//+, - , *, /, %
	//이항연산자
	int Number3 = Number1 + Number2;
	cout << Number3 << endl;

	//형변환, casting
	float A = (float)5.00000f;
	int B = (int)A;

	return 0;
}