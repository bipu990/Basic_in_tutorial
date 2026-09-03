//Ques: Print first 'n' fibonacci numbers.

#include <stdio.h>
int main()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    if (x==1)
    printf ("The 1 fibonacci number is : 1\n");
    else 
    {
        int m = 1;
        int n = 0;
        int o = 0;

        printf ("The 1 fibonacci number is : 1\n");

        for (int i=2;i<=x;i++)
        {
            o=m+n;
            n=m;
            m=o;
            printf ("The %d fibonacci number is : %d\n",i,o);
        }
    
    }

    return 0;
}
