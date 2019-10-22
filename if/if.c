#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int balance = 10000;    // 교통카드 잔액
	int age;

	scanf("%d", &age);
	
	if(age>7)
	{
		if (age < 12)
		{
		printf("%d\n",balance - 450);
		}
		else if (age <= 18)
		{
		printf("%d\n", balance - 720);
		}
		else
		{
		printf("%d\n", balance - 1200);
		}
	}
	return 0;
}