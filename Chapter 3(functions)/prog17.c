//Storage classes (Static)
#include<stdio.h>
void print(void);
int main(){
printf("\n First call of print()");
print();
printf("\n Second call of print()");
print();
printf("\n Third call of print()");
print();
return 0;
}
void print()
{
    static int x;
    int y = 0;
    printf("\n Static integer variable, x = %d", x);
    printf("\n Integer variable, y = %d", y);
    x++;
    y++;
}