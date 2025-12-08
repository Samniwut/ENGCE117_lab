#include <stdio.h>
void print_line();
int main(){
    int ROWS = 2 , COLS = 4;
    int Matrix[ROWS][COLS];
    int total_sum = 0 ;
    int i,j;
    printf("Enter %d integer number for the 2x4 array : \n",ROWS*COLS);
    for(i =0 ; i< ROWS ;i++){
        for ( j = 0; j < COLS; j++){
            printf("Enter element for Row %d, Col %d :",i,j);
            scanf("%d",&Matrix[i][j]);
        }
    }
    print_line();
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%2d", Matrix[i][j]);
            total_sum += Matrix[i][j];
        }
        printf("\n");
    }
    printf("\n Total Sum of all Elements : %d\n",total_sum);
    return 0;
}
void print_line(){
    printf("\n--- 2D ARRAY SUMMATION REPORT ---\n");
    printf("Rescorded Matrix(2x4) \n");
}
