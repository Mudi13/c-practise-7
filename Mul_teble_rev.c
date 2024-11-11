#include<stdio.h>
int main()
{
    int i,n,number;
    scanf("%d",&n);

    for (int i = 10; i >= 1; i--)
    {
        number=i*n;
        printf("%d\n",number);
    }
}