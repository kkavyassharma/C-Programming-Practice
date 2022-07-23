// Storage classes (Extern)
#include<stdio.h>
#include<FILE2.c>
int x;
void print(void);
int main()
{
    x = 10;
    print("\n x in FILE1 = %d", x);
    print();
    return 0;
}
