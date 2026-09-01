//Ques: Take 3 numbers input and tell if they can be the sides of a triangle.

#include <stdio.h>

int main ()
{
    int x,y,z;
    printf ("Input first number :");
    scanf ("%d",&x);
    printf ("Input second number :");
    scanf ("%d",&y);
    printf ("Input third number :");
    scanf ("%d",&z);

    if ( x+y > z || y+z > x || x+y > z )
    printf ("This is a triangle.");
    else printf ("This is not a triangle.");

    return 0 ;
}
