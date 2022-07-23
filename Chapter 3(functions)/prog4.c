//Write a function to swap values of two variables
#include<stdio.h>
int swap_callbyvalue(int a, int b);
int swap_callbyref(int *c, int *d);
int main(){
int a, b, c, d;
printf("\n Enter two numbers:");
scanf("%d %d", &a, &b);
printf("\n Before swapping a = %d and b = %d", a, b);
swap_callbyvalue(a, b);
printf("\n In main function a = %d and b = %d", a, b);
printf("\n Enter two numbers:");
scanf("%d %d", &c, &d);
printf("\n Before swapping c = %d and d = %d", c, d);
swap_callbyref(&c, &d);
printf("\n After swapping c = %d and d = %d", c, d);
return 0;
}
int swap_callbyvalue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\n In call by value function a = %d and b = %d", a, b);
}
int swap_callbyref(int *c, int *d){
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    printf("\n In call by reference function c = %d and d = %d", *c, *d);
}