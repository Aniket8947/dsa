#include<iostream>
using namespace std;
struct queue{
    int a[20];
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
  if(q->r ==19){
    cout<<"Overflow";
  } 
  else{ 
  q->r++;
  q->a[q->r]= element;
  }
}
//***********************//
int dequeue(struct queue *q){
    int x;
if(isempty(q)){
    cout<<"Underflow";
}
else{
    q->f++;
    x= q->a[q->f];
}
  return x;
}
//**********************//

int main(){
    int x=0;
    q= (struct queue*)malloc(sizeof(struct queue));
    create(q);
    enqueue(q,100);
    x = dequeue(q);
   cout<<x;

    return 0;
}