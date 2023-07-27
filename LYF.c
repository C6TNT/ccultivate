#include <stdio.h>

int main()
{
	char s[50];
	char zm[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
				 'o','p','q','r','s','t','u','v','w','x','y','z'};
	int a[26]={0};
	int i,k;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			k=s[i]-'a';
			a[k]++;
		}
		else
		if(s[i]>='A'&&s[i]<='Z')
		{
			k=s[i]-'A';
			a[k]++;
		}
	}
	for(i=0;i<26;i++)
	printf("%c:%d\n",zm[i],a[i]);
	return 0;
}
