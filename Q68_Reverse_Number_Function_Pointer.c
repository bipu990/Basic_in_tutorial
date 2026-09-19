#include <stdio.h>

void rev(int a,int *p)
{
    int m = 0;
    while (a!=0)
    {
        m = a%10;
        *p = m+((*p)*10);
        a = a/10;
    }
    
}
int main ()
{
    int x,revers = 0;
    printf ("Input a number : ");
    scanf ("%d",&x);

    rev(x,&revers);

    printf ("The invers of the number is : %d",revers);

    return 0;
}
