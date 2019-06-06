#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,y;
	scanf("%d%d",&a,&b);
	for(i=1;(i<=a||i<=b);i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			y=i;
		}
	}
	printf("GCD=%d",y);
	return 0;
}
