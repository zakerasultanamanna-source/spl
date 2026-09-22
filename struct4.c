#include<stdio.h>
struct car
{
    char  brand[30];
    int year;
};
int main()
{
    struct car car = {"Toyota",2020};
    struct car *ptr = &car;
    printf("Brand=%s\n",ptr->brand);
    printf("Year = %d\n",ptr->year);
}