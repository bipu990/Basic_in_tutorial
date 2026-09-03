//

#include <stdio.h>
int main()
{
    int x;
    printf ("Input a number :");
    scanf ("%d",&x);

    int m = 1;
    int n = 0;
    int o = 0;

    for (int i=2;i<=x;i++)
    {
        o=m+n;
        n=m;
        m=o;
    }
    printf ("The fibonacci numebr is : %d",o);

    return 0;
}
