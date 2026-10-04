//Ques: Variable print by using pointer

#include <stdio.h>
int main()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int *p = &x;
    
    printf ("The number is : %d",*p);

    return 0;
}
