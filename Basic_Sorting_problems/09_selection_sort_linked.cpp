/* 9. Selection sort on a linked list. */

#include <iostream>
using namespace std;

struct Node{ int data; Node* next; Node(int x):data(x),next(nullptr){}; };

Node* selectionSortList(Node* head){
    for(Node* i=head;i;i=i->next){
        Node* min=i;
        for(Node* j=i->next;j;j=j->next)
            if(j->data<min->data) min=j;
        swap(i->data,min->data);
    }
    return head;
}

void printList(Node* head){
    while(head){ cout<<head->data<<" "; head=head->next; }
    cout<<endl;
}

int main(){
    Node* head=new Node(4);
    head->next=new Node(2);
    head->next->next=new Node(5);
    head=selectionSortList(head);
    printList(head);
}
