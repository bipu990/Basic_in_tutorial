//Ques: Display this GP - 1,2,4,8,16,32,... upto 'n' terms.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int m = 1;

    for (int i=0;i<x;i++)
    {
        printf ("%d\n",m);
        m *= 2;
    }

    return 0;
}
