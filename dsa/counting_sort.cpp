#include<iostream>
using namespace std;

void counting_sort(int a[], int k, int n){
   int c[k+1]={0};
   int b[n];
   for(int i=0;i<n;i++){
    c[a[i]]++;
   }
   for(int i=0;i<k;i++){
    c[i]= c[i]+ c[i-1];
   }
    for(int j=n;j!=0;j--){
        b[c[a[j]]-1]=a[j];
        c[a[j]]--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
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
  int max=a[0];
   for(int i=0;i<n;i++){
    if(a[i]>max)
    max=a[i];
  }
   counting_sort(a,max,n);
    
  cout<<endl;
    
    return 0;
}