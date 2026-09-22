#include<stdio.h>
enum level
{
    Low=5,
    Medium,
    High,
};
int main ()
{
    enum level myVar = Medium;
    printf("%d",myVar);
    return 0;
}