#include<stdio.h>
int main()
{
	int seconds, days, hours,minutes,remaining;
	 
	seconds=31558150;
	 
	 days=seconds/86400;
	 remaining=seconds% 86400;
	 
	 hours=remaining/3600;
	 remaining=remaining% 3600;
	 
	 minutes=remaining/60;
	 
	 printf("Number of days=%d\n",days);
	 printf("Number of hours=%d\n",hours);
	 printf("number of minutes=%d\n",minutes);
	 
	 return 0;
	
}

