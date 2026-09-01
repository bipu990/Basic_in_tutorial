//Ques: Take positive integer input and tell if it is divisible by 5 and 3.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    if (x%5==0 && x%3==0) printf ("divisible.");
    else printf ("not divisible.");

    return 0 ;
}
