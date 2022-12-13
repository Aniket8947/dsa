#include<iostream>
using namespace std;
struct height
{
   int feet;
   int inch;
};
 struct height h1,h2,h3;

 int main(){
    cin>>h1.feet>>h1.inch;
    cin>>h2.feet>>h2.inch;
    h3.inch=h1.inch+h2.inch;
    h3.feet=h1.feet+h2.feet;

    int temp=0;
    if(h3.inch>=12){
        temp=h3.inch/12;
        h3.feet+=temp;
        h3.inch=h3.inch%12;

    }

    cout<<h3.feet<<" "<<h3.inch<<"\n";
    return 0;
 }
 

