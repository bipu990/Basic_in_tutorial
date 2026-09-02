//Ques: Write a program to check if a number is prime or not.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int m = 0;

    for (int i = 2;i<x;i++)
    {
        if (x%i==0)
        {
            m = 1;
        }
    }
    if (m==0) printf ("This is a prime number .");
    else printf ("This is not a prime number .");

    return 0;
}
