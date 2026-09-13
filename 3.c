#include<stdio.h>
int main ()
{
    int i=0;
    while(i<40)
    {
        if(i==4)
        {
            i++;
            continue;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;
}