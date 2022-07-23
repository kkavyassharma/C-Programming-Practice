//WAP to print the position of the smallest of n numbers using array.
#include<stdio.h>
int main(){
int i, n, a[100], small = 11111, pos;
printf("\n Enter the size of the array:");
scanf("%d", &n);
for(i=0; i<n; i++)
{
    printf("\n a[%d] = ", i);
    scanf("%d", &a[i]);
}
for(i=0; i<n; i++)
{
    if(a[i]<small)
    {
    small = a[i];
    pos = i;
    }
}
printf("\n The smallest number is %d", small);
printf("\n The position of the smallest number is %d", pos);
return 0;
}