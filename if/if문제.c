#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	scanf("%d,%d,%d,%d", &num1, &num2, &num3, &num4);

	num5 = (num1 + num2 + num3 + num4) / 4;

	if (0 > num1 || num2 || num3 || num4)
	{
		printf("�߸�������\n");
	}
	
	else if (num1 || num2 || num3 || num4 > 100)
	{
		printf("�߸�������\n");
	}
	
	else if (num5 >= 85)
	{
		printf("�հ�\n");
	}

	else if (num5 < 85)
	{
		printf("���հ�\n");
	}
	return 0;
}