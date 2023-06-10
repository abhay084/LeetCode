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
    while (head != NULL)        
    {
        cout<<head->data <<" ";
        head = head->next;
    }
    
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    printAll(head);
    return 0;
}