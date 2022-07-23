//WAP to insert a number at a given location in an array.
#include<stdio.h>
int main(){
int n, a[50], i, pos, value, upper_bound;
printf("\n Enter the size of array:");
scanf("%d", &n);
upper_bound = n-1;
for(i=0; i<n; i++){
    printf("\n a[%d] = ", i);
    scanf("%d", &a[i]);
}
++upper_bound;
printf("\n Enter the position where the value is to be added: ");
scanf("%d", &pos);
printf("\n Enter the value of the element to be inserted: ");
scanf("%d", &value);
i = n;
n = n+1;
while(i>=pos){
    a[i+1] = a[i];
    --i;
}
a[pos] = value;
for(i=0; i<n; i++){
    printf("\n a[%d] = %d", i, a[i]);
}
return 0;
}