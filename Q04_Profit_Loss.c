//Ques: If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. 
//Also determine how much profit he made or loss he incurred.

#include <stdio.h>
int main ()
{
    int cp,sp;
    printf ("Inter cost price :");
    scanf ("%d",&cp);
    printf ("Inter selling price :");
    scanf ("%d",&sp);

    if (cp < sp)
    {
        int m = sp-cp;
        printf ("profit : %d",m);
    }
    else if (cp > sp)
    {
        int m = cp-sp;
        printf ("loss : %d",m);
    }
    else printf ("no profit no loss");

    return 0 ;
}
