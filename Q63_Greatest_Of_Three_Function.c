//Quse:Find greatest number of 3.

#include <stdio.h>

int m = 0;//GLOBAL VARIABLE USE 

int gret(int ,int ,int );//FUNCTION NAME DECLEAR + 3 INT NIYE KAJ

int main ()
{
    int x,y,z;

    printf ("Inter 1st number :");
    scanf ("%d",&x);

    printf ("Inter 2nd number :");
    scanf ("%d",&y);

    printf ("Inter 3rd number :");
    scanf ("%d",&z);

    gret(x,y,z);//FUNCTION CALL

    printf ("The gretest number is : %d",m);

    return 0;
}

int gret(int a,int b,int c)//FUNCTION PROTOTYPE USE 
{
    m = a;
    if (b>m) m = b;
    if (c>m) m = c;

    return m;
}
