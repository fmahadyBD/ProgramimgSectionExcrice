// Write a C program  that takes two integer number as user input, subtract them and print the result
#include<stdio.h>
int main(){
int a,b;
int s;
scanf("%d %d",&a,&b);
// we take two input by space note: we cane use enter in here;


/* we can solve it in 2 way, 
1st way is: take another variable an asing a+b; 
sceond way is: in the print section we print the result by a+b
*/
s=a-b;
printf("subtract of %d and %d \n %d - %d=%d ",a,b,a,b,s);
printf("subtract of %d and %d \n %d - %d=%d ",a,b,a,b,a-b);


}