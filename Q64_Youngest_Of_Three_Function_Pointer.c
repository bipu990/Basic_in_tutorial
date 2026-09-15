//Ques:Findout the lowest number 

#include <stdio.h>

//int m = 0;
int smol(int ,int ,int ,int * );// *int
int main ()
{
    int x,y,z,m;//*m
    printf ("Input the first number :");
    scanf ("%d",&x);
    printf ("Input the next number :");
    scanf ("%d",&y);
    printf ("Input the last numebr :");
    scanf ("%d",&z);

    smol(x,y,z,&m);//&m

    printf ("The youngest number is :%d",m);
    return 0;
}
int smol(int a,int b,int c,int *m)
{
    *m = a;
    if (b<*m) *m = b;//m
    if (c<*m) *m = c;//m - sudhu m dile b er value er sathe m er address er compear kora hocche .

    //return *m;
}
