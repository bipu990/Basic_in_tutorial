/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=x;j++)
        {
            if (j<=x-i)
            printf (" ");
            else 
            printf ("*");
        }
        for (int k=2;k<=i;k++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    for (int i=1;i<x;i++)
    {
        for (int j=1;j<2*x-i;j++)
        {
            if (j<=i)
            printf (" ");
            else if (j>i)
            printf ("*");
        }
        printf ("\n");
    }

    return 0;
}
