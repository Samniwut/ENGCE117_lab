#include <stdio.h>
void print_Matrix(int rows , int cols , int Matrix[][cols]);
void transpose_Matrix(int rows, int cols, int A[][cols], int BT[][rows]);
void process(int rows,int cols,int A[][cols],int BT[][cols] ,int C[][cols]);
int main(){

   int A_ROWS = 2 , A_COLS = 3 ,B_ROWS = 2 , B_COLS = 3 , BT_ROWS = 3 , BT_COLS = 2, C_ROWS = 2, C_COLS = 2;
   int A[A_ROWS][A_COLS];
   int B[B_ROWS][B_COLS];
   int BT[BT_ROWS][BT_COLS];
   int C[C_ROWS][C_COLS];
   int i, j, k; 

   printf("Enter elements for Matrix A (2x3);\n");
   for ( i = 0; i < A_ROWS; i++)
   {
      for(j = 0 ; j < A_COLS ; j++){
        printf("A[%d][%d]:",i ,j);
        if(scanf("%d",&A[i][j]) != 1){
            break;
        }
      }
   }
   printf("\n-----------------------\n");
   printf("Enter elements for Matrix B (2x3);\n");
   for ( i = 0; i < B_ROWS; i++)
   {
      for(j = 0 ; j < B_COLS ; j++){
        printf("B[%d][%d]:",i ,j);
        scanf("%d",&B[i][j]);
      }
   }
    printf("Matrix A (2x3)-----\n");
    print_Matrix(A_ROWS, A_COLS, A);

    printf("Matrix B (2x3)-----\n");
    print_Matrix(B_ROWS, B_COLS, B);

    transpose_Matrix(B_ROWS,B_COLS,B,BT);
    printf("Matrix BT (3x2)-----\n");
    print_Matrix(BT_ROWS,BT_COLS,BT);
    
    printf("Result Matix C (AxBT, 2x2 )---- \n");
    process(C_ROWS,C_COLS,A,BT,C);
    return 0;

}
void print_Matrix(int rows , int cols , int Matrix[rows][cols]){
    for ( int i = 0; i < rows; i++)
   {
      for(int j = 0 ; j < cols ; j++){
        printf("%2d",Matrix[i][j]);
      }
      printf("\n");
   }
}
void transpose_Matrix(int rows, int cols, int B[][cols], int BT[][rows]){
   for(int i = 0 ; i < rows ; i++){
      for(int j = 0 ; j < cols ; j++){
         BT[j][i]=B[i][j];
      }
   }
}

void process(int rows,int cols,int A[][cols],int BT[][cols] ,int C[][cols]){
   int i, j, k;
   for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * BT[k][j];
            }
        }
    }
    print_Matrix(rows,cols,C);
}