#include<stdio.h>
int main ()
{
	int hr,min,sec,total;
	
	printf("Enter time in hour ,minutes and second:");
	scanf("%d %d %d ",&hr,&min,&sec); 
	
	total=(hr*3600)+(min*60)+sec;
	
	printf("Total second =%d",total);
	
	return 0;
}
