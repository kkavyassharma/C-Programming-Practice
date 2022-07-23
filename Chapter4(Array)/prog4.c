//WAP to find the largest of n numbers using array.
#include<stdio.h>
int main(){
int i, n, a[100], large = -1111;
printf("\n Enter the size of array:");
scanf("%d", &n);
for(i=0; i<n; i++)
{
    printf("\n a[%d] = ", i);
    scanf("%d", &a[i]);
}
for(i=0; i<n; i++)
{
    if(a[i] > large)
    large = a[i];
}
printf("\n The largest number is %d", large);
return 0;
}