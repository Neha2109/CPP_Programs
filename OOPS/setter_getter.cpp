#include<iostream>
using namespace std;
class student{


        string name;
    public://by default private


    int age;
    bool gender;
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
     cout<<gender<<endl;    }
};

int main()
{
student arr[3];
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
}
return 0;
}