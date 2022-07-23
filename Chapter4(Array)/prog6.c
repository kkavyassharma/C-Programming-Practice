//WAP to interchange the largest and the smallest number in the array.
#include<stdio.h>
int main(){
int i, n, a[100], large = -1111, small = 1111, temp, pos_small, pos_large;
printf("\n Enter the size of array: ");
scanf("%d", &n);
for(i=0; i<n; i++)
{
    printf("\n a[%d] = ", i);
    scanf("%d", &a[i]);
}
for(i=0; i<n; i++)
{
    if(a[i] > large){
    large = a[i];
    pos_large = i;
    }
    if(a[i] < small){
        small = a[i];
        pos_small = i;
    } 
}
temp = a[pos_large];
a[pos_large] = a[pos_small];
a[pos_small] = temp;
printf("\n ------------------------------------------------------- \n");
for(i=0; i<n; i++)
{
    printf("\n a[%d] = %d \n", i, a[i]);
}
return 0;
}