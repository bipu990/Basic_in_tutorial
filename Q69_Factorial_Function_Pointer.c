//Ques: Print the factorial of a given number 'n'

#include <stdio.h>

void fact(int,int *);

int main ()
{
    int x,vlu = 0;
    printf ("Input a number :");
    scanf ("%d",&x);

    fact(x,&vlu);

    printf ("The factorial of the numebr is : %d",vlu);

    return 0;
}
void fact (int a,int *vlu)
{
    *vlu = a;
    for (int i=1;i<a;i++)
    {
        *vlu = (*vlu)*i;
    }
}
