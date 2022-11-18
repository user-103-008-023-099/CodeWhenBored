#include<stdio.h>

int main()
{
    int i, j, k, l, n;

    n=9;

    for(i=0; i<=n; i++)
    {
    for(j=0; j<=n; j++)
    {
    for(k=0; k<=n; k++)
    {
    for(l=0; l<=n; l++)
    printf("%d%d%d%d \n", i, j, k, l);
    }
    }
    }
}