#include<iostream>
using namespace std;
   int c[100];
void Merge(int a[], int l ,int m, int h){
   int i=l,j=m+1, k=l;

   while(i<=m && j<=h){
      if(a[i]<a[j]){
          c[k]=a[i];
          i++;
          k++;
      }
          else {
             c[k]=a[j];
             k++;
             j++;
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

      for(i=l;i<=h;i++)
        a[i]=c[i];

   }

   void merge_sort(int a[],int l, int h){
   if(l<h){
       int mid=(l+h)/2;
   merge_sort( a, l,mid);
    merge_sort(a,mid+1,h);
    Merge(a,l,mid,h);

   }

   }
int main(){
   int n;
   cout<<"enter the size of array"<<endl;
   cin>>n;
   int a[n];
   cout<<"enter the elements"<<endl;
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   cout<<"sorted array is"<<endl;
   merge_sort(a,0,n);
   for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
   }

}
