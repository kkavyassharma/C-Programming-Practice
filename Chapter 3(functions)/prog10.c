//WAP to calculate C(n/r).
#include<stdio.h>
int fact(int n);
int main(){
int n, r, deno;
float C;
printf("\n Enter the value of n: ");
scanf("%d", &n);
printf("\n Enter the value of r: ");
scanf("%d", &r);
deno = fact(n-r) * fact(r);
C = (float) fact(n)/deno;
printf("\n The value of P(%d/%d) is %f", n, r, C);
return 0;
}
int fact(int n){
   int i, f = 1;
   for(i=n; i>=1; i--)
   f = f * i;
   return f; 
}
