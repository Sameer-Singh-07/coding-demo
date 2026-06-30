#include <stdio.h>  
//area of triangle 
int main() {

    float base, height, Area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("enter height of triangle: ");
    scanf("%f", &height);

    printf("area of triangle is: %f", 0.5 * base * height);
    return 0;
}