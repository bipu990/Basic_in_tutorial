/*
A
A B
A B C
A B C D
*/

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=0;i<x;i++)
    {
        for (int j=65;j<=65+i;j++)
        {
            printf (" %c");
        }
        printf ("\n");
    }

    return 0;
}
