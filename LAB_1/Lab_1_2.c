#include <stdio.h>
int main(){
     int score ;
     printf("Input Score >> ");
     scanf("%d",&score);//input

    if(score<=0 || score > 100){
        printf("Erorr");
    } //ถ้าค่าน้อยยกว่า 0 หรือ มากกว่า 100 

    if(score <=100 && score >= 80){ //คะแนนอยู่ระหว่าง 100-80
        printf("Grade A ");
    }else if(score <=79 && score >= 70){//คะแนนอยู่ระหว่าง 79-70
    printf("Grade B");
    }else if(score <=69 && score >= 60){//คะแนนอยู่ระหว่าง 69-60
    printf("Grade C");
    }else if(score <=59 && score >= 50){//คะแนนอยู่ระหว่าง 59-50
    printf("Grade D");
    }else{ //คะแนนน้อยกว่า 50
     printf("Grade F");
    }
    return 0;
}