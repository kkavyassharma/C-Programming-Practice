//WAP to print the Fibonacci series using recursion.
#include<stdio.h>
int fib(int);
int main(){
int n;
printf("\n Enter the number of terms in the series:");
scanf("%d", &n);
for(int i=0; i<n; i++){
    printf("\n Fibonacci(%d) = %d", i, fib(i));
}
return 0;
}
int fib(int num){
    if(num <= 2)
    return 1;
    else
    return(fib(num - 1) + fib(num - 2));
}