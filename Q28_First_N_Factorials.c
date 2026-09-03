//Ques: Print the factorials of first 'n' numbers

#include <stdio.h>
int main ()
{
    int x ;
    printf ("Input a numebr :");
    scanf ("%d",&x);

    int m = 1;

    for (int i=1;i<=x;i++)
    {
        m = m*i;   
        printf ("The fectorial of %d is : %d\n",i,m);
    }
    

    return 0;
}
