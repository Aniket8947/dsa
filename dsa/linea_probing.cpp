
#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int  a[n], b[n];
 for(int i=0;i<n;i++){
  cin>>a[i];
 }
 for(int i=0;i<n;i++){
  cin>>b[i];
 }
int max=b[0];
for(int i=0;i<n;i++){
  if(max<b[i]){
  max=b[i];
  }
}
int dat[max+1]={0};
for(int i=0;i<n;i++){
 if(dat[b[i]]==0){
  dat[b[i]]=a[i];
 }
  else{
  int temp=0;
  temp=(b[i]+1)%max;
  if(temp == b[i]){
    cout<<"number cannot be stored"<<endl;
  }
  else{
  dat[temp]=a[i];
  }
  }
}
for(int i=0;i<=max;i++){
 cout<<dat[i]<<" ";
}
return 0;
}

