#include <stdio.h>

int Gross_Salary ;
float tax_rate= 0.0 ,tex_amount = 0.0 ,net_salary = 0.0;

void GetFunc();
int main(){

printf("Enter Gross Salary (THB/month, integer) : ");
scanf("%d",&Gross_Salary);

tex_amount = Gross_Salary * tax_rate;
net_salary = (float)Gross_Salary - tex_amount;

printf("\n--- SALARY CALCULATION REPORT --- \n");
printf("Gross Salary: %d THB\n",Gross_Salary);
printf("Tax Rate Applied : %.0f%%\n",tax_rate * 100);
printf("Tax Amount Deducted: %.2f THB\n" ,tex_amount);
printf("Net Salary ; %.2f THB\n",net_salary);
    return 0;
}

void GetFunc(){
    if(Gross_Salary >= 50000){
   tax_rate = 10.0;
}else if(Gross_Salary >= 20000 && Gross_Salary < 50000){
   tax_rate = 5.0;
}else{
    tax_rate = 0.0;
}
}