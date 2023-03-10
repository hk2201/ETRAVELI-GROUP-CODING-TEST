#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void cirtraversal(struct Node* head){
    struct Node* p = head;

    while(p->next != head){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<p->data<<" ";
          
    
}



int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;

    head  = new Node;
    second  = new Node;
    third = new Node;
    fourth = new Node;
    fifth = new Node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = head;




    cirtraversal(head);

    return 0;
}