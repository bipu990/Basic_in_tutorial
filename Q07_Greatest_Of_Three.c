//

#include <stdio.h>
#include <limits.h>

int main ()
{
    int x,y,z;
    printf ("Input first number :");
    scanf ("%d",&x);
    printf ("Input second number :");
    scanf ("%d",&y);
    printf ("Input third number :");
    scanf ("%d",&z);

    int m = INT_MIN;

    if (x>m) m = x;
    if (y>m) m = y;
    if (z>m) m = z;

    printf ("greatest number is : %d",m);

    return 0 ;
}
