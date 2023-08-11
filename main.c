#include <stdio.h>
#include <math.h>

//算法实现 4个变量实现三个数从大到小排列
int main()
{
//	int a, b ,c,temp;
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//	{
//		temp=b;
//		b=a;
//		a=temp;
//	}
//	if(a<c)
//	{
//		temp=c;
//		c=a;
//		a=temp;
//	}
//	if(b<c)
//	{
//		temp=c;
//		c=b;
//		b=temp;
//	}
//	printf("%d %d %d",a,b,c);

//0-100中打印出3的倍数的数
//	int i;
//	for(i=1;i<=100;i++)
//	{
//		if(i%3==0)
//		printf("%d ",i);
//	}
	
//给定两个数求这两个数的最大公约数 使用辗转相除法
//	int m,n,r;
//	scanf("%d %d",&m,&n);
//	while(m%n)
//	{
//		r=m%n;
//		m=n;
//		n=r;
//	}
//	printf("%d",n);
	
//打印1000-2000之间的闰年
	
//	int year,count=0;
//	for(year=1000;year<=2000;year++)
//	{
//		if(year % 4==0&&year % 100 !=0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//		else if(year % 400==0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	for(year=1000;year<=2000;year++)
//	{
//		if(((year % 4==0)&&(year % 100 !=0))||(year % 400==0))
//		{
//			printf("%d ",year);
//			count++;
//		}
//		
//	}
//	printf("\n");
//	printf("count = %d",count);

//100-200之间找素数 算法时间提高
//	int i,j,count=0;
//	for(i=101;i<=200;i+=2)
//	{
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			break;
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ",i);	
//			count++;
//		}	
//	}
//	printf("\ncount =%d",count);
	
//编写程序数一下1-100所有整数中出现多少个数字9 99为特殊
//	int i,count;
//	for(i=1;i<=100;i++)
//	{
////		if((i%10==9)||(i/10==9))
////		count++;
////		if((i%10==9)&&(i/10==9))
////		count++;
//		if(i%10==9)
//		count++;
//		if(i/10==9)
//		count++;
//	}
//	printf("count=%d",count);
	
//分数求和 记得带浮点数
//	int i,flag=1;
//	double sum=0;
//	for(i=1;i<=100;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf",sum);

//求10个整数的最大值  数组个数需要自己算出来 即sz=sizeof(arr)/sizeof(arr[0]);
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int size=sizeof(arr)/sizeof(arr[0]);
//	int i;
//	int max=arr[0];
//	for(i=1;i<size;i++)
//	{
//		if(max<arr[i])
//		max=arr[i];
//	}
//	printf("%d",max);

//在屏幕上打印99乘法表
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d*%d=%2d ",i,j,i*j);
		printf("\n");
	}
	


	return 0;
}
