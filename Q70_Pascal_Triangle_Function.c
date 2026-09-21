#include <stdio.h>

int fact(int m)
{
    int f = 1;
    for (int i=1;i<=m;i++)
    {
        f = f*i;
    }
    return f;
}
int ncr(int a,int b)
{
    return fact(a)/(fact(b)*fact(a-b));
}
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=0;i<x;i++)
    {
        for (int w=x-1-i;w!=0;w--)
        printf (" ");

        for (int j=0;j<=i;j++)
        {
            printf ("%d ",ncr(i,j));
        }
        printf ("\n");
    }

    return 0;
}
