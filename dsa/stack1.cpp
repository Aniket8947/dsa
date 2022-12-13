#include<iostream>
using namespace std;
struct stack{
    int arr[20];
    int top;

} *s;

void create(struct stack *s ){
    s->top=-1;
}
void push(struct stack *s, int  element){
 if(s->top == 19){
    cout<<"The stack is full \n";
 }
 else{ 
 s->top++;
 s->arr[s->top]=element;  
 } 
}

 int pop(struct stack *s){   
    int t=0;
 if(s->top == -1){
    cout<<"The stack is empty \n";
    
 }
 else{
    t= s->arr[s->top];
    s->top--;
 }
    return t;

}

int main(){
   s= (struct stack*)malloc(sizeof(struct stack));
    create(s);
    push(s,40);
    pop(s);
    
   


    return 0;
}