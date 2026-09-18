//Ques: Write a program to print sum of all the even digits of a given number.
//WITHOUT USING RETURN 

#include <stdio.h>

void cunt(int *a , int *count )

{
    //int *count = 0;
    
    while (*a!=0)
    {
        *a = *a/10;
        (*count)++;//*count++

        //*count++   pointer বাড়ে ❌
        //(*count)++   value বাড়ে ✅   
    }
}

int main ()
{
    int x,count = 0;
    printf ("Input a value :");
    scanf ("%d",&x);

    //printf ("The number of the value is : %d",cunt(&x,&count));   -  jodi return kortam tahole eivabe likha jeto .
    cunt(&x,&count);
    printf ("The number of the value is : %d",count);
    return 0;
}
