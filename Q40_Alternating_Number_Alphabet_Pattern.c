/*
1
A B
1 2 3
A B C D
1 2 3 4 5
*/

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=1;i<=x;i++)
    {
            if (i%2==0)
            {
                for (int j=65;j<65+i;j++)
                    printf (" %c",(char)j);
            }
            else 
            {
                for (int j=1;j<=i;j++)
                    printf (" %d",j);
            }
        printf ("\n");
    }

    return 0;
}















































