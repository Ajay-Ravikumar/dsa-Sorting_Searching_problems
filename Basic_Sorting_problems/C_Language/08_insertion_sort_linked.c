/* 8. Insertion sort on a linked list. */

#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };

struct Node* insertionSortList(struct Node* head){
    struct Node dummy; dummy.next=NULL;
    struct Node* curr=head;
    while(curr){
        struct Node* prev=&dummy;
        while(prev->next && prev->next->data < curr->data) prev=prev->next;
        struct Node* next=curr->next;
        curr->next=prev->next;
        prev->next=curr;
        curr=next;
    }
    return dummy.next;
}

void printList(struct Node* head){
    while(head){ printf("%d ",head->data); head=head->next; }
    printf("\n");
}

int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    head->data=4; head->next=(struct Node*)malloc(sizeof(struct Node));
    head->next->data=3; head->next->next=(struct Node*)malloc(sizeof(struct Node));
    head->next->next->data=1; head->next->next->next=NULL;
    head=insertionSortList(head);
    printList(head);
}
