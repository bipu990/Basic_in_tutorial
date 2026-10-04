//Ques: Print array elements using pointers

#include <stdio.h>
int main()
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

    printf ("The array is :\n");
    for (int i=0;i<x;i++)
    {
        printf ("%d\n",*(p+i));
    }
    

    return 0;
}
