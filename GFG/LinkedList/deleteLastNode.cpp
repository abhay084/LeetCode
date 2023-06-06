#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

void PrintAll(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node *deleteAtEnd(Node *head){
    if(head == NULL){
        return head;
    }

    if(head->next == NULL){
        return NULL;
    }

    Node *curr = head;

    while(curr->next->next != NULL){
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;

    return head;
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    PrintAll(head);
    cout<<endl;

    head = deleteAtEnd(head);
    PrintAll(head);

}