//Ques:If the ages of Bipu, Zidan and Yeasin are input through the keyboard, write a program to determine the youngest of the three.

#include <stdio.h>

int main ()
{
    int x,y,z;
    printf ("Input the age of Bipu :");
    scanf ("%d",&x);
    printf ("Input the age of Zidan :");
    scanf ("%d",&y);
    printf ("Input the age of Yeasin :");
    scanf ("%d",&z);

    if (x<y && x<z) printf ("Bipu is youngest");
    else if (y<x && y<z) printf ("Zidan is youngest");
    else printf ("Yeasin is youngest");

    return 0 ;
}
