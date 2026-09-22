#include<stdio.h>
enum level
{
    low=25,
    medium=50,
    high=75,
};
int main()
{
    enum Level myVar = medium;
    printf("%d",myVar);
    return 0;

}