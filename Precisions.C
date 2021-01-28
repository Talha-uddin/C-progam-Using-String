#include<stdio.h>

int main(void)
{
    puts("Using Precision for integer");
    int i = 873;
    printf("\t%.4d\n\t%.9d\n\n",i,i);

    puts("Using Precision for floating-point numbers");
    double f = 123.94536;
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n",f,f,f);

    puts("Using Precision for String");
    char s[] = "Happy Birthday";
    printf("\t%.11s\n",s);

}