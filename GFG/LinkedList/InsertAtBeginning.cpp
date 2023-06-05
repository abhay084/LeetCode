#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node *head){
    if(head == NULL){
        return;
    }

    while (head != NULL)
    {
        cout<<head->data <<" ";
        head = head->next;
    }
    
}

void InsertAtBeginning(Node *head,int x){

    Node *newNode = new Node(x);
    newNode->next = head;
    head = newNode;

    printList(head);
}

// 123 = null
// 123 => 10 => 20 => 30
// 


// 10 => 20 => 30 => 
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printList(head);

    cout<<endl;
    InsertAtBeginning(head,-123);


}
