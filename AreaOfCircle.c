#include<stdio.h>

int main()
{
    float radius ;

    printf("Enter radius :");

    scanf("%f",&radius);

    float pi = 3.1415;

    float Area = pi*radius*radius;


    printf("The Area of circle when radius %f is : %f" ,radius,Area);

    return 0;
}