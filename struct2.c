#include<stdio.h>
struct mystructure
{
    int mynum;
    char myletter;
    char mystring[30];
};
int main()
{
    struct mystructure s1 = {13,'B',"Some text"};
    struct mystructure s2;
    s2=s1;
    printf("%d %c %s",s2.mynum,s2.myletter,s2.mystring);
    return 0;
}