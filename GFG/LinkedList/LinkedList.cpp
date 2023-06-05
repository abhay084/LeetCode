// Linked List is the collection of Node
// Where each node will store the data part and next part which will point to address of next node

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

int main(){

    Node *head =  new Node(4);
    head -> next = new Node(50);
    head -> next -> next = new Node(-1);

    Node *temp = head;

    while(temp != NULL){
        cout<<temp->data <<" ==>  ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;

    

}
