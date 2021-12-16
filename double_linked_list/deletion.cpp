#include<iostream>
using namespace std;

class node{

    public:

    int data;
    node* next;
     node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtTail(node* &head,int val){

    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void deletionAtHead(node* &head){

    node* todelete = head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
    
    
    }
void deletion(node* &head, int pos) {
 
    if (pos == 1) {
        deletionAtHead(head);
        return;
    }
 
    node* temp = head;
    int count = 1;
 
    while (temp != NULL && count != pos) {
        temp = temp->next;
        count++;
    }
 
    temp->prev->next = temp->next;
 
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
 
 
    delete temp;
 
}

    
void display(node* head){
 node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<"NULL"<<endl;
}
int main(){
node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
insertAtTail(head,5);

display(head);

deletion(head,1);

display(head);

    return 0;
}