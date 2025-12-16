#include <stdio.h>
void print_array(int *array , int size);
int find_and_update(int *arr_ptr, int size, int search_val, int new_val);
int main(){
    int size = 5;
    int numbers[size];
    int search_val,new_val,status,i;
    char *Status;
    printf("Enter %d initger elements for the array: \n",size);
    for (i = 0 ; i < size ; i++){
        printf("Element %d : ", i+1);
        if (scanf("%d",&numbers[i]) != 1){
            return 1;
        }
    }
    printf("Array BEFORE Update : ");
    print_array(&numbers,size);

    printf("\nEnter value to seaech (Search Value) : ");
    if (scanf("%d",&search_val) != 1){
            return 1;
        }
    printf("Enter New value to replace it with (New value) :");
    if (scanf("%d",&new_val) != 1){
            return 1;
        }
    
    status = find_and_update(&numbers, size, search_val, new_val);
    printf("\nArray AFTER Update : ");
    print_array(&numbers,size);
    Status = (status == 1)? "Update SUCCESSFUL" : "FAILED(Value not found)";
    printf("\nStatus : %s\n",Status);
    return 0;
}
void print_array(int *array , int size){
    for(int i = 0 ; i < size ; i++){
        printf(" %d",array[i]);
    }
}
int find_and_update(int *arr_ptr, int size, int search_val, int new_val){
    int status = 0;
    for (int i = 0; i < size; i++){
        if(arr_ptr[i] == search_val){
            arr_ptr[i] = new_val;
            status = 1;
        return status;
        }
    }
    return status;
}