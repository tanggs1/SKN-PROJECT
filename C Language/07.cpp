#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%n !=1)
		{
			c++;
		}
	}
	if(c==2)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
}
