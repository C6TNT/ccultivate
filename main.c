#include <stdio.h>
#include "windows.h"
#include "string.h"

//int main()
//{
//	//shutdown -t -s 60 60s后系统将关机
//	//system()-执行系统命令
//	char input[20];
//	system("shutdown -s -t 60");
//	again :
//	printf("请注意 你的电脑将在1分钟之后关机 输入：我是猪，即可取消关机\n请输入>:");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}	
//	return 0;
//}

int main()
{
	char input[20];
	system("shutdown -s -t 60");
	while(1)
	{
		printf("请注意 你的电脑将在1分钟之后关机 输入：我是猪，即可取消关机\n请输入>:");
		scanf("%s",input);
		if(strcmp(input,"我是猪")==0)
		{
			system("shutdown -a");
			break;
		}		
	}
	
	return 0;
}

