//Recursive Function
#include<stdio.h>
int fact(int n);
int main(){
int n, f;
printf("\n Enter a number:");
scanf("%d", &n);
f = fact(n);
printf("\n The factorial of %d is %d", n, f);
return 0;
}
int fact(int n){
    if(n==1 || n==0)
    return 1;
    else
    return (n * fact(n-1));
}