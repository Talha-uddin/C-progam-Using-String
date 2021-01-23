#include<stdio.h>
 
#define SIZE 80

void reverse(const char * const sPtr);

int main(void)
{
    char sentence[SIZE];

    puts("Enter a line of text:");
    //use fgets to read the line of text
    fgets(sentence, SIZE, stdin);

    printf("\n%s","the line printed backward is:");
    reverse(sentence);
}

void reverse(const char * const sPtr)
{
    if('\0' == sPtr[0]){
        return ;
    }
    else{
        reverse(&sPtr[1]);
        putchar(sPtr[0]);
    }
}