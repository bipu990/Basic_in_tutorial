//Ques: Find maximum of three numbers using pointers

#include <stdio.h>
int main()
{
    int x,y,z;
    printf ("Input firsat number :");
    scanf ("%d",&x);
    printf ("Input second numebr :");
    scanf ("%d",&y);
    printf ("Input third number :");
    scanf ("%d",&z);

    int *p=&x;
    int *q=&y;
    int *r=&z;

    int m=*p;

    if (m<*q) m = *q;
    if (m<*r) m = *r;

    printf ("The gretest nuber is : %d",m);  
    
    return 0;
}
