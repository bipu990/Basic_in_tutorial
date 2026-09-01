//Ques: Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    if ((x%5==0 || x%3==0) && x%15!=0) printf ("divisible.");
    else printf ("not divisible.");

    return 0 ;
}
