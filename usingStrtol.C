#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    const char *string = "-1234567abc"; //initialized string pointer
    char *reminderPtr;

    long x = strtol(string,&reminderPtr, 0);

    printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
    "The original string is ",string,
    "The converted value is ",x,
    "The reminder of the original sting is ",
    reminderPtr,
    "The converted value plus 567 is ",x + 567);
}