#include<stdio.h>
int main()
{
	int n,i,num;
	int max,second;
	
	printf("Enter how many number:");
	scanf("%d",&n);
	
	printf("Enter number 1:");
	scanf("%d",&max);
	
	second=max;
	
	for(i=2;i<=n;i++)
	{
		printf("Enter number %d:",i);
		scanf("%d",&num);
		if(num>max)
		{
			second=max;
		}
		else if (num>second&&num!=max);
		{
			second=num;
		}
	}
	printf("Maximum =%d\n",max);
	printf("Second maximum=%d",second);
	
	return 0;
}
