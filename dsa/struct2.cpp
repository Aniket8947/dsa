#include<iostream>
using namespace std;
struct student
{
   int rollno;
   char name[10];
   float marks;
};
 struct student s1[5];

 int main(){
    for(int i=0;i<5;i++){
     cout<<"enter the data of "<<i+1<<"  student"<<"\n";   
    cin>>s1[i].name>>s1[i].rollno>>s1[i].marks;
    }
    cout<<"The data entered is: ";
    cout<<"\n";
    for(int i=0;i<5;i++){
    cout<<s1[i].name<<" "<<s1[i].rollno<<" "<<s1[i].marks;
    cout<<"\n";
    }
    return 0;
 }
 

