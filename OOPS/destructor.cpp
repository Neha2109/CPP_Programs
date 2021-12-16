#include<iostream>
using namespace std;
class student{


        string name;
    public://by default private


    int age;
    bool gender;
    student(){
        cout<<"default constructor"<<endl;
    }
student(string s,int a,int g){
    name=s;
    age=a;
    gender=g;
}//paramaterized constructor

student(student &a){
            cout<<"default copy constructor"<<endl;

  name=a.name;
  age=a.age;
  gender=a.gender;  
}//default copy constructor - shallow copy dont copy pointer locations
~student(){
    cout<<"destructor";
}


void setName(string s){
    name=s;
}

void getName(){
cout<<name<<endl;
}
    void printinfo(){
 cout<<"name= ";
    cout<<name<<endl;
    cout<<"age= ";
     cout<<age<<endl;
 cout<<"gender= ";
     cout<<gender<<endl;  
       }
       bool operator == (student &a){
           if(name==a.name && age==a.age && gender==a.gender){
               return true;
           }
           
           return false;
       }
};

int main()
{
/*student arr[3];
for(int i=0;i<3;i++){
    string s;
    cout<<"name= ";
    cin>>s;
    arr[i].setName(s);
    cout<<"age= ";
 cin>>arr[i].age;
 cout<<"gender= ";
  cin>>arr[i].gender;
}

for(int i=0;i<3;i++){

    arr[i].printinfo();
}*/
student  a("urvi",20,1);
a.printinfo();
student b;
student c(a);//copy constructor- deep copy- pointers also copied
c.printinfo();
if(c==a){
    cout<<"same";
}
else
{
    cout<<"not same";
}
//student c=a;
return 0;
}