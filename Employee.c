#include<stdio.h>
#include<string.h>

struct Organisation
{
    char name1;
    char name2;
    char location;
    int total;
};

struct Employee
{
    char name[50];
    int age;
    int salary;
};
int main ()
{struct Organisation Org;
    printf("***Organisation management***\n");
    printf("Enter organisation name:\n");
    scanf("%d",& Org.name1);
    printf("Enter organiser name:\n");
    scanf("%d",& Org.name2);
    printf("Enter location:\n");
    scanf("%d",& Org.location);
    printf("Total employee:\n");
    scanf("%d",& Org.total);


    printf("***Employee information***");
    struct Employee emp[100];;
    int i;
    for(i=1;i<Org.total;i++)
    {
        printf("Employee name:%d\n",i);
    gets(emp[i].name);
    printf("Enter age:\n");
    scanf("%d",& emp[i].age );
    printf("Enter salary:\n");
    scanf("%d",& emp[i].salary);
    }
    for(i=1;i<Org.total;i++)
    {
        printf("Employee name:%d\n",i);
        printf("Age:%d\n",emp[i].age);
        printf("Salary:%d\n",emp[i].salary);
    }
    return 0;
}
