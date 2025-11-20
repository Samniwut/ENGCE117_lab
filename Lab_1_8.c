#include <stdio.h>
int Workmode(int hour);
void printf_RelaxMode ();
int main() {
    int dayCode, hour;

    // รับค่ารหัสวันและชั่วโมง
    if (scanf("%d %d", &dayCode, &hour) != 2) {
        return 1; // Handle input failure
    }
    switch (dayCode){
        case 1 :
            Workmode(hour);
            break;
        case 2 :
            Workmode(hour);
            break;
        case 3 :
            Workmode(hour);
            break;
        case 4 :
            Workmode(hour);
            break;
        case 5 :
            Workmode(hour);
            break;
        case 6 :
            printf_RelaxMode ();
            break;
        case 7 :
            printf_RelaxMode ();
            break;
    default:
    printf("Invalid Day Code");
    }
    // TODO: Implement the main switch statement with nested if-else logic inside cases 1-5

    return 0;
}
int Workmode(int hour){
        if(hour >= 8 && hour <=17){
               printf("System Running (Workday)");
            }else{
               printf("System Idle (Off-hours)");
    }
}
void printf_RelaxMode (){
  printf("Weekend Relax Mode");
}
