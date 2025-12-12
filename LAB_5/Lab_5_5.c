#include <stdio.h>
#include <string.h>

 struct Student{
    int id ;
 };

void check_id_existencs (struct Student Students[],int SIZE);
int main(){

    int SIZE = 4 ;
    int i ;
    struct Student Students[SIZE];
    for( i = 0 ; i < SIZE ;i++){
      printf("Enter date for Students %d \n",i+1);
      printf("Enter ID : ");
      scanf("%d",&Students[i].id);
     
    }
    printf("\n--- ID SEARCH REPORT -- \n");
    printf(" Recorded IDs: ");
    for ( i = 0; i < SIZE; i++){
        printf("%2d ",Students[i].id);
    }
     check_id_existencs(Students,SIZE);
    
    return 0;
}
 void check_id_existencs (struct Student Students[],int SIZE){
        int id_search ;
        char message[20] = "ID NOT FOUND in the system.";
        printf("Enter Search ID : ");
        scanf("%d",&id_search);
        int max_id = Students[0].id;
        
        for (int i = 0 ; i < SIZE; i++)
        {
            if(id_search == Students[i].id){
                strcpy(message, "ID FOUND in the system.");
                break;
            }
        }
        printf("\n%s",message);
 
}