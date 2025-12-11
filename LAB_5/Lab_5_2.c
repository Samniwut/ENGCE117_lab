#include <stdio.h>

struct Employee{
    int id;
    int gross_salary;
    int bonus;
    int total_income ;
};
 struct Employee emp;

float calculate_net_salary(int total_income);
void Getinput();

int main(){
   
   Getinput();
   emp.total_income = emp.gross_salary + emp.bonus;
   float net_salary = calculate_net_salary(emp.total_income);
   
   printf("\n -- EMPLOYEE SALARY REPORT -- \n");
   printf("ID : %d\n",emp.id);
   printf("Gross Salary : %d\n",emp.gross_salary);
   printf("Bomus : %d\n",emp.bonus);
   printf("Total Inacome: %d\n",emp.total_income);
   printf("Net Salary : %.2f\n",net_salary);

    return 0;
}

void Getinput(){
    printf("Enter Employee ID : ");
    scanf("%d",&emp.id);
    printf("Enter Employee Gross-Salary : ");
    scanf("%d",&emp.gross_salary);
    printf("Enter Employee Bonus : ");
    scanf("%d",&emp.bonus);
}
float calculate_net_salary(int total_income){
    float net_salary,tax_rate = 0.0,total_tax = 0.0;
    if (total_income > 30000){
        tax_rate = 10;
    }else if (total_income <= 30000){
        tax_rate = 5;
    }
    total_tax = total_income * (tax_rate/100);
    net_salary = total_income - total_tax;
  return net_salary;
}