#include<stdio.h>
int main()
{
	float farenheit,centigrade;
	
	printf("Enter temperature in Farenheit:");
	scanf("%f",&farenheit);
	
	centigrade=(farenheit-32)*5/9;
	
	printf("Temperature in centigarde=%2f.",centigrade);
	
	return 0;
	
}
