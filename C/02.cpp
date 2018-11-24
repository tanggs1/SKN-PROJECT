#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char text[100],ar[100],ab=' ';
	int cout=0,sum=0,i=0,j=0;
	clrscr();
	scanf("%s",&text);
	for(i=0;i<strlen(text);i++)
	{
		ar[i]=tolower(text[i]);
	}
	for(i=0;i<strlen(ar);i++)
	{
		ab = ar[i];
		if(ab != ' ')
		{
			cout = 0;
			for(j=i;j<strlen(ar);j++)
			{
				if(ab==ar[j])
				{
					cout = cout+1;
					ar[j]= ' ';
				}
			}
			printf("%c = %d \n",ab,cout);
			sum++;
		}
	}
	printf("sum = %d",sum);
	getch();
	return 0;
}
