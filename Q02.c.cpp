#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float percentage;
	
	printf("Enter marks of five subject:");
	scanf("%d %d %d %d ,&m1,&m2,&m3,&m4,&m5");
	
	total=m1+m2+m3+m4+m5;
	percentage=total/5.0;
	
	printf ("total Marks+%d\n",total);
	printf("Percentage=%.2f%%",percentage);
	
	return 0;
	
}
