#include<iostream>
using namespace std;
  void sort(int a[],int k){
    int flag;
   for(int i=0;i<k-1 && flag==1;i++){
        flag=0;
    for(int j=0;j<k-1;j++){
 
        int temp=0;
        if(a[j]>a[j+1])
        {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        flag=1;
        }
    }

   }  
   for(int i=0;i<k;i++){
     cout<<a[i]<<" ";
  }
  }

int main(){
  int n;
  cout<<"enter the size of the array"<<endl;
  cin>>n;
  int a[n];
  cout<<"enter the elements in the array"<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,n);
  cout<<endl;
    
    return 0;
}