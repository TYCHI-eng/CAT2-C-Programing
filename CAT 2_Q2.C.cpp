#include<stdio.h>

#include<string.h>

struct Employee{

char Name[25];

int ID;

char Department[20];

float Salary;

char Email[50];

}Employee;
int main(){

strcpy(Employee.Name,"John Doe");

Employee.ID=12345;

strcpy(Employee.Department,"Human Resources");

Employee.Salary=55000.50;

strcpy(Employee.Email,"john.doe@company.com");

printf("Name:%s\n",Employee.Name);

printf("ID:%d\n",Employee.ID);

printf("Department:%s\n",Employee.Department);

printf("Salary:%.2f\n",Employee.Salary);

printf("Email:%s\n",Employee.Email);

return 0;

}