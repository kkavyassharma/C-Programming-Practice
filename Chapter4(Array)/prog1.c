//WAP to read and display n numbers using an array.
#include<stdio.h>
int main(){
int i=0, a[20], n;
printf("\n Enter the number of elements:");
scanf("%d", &n);
for(i=0; i<n; i++){
    printf("\n a[%d] = ", i);
    scanf("%d", &a[i]);
} 
printf("\n The elements of the array are:");
for(i=0; i<n; i++)
{
     printf("\n a[%d] = %d", i, a[i]);
}
return 0;
}