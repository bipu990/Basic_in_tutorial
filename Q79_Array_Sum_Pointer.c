//Ques: Calculate sum of array elements using pointers

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int arr[x];

    for (int i=0;i<x;i++)
    {
        scanf ("%d",&arr[i]);
    }

    int *p=arr;
    int m=0;
    int *a=&m;
    for (int i=0;i<x;i++)
    {
        *a=*a+*(p+i);
    }
    printf ("The sum of the array is : %d",m);

    return 0;
}
