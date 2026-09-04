/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
*/

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=1;i<=x;i++)
    {
        for (int j=x;j!=0;j--)
        {
            printf (" *");
        }
        printf ("\n");
    }

    return 0;
}
