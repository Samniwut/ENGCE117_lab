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
void add_node(node_t **head, const char *name){
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    strcpy(new_node->name, name);
    new_node->next = *head;
    *head = new_node;
}
int main(){
    node_t *head ;
    node_t *tmp;
    
    add_node(&tmp, "three");
    add_node(&tmp, "two");
    add_node(&tmp, "one");

    head = tmp;

    printf_list(head);
    return 0;
}