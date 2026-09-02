//Ques: Write a program to print reverse of a given number.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a digit :");
    scanf ("%d",&x);

    int m = 0;

    printf ("The revers digit is : ");
    
    while (x!=0)
    {
        m = x%10;
        printf ("%d",m);
        x = x/10;
    }


    return 0;
}
