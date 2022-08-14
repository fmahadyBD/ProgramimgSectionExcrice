//Write a C program  to find out area of a triangle
#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the ground lenth of triangle:\n");
    scanf("%f",&a);
     printf("Enter the hight lenth of triangle:\n");
    scanf("%f",&b);
    c=(a*b)/2;
    printf("The area of the triangle is = %f",c);
}