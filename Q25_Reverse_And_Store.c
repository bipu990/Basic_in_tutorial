//Ques: Write a program to print reverse of a given number and store it.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int a=x;
    int n=0;
    int m=0;
    
    while (x!=0)
    {
        m = x%10;
        n = m+(n*10);
        x=x/10;
    }
    int z = a+n;
    printf ("%d",z);

    return 0;
}
