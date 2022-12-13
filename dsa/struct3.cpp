// incomplete.........................................................................................





#include<iostream>
using namespace std;
struct student
{
   int rollno;
   char name[10];
   float marks[6];
};
 struct student s1[5];

 int main(){
    for(int i=0;i<5;i++){
     cout<<"enter the data of "<<i+1<<"  student"<<"\n"; 
     cout<<"enter name";  
    cin>>s1[i].name;
    cout<<"enter roll no";
    cin>>s1[i].rollno;

    for(int j=0;j<6;j++){
        cout<<"enter marks in "<<j+1<<" subject"<<"\n";
        cin>>s1[i].marks[j];
    }
    
    }
    cout<<"The data entered is: ";
    cout<<"\n";
    for(int i=0;i<5;i++){
    cout<<s1[i].name<<" "<<s1[i].rollno<<" ";
    for(int j=0;j<6;j++){
    cout<<s1[i].marks[j]<<" ";
    }
    cout<<"\n";
    }
     float sum[5] ={0};
     float min[5] ={0};

    for(int i=0;i<5;i++){
        cout<<"for " <<i+1 << "student";
            min[i]=s1[i].marks[0];
        for (int j=0;j<6;j++){
            if(min[i]<s1[i].marks[j]){
                min[i]=s1[i].marks[j];
            }
            sum[i]+=s1[i].marks[j];
        }
      
    }

    // incomplet...................................................................................................
    
    return 0;
 }
 

