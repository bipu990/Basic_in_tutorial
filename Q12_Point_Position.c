//Ques: Given a point $(x, y)$, write a program to find out if it lies on the x-axis, 
//y-axis or at the origin, viz. $(0, 0)$.

#include <stdio.h>
int main ()
{
    int x,y;
    printf ("Input the value of X :");
    scanf ("%d",&x);
    printf ("Input the value of Y :");
    scanf ("%d",&y);

    if (x == 0 && y == 0)
    printf("Origin");
    else if (y == 0)
    printf("X-axis");
    else if (x == 0)
    printf("Y-axis");

    return 0 ;
}
