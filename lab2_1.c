#include<stdio.h>
int main()
{
  int a,b,c,sum;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a>=0&&a<=30&&b>=0&&b<=30&&c>=0&&c<=40)
  {
   sum = a+b+c;
  if(sum>=80)
  printf("A") ;
  else if (sum>=75&&sum<=79)
  printf("B+") ;
  else if (sum>=70&&sum<=74)
  printf("B") ;
  else if (sum>=65&&sum<=69)
  printf("C+") ;
  else if (sum>=60&&sum<=64)
  printf("C") ;
  else if (sum>=55&&sum<=59)
  printf("D+") ;
  else if (sum>=50&&sum<=54)
  printf("D") ;
  else if (sum>=0&&sum<=49)
  printf("F") ;
  }
  return 0;
}
