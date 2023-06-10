#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *insertAtBeginning(Node *head,int data){

    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;

    return newNode;
}

void printAll(Node *head){
    while(head != NULL){
        cout<<head->data <<" ";
        head = head->next;
    }
    return;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    head->next->prev = head;
    head->next->next->prev = head->next;

    head = insertAtBeginning(head,5);

    printAll(head);
    return 0;
}