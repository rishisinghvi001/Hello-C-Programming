#include <stdio.h>

int main()
{
    float l , b ;
    printf("Enter the value of length:");
    scanf("%f",&l);

    printf("Enter the value of breadth:");
    scanf("%f",&b);

    printf("Area of rectangle is %f \n",l*b);
    printf("Perimeter of rectangle is %f",2*(l+b));
    return 0;
}

