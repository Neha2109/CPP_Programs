#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter no. of rows: \n";
    cin>>rows;
    cout<<"Enter no. of columns: \n";
    cin>>cols;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    
   return 0;
}