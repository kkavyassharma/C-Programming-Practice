//WAP to calculate area of circle using function.
#include<stdio.h>
float area_circle(float r);
int main(){
float r, area;
printf("\n Enter the radius of the circle:");
scanf("%f", &r);
area = area_circle(r);
printf("\n The area of circle is %f", area);
return 0;
}
float area_circle(float r)
{
    float area;
    area = (3.14*r*r);
    return area;
}