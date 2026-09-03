/* Ques: Two numbers are entered through the keyboard. Write a program to find 
the value of one number raised to the power of another.  */

#include <stdio.h>
int main()
{
    int x,y;
    printf ("Input a number :");
    scanf ("%d",&x);
    printf ("Input a number :");
    scanf ("%d",&y);

    int m = 1;

    for (int i = 1;i<=y;i++)
    {
        m = m*x;
    }
    printf ("%d",m);
    

    return 0;
}
