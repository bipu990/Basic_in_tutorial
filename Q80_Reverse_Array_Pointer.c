//Ques: Reverse an array using pointers

#include <stdio.h>
int main()
{
    int x;
    printf ("Input a numebr :");
    scanf ("%d",&x);

    int arr[x];
    int *p=arr;
    for (int i=0;i<x;i++)
    {
        scanf ("%d",(p+i));
    }
    printf ("The revers array is :\n");
    for (int i=x-1;i>=0;i--)
    {
        printf ("%d\n",*(p+i));
    }

    return 0;
}
