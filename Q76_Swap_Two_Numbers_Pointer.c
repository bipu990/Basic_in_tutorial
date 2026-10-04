//**Ques:** Swap two numbers using pointers

#include <stdio.h>
int main()
{
    int x,y;
    printf ("Input firsat number :");
    scanf ("%d",&x);
    printf ("Input second numebr :");
    scanf ("%d",&y);

    int temp = 0;

    int *p=&x;
    int *q=&y;

    temp=*p;
    *p=*q;
    *q=temp;
    
    printf ("The first number is : %d",*p);
    printf ("\nThe second numebr is : %d",*q);

    return 0;
}
