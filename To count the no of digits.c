//To count the digits in a number
#include<stdio.h>
int main()
{
 int a,b=0;
 printf("Enter the number = ");
 scanf("%d",&a);
 while(a>0)
 {
  a/=10;
  ++b;
 }
 printf("No. of digits is %d",b);
 return(0);
}
