/*
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int count = 1;
    
    for (int i=1;i<=x;i++)
    {   
        for (int j=1;j<=i;j++)
        {
            printf (" %d",count);
            count++;
        }
        printf ("\n");
    }

    return 0;
}
