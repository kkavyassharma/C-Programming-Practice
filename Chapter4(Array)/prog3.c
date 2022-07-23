//WAP to find the mean of n numbers using array.
#include<stdio.h>
int main(){
int n, i, a[20], sum = 0;
float mean = 0.0;
printf("\n Enter the number of elements:");
scanf("%d", &n);
for(i=0; i<n; i++)
{
    printf("\n a[%d] = ", i);
    scanf("%d", &a[i]);
}
printf("\n The elements of the array are:");
for(i=0; i<n; i++)
{
    printf("\n a[%d] = %d", i, a[i]);
}
for(i=0; i<n; i++)
{
    sum += a[i];
    mean = (float)sum/n;
}
printf("\n The sum of %d elements of the array is: %d", n, sum);
printf("\n The sum of %d elements of the array is: %.2f", n, mean);
return 0;
}