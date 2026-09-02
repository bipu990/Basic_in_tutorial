//Ques: Display this AP - 1,3,5,7,9.. upto 'n' terms.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i=1;i<=x;i=i+2)
    {
        printf ("%d\n",i);
    }

    return 0;
}
