//WAP to read and display n random numbers using an array
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main(){
int arr[MAX], i, RandNo;
for(i=0; i<MAX; i++){
    RandNo = rand() % MAX;//rand is a predefined function.
    arr[i] = RandNo;
}
printf("\n The contents of the array are: ");
for(i=0; i<MAX; i++)
{
    printf("\t %d", arr[i]);
}
return 0;
}