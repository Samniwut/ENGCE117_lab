#include <stdio.h>
int main(){
    int sum = 0 ;
    FILE *fptr ;
    char *FILENAME = "input_data.csv";
    fptr = fopen(FILENAME,"r");
        if(fptr == NULL){
            printf("ERROR : Could not open file %s ",FILENAME);
        }
    printf("---FILE READING PROCESS---\n");
    printf("Reading data from %s...\n",FILENAME);
    int num;
    printf("\n---DATA Analysis Report---\n");
    printf("data read : ");
    while(fscanf(fptr,"%d,",&num) != EOF){
        printf(" %d", num);
        sum += num;
    }
    printf("\nTotal Sum: %d\n", sum);
    fclose(fptr);
    
    return 0;
}