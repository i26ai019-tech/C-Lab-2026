#include<stdio.h>
int main()
{
	int total,hr,min,sec;
	
	printf("Enter total seconds:");
	scanf("%d",&total);
	
	hr= total/3600;
	total= total %3600;
	
	min=total/60;
	sec=total%60;
	
	printf("Time=% hour %d minutes %d seconds",hr, min,sec); 
	
	return 0;
}
