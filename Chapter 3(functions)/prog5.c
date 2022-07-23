//WAP to find biggest of three integers using functions.
#include<stdio.h>
int large(int a, int b, int c);
int main(){
int a,b,c,largest;
printf("\n Enter three numbers:");
scanf("%d %d %d", &a, &b, &c);
largest = large(a, b, c);
printf("The largest number is %d", largest);
return 0;
}
int large(int a, int b, int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else if(c>a && c>b)
    return c;
}