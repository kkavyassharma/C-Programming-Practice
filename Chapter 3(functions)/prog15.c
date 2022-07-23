// Storage classes (auto)
#include<stdio.h>
void func1()
{
    int a = 10;
    printf("\n a = %d", a);//auto integer local to func1
}
void func2()
{
    int a = 20;
    printf("\n a = %d", a);//auto integer local to func2
}
int main(){
int a = 30; //auto integer local to main()
func1();
func2();
printf("\n a = %d", a);
return 0;
}