////Ques: Print the table of 'n'. Here 'n' is a integer which user will input.

#include <stdio.h> 
 
void table(int a) 
{ 
    int m = 1; 
    printf ("The table of %d is :\n",a); 
    for (int i=1;i<=10;i++) 
    { 
        m = i*a; 
        printf ("%d\n",m); 
    } 
} 
 
int main () 
{ 
    int x; 
    printf ("Input a number :"); 
    scanf ("%d",&x); 
     
    table(x); 
 
    return 0; 
}
