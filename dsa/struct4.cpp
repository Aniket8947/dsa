#include<iostream>
using namespace std;
struct student
{
   int rollno;
   char name[10];
   int marks[6];
};
 struct student s1;

 int main(){
   cout<<"Enter the name of student"<<"\n";
    cin>>s1.name;
   cout<<"Enter the roll no of student"<<"\n";
    cin>>s1.rollno;
   for(int i=0;i<6;i++){
      cout<<"Enter the marks of "<<i+1<< " subject"<<"\n";
      cin>>s1.marks[i];
   }
   cout<<"Entered data is "<<"\n";
    cout<<"name = "<<s1.name<<"\n";
    cout<<"Roll no : "<<s1.rollno<<"\n";
   for(int i=0;i<6;i++){
    cout<<"marks of "<<i+1 <<" subject "<<s1.marks[i]<<"\n";
   }
     int min = s1.marks[0];
     int first_min=0;
   for(int i=0;i<6;i++){
     if(s1.marks[i]<min){
      min = s1.marks[i];
      first_min= i;
     }
   }
     s1.marks[first_min]=999;
     int min2=s1.marks[0];
     for(int i=0;i<6;i++){
      if(s1.marks[i]<min2){
         min2 = s1.marks[i];
      }
     } 

     float sum=0;
     for(int i=0;i<6;i++){
      if(s1.marks[i]==min2 || s1.marks[i]==999)
          continue;
      else
         sum+=s1.marks[i];
     }
     
     sum= sum/400.0;
     sum = sum*100;
     if(sum>=95)
     cout<<"This student is eligible"<<"\n";
     else
     cout<<"This student is not eligible"<<"\n";


    return 0;
 }
 

