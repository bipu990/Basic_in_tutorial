//Write a program to count digits of a given number.

#include <stdio.h>

int cunt(int *a)
{
    int count = 0;
    
    while (*a!=0)
    {
        *a = *a/10;
        count++;
    }
    return count;
}

int main ()
{
    int x;
    printf ("Input a value :");
    scanf ("%d",&x);

    printf ("The number of the value is : %d",cunt(&x));

    return 0;
}
