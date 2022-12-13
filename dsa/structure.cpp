#include<iostream>
using namespace std;
struct student
{
   int rollno;
   char name[10];
   float marks;
};
 struct student s1;

 int main(){
    cin>>s1.name>>s1.rollno>>s1.marks;

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.marks;
    return 0;
 }
 

