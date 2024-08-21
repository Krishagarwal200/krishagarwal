#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[100];
        int salary;
        int age;
    } a,b ;
    
    printf("enter name,salary,age of 1st");
    gets(a.name);
    scanf("%d",&a.salary);
    scanf("%d",&a.age);
    printf("enter name,salary,age of 1st");
    
    gets(b.name);
    

    scanf("%d",&b.salary);
    scanf("%d",&b.age);

    printf("%s",a.name);
    printf("%d",b.age);

}
