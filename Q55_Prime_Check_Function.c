#include <stdio.h>

int isPrime(int a)
{
    if (a<2)
    return 0;
    else if (a>2)
    {
        for (int i=2;i<a;i++)
        {
            if (a%i==0)
            return 0;
        }
         return 1;
    }
}
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    if (isPrime(x))
        printf ("This is a prime number.");
    else 
        printf ("This is not a prime number.");

    return 0;
}
