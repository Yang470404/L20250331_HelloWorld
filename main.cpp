#include <iostream>

using namespace std;

//�ڷ��� �޸� ���� ���� ũ�� ��뤷�Ѵ�.
//���ڸ� �����ϰ� ����� �� �뵵�� �ٲ�
// int cpu, �����Ϸ����� ũ�Ⱑ �ٸ�
//0 ~ 255, 8bit -> 7bit -126 ~ 0 ~126
//[] -> ���� -> ����
// C++ -> UE + Define + UHT
//3d ���ӿ� �𸮾��� ���ؼ� ���� unity �Ƚ� (unity�� ����ϰ�, �𸮾��� �̹� ���� ������)
int main()
{
	//char
	//int
	//float
	int Number1 = 100;
	int Number2 = 101;

	float A = 1.5f;

	//+, - , *, /, %
	//���׿�����
	int Number3 = Number1 + Number2;
	cout << Number3 << endl;

	//����ȯ, casting
	float A = (float)5.00000f;
	int B = (int)A;

	return 0;
}