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

Node *insertAtEnd(Node *head,int data){
    Node *curr = head;
    Node *newNode = new Node(data);
    if(head == NULL){
        return newNode;
    }
    while(head->next != NULL){
        head = head->next;
    }
    head->next = newNode;
    return curr;
}

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

int searchNode(Node *head,int val){

    Node *curr = head;
    if(curr == NULL){
        return -1;
    }
    int i=0;
    while (curr != NULL)            
    {   
        if(curr->data == val){
            return i;    
        }
        curr = curr->next;
        i++;
    }
    return -1;
    
}

int recSearchNode(Node *head,int val,int pos){
    Node *temp = head;
    if(temp == NULL){
        return -1;
    }

    if(temp->data == val){
        return pos;
    }
    else{
        pos = recSearchNode(temp->next,val,pos+1);
    }

    return pos;
}

int main(){
    Node *head = new Node(10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);

    printList(head);
    cout<<endl;
    cout<<"Considering the starting index at zero: "<<endl;
    cout<<searchNode(head,30)<<endl;
    cout<<"===================="<<endl;
    cout<<recSearchNode(head,20,0)<<endl;
    return 0;
}