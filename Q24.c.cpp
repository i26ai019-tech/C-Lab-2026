#include<stdio.h>
int main()
{
	float x,y;
	int n;
	
	printf("Enter value of x and n:");
	scanf("%f %d",&x,&n);
	
	if (n==1)
	y = 1 + x;
	
	else if(n==2)
	y = 1 + x / 2;
	
	else if(n==3)
	y = 1 + x * x;
	 else
	 y = 1 + n * x;
	printf("Value of y=%.2f",y); 
	return 0;
}
