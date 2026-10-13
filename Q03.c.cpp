#include<stdio.h>
int main()
{
	float basic,hra,da,gross;
	
	printf("Enter basic salary:");
	scanf("%f",&basic);
	
	hra=0.20*basic;
	da=0.80*basic;
	
	gross=basic+hra+da;
	printf("HRA=%.2f\n",hra);
	printf("DA=%.2f\n",da);
	printf("Gross salary=%2f",gross); 
	
	return 0;
}
