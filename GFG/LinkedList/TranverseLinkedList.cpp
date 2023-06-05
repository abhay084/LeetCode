#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printData(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    Node *head = new Node(20);
    head -> next = new Node(40);
    head->next ->next = new Node(-123);

    head->next->next->next = new Node(0);

    printData(head);

}