#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int play_or_not = 1;
	int ran = 0;
	int type_in = 0;
	int count = 1;
	
	printf("猜数字游戏");
	while (play_or_not = 1)
	{
		srand((unsigned int) time(NULL));
		ran = rand();
		while (ran != type_in)
		{
			printf("\n请输入您的猜测： ");
			scanf("%d", &type_in);
			if (type_in < ran)
			{
				printf("猜小了，再来！");
			}
			else if (type_in > ran)
			{
				printf("猜大了，再来！");
			}
			else
			{
				printf("恭喜您猜对了！！！");
				break;
			}
			count++;
		};
		printf("\n总共用了%d次",count);
		printf("\n您还要再玩吗（0/1）： ");
		scanf("%d", &play_or_not);

	};
	return 0;
}