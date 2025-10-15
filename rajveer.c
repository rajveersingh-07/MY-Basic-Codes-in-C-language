#include <stdio.h>
int main() 
{ float base, height, area;
    printf("Enter the base and height of triangle\n");
    scanf("%f%f", &base, &height);
    area = 0.5 * base * height;
    printf("The area of the triangle is %f\n", area);
    float r;
    printf("Enter the radius of circle\n");
    scanf("%f", &r);
    float a = 3.14 * r * r; 

    printf("The area of the circle is %f\n", a);    
  return 0;
}
