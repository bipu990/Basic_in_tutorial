/*
   A
  AB
 ABC
ABCD
  */

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=x-i;j++)
        {
            printf (" ");
        }
        for (int k='A';k<'A'+i;k++)
        {
            printf ("%c",k);
        }
        printf ("\n");
    }

    return 0;
}
