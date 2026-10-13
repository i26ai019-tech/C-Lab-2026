#include<stdio.h>
int main()
{
	float P,R,T,SI; 
	
	printf("Enter Principle Amount:");
	scanf("%f",&P);
	
	printf("Enter Rate Of Interest:");
	scanf("%f",&R);
	
	printf("Enter Time:");
	scanf("%f",&T);
	
	SI=(P*R*T)/100;
	
	printf("simple Interest=%.2f",SI);
	
	return 0;
}
