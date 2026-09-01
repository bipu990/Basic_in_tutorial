//Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. 
//(Considering leap year occurs after every 4 years)

#include <stdio.h>
int main ()
{
    int x;
    printf ("Inter a year :");
    scanf ("%d",&x);

    if (x%4==0)
    printf ("This is a leap year.");
    else 
    printf ("This is not a leap year.");

    return 0 ;
}
