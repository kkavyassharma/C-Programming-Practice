//WAP to read a sorted list of floating point values and then calculate and display the median of the values.
#include<stdio.h>
int main(){
int n, i;
float a[50], median = 0.0;
printf("\n Enter the size of array: ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=1; i<=n; i++)
{
    printf("\n a[%d] = ", i);
    scanf("%f", &a[i]);
}
if(n%2==0){
    median = (a[n/2]+a[n/2+1])/2.0;
}
else{
    median = (a[n/2 + 1]);
}
printf("\n MEDIAN = %f", median);
return 0;
}