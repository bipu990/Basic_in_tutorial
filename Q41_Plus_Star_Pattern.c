/*
  *
  *
*****
  *
  *
*/

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int mid = x/2+1;

    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=x;j++)
        {
            if ((i==mid) || (j==mid))
            {
                printf ("*");
            }
            else 
            {
                printf (" ");
            }
        }
        printf ("\n");
    }

    return 0;
}
