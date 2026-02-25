#include <stdio.h>

int BinSearch(int data[], int n , int find);
int main(){
     int data[6]= {1,2,3,4,5,7};
     int n = 6 , find = 5;
     int pos = BinSearch(data, n , find);
     printf("Fond 5 at %d\n",pos);
    return 0;
}

int BinSearch(int data[], int n , int find){
    int i , pos = -1;
    for(i = 0 ; i < n ; i++){
        if(data[i] == find){
            pos = i;
            break;
        }
    }
    return pos;
}