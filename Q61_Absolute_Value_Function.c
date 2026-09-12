//Ques: Take integer input and print the absolute value of that integer.


#include <stdio.h>

int abs(int a)
{
    if (a>=0)
    return a;
    else
    {
        int m = a*(-1);
        return m;
    }
    return a;
}
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    printf ("The absolute value is : %d",abs(x));

    return 0;
}
