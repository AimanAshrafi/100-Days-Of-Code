/*
Title: question 2
Author: Aiman
Purpose: to find area and perimeter of a rectangle.
Date:10/11/2025
*/
#include<stdio.h>
int main()
{
    float l;
    float b;
    float area;
    float perimeter;
    printf("ENTER LENGTH:");
    scanf("%f", &l);

    printf("ENTER THE BREADTH:");
    scanf("%f" , &b);

    area = l*b;
    perimeter = 2*(l+b);

    printf("area of rectangle: %f\n", area);
    printf("perimeter of rectangle: %f\n", perimeter);
}

