#include<stdio.h>
int main ()
{
    int item=50;
    float cost=9.99;
    float totalcost=item*cost;
    char currency=$;
    printf("num of items:%d\n",item);
    printf("Cost per item:%.2f %c",cost,currency);
    printf("Total cost =%.2f %c",totalcost,currency);
    return 0;
}