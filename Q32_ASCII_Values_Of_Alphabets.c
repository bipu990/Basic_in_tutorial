/*  Ques: Write a program to print all the ASCII values and 
their equivalent characters of 26 alphabets using a while loop. */ 

#include <stdio.h>

int main() 
{
    for (int i = 0; i < 26; i++) 
    {
        printf("%c     %c\n", (char)(65 + i), (char)(97 + i));
    }

    return 0;
}
