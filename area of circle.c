#include<stdio.h>
int main()
 {
    float radius,pi;
    pi = 3.14;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);

    printf("area of circle is: %f \n",pi*radius*radius);
    printf("circumference of circle is: %f",2*pi*radius);
    
    return 0;
}