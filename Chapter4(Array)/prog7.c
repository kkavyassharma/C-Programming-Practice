//WAP to find the second largest number of an array
#include<stdio.h>
int main(){
int i, n, a[100], largest = -1111, second_largest = -1234;
printf("\n Enter any number: ");
scanf("%d", &n);
for ( i = 0; i < n; i++)
{
  printf("\n Enter the number: ");
  scanf("%d", &a[i]);
}

for (i = 0; i < n; i++)
{
   if(a[i]>largest)
   largest = a[i];
}
for (i = 0; i < n; i++)
{
   if(a[i] != largest){
       if(a[i]>second_largest)
       second_largest = a[i];
   }
}
printf("\n The second largest number of the array is %d.", second_largest);
return 0;
}