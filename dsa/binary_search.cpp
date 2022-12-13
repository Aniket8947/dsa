#include<iostream>
using namespace std;
void function(int number,int a[], int k){
      int start=0, mid=(k-1)/2, end=k-1;
        if(number==a[end]){
        cout<<"index is "<<end;
        }
         if(number==a[start]){
        cout<<"index is "<<start;
        }
       while(1){
        mid=(start+end)/2;
         if(number>>a[start] && number<<a[mid]){
            end=mid-1;
        }
         if(number>>a[mid] && number<<a[end]){\
            start=mid+1;
        }
       
        if (number==a[mid]){
        cout<<"index is "<<mid;
        break;
        }
        if(a[start]==a[end]){
            cout<<"element not found"<<endl;
            break;
        }
       
       }

}
int main(){
    int n, num;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the number to be searched"<<endl;
    cin>>num;
    function(num,a,n);

    return 0;
}