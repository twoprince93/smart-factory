#include <stdio.h>

int main()
/*{
	int a;
	int b;
	int c;

	a = 4 + 2;
	b = 4 / 2;
	c = 5 % 2;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	return 0;
	}
	*/
{
	int a;
	int num;

	scanf("%d", &num);

	a = num % 3;

	if (a)
	{
		printf("num�� 3�ǹ���� ���Դϴ�\n");
	}
	else
	{
		printf("num�� 3�ǹ�� �Դϴ�\n");
	}
	
	return 0;
}