#include<stdio.h>
int main()
{
    int x,y,num;
    int i=1;
    scanf("%d %d",&x,&y);
    switch(y)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : num = 31;
                  break;
        case 2 : num = 28;
                 break;
        case 4 :
        case 6 :
        case 9 :
        case 11 : num = 30;
                  break;
    }
    while(i < num)
    {
        i+=7;
    }
    i-=7;
    for(i;i<=num;i++)
        x+=1;

    if(x>7)
        x-=7;
    printf("%d",x);
    return 0;
}
