//WAP to add two numbers.l
#include<stdio.h>
int add(int a, int b);
int main(){
int x, y, sum=0;
printf("\n Enter the first number:");
scanf("%d", &x);
printf("\n Enter the second number:");
scanf("%d", &y);
sum = add(x,y);
printf("The sum of %d and %d is %d", x, y, sum);
return 0;
}
int add(int a, int b){ 
    return a+b;
}