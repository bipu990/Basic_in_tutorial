 //Ques : Sum of the numbers in given array.

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a value : ");
    scanf ("%d",&x);

    int arr[x];
    int *p=arr;

    for (int i=0;i<x;i++)
    {
        scanf ("%d",p+i);
    }

    int m=0,sum=0;
    for (int i=0;i<x;i++)
    {
        m = *(p+i)%10;
        sum = sum+m;
        *(p+i) = *(p+i)/10;
    }
    printf ("The sum of the numebr is : %d",sum);

    return 0;
}
