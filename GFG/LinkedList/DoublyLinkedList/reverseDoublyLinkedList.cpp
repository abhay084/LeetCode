#include<iostream>
using namespace std;

struct Node{
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
    return;
}

Node *reverseList(Node *head){

    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *curr=NULL;
    Node *temp = NULL;
    while (head!=NULL)
    {
        temp = head->prev;
        head->prev = head->next;
        head->next = temp;

        head = head->prev; 
    }


    return temp->prev;
}

int main(){

    Node * head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head->next->prev = head;
    head->next->next->prev = head->next;
    head->next->next->next->prev= head->next->next;

    printAll(head);
    cout<<endl;
    head = reverseList(head);
    printAll(head);
    cout<<endl;
    head = reverseList(head);
    printAll(head);
    cout<<endl;

    return 0;
}