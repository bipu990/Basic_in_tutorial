/*
1111
1222
1233
1234
  */

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf("%d",&x);

    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=x;j++)
        {
            if (j>=i)
            {
                printf ("%d",i);
            }
            else 
            {
                printf ("%d",j);
            }
        }
        printf ("\n");
    }

    return 0;
}
