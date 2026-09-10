// SWAP THE NUMBER :  

#include <stdio.h>

int swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf ("The swap value of thos number is :\n");
    printf ("Frist - %d\n",a);
    printf ("Second - %d\n",b);
}

int main ()
{
    int x;
    printf ("Input first number :");
    scanf ("%d",&x);

    int y;
    printf ("Input second number :");
    scanf ("%d",&y);

    swap(x,y);

    return 0;
}
