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

		printf("#############################\n#####   ���Ǳ� ���α׷�  ####\n#############################\n");
		printf("-----------------------------\n 1.�ݶ�(800��)\n 2.���̴�(800��)\n 3.Ŀ��(1500��/2000��)\n 4.�꽺(1000��)\n-----------------------------\n");
		printf("�ݾ����� : \n");

		scanf("%d", &Money);

		printf("�޴����� :\n");

		scanf("%d", &num);

		if (num == 1)
		{
			if (Money < a)
			{
				printf("�ܾ��� %d�� �����մϴ�\n", a - Money);
			}
			else
			{
				Money = Money - a;
				printf("�ݶ� ���Խ��Ͽ�.\n");
				printf("�ܾ� %d��\n", Money);
			}
		}
		else if (num == 2)
		{
			if (Money < a)
			{
				printf("�ܾ��� %d�� �����մϴ�\n", a - Money);
			}
			else
			{
				Money = Money - a;
				printf("���̴ٰ� ���Խ��Ͽ�.\n");
				printf("�ܾ� %d��\n", Money);
			}
		}
		else if (num == 3)
		{
			printf("Ŀ�� ũ�� 1.Tall, 2.Grande\n");

			scanf("%d", &num);

			if (num == 1)
			{
				if (Money < b)
				{
					printf("�ܾ��� %d�� �����մϴ�\n", b - Money);
				}
				else
				{
					Money = Money - b;
					printf("Tall ������ Ŀ�ǰ� ���Խ��Ͽ�\n");
					printf("�ܾ� %d��\n", Money);
				}
			}
			else if (num == 2)
			{
				if (Money < c)
				{
					printf("�ܾ��� %d�� �����մϴ�\n", c - Money);
				}
				else
				{
					Money = Money - c;
					printf("Grande ���Դϴ�\n");
					printf("�ܾ� %d��\n", Money);
				}
			}
		}
		else if (num == 4)
		{
			if (Money < d)
			{
				printf("�ܾ��� %d�� �����մϴ�\n", d - Money);
			}
			else
			{
				Money = Money - d;
				printf("�꽺�� ���Խ��Ͽ�\n");
				printf("�ܾ� %d��\n", Money);
			}
		}
		else
		{
			printf("4�������ۿ� ���ٰ�\n");
		}
		printf("---------------------------------------------------------------------------------------");
		printf("'q'Ű�� �����ø� ����˴ϴ�\n");

		q = getch();

		if (q == 'q')
		{
			break
		}
	}
	return 0;
}