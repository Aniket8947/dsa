#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n, flag=0;
int s;
s=sqrt(n);
cout<<"enter the no"<<endl;
cin>>n;
for(int i=0;i<sqrt(n);i++){
if(n%i==0){
flag=1;
break;
}
}
if(flag==1){
cout<<"no is not prime"<<endl;
}
if(flag==0)
cout<<"no is prime"<<endl;
return 0;
}
