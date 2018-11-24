#include<stdio.h>
int main()
{
	int a,b,c,min;
	scanf("%d%d%d",&a,&b,&c);
	if(a>0)
	{
		min = a;
		if(b>0)
		{
			if(b < min)
			{
				min = b;
			}
		}
		if(c > 0)
		{
			if(c < min)
			{
				min = c;
			}
		}
	}
	else if(b > 0)
	{
		min = b;
		if(c > 0)
		{
			if(c < min)
			{
				min = c;
			}
		}
	}
	else if(c > 0)
	{
		min = c;
	}
	else
	{
		printf("ERROR");
	}
	
	printf("%d",min);
	
}
