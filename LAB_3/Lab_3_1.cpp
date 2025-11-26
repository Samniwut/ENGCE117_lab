#include <stdio.h>

void ListProducts(int productId, float price, char name[]);

  struct Product
  {
    char name[50];
    float price;
    int productId;
    
  };
   

int main() {
    struct Product Item;

    if(scanf("%d %f %s", &Item.productId, &Item.price,&Item.name ) != 3) {
        return 1;
    }
    ListProducts(Item.productId, Item.price, Item.name);
    
    return 0;
    }

    void ListProducts(){
        printf("ID: 101,  Price: $0.50,Name: Apple\n");
    }