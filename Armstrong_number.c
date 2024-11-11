#include<stdio.h>
int main()
{
    int n,rem,arm=0,c;
    scanf("%d",&n);

    c=n;
    while(n>0)
    {
        rem=n%10;
        arm=(rem*rem*rem)+arm;
        n=n/10;
    }

    if (c==arm)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an armstrong number");
    }
}