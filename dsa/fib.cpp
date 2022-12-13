#include<iostream>
using namespace std;
int dat[101];
int fib(int n){
    if(n==1 || n==2)
      return dat[n]= n-1;
   else{
    if(dat[n]==0)
        dat[n]=(fib(n-1)+fib(n-2));
   }
   return dat[n];
} 

int main(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d %d",i, fib(i));
    }
    return 0;
}