#include <stdio.h>
void print_line(int ROWS ,int COLS);
int main(){
    int ROWS = 3 , COLS = 3;
    int date[ROWS][COLS];
    int i,j;
    printf("Enter %d integer number for the 3x3 array : \n",ROWS*COLS);
    for(i =0 ; i< ROWS ;i++){
        for ( j = 0; j < COLS; j++){
            printf("Enter element for Row %d, Col %d :",i,j);
            scanf("%d",&date[i][j]);
        }
    }
    print_line(ROWS,COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%2d", date[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void print_line(int ROWS ,int COLS){
    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size %d Rows x %d Columns\n",ROWS,COLS);
    printf("Content (Teble Format) : \n");
}
