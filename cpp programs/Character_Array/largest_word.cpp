#include<iostream>
using namespace std;


    

int main(){

    int n;
    cout<<"enter the length"<<endl;

    cin>>n;
        cin.ignore();
    char a[n+1];
        cout<<"enter the sentence"<<endl;
cin.getline(a,n);
cin.ignore();

  int i=0,clen=0,maxlen=0;
  int st=0,maxst=0;
  while(1){

      if(a[i]==' '|| a[i]=='\0'){
          if(clen>maxlen){
              maxst=st;
              maxlen=clen;
          }
          st=i+1;clen=0;
      }
      else
      clen++;
      if(a[i]=='\0')
      break;
      i++;
  }
  cout<<a<<endl;
  cout<<maxlen<<endl;
  for(int i=0;i<maxlen;i++){
      cout<<a[maxst+i];
  }
return 0;
}