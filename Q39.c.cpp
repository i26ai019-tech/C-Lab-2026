#include<stdio.h>
int main()
{
 int	n,i,fact=1;
	float sum=0;
	
	printf("Enter N:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+(float)i/fact;
	}
	printf("sum=%.2f",sum);
	
	return 0;
}
