#include<stdio.h>
int main ()
{
    int i,j;
    int A[2][2] = {{1,2},{2,3}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}