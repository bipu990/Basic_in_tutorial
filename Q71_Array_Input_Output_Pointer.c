//  Ques: Pointer diye array input and output

#include <stdio.h>
int main ()
{
    int x;
    printf ("Input a value : ");
    scanf ("%d",&x);

    int a[x];
    int *p = a;

    for (int i=0;i<x;i++)
    {
        scanf ("%d",(p+i));
    }
    for (int i=0;i<x;i++)
    {
        printf ("%d\n",*(p+i));
    }

    return 0;
}
