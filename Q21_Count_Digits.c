//Write a program to count digits of a given number.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int count = 0;
    while (x!=0)
    {
        x = x/10;
        count++;
    }
    printf ("%d",count);

    return 0;
}
