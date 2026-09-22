#include<stdio.h>
union myunion
{
    int mynum;
    char mystring[36];
};
int main ()
{
    union myunion u1;
    printf("Size=%zu bytes\n",sizeof(u1));
    return 0;
}