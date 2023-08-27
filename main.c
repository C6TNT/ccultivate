#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu()
{
	printf("*********************\n");
	printf("****1.play 0.exit****\n");
	printf("*********************\n");
	return 0;
}

int game()
{
	int Rand,Guess;
	Rand=rand()%100+1;
	while(1)
	{
		printf("请输入数字>:");
		scanf("%d",&Guess);
		if(Guess>Rand)
		{
			printf("猜大了\n");	
		}
		else if(Guess<Rand)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你 猜对了！\n\n");
			break;
		}
	}
	return 0;
}

int main()
{
	int input;
	printf("游戏：猜数字（1-100）\n");
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请输入>:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			game();
			break;
			
			case 0:
			printf("游戏结束\n");
			break;
			
			default:
			printf("输入错误\n\n");
			break;
		}
		
	}while(input);
	
	
	return 0;
}
