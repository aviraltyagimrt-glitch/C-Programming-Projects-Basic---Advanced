#include <stdio.h>
#include <math.h>
#define PI 3.14
float distance(float x1,float y1,float x2,float y2)
{
    float d1;
    float d2;
    d1 = x2 - x1;
    d2 = y2 - y1;
    float dist = hypot(d1,d2);
    return dist;
}
float area_of_circle(float (*z)(float x1,float y1,float x2,float y2),float x1,float y1,float x2,float y2)
{
    z = &distance;
    float area;
    float d = z(x1,y1,x2,y2);
    area = PI * d * d;
    return area;
}
int main(int argc,char *argv[])
{
    float x1,y1,x2,y2;
    printf("Enter the value of x1\n");
    scanf("%f",&x1);
    printf("Enter the value of y1\n");
    scanf("%f",&y1);
    printf("Enter the value of x2\n");
    scanf("%f",&x2);
    printf("Enter the value of y2\n");
    scanf("%f",&y2);
    float (*g)(float,float,float,float);
    g = &distance;
    float dist = g(x1,y1,x2,y2);
    printf("The distance between the two points is: %.2f\n", dist);
    float area = area_of_circle(&distance,x1,y1,x2,y2);
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}