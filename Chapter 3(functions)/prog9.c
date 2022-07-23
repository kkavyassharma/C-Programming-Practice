//WAP to calculate P(n/r)
int fact(int n);
#include<stdio.h>
int main(){
int n, r;
float P;
printf("\n Enter the value of n: ");
scanf("%d", &n);
printf("\n Enter the value of r: ");
scanf("%d", &r);
P = (float) fact(n)/fact(r);
printf("\n The value of P(%d/%d) is %f", n, r, P);
return 0;
}
int fact(int n){
   int i, f = 1;
   for(i=n; i>=1; i--)
   f = f * i;
   return f; 
}