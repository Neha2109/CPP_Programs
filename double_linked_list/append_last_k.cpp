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

int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
    }
node* kappend(node* &head, int k) {
 node* newHead;
  node* newTail;

 node* tail=head;
int l=length(head);
k=k%l;
int count=1;
while(tail->next!=NULL){
    if(count==l-k){
        newTail=tail;
    }
    if(count==l-k+1){
        newHead=tail;
    }
    tail=tail->next;
    count++;
}
newTail->next=NULL;
tail->next=head;
return newHead;
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

node* newhead=kappend(head,2);
display(newhead);

    return 0;
}