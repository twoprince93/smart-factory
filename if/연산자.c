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
		printf("num은 3의배수가 아입니다\n");
	}
	else
	{
		printf("num은 3의배수 입니다\n");
	}
	
	return 0;
}