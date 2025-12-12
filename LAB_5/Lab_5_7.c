#include<stdio.h>
void Loop_print(int *Numbers, int SIZE);
void sort_array_ascending(int *Numbers ,int SIZE);
int main(){
    int SIZE = 5;
    int Numbers[SIZE];
    int original_copy[SIZE];
     for(int i = 0 ; i < SIZE ; i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&Numbers[i]);
     }
    for(int i = 0 ; i < SIZE ; i++){
        original_copy[i] = Numbers[i];
    }
    sort_array_ascending(Numbers,SIZE);
    
    printf(" ---ARRAY SORTING REPORT ---\n");
    printf("Original Array :");
    Loop_print(original_copy,SIZE);
    printf("\nSorted Scroe : ");
    Loop_print(Numbers,SIZE);
    printf("\n");
        return 0;
}

void Loop_print(int *Numbers, int SIZE){
    for(int i = 0 ; i < SIZE ; i++){
        printf(" %d",Numbers[i]);
    }
}
void sort_array_ascending(int *Numbers ,int SIZE){
    int max_idx = 0;
for( int i = 0 ; i < SIZE-1 ;i++){
        max_idx = i;
        for (int j = i+1; j < SIZE; j++) {
            if (Numbers[j] > Numbers[max_idx]) {
                max_idx = j; 
            }
        }
        int temp = Numbers[max_idx];
        Numbers[max_idx] = Numbers[i];
        Numbers[i] = temp;
    }
}