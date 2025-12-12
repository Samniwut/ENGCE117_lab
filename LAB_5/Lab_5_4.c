#include <stdio.h>
 struct Student{
    int id ;
    int score ;
 };

int find_max_score_id (struct Student Students[],int SIZE);
int main(){

    int SIZE = 3 ;
    int i ;
    struct Student Students[SIZE];
    for( i = 0 ; i < SIZE ;i++){
      printf("Enter date for Students %d  \n",i+1);
      printf("Enter ID : ");
      scanf("%d",&Students[i].id);
      printf("Enter Score : ");
      scanf("%d",&Students[i].score);
     
    }
    printf("\n---STUDENT SCOREREPORT -- \n");
    printf("  ID | Score \n");
    for ( i = 0; i < SIZE; i++){
        printf("%d | %d \n",Students[i].id,Students[i].score);
    }

    printf("TOPPERFORMER ID : %d\n",find_max_score_id (Students,SIZE));
    
    return 0;
}
int find_max_score_id (struct Student Students[],int SIZE){
    //max date
        int max_score = Students[0].score;
        int max_id = Students[0].id;
        
        for (int i = 1 ; i < SIZE; i++)
        {
            if(Students[i].score > max_score){
                max_score = Students[i].score;
                max_id = Students[i].id;
            }
        }
        
    return max_id ; 
}