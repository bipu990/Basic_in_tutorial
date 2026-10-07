//Ques : Create a structure type 'book' with name, price and number of pages as its attributes

#include <stdio.h>
#include <string.h>

int main ()
{
    struct book 
    {
        char name[50];
        int pages;
        float price;
    };
    struct book bangla;
    strcpy (bangla.name,"AMAR BANGLA BOI");
    bangla.pages = 200;
    bangla.price = 250.55;

    struct book english;
    strcpy (english.name,"ENGLISH FOR TODAY");
    english.pages = 150;
    english.price = 350.05;

    struct book math;
    strcpy (math.name,"MATHEMATICS");
    math.pages = 350;
    math.price = 280.58;

    printf ("The pages of bangla book is : %d\n",bangla.pages);
    printf ("The name of english booke is : %s\n",english.name);
    printf ("The price of math books is : %f\n",math.price);

    return 0;
}
