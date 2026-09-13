#include<stdio.h>
int main ()
{
    int i,j;
    for(i=1;i<=2;++i)
    {
        printf("Outer:%d\n",i);
        for(j=3;j>=1;--j)
        {
            printf("Inner:%d\n",j);
        }
    }
return 0;

}