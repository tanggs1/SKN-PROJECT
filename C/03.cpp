#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a=0,b=0,c=0;
	clrscr();
	scanf("%f %f",&a,&b);
	c=(a*a)+(b*b);
	printf("%5f",sqrt(c));
	getch();
	return 0;
}