#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x= *y;
    *y=temp;
}
int partition(int a[], int l, int h){
    int i=(l-1);
    int p=a[h];
    for(int j=0;j<=h-1;j++){
        if(a[j]<p){
            i++;
            swap(&a[i],&a[j]);
            
        }
    }
    swap(&a[i+1],&a[h]);
    return (i+1);
}
void  quicksort(int a[], int l, int h){
    if(l<h){
        int pi=partition(a,l,h);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,h);
    }
}


int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}