//Ques:If the ages of Bipu, Zidan and Yeasin are input through the keyboard, write a program to determine the youngest of the three.

#include <stdio.h>

int m = 0;
int smol(int ,int ,int );
int main ()
{
    int x,y,z;
    printf ("Input the first number :");
    scanf ("%d",&x);
    printf ("Input the next number :");
    scanf ("%d",&y);
    printf ("Input the last numebr :");
    scanf ("%d",&z);

    smol(x,y,z);

    printf ("The youngest number is :%d",m);
    return 0;
}
int smol(int a,int b,int c)
{
    m = a;
    if (b<m) m = b;
    if (c<m) m = c;

    //return m;
}
