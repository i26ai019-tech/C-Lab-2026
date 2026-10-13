#include<stdio.h>
int main()
{
	int n,temp,digit,rev=0;
	
	printf("Enter a number");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{ 
	digit=n%10;
	rev=rev*10+digit;
	n=n/10;
	}
	if(rev==temp)
	printf("Palindromic number");
	else 
	printf("Not a palindromic number");
	return 0;
}
	
 	 
