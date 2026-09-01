//Ques: Take positive integer input and tell if it is a three digit number or not.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    if (x>99 && x<1000) printf ("This is a three digit number .");
    else printf ("This is not a three digit number .");

    return 0 ;
}
