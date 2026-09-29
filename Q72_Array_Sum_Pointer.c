 //Ques : Sum of the numbers in given array.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number : ");
    scanf ("%d",&x);

    int arr[x];
    int *p = arr;

    for (int i=0;i<x;i++)
    {
        scanf ("%d",(p+i));
    }

    int m=0;

    for (int i=0;i<x;i++)
    {
        m = *(p+i)+m;
    }

    printf ("The sum of the number is : %d",m);

    return 0;
}
