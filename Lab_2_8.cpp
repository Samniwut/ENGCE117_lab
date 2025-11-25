#include <stdio.h>
void printLine(int passaCount, int failcount);
int main(){
     int N, i;
     int studentId, score, totalClasses, abesntClasses;
     float attendancePercent;
     int passaCount = 0;
     int failcount = 0; 

     if(scanf("%d",&N) != 1){
        return 1 ;
     }
        for ( i = 0; i < N; i++){

            if (scanf("%d %d %d %d",&studentId, &score, &totalClasses, &abesntClasses) != 4){
                break;
            }
            attendancePercent = (float)(totalClasses -abesntClasses)/ totalClasses * 100.0;

            if(score >= 50 && attendancePercent >= 75.0){
                printf("Student ID %d : Pass \n",studentId);
                passaCount++;
            }else if(score < 50 && attendancePercent < 75.0){
                printf("Student ID %d : FAIL - Both Score and Low Attendance \n",studentId);
                failcount++;
            }
            else if(score < 50){
                printf("Student ID %d : FAIL - Low Score \n",studentId);
                failcount++;
            }else if(attendancePercent < 75.0){
                printf("Student ID %d : FAIL - Low Attendance(70.00%) \n",studentId);
                failcount++;
            }
            
        }
      printLine(passaCount,failcount);

    return 0;

}
void printLine(int passaCount, int failcount){
     printf("--Summary--\n");
    printf("Total Pass: %d \n",passaCount);
    printf("Total Fail: %d \n",failcount);

}