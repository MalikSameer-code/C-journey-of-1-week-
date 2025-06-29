#include<stdio.h>

int main()
{
    float r ;

    printf("Enter radius :");

    scanf("%f",&r);

    float pi = 3.1415;

    float A = pi*r*r;


    printf("Area of a corcle: %f" ,A);

    return 0;
}