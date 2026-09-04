/*
 * * * * *
 * * * *
 * * *
 * *
 *
*/

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=0;i<x;i++)
    {
        for (int j=1;j<=x-i;j++)
        {
            printf (" *");
        }
        printf ("\n");
    }

    return 0;
}
