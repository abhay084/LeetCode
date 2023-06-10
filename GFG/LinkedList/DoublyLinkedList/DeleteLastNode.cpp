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

void printAll(Node *head){
    while(head != NULL){
        cout<<head->data <<" ";
        head = head->next; 
    }
}

Node *insertAtBeginning(Node *head,int data){

    Node *newNode = new Node(data);

    if(head == NULL){
        return newNode;
    }

    newNode->next = head;
    head->prev = newNode;

    return newNode;
}

Node *deletelast(Node *head){
    Node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;   
    }
    Node *temp = curr;
    curr->prev->next = NULL;
    delete curr;
    return head;
}

int main(){

    Node *head = new Node(10);
    head = insertAtBeginning(head,20);
    head = insertAtBeginning(head,30);
    head = insertAtBeginning(head,40);

    printAll(head);
    cout<<endl;
    head = deletelast(head);
    printAll(head);
    cout<<endl;
    return 0;
}