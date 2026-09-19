//Ques: Write a program to print sum of all the even digits of a given number.

#include <stdio.h>

void cul(int a,int *p)
{
    while (a!=0)
    {
        int m = a%10;
        if (m%2==0)
        {
            (*p)++;
        }
        a = a/10;
    }
}
int main ()
{
    int x,sum = 0;
    printf ("Input a number :");
    scanf ("%d",&x);

    cul(x,&sum);

    printf ("The sum of the Even digit of the number is : %d",sum)

    return 0;
}
