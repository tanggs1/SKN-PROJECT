#include<stdio.h>
#include<conio.h>
void bender (void);
int main()
{
	int h1,s1,h2,s2,sum_h,sum_s,sum_hs,sum,prak;
	clrscr ();
	bender();
	scanf("%d",&h1);
	scanf("%d",&s1);
	scanf("%d",&h2);
	scanf("%d",&s2);
	if(s2<s1)
	{
		s2 = s2+60;
		h2 = h2-1;
	}
	sum_s = s2 - s1;
	sum_h = h2 - h1;
	sum_hs = sum_h*60;
	sum = sum_hs + sum_s;
	if(sum <= 15)
		prak = 0;
	else if(sum > 15 && sum <= 180)
		if(sum_h == 0)
			prak = 10;
		else
			prak = sum_h*10;
	else if(sum > 180 && sum <= 360)
		prak = (sum_h*20)-30;
	else if(sum>360)
		prak = 200;

	printf("%d",prak);
	getch();
	return 0;
}
void bender (void)
{
	printf("################\n");
	printf("#   SKN C/C#   #\n");
	printf("################\n");
}
