#include <stdio.h>
struct Employee
{
    int id;
    int salaly;
};
void find_min_max_salary(struct Employee staff_date[],int SIZE , int *max ,int *min);
int main(){

    int SIZE = 4,i;
    int max_salary;
    int min_salary;

struct Employee staff_date[SIZE];

for(i = 0 ; i < SIZE ;i++){
    printf("--- Emp;oyee %d --- \n",i+1);
    printf("Enter ID : ");
    scanf("%d",&staff_date[i].id);
    printf("Enter Salary : ");
    scanf("%d",&staff_date[i].salaly);
}
find_min_max_salary(staff_date,SIZE,&max_salary,&min_salary);
//print id and salary
 printf("--- ID | SALARY ---\n");
for(i = 0 ; i < SIZE ; i++){ 
    printf("%3d  | %d\n",staff_date[i].id,staff_date[i].salaly);
}
printf("\nMaxinum Salary Found : %d\n",max_salary);
printf("Mininum Salary Found : %d\n",min_salary);
    return 0;
}
void find_min_max_salary(struct Employee staff_date[],int SIZE , int *max ,int *min){
  *max = staff_date[0].salaly;
  *min = staff_date[0].salaly;

  for (int i = 0; i < SIZE; i++){
    if(staff_date[i].salaly > *max){
        *max = staff_date[i].salaly;
    }else{
        *min = staff_date[i].salaly;
    }
  }
}
