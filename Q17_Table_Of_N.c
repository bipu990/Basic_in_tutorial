//Ques: Print the table of 'n'. Here 'n' is a integer which user will input.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    for (int i = 1;i<=10;i++)
    {
        int m = x*i;
        printf ("%d\n",m);
    }

    return 0;
}
