#include <stdio.h>

int Add(int A, int B)
{
	return A + B;
}

int Sub(int A, int B)
{
	return A - B;
}

int Mul(int A, int B)
{
	return A * B;
}

int Div(int A, int B)
{
	return A / B;
}

void HowTo1(void)
{
	printf("사칙연산 프로그램입니다.\n");
	printf("두 정수를 입력해주세요: ");
}

void HowTo2(void)
{
	printf("어떤 계산을 할까요?\n");
	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈");
}

int ReadNum(void)
{
	int num;
	scanf_s("%d", &num);
	return num;
}

int main(void)
{
	int opt, result, num1, num2, A, B;
	
	HowTo1();

	num1 = ReadNum();
	num2 = ReadNum();

	if (num1 > num2)
	{
		A = num1;
		B = num2;
	}
	else
	{
		A = num2;
		B = num1;
	}

	while (1)
	{

		HowTo2();
		opt = ReadNum();

		if (opt < 1 || opt>4)
		{
			printf("잘못된 숫자\n");
			continue;
		}
		break;
	}

	switch (opt)
	{
	case 1:
		printf("%d+%d=%d\n", A, B, Add(A, B));
		break;
	case 2:
		printf("%d-%d=%d\n", A, B, Sub(A, B));
		break;
	case 3:
		printf("%d*%d=%d\n", A, B, Mul(A, B));
		break;
	case 4:
		printf("%d/%d=%d\n", A, B, Div(A, B));
		break;
	}
	
}
