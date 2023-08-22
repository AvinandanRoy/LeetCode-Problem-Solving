#include<stdio.h>
struct node{
    int data ;
    struct node* next ;
};
int main()
{
    struct node *head = NULL ;
    struct node *second = NULL ;
    struct node *third  = NULL ;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 1 ;
    second->data = 2 ;
    third->data = 3 ;

    head->next = second;
    second->next = third ;
    third->next = NULL ;

    struct node *current = head ;
    while(current !=  NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}
