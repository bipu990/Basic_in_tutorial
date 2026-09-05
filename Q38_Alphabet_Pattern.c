/*
A B C D
A B C D
A B C D
A B C D
*/

#include <stdio.h>

int main() 
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        for (char ch = 'A'; ch < 'A' + n; ch++) 
        {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
