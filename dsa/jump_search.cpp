#include<iostream>
#include<math.h>
using namespace std;
int jump_search(int a[],int n, int k){
    int m;
    m=sqrt(n);
    int i=0;
    while(i<n && k>a[i]){
        i=i+m;
    }
     if(i<n){
        if(a[i]==k){
        return i;
        }
        else{
            for(int j=(i-m)+1;j<i-1;j++){
                if(k==a[j])
                return j;
                else
                return -1;
            }
        }
     }
     return -1;
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
    jump_search(a,n,num);
    return 0;

}