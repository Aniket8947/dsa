#include<iostream>
using namespace std;
struct t
{
   int h;
   int m;
   int s;
};
 struct t t1,t2,t3;

 int main(){
    cin>>t1.h>>t1.m>>t1.s;
    cin>>t2.h>>t2.m>>t2.s;
    t3.h = t1.h+ t2.h;
    t3.m = t1.m + t2.m;
    t3.s = t1.s + t2.s;
   

    int temp=0;
    if(t3.s>=60){
        temp=t3.s/60;
        t3.m+=temp;
        t3.s=t3.s%12;
    }
    if(t3.m>=60){
        temp= t3.m/60;
        t3.h+=temp;
        t3.m = t3.m%60;
    }

    cout<<t3.h<<" "<<t3.m<<" "<<t3.s<<"\n";
    return 0;
 }
 

