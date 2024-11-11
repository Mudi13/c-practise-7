#include<stdio.h>
int main()
{
    int n,i;
    long long int first=0,second=1,next;
    scanf("%d",&n);

    if (n>=1)
    {
        printf("%lld",first);
    }

    if (n>=2)
    {
        printf("%lld",second);
    }

    for (int i = 3; i <= n; i++)
    {
        next=first+second;
        printf("%lld",next);
        first=second;
        second=next;
    }

}