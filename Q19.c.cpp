#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	 
	(ch>='a'&&ch<='z')?
	printf("small case letter"):
	printf("Not a small case letter");
	
	return 0; 

	
}
