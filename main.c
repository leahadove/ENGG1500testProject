#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    int k;
    printf("enter integer: ");
    scanf("%f", &x);
    y = (x+2)/(x-1);
    printf("y: %f\n", y);
    return 0;

}
