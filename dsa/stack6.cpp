#include<iostream>
using namespace std;
struct stack{
    int arr[20];
    int top;


} *s, *t;
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
int isempty(struct stack *s){                                            
   if(s->top == -1){
    return 1;
}
else{
    return 0;
}
}
int max(struct stack *s){
    int p=0;
    int t = s->top;
    p=s->arr[s->top];
    while(s->top!= (-1)){
        if(s->arr[s->top]>p){
         p = s->arr[s->top];
        }
        s->top--;
    }
    s->top =t;
    return p;
}
struct stack* sort(struct stack *s,struct stack *t ){
      int temp1,temp2;
    while(!isempty(s)){
       temp1 = pop(s);
       while(!isempty(t) && t->arr[t->top]>temp1){
          temp2 = pop(t);
          push(s,temp2);
       }
       push(t,temp1);
    }
   return t;

}
int main(){
    int i, value, m, n;
    s = (struct stack*)malloc(sizeof(struct stack));
    create(s);
    cout<<"Enter the size \n";
    cin>>n;
    cout<<"Enter the elements \n ";
    for(i=1;i<=n;i++){
     scanf("%d", &value);
     push(s, value);
    
    }
    m = max(s);
    cout<<"Max element is "<<m<<"\n";
    t= (struct stack*)malloc(sizeof(struct stack));
    create(t);
    t = sort(s,t);
    cout<<"Sorted stack is \n";
    while(!isempty(t)){
        cout<<t->arr[t->top]<<" ";
        pop(t);
    }
    cout<<"\n";
    
    return 0;
}