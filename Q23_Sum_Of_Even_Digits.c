//Ques: Write a program to print sum of all the even digits of a given number.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a digit :");
    scanf ("%d",&x);

    int m = 0;
    int n = 0;
    while (x!=0)
    {
        m = x%10;
        if (m%2==0)
        {
            n = m+n;
        }
        x = x/10;
    }
    printf ("The sum of the digit is : %d",n);

    return 0;
}
