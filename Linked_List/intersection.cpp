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
int  intersection(node* &head1, node* &head2) {
 
int l1=length(head1);
int l2=length(head2);
int d=0;
node* ptr1;node* ptr2;
if(l1>l2){
    d=l1-l2;
    ptr1=head1;
    ptr2=head2;
}
else{
    d=l2-l1;
    ptr2=head1;
    ptr1=head2; 
}
while(d){
   ptr1=ptr1->next;
   if(ptr1==NULL)
   return -1;
    d--;
}
while(ptr1!=NULL && ptr2!=NULL){
    if(ptr1==ptr2){
        return ptr1->data;

    }
    ptr1=ptr1->next;
        ptr2=ptr2->next;

}

return -1;
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


    return 0;
}