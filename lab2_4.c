#include<stdio.h>
int main ()
{
    int i,m ;
    char ch ;
    scanf("%c",&ch) ;
    scanf("%d",&i) ;
    if(i<=31&&i>=1)
    {
        if(i%5==0&&i%10!=0)
            printf("%c",92) ;
        if(i%2==1)
        {
            if(ch>='A'&&ch<='I')
                printf("(^_^)") ;
            else if(ch>='J'&&ch<='R')
                printf("(*o*)") ;
            else if(ch>='S'&&ch<='Z')
                printf("(T_T)") ;
        }
        else if(i%2==0)
        {
            if(ch>='A'&&ch<='I')
                printf("(@_@)") ;
            else if(ch>='J'&&ch<='R')
                printf("(*v*)") ;
            else if(ch>='S'&&ch<='Z')
                printf("(x_x)") ;
        }
        if(i%5==0&&i%10!=0)
            printf("/") ;
    }
    else
        return 0 ;
}
