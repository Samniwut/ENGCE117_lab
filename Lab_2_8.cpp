#include <stdio.h>
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

            if(score >= 50 && attendancePercent >= 75.0){//คะแนนผ่าน 50 ขึ้นไป และเข้าเรียนไม่น้อยกว่า 75%
                printf("Student ID %d : Pass \n",studentId);
                passaCount++;
            }else if(score < 50 && attendancePercent < 75.0){//คะแนนไม่ผ่าน และเข้าเรียนน้อยกว่า 75%
                printf("Student ID %d : FAIL - Low Score and Low Attendance(%.2f%%) \n",studentId, attendancePercent);
                failcount++;
            }
            else if(score < 50){//คะแนนไม่ผ่าน
                printf("Student ID %d : FAIL - Low Score \n",studentId);
                failcount++;
            }else if(attendancePercent < 75.0){//เข้าเรียนน้อยกว่า 75%
                printf("Student ID %d : FAIL - Low Attendance(70.00%) \n",studentId);
                failcount++;
            }
            
        }//end for
    printf("--Summary--\n");
    printf("Total Pass: %d \n",passaCount);
    printf("Total Fail: %d \n",failcount);

    return 0;

}