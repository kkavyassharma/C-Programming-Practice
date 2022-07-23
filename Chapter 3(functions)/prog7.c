//WAP, using functions, to find whether a number is even or odd.
#include<stdio.h>
int evenodd(int n);
int main(){
int n, num_is;
printf("Enter a number:");
scanf("%d", &n);
num_is = evenodd(n);
if(num_is == 1)
printf("\n Number is even");
else
printf("\n Number is odd");
return 0;
}
int evenodd(int n)
{
    if(n%2 == 0)
    return 1;
    else 
    return 0;
}