//Ques: Take positive integer input and tell if it is divisible by 5 and 3.


#include <stdio.h>

int dev(int a)
{
    if (a%3==0 && a%5==0)
    return 1;
    else 
    return 0;
   
}
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    if (dev(x))
    {
        printf ("This is devided by 3 and 5");
    }
    else 
    {
        printf ("This is not devided by 3 and 5");
    }

    return 0;
}
