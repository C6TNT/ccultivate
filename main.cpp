#include <stdio.h>

int size=1;
int t;
int s;


int main(void)
{	
	int nums[size];
	printf("是否添加数字，是：1否：a\n");
	while((scanf("%d",&t))==1)
	{	
		printf("请输入数字：\n");	
		scanf("%d",&nums[size-1]);
		size++;	
		printf("是否继续添加数字，是：1否：a\n");
	}
	for(s=0;s<size-1;s++)       
	{
		printf("[%d]  ",nums[s]);
	}
	printf("\n");
	printf("结束！");
}
              