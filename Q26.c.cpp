#include<stdio.h>
int main()
{

int n,i;
int oddsum =0,evensum=0;

 printf("Enter the value of n:");
 scanf("%d",&n);
 
 for (i=1;i<=n;i++)
 {
 	if(i % 2==0)
 	evensum = evensum + i;
 	else
 	oddsum= oddsum + i;
 }
 printf("sum of even numbers =%d\n",evensum);
 printf("sum of odd numbers=%d",oddsum);
 
 return 0;
}
