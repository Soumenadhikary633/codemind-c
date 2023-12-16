#include<stdio.h>
int main()
{
    int b,d,h;
    float g;
    scanf("%d",&b);
    if(b<=10000)
    {
        d=(b/100)*80;
        h=(b/100)*20;
        g=b+d+h;
        printf("%.2f",g);
    }
    else if(b<=20000)
    {
        d=(b/100)*90;
        h=(b/100)*25;
        float g=b+d+h;
        printf("%.2f",g);
    }
    else if(b>20000)
    {
        d=(b/100)*95;
        h=(b/100)*30;
        float g=b+d+h;
        printf("%.2f",g);
    }
}