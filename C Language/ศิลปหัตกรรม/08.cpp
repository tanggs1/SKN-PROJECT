#include<stdio.h>
#include<string.h>
int main()
{
	char text[2001];
	int num;
	scanf("%d",num);
	gets(text);
	for(int i=0;i<strlen(text);i++)
	{
		printf("%d",i);
	}
}
