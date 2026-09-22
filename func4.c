#include<stdio.h>
int x=5;
void myfunction()
{
    printf("%d\n",++x);
}
int main()
{
    myfunction();
    printf("%d\n",x);
    return 0;
}