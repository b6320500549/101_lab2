#include<stdio.h>
int main()
{
  int a,b,c,sum;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);
  printf("Enter c:");
  scanf("%d",&c);
  if(a>=0&&a<=30||b>=0&&b<=30||c>=0&&c<=40)
  {
   sum = a+b+c;
  if(sum>=80)
    printf("A");
  else if(sum>=75)
    printf("B+");
  else if(sum>=75)
    printf("B+");
  else if(sum>=70)
    printf("B");
  else if(sum>=65)
    printf("C+");
  else if(sum>=60)
    printf("C");
  else if(sum>=55)
    printf("D");
  else if(sum>=50)
    printf("D+");
  else printf("F");

  }


  return 0;
}
