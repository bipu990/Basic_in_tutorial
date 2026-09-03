//Ques: Print the sum of this series : $1 - 2 + 3 - 4 + 5 - 6...$ upto 'n'.

#include <stdio.h>
int main()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int n = 0;
    int m = 0;

    for (int i =1;i<=x;i++)
    {
        if (i%2==0)
        {
            m = -i;
            n = n+m;
        }
        else 
        {
            m = i;
            n = n+m;
        }
    }
    printf ("The sum is : %d",n);

    return 0;
}
