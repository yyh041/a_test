#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int play_or_not = 1;
	int ran = 0;
	int type_in = 0;
	int count = 1;
	
	printf("��������Ϸ");
	while (play_or_not = 1)
	{
		srand((unsigned int) time(NULL));
		ran = rand();
		while (ran != type_in)
		{
			printf("\n���������Ĳ²⣺ ");
			scanf("%d", &type_in);
			if (type_in < ran)
			{
				printf("��С�ˣ�������");
			}
			else if (type_in > ran)
			{
				printf("�´��ˣ�������");
			}
			else
			{
				printf("��ϲ���¶��ˣ�����");
				break;
			}
			count++;
		};
		printf("\n�ܹ�����%d��",count);
		printf("\n����Ҫ������0/1���� ");
		scanf("%d", &play_or_not);

	};
	return 0;
}