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

Node *deleteHead(Node *head){
    if(head == NULL){
        return head;
    }

    Node *temp = head->next;
    delete head;

    return temp;
}


int main(){
    
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    PrintAll(head);
    cout<<endl;
    head = deleteHead(head);
    PrintAll(head);
}