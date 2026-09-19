//Ques: Write a program to print reverse of a given number.

#include <stdio.h>

int rev(int a)
{
    int m = 0;
    int n = 0;
    while (a!=0)
    {
        m = a%10;
        n = m+(n*10);
        a = a/10;
    }
    return n;
}
int main ()
{
    int x;
    printf ("Input a number : ");
    scanf ("%d",&x);

    printf ("The invers of the number is : %d",rev(x));

    return 0;
}
