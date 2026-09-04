/*
1
1 3
1 3 5
1 3 5 7
*/

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=2*i-1;j++)
        {
            if (j%2!=0)
              printf (" %d",j);
        }
        printf ("\n");
    }

    return 0;
}
