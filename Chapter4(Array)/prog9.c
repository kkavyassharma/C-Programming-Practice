//WAP to find whether the array of integers contain a duplicate number.
#include<stdio.h>
int main(){
int n, a[50], i, j, flag = 0, dup = 0, dup_i =0, dup_j = 0;
printf("\n Enter the size of array:");
scanf("%d", &n);
for(i=0; i<n; i++){
    printf("\n a[%d] = ", i);
    scanf("%d", &a[i]);
}
for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
   if(a[i] == a[j] && i != j){
   flag = 1;
   printf("Duplicate number is %d at position %d and %d", a[i], i, j);
   }
}
}
if(flag == 0)
printf("No Duplicate");
return 0;
}
