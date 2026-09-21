#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,r2,c1,c2;
    int i,j,k;
    printf("R and C of first matrix=");
    scanf("%d%d",& r1, &c1);
    printf("R and C of second Matrix=");
    scanf("%d%d",& r2,& c2);
    if(c1!=r2)
    {printf("Multiplication is not possible\n");}
    printf("Enter element of first matrix=");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;c++)
        {
            scanf("%d ",& a[i][j]);
        }
    }
     printf("Enter element of second matrix=");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;c++)
        {
            scanf("%d ",& b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    for(j=0;j<c2;j++)
    c[i][j]=0;
    for(k=0;k<c1;k++)
    {
        c[i][j]=a[i][k]*b[k][j;]
    }
    printf("Resultant Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {printf("%d ",c[i][j]);}
        printf("\n");
    }
    return 0;
}