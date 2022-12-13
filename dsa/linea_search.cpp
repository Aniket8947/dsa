#include<iostream>
using namespace std;
void function(int number,int a[], int k ){
        for(int i=0;i<k;i++){
        if(number==a[i])
        cout<<number<<"is at "<<i<<" index "<<endl;
    }
}
int main(){
    int n, num;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the no to be searched"<<endl;
    cin>>num;
    function(num,a,n);
    return 0;
    

}