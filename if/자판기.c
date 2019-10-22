#include <stdio.h>
int main()
{
	while (1)
	{
		int num;
		int Money;
		int a = 800;
		int b = 1500;
		int c = 2000;
		int d = 1000;
		char q;

		system("cls");

		printf("#############################\n#####   자판기 프로그램  ####\n#############################\n");
		printf("-----------------------------\n 1.콜라(800원)\n 2.사이다(800원)\n 3.커피(1500원/2000원)\n 4.쥬스(1000원)\n-----------------------------\n");
		printf("금액투입 : \n");

		scanf("%d", &Money);

		printf("메뉴선택 :\n");

		scanf("%d", &num);

		if (num == 1)
		{
			if (Money < a)
			{
				printf("잔액이 %d원 부족합니다\n", a - Money);
			}
			else
			{
				Money = Money - a;
				printf("콜라가 나왔습니욤.\n");
				printf("잔액 %d원\n", Money);
			}
		}
		else if (num == 2)
		{
			if (Money < a)
			{
				printf("잔액이 %d원 부족합니다\n", a - Money);
			}
			else
			{
				Money = Money - a;
				printf("사이다가 나왔습니욤.\n");
				printf("잔액 %d원\n", Money);
			}
		}
		else if (num == 3)
		{
			printf("커피 크기 1.Tall, 2.Grande\n");

			scanf("%d", &num);

			if (num == 1)
			{
				if (Money < b)
				{
					printf("잔액이 %d원 부족합니다\n", b - Money);
				}
				else
				{
					Money = Money - b;
					printf("Tall 사이즈 커피가 나왔습니욤\n");
					printf("잔액 %d원\n", Money);
				}
			}
			else if (num == 2)
			{
				if (Money < c)
				{
					printf("잔액이 %d원 부족합니다\n", c - Money);
				}
				else
				{
					Money = Money - c;
					printf("Grande 말입니다\n");
					printf("잔액 %d원\n", Money);
				}
			}
		}
		else if (num == 4)
		{
			if (Money < d)
			{
				printf("잔액이 %d원 부족합니다\n", d - Money);
			}
			else
			{
				Money = Money - d;
				printf("쥬스가 나왔습니욤\n");
				printf("잔액 %d원\n", Money);
			}
		}
		else
		{
			printf("4번까지밖에 없다고\n");
		}
		printf("---------------------------------------------------------------------------------------");
		printf("'q'키를 누르시면 종료됩니다\n");

		q = getch();

		if (q == 'q')
		{
			break
		}
	}
	return 0;
}