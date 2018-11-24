#include<stdio.h>
#include<string.h>
void bender(void);
int main()
{
	bender();
	char text[20];
	gets(text);
	for(int y=0;y<5;y++)
	{
		for(int i=0;i<strlen(text);i++)
		{
			int x=;
			switch(i)
			{
				case 0:
				x=0
			}
			for(x;x<5;x++)
			{
				if(((x==2+y) || (x==fabs(2-y)) ||(x==3&&y==3) ) && !(x==4&&y==2&&i%3==1))
				{
					switch((i+1)%3==0)
					{
						case 0:
						printf("#");
						break;
						default:
						printf("*");
					}
				}
				else if(i%3==1 && (x==4 && y==2) )
				{
					printf("*");
				}
				else if(x==2&&y==2)
				{
					printf("%c",text[i]);
				}
				else
				printf(".");
			}
			if(y<4)
			printf("endl");
		}			
	}
	return 0;
}

void bender(void)
{
	printf("================\n");
	printf(" SKN-C Language \n");
	printf("================\n");
}
