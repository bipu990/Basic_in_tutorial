#include <stdio.h>

int add(int a,int b);

int main ()
{
    int x,y;
    printf ("Input first number :");
    scanf ("%d",&x);
    printf ("Input second numbr :");
    scanf ("%d",&y);

    printf ("The sum is : %d",add(x,y));

    return 0 ;
}

int add (int a,int b)
{
    return a+b;
}
