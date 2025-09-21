/* 9. Selection sort on a linked list. */

#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };

struct Node* selectionSortList(struct Node* head){
    for(struct Node* i=head;i;i=i->next){
        struct Node* min=i;
        for(struct Node* j=i->next;j;j=j->next)
            if(j->data < min->data) min=j;
        int t=i->data; i->data=min->data; min->data=t;
    }
    return head;
}

void printList(struct Node* head){
    while(head){ printf("%d ",head->data); head=head->next; }
    printf("\n");
}

int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    head->data=4; head->next=(struct Node*)malloc(sizeof(struct Node));
    head->next->data=2; head->next->next=(struct Node*)malloc(sizeof(struct Node));
    head->next->next->data=5; head->next->next->next=NULL;
    head=selectionSortList(head);
    printList(head);
}
