#include <stdio.h>

int main(void)
{
    int n;
    int x=0;

    for (int i=1; i<15; i++)
    {
        n=i+x;
        x=x+(i*3);
    printf("The next Number is %i\n", n);
    }
}
