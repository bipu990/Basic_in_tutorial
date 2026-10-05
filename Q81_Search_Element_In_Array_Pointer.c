//Ques: Search an element in an array using pointers\

#include <stdio.h>
int main()
{
    int x;
    printf ("Inplut a numebr : ");
    scanf ("%d",&x);

    int arr[x];
    int *p=&arr[0];

    for (int i=0;i<x;i++)
    {
        scanf ("%d",(p+i));
    }

    int m;
    int *a=&m;
    printf ("Input a value : ");
    scanf ("%d",a);

    for (int i=0;i<x;i++)
    {
        if(*(p+i)==*a)
        {
            printf ("FOUND.");
            return 0;
        } 
    }
    printf ("NOT FOUND.");  

    return 0;
}
