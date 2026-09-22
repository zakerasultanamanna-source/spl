#include<stdio.h>
struct owner
{
    char firstname[30];
    char lastname[30];
};
struct car
{
    char brand[30];
    int year;
    struct owner owner;
};
int main ()
{
    struct owner person ={"john","Doe"};
    struct car car1 = {"Toyota",2010,person};
}