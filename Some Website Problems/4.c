//Write a C program  that takes two float number as user input, multiply them and print the result
#include<stdio.h>
int main(){
float a,b;
float m;
scanf("%f %f",&a,&b);
// we take two input by space note: we cane use enter in here;


/* we can solve it in 2 way, 
1st way is: take another variable an asing a*b; 
sceond way is: in the print section we print the result by a*b
*/
m=a*b;
printf("mutiply of %f and %f \n %f * %f=%f ",a,b,a,b,m);
printf("mutiply of %f and %f \n %f * %f=%f ",a,b,a,b,a*b);


}