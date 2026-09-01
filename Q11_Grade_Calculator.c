//Ques: Take input percentage of a student and print the Grade according to marks:
//90–100 Excellent
//80–90 Very Good
//70–80 Good
//60–70 Can do better
//50–60 Average
//40–50 Below Average
//<40 Fail


#include <stdio.h>
int main ()
{
    int x;
    printf ("Input the marks :");
    scanf ("%d",&x);

    if (x>=90 && x<=100) printf ("Excellent");
    else if (x>=80 && x<=90) printf ("Very Good");
    else if (x>=70 && x<=80) printf ("Good");
    else if (x>=60 && x<=70) printf ("Can do better");
    else if (x>=50 && x<=60) printf ("Average");
    else if (x>=40 && x<=50) printf ("Below Average");
    else if (x<40) printf ("Fail");

    return 0 ;
}
