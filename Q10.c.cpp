#include<stdio.h>
int main()
{ 
  int M,P,C,E; 
  float CM;
  
  printf("Enter the marks in mathematics,physics,chemistry and E:");
  scanf("%d %d %d %d",&M,&P,&C,&E);
  
  CM=(M/2.0)+(P/2.0)+(C/2.0)+E;
  
  printf("Cut off marks=%.2f",CM);
  
  return 0;
}
