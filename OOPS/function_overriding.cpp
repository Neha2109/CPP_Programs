

#include<iostream>
using namespace std;
class base{
    public:
   virtual void print(){
        cout<<"base class print function";

    }

     void display(){
        cout<<"base class display function";

    }
};

class derived:public base{

  public:
    void print(){
        cout<<"derived class print function";

    }

     void display(){
        cout<<"derived class display function";

    }
};
int main(){
base *baseptr;
derived d;
baseptr = &d;
baseptr->print();
baseptr->display();
return 0;
}