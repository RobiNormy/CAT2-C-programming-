#include <stdio.h>
#include <string.h>
struct employee{
    char name [25];
    int id;
    char department[20];
    float salary;
    char email[50];
};
int main(){
    struct employee emp1, emp2;
    strcpy(emp1.name, "John Doe");
    emp1.id = 12345;
    strcpy(emp1.department, "Human Resources");
    emp1.salary = 55000.50;
    strcpy(emp1.email, "john.doe@compaany.com");
    printf("%s\n", emp1.name);
    printf("%d\n", emp1.id);
    printf("%s\n", emp1.department);
    printf("%f\n", emp1.salary);
    printf("%s\n", emp1.email);
    return 0;
}