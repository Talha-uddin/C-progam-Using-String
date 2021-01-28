#include<stdio.h>

int main(void)
{
    int c = 1427;

    printf("%#o\n",c);
    printf("%#x\n",c);
    printf("%#X\n",c);

    double p = 1427.0;
    printf("\n%g\n",p);
    printf("%#g\n",p);
}