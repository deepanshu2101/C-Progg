#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,count,p,first,last,swap;
 printf("Enter the number =");
 scanf("%d",&a);
 b=a;
 while(a>0)
 {
  a=a/10;
  ++c;
  }
 a=b;
 count=c-1;
 first=a%10;
 p=pow(10,count);
 last=a/p;
 swap=first*p;
 swap=swap+(a-(last*p));
 swap=((swap/10)*10)+last;
 printf("The swapped number is %d",swap);
 return 0;
}
