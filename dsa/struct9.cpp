#include<iostream>
using namespace std;

struct st{
       int r;
    char name[20];
    int  m;

} s[3], *s1;
int main(){
    s1 = s;
    cout<<"Enter the data \n";
   for(int i=0;i<3;i++){
        cin>>(s1+i)->r>>(s1+i)->name>>(s1+i)->m;

    }
    
   
    cout<<"Entered  data is \n";

    for(int i=0;i<3;i++){
        cout<<(s1+i)->r<<" "<<(s1+i)->name<<" "<<(s1+i)->m<<"\n";

    }
   

    
    return 0;
}
