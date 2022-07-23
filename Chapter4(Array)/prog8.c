//WAP to enter n number of digits. Form a number using these digits.
#include<stdio.h>
#include<math.h>
int main(){
int number=0, a[50], n, i;
printf("\n Enter the number of digits: ");
scanf("%d", &n);
for(i=0; i<=n; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
}
for(i=0; i<=n; i++){
       number = (number + (a[i] * pow(10, i)));
       
}
printf("\n The number formed by the digits is %d", number);
return 0;
}