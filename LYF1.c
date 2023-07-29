#include <stdio.h>

int main()
{
	char s[1000],c1,c2;
	int i;
	gets(s);
	scanf("%c%c",&c1,&c2);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c1)
		s[i]=c2;
	}
	puts(s);
	return 0;
}
