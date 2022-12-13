#include<iostream>
using namespace std;

struct st{
       int f;
       int in;
    

} a,b,c;
void display(struct st a, st b, st c){
    int temp=0;
    c.f = a.f +b.f;
    c.in = a.in + b.in;
    temp = c.in/12;
    c.f+= temp;
    c.in = c.in%12;
   cout<<c.f<<" "<<c.in<<"\n";
}
int main(){

    cin>>a.f>>a.in;
    cin>>b.f>>b.in;
   display( a,b,c);
    
   
    
    
    return 0;
}