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

Node *insertAtEnd(Node *head, int x){

    Node *temp = head;

    while (head->next != NULL)   
    {
        head = head->next;
    }

    Node *newNode = new Node(x);
    head->next = newNode;
    
    return temp;
}

void PrintAll(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    PrintAll(head);
    cout<<endl;

    head = insertAtEnd(head,40);

    PrintAll(head);
}