//Ques: Print the factorial of a given number 'n'.

#include <stdio.h>
int main ()
{
    int x ;
    printf ("Input a numebr :");
    scanf ("%d",&x);

    int m = 1;

    for (int i=x;i>0;i--)
    {
        m = m*i;   
    }
    printf ("The fectorial is : %d",m);

    return 0;
}
