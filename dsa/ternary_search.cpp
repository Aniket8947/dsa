#include<iostream>
using namespace std;
void ts(int a[],int x,int l,int h){
    int mid1, mid2;
     mid1= l+((h-l)/3);
     mid2= h- ((h-l)/3);
     if(x==a[l]){
        cout<<"element is at "<<l<<" index"<<endl;
        return;
     }
     if(x==a[h]){
        cout<<"element is at "<<h<<" index"<<endl;
        return;
     }

       if(x==a[mid1]){
        cout<<"element is at "<<mid1<<" index"<<endl;
        return;
     }
      if(x==a[mid2]){
        cout<<"element is at "<<mid2<<" index"<<endl;
        return;
     }
     if(x>a[h]){
        cout<<"element not found"<<endl;
        return;
     }
     if(x<a[mid1]){
       ts(a,x,l,mid1-1);
     }
     else if(x>a[mid2]){
        ts(a,x,mid2+1,h);
     }
     else if(x>a[mid1] && x<a[mid2]){
        ts(a,x,mid1+1,mid2-1);
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
    ts(a,num,0,n);
  return 0;



}