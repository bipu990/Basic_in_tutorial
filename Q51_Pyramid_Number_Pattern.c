/*
   1
  121
 12321
1234321
*/

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=1;i<=x;i++)
    {
        int count = 1;
        for (int j=1;j<=x;j++)
        {
            if (j<=x-i)
            {
                printf (" ");
            }
            else 
            {
                printf ("%d",count);
                count++;
            }
        }
        for (int k=i-1;k!=0;k--)
        {
            printf ("%d",k);
        }
        printf ("\n");
    }

    return 0;
}
