/* 8. Insertion sort on a linked list. */

#include <iostream>
using namespace std;

struct Node{ int data; Node* next; Node(int x):data(x),next(nullptr){}; };

Node* insertionSortList(Node* head){
    Node dummy(0); dummy.next=nullptr;
    Node* curr=head;
    while(curr){
        Node* prev=&dummy;
        while(prev->next && prev->next->data < curr->data) prev=prev->next;
        Node* next=curr->next;
        curr->next=prev->next;
        prev->next=curr;
        curr=next;
    }
    return dummy.next;
}

void printList(Node* head){
    while(head){ cout<<head->data<<" "; head=head->next; }
    cout<<endl;
}

int main(){
    Node* head=new Node(4);
    head->next=new Node(3);
    head->next->next=new Node(1);
    head=insertionSortList(head);
    printList(head);
}
