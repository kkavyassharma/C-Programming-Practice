//56 WAP to enter a octal number. Calculate and display the decimal equivalent of this number.
#include<stdio.h>
#include<math.h>
int main(){
int num, rem, dec_num = 0, i = 0;
printf("Enter any octal number:");
scanf("%d", &num);
while(num != 0)
{
    rem = num % 10;
    dec_num += rem * pow(8, i);
    num = num/10;
    i++;
}
printf("The decimal equivalent of the number is: %d", dec_num);
return 0;
}