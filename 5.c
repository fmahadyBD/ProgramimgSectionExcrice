//Write a C program  that takes two double number as user input, divide them and print the result
//Write a C program  that takes two float number as user input, multiply them and print the result
#include<stdio.h>
int main(){
double a,b;
double m;
scanf("%lf %lf",&a,&b);
// we take two input by space note: we cane use enter in here;


/* we can solve it in 2 way, 
1st way is: take another variable an asing a/b; 
sceond way is: in the print section we print the result by a/b
*/
m=a/b;
printf("divide of %lf and %lf \n %lf / %lf=%lf ",a,b,a,b,m);
printf("divide of %lf and %lf \n %lf / %lf=%lf ",a,b,a,b,a/b);


}