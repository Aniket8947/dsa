#include<iostream>
using namespace std;
void bs(int a[],int x,int l,int h){
    int mid;
     mid=(l+h)/2;
     if(x==a[l]){
        cout<<"element is at "<<l<<" index"<<endl;
        return;
     }
     if(x==a[h]){
        cout<<"element is at "<<h<<" index"<<endl;
        return;
     }

       if(x==a[mid]){
        cout<<"element is at "<<mid<<" index"<<endl;
        return;
     }
     if(x>a[h]){
        cout<<"element not found"<<endl;
        return;
     }
     if(x<a[mid]){
       bs(a,x,l,mid-1);
     }
     if(x>a[mid]){
        bs(a,x,mid+1,h);
     }
   return;
}
int main(){
    int n, num;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    
    cout<<"enter the no to be searched"<<endl;
    cin>>num;
    bs(a,num,0,n);
  return 0;



}