#include<iostream>
using namespace std;
struct queue{
    int a[5];
    int f;
    int r;
} *q;
void create(struct queue *q){
 q->r=-1;
 q->f=-1;
}
//**************************//
int isempty(struct queue *q){
  if(q->r==q->f){
    
    return 1;
  }
  else{
    return 0;
  }
}
//**************************//
void enqueue(struct queue *q, int element){
  if(q->f==q->r && q->f ==0){
    cout<<"Overflow \n";
  } 
  else{ 
  q->r = (q->r+1)%5;
  q->a[q->r]= element;
  cout<<element<<"is inserted \n";
  }
}
//***********************//
int dequeue(struct queue *q){
    int x;
if(isempty(q)){
    cout<<"Underflow \n";
}
else{
    q->f = (q->f+1)%5;
    x= q->a[q->f];
}
  return x;
}
//**********************//

int main(){
    int x=0;
    q= (struct queue*)malloc(sizeof(struct queue));
    create(q);
    enqueue(q, 100);
    enqueue(q, 200);
     enqueue(q, 300);
      enqueue(q, 400);
       enqueue(q, 500);
       x=dequeue(q);
       cout<<x<<"\n";
       enqueue(q,600);


 

    return 0;
}