#include<stdio.h>
float area(float b, float h)
{
    return 0.5*b*h;
}
int main()
{
    float base,height;
    float Area;
    
    printf("\n\nEnter the base of the Triangle: ");
    scanf("%f", &base);

    printf("\n\nEnter the height of the Triangle: ");
    scanf("%f", &height);
    
    Area = area(base,height);
    printf("\n\n\nThe area of the triangle is: %.2f", Area);
    return 0;
}