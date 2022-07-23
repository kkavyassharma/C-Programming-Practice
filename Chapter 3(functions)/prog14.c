//Program Scope 
#include<stdio.h>
int x = 10;
void print();
int main(){
printf("\n The value of x in main() = %d", x);
int x = 2;
printf("\n The value of local variable x in main() = %d", x);
print();
return 0;
}
void print(){
    printf("\n The value of x in print() = %d", x);
}
