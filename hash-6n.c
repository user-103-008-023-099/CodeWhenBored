#include<stdio.h>

int main()
{
    int g, h, i, j, k, l, n;

    n=9;

    for(g=0; g<=n; g++)
    {
    for(h=0; h<=n; h++)
    {
    for(i=0; i<=n; i++)
    {
    for(j=0; j<=n; j++)
    {
    for(k=0; k<=n; k++)
    {
    for(l=0; l<=n; l++)
    printf("%d%d%d%d%d%d \n", g, h, i, j, k, l);
    }
    }
    }
    }
    }
}