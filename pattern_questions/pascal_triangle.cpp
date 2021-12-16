
#include<iostream>
using namespace std;
int main(){
    int n, number=1;
    cout<<"Enter no. of rows: \n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int space=1;space<=n-i;space++)
        {
          cout<<" ";
        }
          for(int j=0;j<=i;j++){
              if(j==0||i==0)
              number=1;
              else
              number=number*(i-j+1)/j;
        cout<<number<<" ";
          }
        cout<<endl;
    }
    
   return 0;
}