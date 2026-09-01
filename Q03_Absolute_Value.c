//Ques: Take integer input and print the absolute value of that integer.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Inter a year :");
    scanf ("%d",&x);

    if (x>=0) printf ("The absolute is : %d",x);
    else 
    {
        int m = x*(-1);
        printf ("The absolute is : %d",m);
    }

    return 0 ;
}
