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

int len(Node *head){
    int l=0;
    Node *curr = head;
    while(curr!=NULL){
        l++;
        curr = curr->next;
    }

    return l;
}

Node *insertAtpositon(Node *head, int data, int pos){

    Node *curr = head;
    Node *newNode = new Node(data);

    if(head == NULL && pos == 0){
        return newNode;
    }

    int l = len(head);
    cout<<"length is : "<<l<<endl;

    if(pos < l+1){

        for(int i=0;i < pos;i++){
            cout<<curr->data<<" ";
            curr = curr->next;
        } 
        
        Node *temp = curr->next;
        curr->next = newNode;
        newNode->next= temp;
    }

    return head;
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    PrintAll(head);
    cout<<endl;

    insertAtpositon(head,5,2);
    PrintAll(head);

    return 0;
}