#include<stdio.h>
int main()
    {
        float principal,rate,time,si;


        printf("Principal : ");
        scanf("%f",&principal);
       
        printf("time : ");
        scanf("%f",&time);

        printf("rate : ");
        scanf("%f",&rate);

        si = principal*rate*time/100;
        printf("si: %f",si);

        return 0;
    }