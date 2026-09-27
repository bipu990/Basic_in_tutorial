//Ques : findout the max number 

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
        scanf ("%d",&p[i]);
    }
    int max=*(p);
    for (int i=0;i<x;i++)
    {
        if (*(p+i)>max) max=*(p+i);
    }

    printf ("The bigest number is : %d",max);

    return 0;
}
