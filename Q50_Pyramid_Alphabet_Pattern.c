/*
   A
  ABC
 ABCDE
ABCDEFG
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
        for (int k=65;k<65+(2*i-1);k++)
        {
            printf ("%c",(char)k);
        }
        printf ("\n");
    }

    return 0;
}
