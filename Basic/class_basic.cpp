#include <iostream>
using namespace std;
class employee
{
private:
    int salary;

public:
    char name[50];
    int employee_id;
    void print_salary();
    void print_info();
};
void employee ::print_salary()
{
    // salary = 50000;
    printf("Enter the salary : ");
    scanf("%d", &salary);
    printf("The salary is %d\n", salary);
}
void employee ::print_info()
{
    employee_id = 101;
    printf("The ID is %d\n", employee_id);
    printf("Enter name : ");
    scanf("%s", &name);
    printf("Name = %s\n", name);
}
int main()
{
    employee person;
    person.print_salary();
    person.print_info();
    return 0;
}