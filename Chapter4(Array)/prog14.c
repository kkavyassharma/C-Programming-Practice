//WAP to insert a number in an array that is already sorted in ascending order.
#include<stdio.h>
int main(){
    int i, a[50], count[50] = {0}, flag = 0, n, j;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("\n a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++)
            if(a[i] == a[j]){
                count[i] = count[i] + 1;}
        if(count[i] == count[j] && i!=j){
            flag = 1;
        }
        
    }
    for(i=0; i<n; i++){
        printf("count[%d] = %d", i, count[i]);
    }
    if(flag = 1)
        printf("False");
    else 
        printf("True");
 return 0;
}