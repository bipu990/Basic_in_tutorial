/*Ques : A record contains name of cricketer, his age, number of test matches that he has played and the average 
runs that he has scored in each test match.Create an array of structure to hold records of 20 such cricketer and 
then write a program to read these records*/

#include <stdio.h>

struct cricketer 
{
    char name[50];
    int age;
    int match;
    float avg_run;
};
int main ()
{
    struct cricketer arr[20];
    
    for (int i=0;i<20;i++)
    {
        printf ("Input the user name : ");
        scanf (" %[^\n]s", arr[i].name); // %[^\n]s এর আগে শুধু একটি স্পেস দেওয়া হয়েছে
        printf ("Input the age : ");
        scanf ("%d",&arr[i].age);
        printf ("Inupt the match : ");
        scanf ("%d",&arr[i].match);
        printf ("Input the average run : ");
        scanf ("%f",&arr[i].avg_run);
    }

    return 0;
}
