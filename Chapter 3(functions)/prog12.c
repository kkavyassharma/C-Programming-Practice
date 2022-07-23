//WAP to sum the series 1/1! + 4/2! + 27/3!........
#include<stdio.h>
int fact(int n);
int main(){
int i, deno, n, num;
float sum = 0.0;
printf("\n Enter the value of n:");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
    num = i*i;
    deno = fact(i);
    sum += (num/(float)deno);
}
printf("\n The Sum of the series till n = %d is %.2f", n, sum);
return 0;
}
int fact(int n){
   int i, f = 1;
   for(i=n; i>=1; i--)
   f = f * i;
   return f;
}
