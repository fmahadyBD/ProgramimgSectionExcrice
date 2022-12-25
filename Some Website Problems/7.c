//Write a C program  to find out area of a circle  
#include<stdio.h>
int main(){
    float a,PI,r;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&a);
    PI=3.1416;
    r=a*a*PI;
    printf("The Area of circle is %f",r);
}