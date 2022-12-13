
#include<iostream>
using namespace std;
void merge(int a[], int l, int m, int h){
    int i = l, j=m+1, k=h;
    int c[k+1];
    while(i<=m && j<=h){
        if (a[i]<a[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=h){
        c[k]=a[j];
        j++;
        k++;
    }
    for(int s=0;s<h;s++){
        a[s]=c[s];
    }

}

void merge_sort(int a[], int l, int h){
    if(l<h){
        int mid = (l+h)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}



int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }

    return 0;
}
