//swap the value by using pointer 

#include <stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main ()
{
    int x,y;
    printf ("Input first number :");
    scanf ("%d",&x);
    printf ("Input second number :");
    scanf ("%d",&y);

    swap(&x,&y);

    printf ("The swap value is :\n");
    printf ("First - %d\nsecond - %d\n",x,y);

    return 0;
}
