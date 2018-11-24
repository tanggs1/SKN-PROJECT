#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
void bender (void);
int main()
{
	char ar[20],text[20];
	int i=0,count=0;
	clrscr();
	bender();f
	gets(text);
	for(i=0;i<strlen(text);i++)
	{
		text[i] = tolower(text[i]);
	}
	strcpy(ar,text);
	strrev(ar);
	for(i=0;i<strlen(text);i++)
	{
		if(ar[i]==text[i])
			count = 1;
		else
			count = 0;

	}
	if(count == 1)
		printf("YES");
	else
		printf("NO");

	getch();
	return 0;
}
void bender (void)
{
	printf("=================\n");
	printf(" SKN C PROGRAMER \n");
	printf("=================\n");
}