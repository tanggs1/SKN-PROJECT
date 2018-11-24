#include<stdio.h>
#include<string.h>
int main()
{
	char text[251];
	gets(text);
	for(int i=0;i<strlen(text);i++)
	{
		if(text[i]==text[i+1])
			continue;
		else
			printf("%c",text[i]);
	}
}
