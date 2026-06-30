#include<stdio.h>
//area of rectangle

int main() {

    int length, breadth, Area;

    printf("enter length of rectangle: ");
    scanf("%d", &length);

    printf("enther breadth of rectangle: ");
    scanf("%d", &breadth);

    printf("area of rectangle is: %d", length * breadth);
    return 0;
}