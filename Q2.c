// take two integer inpute, a and b: a>b, and find the remainder when a is divided by b. & print the remainder.


#include<stdio.h>
int main ()
{
  int a , b;

  printf("Enter value of a :");

  scanf("%d",&a);

  printf("Enter the value of b :");

  scanf("%d",&b);

  int z = a % b;

  printf("The remainder when %d is divided by %d then remainder is: %d" , a, b, z);
}