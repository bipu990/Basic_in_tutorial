//Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. 
//(Considering leap year occurs after every 4 years)

#include <stdio.h>

void leap(int a)
{
    if (a%4==0)
    printf ("This is a leap year.");
    else 
    printf ("This is not a leap year.");
}
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    leap(x);

    return 0;
}
