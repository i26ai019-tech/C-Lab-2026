#include<stdio.h>
int main()
{
	float a,b,result;
	char op;
	printf("Enter two numbers:");
	scanf("%f %f",&a,&b);
	
	printf("Enter operator(+,-,*,/)");
	scanf(" %c",& op);
	
	switch(op)
	{
		case'+':
			result=a+b;
			printf("Result=%.2f",result);
			break;
			
		case'-':
		    result=a-b;
			printf("Result=%.2f",result);
			break;
			
		case'*':
			result=a*b;
			printf("Result=%.2f",result);
			break;
			
		case'/':
			if(b!=0)
			printf("Result=%.2f",a/b);
			
			else
			
			printf("Dision by zero is not possible");
			break;
			
			default:
			printf("Invalid operator"); 	
			
	}
       return 0;	
}
