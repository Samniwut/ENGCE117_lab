#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char name[50];
    struct node* next;
};
typedef struct node node_t;

void printf_list(node_t *head){
    node_t *temporary = head;
    while(temporary != NULL){
        printf("%s -> ", temporary->name);
        temporary = temporary->next;    
}
 printf("\n");
}

int main(){
    node_t n1 ,n2 ,n3;
    node_t *head ;
    strcpy(n1.name, "");
    strcpy(n2.name, "one");
    strcpy(n3.name, "two");

    head = &n1;
    n3.next = NULL;
    n2.next = &n3;
    n1.next = &n2;

    node_t n4;
    strcpy(n4.name, "tree");
    n4.next = NULL;
    n3.next = &n4;


    head = head->next;

    printf_list(head);
    return 0;
}